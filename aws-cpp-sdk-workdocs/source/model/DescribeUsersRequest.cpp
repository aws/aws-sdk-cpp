﻿/*
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

#include <aws/workdocs/model/DescribeUsersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeUsersRequest::DescribeUsersRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_include(UserFilterType::NOT_SET),
    m_includeHasBeenSet(false),
    m_order(OrderType::NOT_SET),
    m_orderHasBeenSet(false),
    m_sort(UserSortType::NOT_SET),
    m_sortHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

Aws::String DescribeUsersRequest::SerializePayload() const
{
  return "";
}

Aws::Http::HeaderValueCollection DescribeUsersRequest::GetRequestSpecificHeaders() const
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

void DescribeUsersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_organizationIdHasBeenSet)
    {
      ss << m_organizationId;
      uri.AddQueryStringParameter("organizationId", ss.str());
      ss.str("");
    }

    if(m_userIdsHasBeenSet)
    {
      ss << m_userIds;
      uri.AddQueryStringParameter("userIds", ss.str());
      ss.str("");
    }

    if(m_queryHasBeenSet)
    {
      ss << m_query;
      uri.AddQueryStringParameter("query", ss.str());
      ss.str("");
    }

    if(m_includeHasBeenSet)
    {
      ss << UserFilterTypeMapper::GetNameForUserFilterType(m_include);
      uri.AddQueryStringParameter("include", ss.str());
      ss.str("");
    }

    if(m_orderHasBeenSet)
    {
      ss << OrderTypeMapper::GetNameForOrderType(m_order);
      uri.AddQueryStringParameter("order", ss.str());
      ss.str("");
    }

    if(m_sortHasBeenSet)
    {
      ss << UserSortTypeMapper::GetNameForUserSortType(m_sort);
      uri.AddQueryStringParameter("sort", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_fieldsHasBeenSet)
    {
      ss << m_fields;
      uri.AddQueryStringParameter("fields", ss.str());
      ss.str("");
    }

}



