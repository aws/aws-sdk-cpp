﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ListOutpostsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListOutpostsRequest::ListOutpostsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_lifeCycleStatusFilterHasBeenSet(false),
    m_availabilityZoneFilterHasBeenSet(false),
    m_availabilityZoneIdFilterHasBeenSet(false)
{
}

Aws::String ListOutpostsRequest::SerializePayload() const
{
  return {};
}

void ListOutpostsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_lifeCycleStatusFilterHasBeenSet)
    {
      for(const auto& item : m_lifeCycleStatusFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("LifeCycleStatusFilter", ss.str());
        ss.str("");
      }
    }

    if(m_availabilityZoneFilterHasBeenSet)
    {
      for(const auto& item : m_availabilityZoneFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("AvailabilityZoneFilter", ss.str());
        ss.str("");
      }
    }

    if(m_availabilityZoneIdFilterHasBeenSet)
    {
      for(const auto& item : m_availabilityZoneIdFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("AvailabilityZoneIdFilter", ss.str());
        ss.str("");
      }
    }

}



