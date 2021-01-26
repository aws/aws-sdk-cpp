
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/utils/DNS.h>

using namespace Aws::Utils;

TEST(DnsTest, TestValidDnsLabels)
{
    ASSERT_TRUE(IsValidDnsLabel("a"));
    ASSERT_TRUE(IsValidDnsLabel("ab"));
    ASSERT_TRUE(IsValidDnsLabel("abc"));
    ASSERT_TRUE(IsValidDnsLabel("contains-dashes-in-the-middle"));
    ASSERT_TRUE(IsValidDnsLabel("123StartsWithNumbers"));
    ASSERT_TRUE(IsValidDnsLabel("Ends-With-Numbers123"));
    ASSERT_TRUE(IsValidDnsLabel("123StartsAndEndsWithNumbers000"));
    ASSERT_TRUE(IsValidDnsLabel("42")); 
    ASSERT_TRUE(IsValidDnsLabel("012345678901234567890123456789012345678901234567890123456789012")); // 63 characters
}

TEST(DnsTest, TestInvalidDnsLabels)
{
    ASSERT_FALSE(IsValidDnsLabel(""));
    ASSERT_FALSE(IsValidDnsLabel("has_underscore"));
    ASSERT_FALSE(IsValidDnsLabel("trailing-dash-"));
    ASSERT_FALSE(IsValidDnsLabel("-starts-with-dash"));
    ASSERT_FALSE(IsValidDnsLabel("ends-with-dash-"));
    ASSERT_FALSE(IsValidDnsLabel("-starts-and-ends-with-dash-"));
    ASSERT_FALSE(IsValidDnsLabel("-"));
    ASSERT_FALSE(IsValidDnsLabel("c0nt@in$-$ymb01$"));
    ASSERT_FALSE(IsValidDnsLabel("0123456789012345678901234567890123456789012345678901234567890123")); // 64 characters
}

TEST(DnsTest, TestHost)
{
    ASSERT_TRUE(IsValidHost("www.amazon.com"));
    ASSERT_TRUE(IsValidHost("a"));
    ASSERT_TRUE(IsValidHost("a-b-c"));
    ASSERT_TRUE(IsValidHost("a-b.c-d"));
    ASSERT_TRUE(IsValidHost("amazon.com"));


    ASSERT_FALSE(IsValidHost(""));
    ASSERT_FALSE(IsValidHost("."));
    ASSERT_FALSE(IsValidHost("@"));
    ASSERT_FALSE(IsValidHost("-"));
    ASSERT_FALSE(IsValidHost("/"));
    ASSERT_FALSE(IsValidHost("abc@amazon.com"));
    ASSERT_FALSE(IsValidHost("www.amazon.com/"));
    ASSERT_FALSE(IsValidHost("www.amazon-.com"));
    ASSERT_FALSE(IsValidHost("www.-amazon.com"));
    ASSERT_FALSE(IsValidHost("0123456789012345678901234567890123456789012345678901234567890123")); // 64 characters
    ASSERT_FALSE(IsValidHost("0123456789012345678901234567890123456789012345678901234567890123.com")); // 64 characters

}
