/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/GetTestRunStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppTest::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetTestRunStepRequest::SerializePayload() const
{
  return {};
}

void GetTestRunStepRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_testCaseIdHasBeenSet)
    {
      ss << m_testCaseId;
      uri.AddQueryStringParameter("testCaseId", ss.str());
      ss.str("");
    }

    if(m_testSuiteIdHasBeenSet)
    {
      ss << m_testSuiteId;
      uri.AddQueryStringParameter("testSuiteId", ss.str());
      ss.str("");
    }

}



