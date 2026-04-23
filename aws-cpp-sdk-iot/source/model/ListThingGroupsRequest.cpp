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



