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

#include <aws/workdocs/model/DescribeActivitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeActivitiesRequest::DescribeActivitiesRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_activityTypesHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_includeIndirectActivities(false),
    m_includeIndirectActivitiesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeActivitiesRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DescribeActivitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}

void DescribeActivitiesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("startTime", ss.str());
      ss.str("");
    }

    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("endTime", ss.str());
      ss.str("");
    }

    if(m_organizationIdHasBeenSet)
    {
      ss << m_organizationId;
      uri.AddQueryStringParameter("organizationId", ss.str());
      ss.str("");
    }

    if(m_activityTypesHasBeenSet)
    {
      ss << m_activityTypes;
      uri.AddQueryStringParameter("activityTypes", ss.str());
      ss.str("");
    }

    if(m_resourceIdHasBeenSet)
    {
      ss << m_resourceId;
      uri.AddQueryStringParameter("resourceId", ss.str());
      ss.str("");
    }

    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("userId", ss.str());
      ss.str("");
    }

    if(m_includeIndirectActivitiesHasBeenSet)
    {
      ss << m_includeIndirectActivities;
      uri.AddQueryStringParameter("includeIndirectActivities", ss.str());
      ss.str("");
    }

    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

}



