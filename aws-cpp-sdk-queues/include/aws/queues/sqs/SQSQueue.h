/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */
#pragma once

#include <aws/queues/Queue.h>
#include <aws/sqs/model/Message.h>
#include <aws/queues/Queues_EXPORTS.h>
#include <memory>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/sqs/SQSClient.h>

namespace Aws
{
    namespace SQS
    {
        namespace Model
        {
            class DeleteMessageRequest;
            class SendMessageRequest;
        }
    }

    namespace Queues
    {
        namespace Sqs
        {
            /**
             * SQS implementation of the Queue interface. See Queue documentation for more details.
             */
            class AWS_QUEUES_API SQSQueue : public Queue<Aws::SQS::Model::Message>
            {

                typedef std::function<void(const SQSQueue*, const Aws::SQS::Model::GetQueueAttributesOutcome&)> QueueAttributeSuccessEventHandler;
                typedef std::function<void(const SQSQueue*, const Aws::SQS::Model::GetQueueAttributesRequest&)> QueueAttributeFailedEventHandler;
                typedef std::function<void(const SQSQueue*, const Aws::SQS::Model::GetQueueAttributesRequest&)> QueueArnFailedEventHandler;
                typedef std::function<void(const SQSQueue*, const Aws::String&)> QueueArnSuccessEventHandler;

            public:

                /**
                * Notification that getting a queue arn was successful.
                */
                inline void SetQueueArnSuccessEventHandler(const QueueArnSuccessEventHandler& messageHandler) { m_queueArnSuccessHandler = messageHandler; }
                inline void SetQueueArnSuccessEventHandler(QueueArnSuccessEventHandler&& messageHandler) { m_queueArnSuccessHandler = messageHandler; }

                /**
                * Notification that getting a queue arn was successful.
                */
                inline void SetQueueArnFailedEventHandler(const QueueArnFailedEventHandler& messageHandler) { m_queueArnFailedHandler = messageHandler; }
                inline void SetQueueArnFailedEventHandler(QueueArnFailedEventHandler&& messageHandler) { m_queueArnFailedHandler = messageHandler; }

                /**
                * Notification that getting a queue attribute was successful.
                */
                inline void SetQueueAttributeSuccessEventHandler(const QueueAttributeSuccessEventHandler& messageHandler) { m_queueAttributeSuccessHandler = messageHandler; }
                inline void SetQueueAttributeSuccessEventHandler(QueueAttributeSuccessEventHandler&& messageHandler) { m_queueAttributeSuccessHandler = messageHandler; }

                /**
                * Notification that getting a queue attribute failed.
                */
                inline void SetQueueAttributeFailedEventHandler(const QueueAttributeFailedEventHandler& messageHandler) { m_queueAttributeFailedHandler = messageHandler; }
                inline void SetQueueAttributeFailedEventHandler(QueueAttributeFailedEventHandler&& messageHandler) { m_queueAttributeFailedHandler = messageHandler; }

                inline const QueueArnSuccessEventHandler& GetQueueArnSuccessEventHandler() const { return m_queueArnSuccessHandler; }
                inline const QueueArnFailedEventHandler& GetQueueArnFailedEventHandler() const { return m_queueArnFailedHandler; }

                inline const QueueAttributeSuccessEventHandler& GetQueueAttributeSuccessEventHandler() const { return m_queueAttributeSuccessHandler; }
                inline const QueueAttributeFailedEventHandler& GetQueueAttributeFailedEventHandler() const { return m_queueAttributeFailedHandler; }


                /**
                 * Queue name is the name of the queue that the client should poll, push, and/or delete messages on. Call EnsureQueueIsInitialized to create the
                 * queue if it does not exist. You can call GetQueueUrl after IsInitialized() returns true to get your actual Queue URL.
                 */
                SQSQueue(const std::shared_ptr<SQS::SQSClient>& client, const char* queueName, unsigned visibilityTimeout, unsigned pollingFrequencyMs = 10000);

                /**
                 * Will continue polling until a message is received or StopPolling is called.
                 */
                Aws::SQS::Model::Message Top() const override;

                /**
                 * Does not block. Register for notifications of success or failure with the appropriate handlers.
                 */
                void Delete(const  Aws::SQS::Model::Message&) override;

                /**
                 * Does not block. Register for notifications of success or failure with the appropriate handlers.
                 */
                void Push(const  Aws::SQS::Model::Message&) override;

                /**
                * Does not block. Register for notifications of success or failure with the appropriate handlers.
                */
                void RequestArn();

                /**
                 * At the very least, this gets your queue url. If the queue does not exist, this will create it.
                 */
                void EnsureQueueIsInitialized();

                inline bool IsInitialized() const { return !m_queueUrl.empty(); }
                inline const Aws::String& GetQueueUrl() const { return m_queueUrl; }

            private:
                std::shared_ptr<SQS::SQSClient> m_client;
                Aws::String m_queueUrl;
                Aws::String m_queueName;
                unsigned m_visibilityTimeout;

                void OnMessageDeletedOutcomeReceived(const SQS::SQSClient*, const SQS::Model::DeleteMessageRequest&,
                                                     const SQS::Model::DeleteMessageOutcome& deleteMessageOutcome, const std::shared_ptr<const Client::AsyncCallerContext>&);

                void OnMessageSentOutcomeReceived(const SQS::SQSClient*, const SQS::Model::SendMessageRequest&,
						  const SQS::Model::SendMessageOutcome& deleteMessageOutcome, const std::shared_ptr<const Client::AsyncCallerContext>&);

                void OnGetQueueAttributesOutcomeReceived(const SQS::SQSClient*, const SQS::Model::GetQueueAttributesRequest&,
							 const SQS::Model::GetQueueAttributesOutcome& deleteMessageOutcome, const std::shared_ptr<const Client::AsyncCallerContext>&);

                QueueArnSuccessEventHandler m_queueArnSuccessHandler;
                QueueArnFailedEventHandler m_queueArnFailedHandler;
                QueueAttributeSuccessEventHandler m_queueAttributeSuccessHandler;
                QueueAttributeFailedEventHandler m_queueAttributeFailedHandler;

            };
        }
    }
}
