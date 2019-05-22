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

#include <aws/apigateway/model/CreateRestApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRestApiRequest::CreateRestApiRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_cloneFromHasBeenSet(false),
    m_binaryMediaTypesHasBeenSet(false),
    m_minimumCompressionSize(0),
    m_minimumCompressionSizeHasBeenSet(false),
    m_apiKeySource(ApiKeySourceType::NOT_SET),
    m_apiKeySourceHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

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
   Array<JsonValue> binaryMediaTypesJsonList(m_binaryMediaTypes.size());
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

  return payload.View().WriteReadable();
}




