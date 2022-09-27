/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetApplicationDateRangeKpiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetApplicationDateRangeKpiRequest::GetApplicationDateRangeKpiRequest() : 
    m_applicationIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_kpiNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

Aws::String GetApplicationDateRangeKpiRequest::SerializePayload() const
{
  return {};
}

void GetApplicationDateRangeKpiRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("end-time", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next-token", ss.str());
      ss.str("");
    }

    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("page-size", ss.str());
      ss.str("");
    }

    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("start-time", ss.str());
      ss.str("");
    }

}



