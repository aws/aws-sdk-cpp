/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> resourceIdentifiersJsonList(m_resourceIdentifiers.size());
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




