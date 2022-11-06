/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/BatchGetAggregateResourceConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetAggregateResourceConfigRequest::BatchGetAggregateResourceConfigRequest() : 
    m_configurationAggregatorNameHasBeenSet(false),
    m_resourceIdentifiersHasBeenSet(false)
{
}

Aws::String BatchGetAggregateResourceConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationAggregatorNameHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorName", m_configurationAggregatorName);

  }

  if(m_resourceIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdentifiersJsonList(m_resourceIdentifiers.size());
   for(unsigned resourceIdentifiersIndex = 0; resourceIdentifiersIndex < resourceIdentifiersJsonList.GetLength(); ++resourceIdentifiersIndex)
   {
     resourceIdentifiersJsonList[resourceIdentifiersIndex].AsObject(m_resourceIdentifiers[resourceIdentifiersIndex].Jsonize());
   }
   payload.WithArray("ResourceIdentifiers", std::move(resourceIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetAggregateResourceConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.BatchGetAggregateResourceConfig"));
  return headers;

}




