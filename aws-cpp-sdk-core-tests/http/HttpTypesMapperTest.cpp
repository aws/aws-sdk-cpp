/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/http/HttpTypes.h>

using namespace Aws::Http;

TEST(HttpMethodMapperTest, TestHttpMethodToString)
{
    ASSERT_STREQ("GET", HttpMethodMapper::GetNameForHttpMethod(HttpMethod::HTTP_GET));
    ASSERT_STREQ("PUT", HttpMethodMapper::GetNameForHttpMethod(HttpMethod::HTTP_PUT));
    ASSERT_STREQ("POST", HttpMethodMapper::GetNameForHttpMethod(HttpMethod::HTTP_POST));
    ASSERT_STREQ("DELETE", HttpMethodMapper::GetNameForHttpMethod(HttpMethod::HTTP_DELETE));
    ASSERT_STREQ("HEAD", HttpMethodMapper::GetNameForHttpMethod(HttpMethod::HTTP_HEAD));
}
