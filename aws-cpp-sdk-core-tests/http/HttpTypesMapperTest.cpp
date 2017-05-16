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
