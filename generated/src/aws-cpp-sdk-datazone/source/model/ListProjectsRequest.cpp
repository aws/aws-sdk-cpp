/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListProjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListProjectsRequest::ListProjectsRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_groupIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_userIdentifierHasBeenSet(false)
{
}

Aws::String ListProjectsRequest::SerializePayload() const
{
  return {};
}

void ListProjectsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_groupIdentifierHasBeenSet)
    {
      ss << m_groupIdentifier;
      uri.AddQueryStringParameter("groupIdentifier", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_userIdentifierHasBeenSet)
    {
      ss << m_userIdentifier;
      uri.AddQueryStringParameter("userIdentifier", ss.str());
      ss.str("");
    }

}



