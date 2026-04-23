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
#include <aws/core/utils/Cache.h>
#include <aws/core/utils/ConcurrentCache.h>

#include <thread>
#include <array>

using namespace Aws::Utils;

TEST(CacheTests, TestGetWithEmptyCache)
{
    Cache<Aws::String, Aws::String> cache(10);
    Aws::String ignored;
    ASSERT_FALSE(cache.Get("answer", ignored));
}

TEST(CacheTests, TestGetExpiredEntry)
{
    Aws::String ignored;
    Cache<Aws::String, Aws::String> cache(10);
    cache.Put("answer", "42", std::chrono::milliseconds(-1));
    ASSERT_FALSE(cache.Get("answer", ignored));
}

TEST(CacheTests, TestGetCachedEntry)
{
    Cache<Aws::String, Aws::String> cache(10);
    cache.Put("answer", "42", std::chrono::minutes(1));
    Aws::String answer;
    ASSERT_TRUE(cache.Get("answer", answer));
    ASSERT_STREQ("42", answer.c_str());
}

TEST(CacheTests, TestPutPrunesExpiredEntries)
{
    Cache<Aws::String, int> cache(2);
    cache.Put("one", 1, std::chrono::minutes(5));
    cache.Put("two", 2, std::chrono::minutes(-11)); // expiration is in the past
    cache.Put("three", 3, std::chrono::minutes(1));

    int out;
    ASSERT_TRUE(cache.Get("one", out));
    ASSERT_EQ(1, out);

    ASSERT_FALSE(cache.Get("two", out)); // should be expired

    ASSERT_TRUE(cache.Get("three", out));
    ASSERT_EQ(3, out);

}

TEST(CacheTests, TestPutPrunesExpiringEntries)
{
    Cache<Aws::String, int> cache(2);
    cache.Put("one", 1, std::chrono::minutes(5));
    cache.Put("two", 2, std::chrono::minutes(1));
    cache.Put("three", 3, std::chrono::minutes(1));

    int out;
    ASSERT_TRUE(cache.Get("one", out));
    ASSERT_EQ(1, out);

    ASSERT_FALSE(cache.Get("two", out));

    ASSERT_TRUE(cache.Get("three", out));
    ASSERT_EQ(3, out);
}

TEST(CacheTests, TestPutWithSameKey)
{
    Cache<Aws::String, float> cache(2);
    cache.Put("one", 1.0f, std::chrono::minutes(5));
    cache.Put("one", 1.1f, std::chrono::seconds(1));

    float out;
    ASSERT_TRUE(cache.Get("one", out));
    ASSERT_EQ(1.1f, out);

    cache.Put("one", 1.1f, std::chrono::seconds(-1));
    ASSERT_FALSE(cache.Get("one", out));
}

TEST(CacheTests, TestPutByConstRef)
{
    Cache<Aws::String, int> cache;
    const Aws::String one = "one";
    cache.Put(one, 42, std::chrono::minutes(5));

    int out;
    ASSERT_TRUE(cache.Get("one", out));
    ASSERT_EQ(42, out);
}

TEST(ConcurrentCacheTest, TestPutByConstRef)
{
    ConcurrentCache<Aws::String, int> cache;
    const Aws::String one = "one";
    cache.Put(one, 42, std::chrono::minutes(5));

    int out;
    ASSERT_TRUE(cache.Get("one", out));
    ASSERT_EQ(42, out);
}

TEST(ConcurrentCacheTest, TestPutAndGetConcurrently)
{
    // No assertions in this test. The point of this test is to flush out any memory safety bugs when using -fsanitize
    const std::array<const char*, 8> words {{ "The", "brown", "Fox", "Jumped", "Over", "the", "lazy", "dog" }};
    ConcurrentCache<Aws::String, Aws::String> cache;
    auto DoPut = [&]
    {
        for (size_t i = 0; i < 100; i++)
        {
            cache.Put(words[i & 0x7], words[i & 0x7], std::chrono::minutes(1));
        }
    };

    auto DoGet = [&]
    {
        Aws::String out;
        for (size_t i = 0; i < 100; i++)
        {
            cache.Get(words[i & 0x7], out);
        }
    };

    std::thread putter(DoPut);
    std::thread getter(DoGet);
    putter.join();
    getter.join();
}
