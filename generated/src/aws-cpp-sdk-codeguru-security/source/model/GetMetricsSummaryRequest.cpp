/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/GetMetricsSummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruSecurity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetMetricsSummaryRequest::GetMetricsSummaryRequest() : 
    m_dateHasBeenSet(false)
{
}

Aws::String GetMetricsSummaryRequest::SerializePayload() const
{
  return {};
}

void GetMetricsSummaryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_dateHasBeenSet)
    {
      ss << m_date.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("date", ss.str());
      ss.str("");
    }

}



