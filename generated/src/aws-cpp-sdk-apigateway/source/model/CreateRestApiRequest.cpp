/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateRestApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRestApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_cloneFromHasBeenSet)
  {
   payload.WithString("cloneFrom", m_cloneFrom);

  }

  if(m_binaryMediaTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> binaryMediaTypesJsonList(m_binaryMediaTypes.size());
   for(unsigned binaryMediaTypesIndex = 0; binaryMediaTypesIndex < binaryMediaTypesJsonList.GetLength(); ++binaryMediaTypesIndex)
   {
     binaryMediaTypesJsonList[binaryMediaTypesIndex].AsString(m_binaryMediaTypes[binaryMediaTypesIndex]);
   }
   payload.WithArray("binaryMediaTypes", std::move(binaryMediaTypesJsonList));

  }

  if(m_minimumCompressionSizeHasBeenSet)
  {
   payload.WithInteger("minimumCompressionSize", m_minimumCompressionSize);

  }

  if(m_apiKeySourceHasBeenSet)
  {
   payload.WithString("apiKeySource", ApiKeySourceTypeMapper::GetNameForApiKeySourceType(m_apiKeySource));
  }

  if(m_endpointConfigurationHasBeenSet)
  {
   payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_disableExecuteApiEndpointHasBeenSet)
  {
   payload.WithBool("disableExecuteApiEndpoint", m_disableExecuteApiEndpoint);

  }

  return payload.View().WriteReadable();
}




