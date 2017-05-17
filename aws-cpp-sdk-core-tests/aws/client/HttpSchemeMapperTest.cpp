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
