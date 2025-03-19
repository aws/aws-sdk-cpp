/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/GetTestSuiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppTest::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetTestSuiteRequest::SerializePayload() const
{
  return {};
}

void GetTestSuiteRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_testSuiteVersionHasBeenSet)
    {
      ss << m_testSuiteVersion;
      uri.AddQueryStringParameter("testSuiteVersion", ss.str());
      ss.str("");
    }

}



