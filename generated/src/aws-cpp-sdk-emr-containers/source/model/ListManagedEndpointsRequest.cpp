/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ListManagedEndpointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EMRContainers::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListManagedEndpointsRequest::ListManagedEndpointsRequest() : 
    m_virtualClusterIdHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_statesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListManagedEndpointsRequest::SerializePayload() const
{
  return {};
}

void ListManagedEndpointsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_createdBeforeHasBeenSet)
    {
      ss << m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdBefore", ss.str());
      ss.str("");
    }

    if(m_createdAfterHasBeenSet)
    {
      ss << m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdAfter", ss.str());
      ss.str("");
    }

    if(m_typesHasBeenSet)
    {
      for(const auto& item : m_types)
      {
        ss << item;
        uri.AddQueryStringParameter("types", ss.str());
        ss.str("");
      }
    }

    if(m_statesHasBeenSet)
    {
      for(const auto& item : m_states)
      {
        ss << EndpointStateMapper::GetNameForEndpointState(item);
        uri.AddQueryStringParameter("states", ss.str());
        ss.str("");
      }
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

}



