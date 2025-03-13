/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/GetTestCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppTest::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetTestCaseRequest::SerializePayload() const
{
  return {};
}

void GetTestCaseRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_testCaseVersionHasBeenSet)
    {
      ss << m_testCaseVersion;
      uri.AddQueryStringParameter("testCaseVersion", ss.str());
      ss.str("");
    }

}



