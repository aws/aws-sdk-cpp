﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetRelationshipsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAssetRelationshipsRequest::ListAssetRelationshipsRequest() : 
    m_assetIdHasBeenSet(false),
    m_traversalType(TraversalType::NOT_SET),
    m_traversalTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAssetRelationshipsRequest::SerializePayload() const
{
  return {};
}

void ListAssetRelationshipsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_traversalTypeHasBeenSet)
    {
      ss << TraversalTypeMapper::GetNameForTraversalType(m_traversalType);
      uri.AddQueryStringParameter("traversalType", ss.str());
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



