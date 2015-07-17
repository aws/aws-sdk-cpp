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

#include <aws/core/utils/Event.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/queues/Queues_EXPORTS.h>
#include <thread>
#include <atomic>


namespace Aws
{
    namespace Queues
    {
        static const char* MEM_TAG = "Aws::Queues::Queue";

        /**
         * Simple queue class. Allows standard queue operations top, delete, and push. Also has higher level, asynchronous interface
         * with callbacks.
         */
        template<typename MESSAGE_TYPE>
        class Queue
        {
            typedef Aws::Utils::Event<Queue, const MESSAGE_TYPE&, bool&> MessageReceivedEvent;
            typedef Aws::Utils::Event<Queue, const MESSAGE_TYPE&> MessageDeleteFailedEvent;
            typedef Aws::Utils::Event<Queue, const MESSAGE_TYPE&> MessageDeleteSuccessEvent;
            typedef Aws::Utils::Event<Queue, const MESSAGE_TYPE&> MessageSendFailedEvent;
            typedef Aws::Utils::Event<Queue, const MESSAGE_TYPE&> MessageSendSuccessEvent;

        public:
            /**
             * You are responsible for calling StartPolling() if you intend to use the asynchronous pattern. 
             *
             * the value of pollingFrequency is how long to wait between queue polls. If the queue poll exceeds this limit then the next poll will start immediately
             * upon completion of the existing poll, this value is useful only if you intend to use this instance for the asynchronous polling model.
             */
            Queue(unsigned pollingFrequency) :
                    m_continue(true), m_pollingFrequencyMs(pollingFrequency), m_pollingThread(nullptr)
            {
            }

            virtual ~Queue()
            {
                StopPolling();
            }

            virtual MESSAGE_TYPE Top() const = 0;
            virtual void Delete(const MESSAGE_TYPE&) = 0;
            virtual void Push(const MESSAGE_TYPE&) = 0;

            /**
             * Starts a polling thread in the background. You will need to register OnMessageReceived
             * to receive the messages. This method can be called after StopPolling to resume polling after
             * being paused.
             */
            void StartPolling()
            {
                if(!m_pollingThread)
                {
                    m_continue = true;
                    m_pollingThread = Aws::MakeUnique<std::thread>(MEM_TAG, &Queue::Main, this);
                }
            }

            /**
             * Stops the polling thread. Messages in transit will be handled before termination of the thread.
             * Will be called by the destructor so only call this if you want control over when the thread exits.
             * This method blocks waiting on the polling thread to stop. After being called, the StartPolling() method
             * can be called, and the thread will resume.
             */
            void StopPolling()
            {
                m_continue = false;
                if(m_pollingThread)
                {
                    m_pollingThread->join();
                    m_pollingThread = nullptr;
                }
            }

            /**
             * Event to register for if you want asynchronous notification of a message being recieved on the queue.
             */
            MessageReceivedEvent OnMessageReceived;

            /**
             * Notification that a message deletion failed.
             */
            MessageDeleteFailedEvent OnMessageDeleteFailed;

            /**
             * Notification that a message deletion succeeded.
             */
            MessageDeleteSuccessEvent OnMessageDeleteSucceeded;

            /**
             * Notification that a message send operation failed.
             */
            MessageSendFailedEvent OnMessageSendFailed;

            /**
             * Notification that a message send was successful.
             */
            MessageSendSuccessEvent OnMessageSendSucceeded;

        protected:
            std::atomic<bool> m_continue;

        private:
            void Main()
            {
                while(m_continue)
                {
                    auto start = std::chrono::system_clock::now();
                    MESSAGE_TYPE topMessage = Top();
                    bool deleteMessage = false;
                    OnMessageReceived(this, topMessage, deleteMessage);

                    if (deleteMessage)
                    {
                        Delete(topMessage);
                    }

                    if(m_continue)
                    {
                        auto stop = std::chrono::system_clock::now();
                        auto timeTaken = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

                        if (m_pollingFrequencyMs >= timeTaken.count())
                        {
                            std::this_thread::sleep_for(std::chrono::milliseconds(m_pollingFrequencyMs - timeTaken.count()));
                        }
                    }
                }
            }

            unsigned m_pollingFrequencyMs;
            Aws::UniquePtr<std::thread> m_pollingThread;
        };
    }
}
