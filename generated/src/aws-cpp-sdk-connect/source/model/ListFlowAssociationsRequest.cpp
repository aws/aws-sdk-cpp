/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListFlowAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListFlowAssociationsRequest::ListFlowAssociationsRequest() : 
    m_instanceIdHasBeenSet(false),
    m_resourceType(ListFlowAssociationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListFlowAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListFlowAssociationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceTypeHasBeenSet)
    {
      ss << ListFlowAssociationResourceTypeMapper::GetNameForListFlowAssociationResourceType(m_resourceType);
      uri.AddQueryStringParameter("ResourceType", ss.str());
      ss.str("");
    }

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

}



