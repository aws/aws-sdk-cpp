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

#include <aws/external/gtest.h>
#include <aws/core/utils/threading/Executor.h>
#include <atomic>
#include <chrono>

using namespace Aws::Utils::Threading;

TEST(DefaultExecutor, ThreadsJoinOnDestructionTest)
{
    std::atomic<int> i(1);
    {
        DefaultExecutor exec;
        auto first = [&] { std::this_thread::yield(); i++; };
        auto second = [&] { std::this_thread::yield(); i++; };
        exec.Submit(first);
        exec.Submit(second);
    }
    i = i * 10;
    ASSERT_EQ(30, i.load());
}

TEST(DefaultExecutor, ThreadsDetachIfNotShuttingDown)
{
    using namespace std::chrono;
    std::atomic<int> i(1);
    DefaultExecutor exec;
    exec.Submit([&] { i++; });
    std::this_thread::sleep_for(milliseconds(1));
    i = i * 10;
    ASSERT_EQ(20, i.load());
}
