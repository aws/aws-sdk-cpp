/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/http/Scheme.h>

using namespace Aws::Http;

TEST(HttpSchemeMapperTest, TestParseSchemeFromString)
{
    Scheme scheme = SchemeMapper::FromString("  HtTp  ");
    ASSERT_EQ(Scheme::HTTP, scheme);
    scheme = SchemeMapper::FromString("  HtTpS  ");
    ASSERT_EQ(Scheme::HTTPS, scheme);
    scheme = SchemeMapper::FromString("");
    ASSERT_EQ(Scheme::HTTPS, scheme);
}

TEST(HttpSchemeMapperTest, TestGetStringFromScheme)
{
    ASSERT_STREQ("http", SchemeMapper::ToString(Scheme::HTTP));
    ASSERT_STREQ("https", SchemeMapper::ToString(Scheme::HTTPS));
}
