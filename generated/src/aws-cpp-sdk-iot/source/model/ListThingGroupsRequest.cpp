/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListThingGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListThingGroupsRequest::ListThingGroupsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_parentGroupHasBeenSet(false),
    m_namePrefixFilterHasBeenSet(false),
    m_recursive(false),
    m_recursiveHasBeenSet(false)
{
}

Aws::String ListThingGroupsRequest::SerializePayload() const
{
  return {};
}

void ListThingGroupsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_parentGroupHasBeenSet)
    {
      ss << m_parentGroup;
      uri.AddQueryStringParameter("parentGroup", ss.str());
      ss.str("");
    }

    if(m_namePrefixFilterHasBeenSet)
    {
      ss << m_namePrefixFilter;
      uri.AddQueryStringParameter("namePrefixFilter", ss.str());
      ss.str("");
    }

    if(m_recursiveHasBeenSet)
    {
      ss << m_recursive;
      uri.AddQueryStringParameter("recursive", ss.str());
      ss.str("");
    }

}



