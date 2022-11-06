/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeCapacityProvidersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCapacityProvidersRequest::DescribeCapacityProvidersRequest() : 
    m_capacityProvidersHasBeenSet(false),
    m_includeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeCapacityProvidersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capacityProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityProvidersJsonList(m_capacityProviders.size());
   for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
   {
     capacityProvidersJsonList[capacityProvidersIndex].AsString(m_capacityProviders[capacityProvidersIndex]);
   }
   payload.WithArray("capacityProviders", std::move(capacityProvidersJsonList));

  }

  if(m_includeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
   for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
   {
     includeJsonList[includeIndex].AsString(CapacityProviderFieldMapper::GetNameForCapacityProviderField(m_include[includeIndex]));
   }
   payload.WithArray("include", std::move(includeJsonList));

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

Aws::Http::HeaderValueCollection DescribeCapacityProvidersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeCapacityProviders"));
  return headers;

}




