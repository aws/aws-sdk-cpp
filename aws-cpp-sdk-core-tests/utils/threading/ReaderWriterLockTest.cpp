/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/external/gtest.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/core/utils/memory/stl/AWSString.h>

using namespace Aws::Utils::Threading;

TEST(ReaderWriterLock, MultipleReadersMultipleWriters)
{
    Aws::String resource = "It's still Day One";
    std::atomic<size_t> resourceLength { resource.length() };
    const int ITERATIONS = 100;
    const int READER_THREADS = 100;
    const int WRITER_THREADS = 20;
    Semaphore ev(0, READER_THREADS + WRITER_THREADS);
    ReaderWriterLock rwlock;
    {
        DefaultExecutor exec;
        auto reader = [&] {
            ev.WaitOne();
            for(int i = 0; i < ITERATIONS; i++)
            {
                ReaderLockGuard guard(rwlock);
                ASSERT_GE(resource.length(), resourceLength);
            }
        };
        auto writer = [&] {
            ev.WaitOne();
            for(int i = 0; i < ITERATIONS; i++)
            {
                WriterLockGuard guard(rwlock);
                resource += "!";
                resourceLength = resource.length();
            }
        };

        for(int i = 0; i < WRITER_THREADS; i++)
        {
            exec.Submit(writer);
        }

        for(int i = 0; i < READER_THREADS; i++)
        {
            exec.Submit(reader);
        }

        ev.ReleaseAll();
    }
}

TEST(ReaderWriterLock, NoReadersMultipleWriters)
{
    Aws::String resource = "It's still Day One";
    const auto originalLength = resource.length();
    const int THREADS_NUM = 8;
    const int ITERATIONS = 100;
    Semaphore ev(0, 100);
    ReaderWriterLock rwlock;
    {
        DefaultExecutor exec;
        auto writer = [&] {
            ev.WaitOne();
            for(int i = 0; i < ITERATIONS; i++)
            {
                WriterLockGuard guard(rwlock);
                resource += "!";
            }
        };

        for(int i = 0; i < THREADS_NUM; i++)
        {
            exec.Submit(writer);
        }

        ev.ReleaseAll();
    }

    ASSERT_EQ(originalLength + THREADS_NUM * ITERATIONS, resource.length());
}
