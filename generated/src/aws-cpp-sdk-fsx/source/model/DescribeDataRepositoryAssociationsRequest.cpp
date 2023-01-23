/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeDataRepositoryAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDataRepositoryAssociationsRequest::DescribeDataRepositoryAssociationsRequest() : 
    m_associationIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeDataRepositoryAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationIdsJsonList(m_associationIds.size());
   for(unsigned associationIdsIndex = 0; associationIdsIndex < associationIdsJsonList.GetLength(); ++associationIdsIndex)
   {
     associationIdsJsonList[associationIdsIndex].AsString(m_associationIds[associationIdsIndex]);
   }
   payload.WithArray("AssociationIds", std::move(associationIdsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

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

Aws::Http::HeaderValueCollection DescribeDataRepositoryAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DescribeDataRepositoryAssociations"));
  return headers;

}




