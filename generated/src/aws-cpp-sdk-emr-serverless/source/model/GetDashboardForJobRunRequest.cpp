/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/GetDashboardForJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetDashboardForJobRunRequest::SerializePayload() const
{
  return {};
}

void GetDashboardForJobRunRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_attemptHasBeenSet)
    {
      ss << m_attempt;
      uri.AddQueryStringParameter("attempt", ss.str());
      ss.str("");
    }

    if(m_accessSystemProfileLogsHasBeenSet)
    {
      ss << m_accessSystemProfileLogs;
      uri.AddQueryStringParameter("accessSystemProfileLogs", ss.str());
      ss.str("");
    }

}



