/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/queues/sqs/SQSQueue.h>
#include <aws/sqs/model/ReceiveMessageRequest.h>
#include <aws/sqs/model/DeleteMessageRequest.h>
#include <aws/sqs/model/SendMessageRequest.h>
#include <aws/sqs/model/GetQueueUrlRequest.h>
#include <aws/sqs/model/GetQueueAttributesRequest.h>
#include <aws/sqs/model/CreateQueueRequest.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/logging/LogSystemInterface.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <algorithm>

using namespace Aws::SQS;
using namespace Aws::SQS::Model;
using namespace Aws::Queues::Sqs;
using namespace Aws::Client;

static const char* CLASS_TAG = "Aws::Queues::Sqs::SQSQueue";
static const int QUEUE_DELETED_RECENTLY_WAIT_TIME = 10;

class QueueMessageContext : public AsyncCallerContext
{
public:
    QueueMessageContext(const Message& msg) : m_message(msg) {}

    const Message& GetMessage() const { return m_message; }

private:
    Message m_message;
};

SQSQueue::SQSQueue(const std::shared_ptr<SQSClient>& client, const char* queueName, unsigned visibilityTimeout,
                   unsigned pollingFrequencyMs) :
   Queue(pollingFrequencyMs),
   m_client(client),
   m_queueName(queueName),
   m_visibilityTimeout(visibilityTimeout)
{
}

Message SQSQueue::Top() const
{
    if(IsInitialized())
    {
        while (m_continue)
        {
            AWS_LOGSTREAM_TRACE(CLASS_TAG, "Polling for new message with timeout of 1 second with a maximum of 1 message.");
            ReceiveMessageRequest receiveMessageRequest;
            receiveMessageRequest.SetMaxNumberOfMessages(1);
            receiveMessageRequest.SetQueueUrl(m_queueUrl);
            receiveMessageRequest.SetVisibilityTimeout(m_visibilityTimeout);
            receiveMessageRequest.SetWaitTimeSeconds(1);

            ReceiveMessageOutcome receiveMessageOutcome = m_client->ReceiveMessage(receiveMessageRequest);
            if (receiveMessageOutcome.IsSuccess() && receiveMessageOutcome.GetResult().GetMessages().size() > 0)
            {
                AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Message found, returning");
                return receiveMessageOutcome.GetResult().GetMessages()[0];
            }
            else if (!receiveMessageOutcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Receive message failed with error: " << receiveMessageOutcome.GetError().GetExceptionName() <<
                                                                                      " and message: " << receiveMessageOutcome.GetError().GetMessage());
            }

            AWS_LOGSTREAM_TRACE(CLASS_TAG, "No message found, continuing poll until something is found or object is deleted.");
        }
    }
    else
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Queue is not initialized, not polling. Call EnsureQueueIsInitialized before calling this method.");
    }

    return Message();
}

void SQSQueue::Delete(const Message& message)
{
    if(IsInitialized())
    {
        AWS_LOGSTREAM_TRACE(CLASS_TAG, "Deleting message " << message.GetReceiptHandle() << ". From queue " << m_queueUrl);
        DeleteMessageRequest deleteMessageRequest;
        deleteMessageRequest.SetQueueUrl(m_queueUrl);
        deleteMessageRequest.SetReceiptHandle(message.GetReceiptHandle());

	std::shared_ptr<AsyncCallerContext> deleteMessageContext = Aws::MakeShared<QueueMessageContext>(CLASS_TAG, message);
        m_client->DeleteMessageAsync(deleteMessageRequest, std::bind(&SQSQueue::OnMessageDeletedOutcomeReceived, this, std::placeholders::_1,
                                                                     std::placeholders::_2, std::placeholders::_3, std::placeholders::_4), deleteMessageContext);
    }
    else
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Queue is not initialized, not deleting. Call EnsureQueueIsInitialized before calling this method.");
    }
}

void SQSQueue::Push(const Message& message)
{
   if(IsInitialized())
   {
       AWS_LOGSTREAM_TRACE(CLASS_TAG, "Sending message to " << m_queueUrl);
       SendMessageRequest sendMessageRequest;
       sendMessageRequest.SetQueueUrl(m_queueUrl);
       sendMessageRequest.SetMessageBody(message.GetBody());
       sendMessageRequest.SetMessageAttributes(message.GetMessageAttributes());

       std::shared_ptr<AsyncCallerContext> sendMessageContext = Aws::MakeShared<QueueMessageContext>(CLASS_TAG, message);

       m_client->SendMessageAsync(sendMessageRequest, std::bind(&SQSQueue::OnMessageSentOutcomeReceived, this, std::placeholders::_1,
                                                                std::placeholders::_2, std::placeholders::_3, std::placeholders::_4), sendMessageContext);
   }
    else
   {
       AWS_LOGSTREAM_ERROR(CLASS_TAG, "Queue is not initialized, not pushing. Call EnsureQueueIsInitialized before calling this method.");
   }
}

void SQSQueue::RequestArn()
{
    if (IsInitialized())
    {
        AWS_LOGSTREAM_TRACE(CLASS_TAG, "Retrieving arn for " << m_queueUrl);
        Aws::SQS::Model::GetQueueAttributesRequest queueAttributesRequest;
        queueAttributesRequest.AddAttributeNames(Aws::SQS::Model::QueueAttributeName::QueueArn);
        queueAttributesRequest.SetQueueUrl(m_queueUrl);

        m_client->GetQueueAttributesAsync(queueAttributesRequest, std::bind(&SQSQueue::OnGetQueueAttributesOutcomeReceived, this, std::placeholders::_1,
                                                                            std::placeholders::_2, std::placeholders::_3, std::placeholders::_4));
    }
    else
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Queue is not initialized, cannot get Arn. Call EnsureQueueIsInitialized before calling this method.");
    }
}

void SQSQueue::EnsureQueueIsInitialized()
{
    AWS_LOGSTREAM_INFO(CLASS_TAG, "Checking that queue " << m_queueName << " is initialized and ready to use.")
    if(!IsInitialized())
    {
        AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Fetching queue url");
        GetQueueUrlRequest getQueueUrlRequest;
        getQueueUrlRequest.SetQueueName(m_queueName);

        GetQueueUrlOutcome getQueueUrlOutcome(m_client->GetQueueUrl(getQueueUrlRequest));

        if (getQueueUrlOutcome.IsSuccess())
        {
            m_queueUrl = getQueueUrlOutcome.GetResult().GetQueueUrl();
            AWS_LOGSTREAM_INFO(CLASS_TAG, "Queue " << m_queueUrl << " found for name " << m_queueName);
        }
        else if (getQueueUrlOutcome.GetError().GetErrorType() == SQSErrors::QUEUE_DOES_NOT_EXIST)
        {
            AWS_LOGSTREAM_INFO(CLASS_TAG, "Queue " << m_queueName << " not found. Creating....");
            CreateQueueRequest createQueueRequest;
            createQueueRequest.SetQueueName(m_queueName);
            Aws::StringStream ss;
            ss << m_visibilityTimeout;
            createQueueRequest.AddAttributes(QueueAttributeName::VisibilityTimeout, ss.str());

            CreateQueueOutcome createQueueOutcome(m_client->CreateQueue(createQueueRequest));
            if (!createQueueOutcome.IsSuccess())
            {
                if (createQueueOutcome.GetError().GetErrorType() == SQSErrors::QUEUE_DELETED_RECENTLY)
                {
                    AWS_LOGSTREAM_WARN(CLASS_TAG, "Queue was recently deleted. Normally you have to wait 60 seconds before trying to create it again. "
                    << "waiting for " << "seconds and then retrying.")
                    std::this_thread::sleep_for(std::chrono::seconds(QUEUE_DELETED_RECENTLY_WAIT_TIME));
                    EnsureQueueIsInitialized();
                }
            }
            else
            {
                m_queueUrl = createQueueOutcome.GetResult().GetQueueUrl();
            }
        }
    }
    else
    {
        AWS_LOGSTREAM_INFO(CLASS_TAG, "Queue " << m_queueName << " is initialized and ready to use.")
    }
}

void SQSQueue::OnMessageDeletedOutcomeReceived(const SQSClient*, const DeleteMessageRequest&,
					       const DeleteMessageOutcome& deleteMessageOutcome, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto queueContext = std::static_pointer_cast<const QueueMessageContext>(context);
    if (!deleteMessageOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Delete message failed with error: " << deleteMessageOutcome.GetError().GetExceptionName() <<
                                     " and message: " << deleteMessageOutcome.GetError().GetMessage());

        auto& deleteFailed = GetMessageDeleteFailedEventHandler();

        if (deleteFailed)
        {
            deleteFailed(this, queueContext->GetMessage());
        }
    }
    else
    {
        AWS_LOGSTREAM_TRACE(CLASS_TAG, "Message successfully deleted.");
        auto& deleteSuccess = GetMessageDeleteSuccessEventHandler();

        if (deleteSuccess)
        {
            deleteSuccess(this, queueContext->GetMessage());
        }
    }
}

void SQSQueue::OnMessageSentOutcomeReceived(const SQSClient*, const SendMessageRequest&,
					    const SendMessageOutcome& sendMessageOutcome, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto queueContext = std::static_pointer_cast<const QueueMessageContext>(context);
    if (!sendMessageOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Send message failed with error: " << sendMessageOutcome.GetError().GetExceptionName() <<
                                     " and message: " << sendMessageOutcome.GetError().GetMessage());
        auto& sendFailed = GetMessageSendFailedEventHandler();

        if (sendFailed)
        {
            sendFailed(this, queueContext->GetMessage());
        }
    }
    else
    {
        AWS_LOGSTREAM_TRACE(CLASS_TAG, "Message successfully sent.");
        auto& sendSuccess = GetMessageSendSuccessEventHandler();

        if (sendSuccess)
        {
            sendSuccess(this, queueContext->GetMessage());
        }
    }
}

void SQSQueue::OnGetQueueAttributesOutcomeReceived(const SQSClient*, const GetQueueAttributesRequest& request,
						   const GetQueueAttributesOutcome& getQueueAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)
{
    if (!getQueueAttributeOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "GetQueueAttribute failed with error: " << getQueueAttributeOutcome.GetError().GetExceptionName());

        auto& queueAttributeFailedHandler = GetQueueAttributeFailedEventHandler();
        
        if (queueAttributeFailedHandler)
        {
            queueAttributeFailedHandler(this, request);
        }
    }
    else
    {
        AWS_LOGSTREAM_TRACE(CLASS_TAG, "GetQueueAttribute successfull.");
        auto& queueAttributeSuccessHandler = GetQueueAttributeSuccessEventHandler();

        if (queueAttributeSuccessHandler)
        {
            queueAttributeSuccessHandler(this, getQueueAttributeOutcome);
        }

        auto attributes = getQueueAttributeOutcome.GetResult().GetAttributes();

        if (std::find(request.GetAttributeNames().begin(), request.GetAttributeNames().end(), QueueAttributeName::QueueArn) != request.GetAttributeNames().end())
        {
            auto arn = attributes.find(QueueAttributeName::QueueArn);
            if (arn != attributes.end())
            {
                auto& arnSuccessHandler = GetQueueArnSuccessEventHandler();

                if (arnSuccessHandler)
                {
                    arnSuccessHandler(this, arn->second);
                }
             }
            else
            {
                auto& arnFailedHandler = GetQueueArnFailedEventHandler();

                if (arnFailedHandler)
                {
                    arnFailedHandler(this, request);
                }
            }
        }
    }
}

