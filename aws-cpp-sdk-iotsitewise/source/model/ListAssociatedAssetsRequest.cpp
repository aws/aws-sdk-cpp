/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssociatedAssetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAssociatedAssetsRequest::ListAssociatedAssetsRequest() : 
    m_assetIdHasBeenSet(false),
    m_hierarchyIdHasBeenSet(false),
    m_traversalDirection(TraversalDirection::NOT_SET),
    m_traversalDirectionHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAssociatedAssetsRequest::SerializePayload() const
{
  return {};
}

void ListAssociatedAssetsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_hierarchyIdHasBeenSet)
    {
      ss << m_hierarchyId;
      uri.AddQueryStringParameter("hierarchyId", ss.str());
      ss.str("");
    }

    if(m_traversalDirectionHasBeenSet)
    {
      ss << TraversalDirectionMapper::GetNameForTraversalDirection(m_traversalDirection);
      uri.AddQueryStringParameter("traversalDirection", ss.str());
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



