/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListApplicationInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListApplicationInstancesRequest::ListApplicationInstancesRequest() : 
    m_deviceIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_statusFilter(StatusFilter::NOT_SET),
    m_statusFilterHasBeenSet(false)
{
}

Aws::String ListApplicationInstancesRequest::SerializePayload() const
{
  return {};
}

void ListApplicationInstancesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deviceIdHasBeenSet)
    {
      ss << m_deviceId;
      uri.AddQueryStringParameter("deviceId", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_statusFilterHasBeenSet)
    {
      ss << StatusFilterMapper::GetNameForStatusFilter(m_statusFilter);
      uri.AddQueryStringParameter("statusFilter", ss.str());
      ss.str("");
    }

}



