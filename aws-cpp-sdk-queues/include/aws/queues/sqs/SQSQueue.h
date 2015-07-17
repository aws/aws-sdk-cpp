/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
            public:
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
                                                     const SQS::Model::DeleteMessageOutcome& deleteMessageOutcome, const Client::AsyncCallerContext*);

                void OnMessageSentOutcomeReceived(const SQS::SQSClient*, const SQS::Model::SendMessageRequest&,
                                                     const SQS::Model::SendMessageOutcome& deleteMessageOutcome, const Client::AsyncCallerContext*);
            };
        }
    }
}