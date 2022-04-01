/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/ListConnectionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListConnectionsRequest::ListConnectionsRequest() : 
    m_providerTypeFilter(ProviderType::NOT_SET),
    m_providerTypeFilterHasBeenSet(false),
    m_hostArnFilterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListConnectionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_providerTypeFilterHasBeenSet)
  {
   payload.WithString("ProviderTypeFilter", ProviderTypeMapper::GetNameForProviderType(m_providerTypeFilter));
  }

  if(m_hostArnFilterHasBeenSet)
  {
   payload.WithString("HostArnFilter", m_hostArnFilter);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListConnectionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codestar.connections.CodeStar_connections_20191201.ListConnections"));
  return headers;

}




