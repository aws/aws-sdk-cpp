/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastic-inference/model/DescribeAcceleratorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAcceleratorsRequest::DescribeAcceleratorsRequest() : 
    m_acceleratorIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeAcceleratorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceleratorIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorIdsJsonList(m_acceleratorIds.size());
   for(unsigned acceleratorIdsIndex = 0; acceleratorIdsIndex < acceleratorIdsJsonList.GetLength(); ++acceleratorIdsIndex)
   {
     acceleratorIdsJsonList[acceleratorIdsIndex].AsString(m_acceleratorIds[acceleratorIdsIndex]);
   }
   payload.WithArray("acceleratorIds", std::move(acceleratorIdsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




