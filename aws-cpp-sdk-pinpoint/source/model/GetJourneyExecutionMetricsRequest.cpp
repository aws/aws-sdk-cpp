/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetJourneyExecutionMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetJourneyExecutionMetricsRequest::GetJourneyExecutionMetricsRequest() : 
    m_applicationIdHasBeenSet(false),
    m_journeyIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String GetJourneyExecutionMetricsRequest::SerializePayload() const
{
  return {};
}

void GetJourneyExecutionMetricsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

}



