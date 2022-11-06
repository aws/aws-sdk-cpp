/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AddDraftAppVersionResourceMappingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddDraftAppVersionResourceMappingsRequest::AddDraftAppVersionResourceMappingsRequest() : 
    m_appArnHasBeenSet(false),
    m_resourceMappingsHasBeenSet(false)
{
}

Aws::String AddDraftAppVersionResourceMappingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_resourceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceMappingsJsonList(m_resourceMappings.size());
   for(unsigned resourceMappingsIndex = 0; resourceMappingsIndex < resourceMappingsJsonList.GetLength(); ++resourceMappingsIndex)
   {
     resourceMappingsJsonList[resourceMappingsIndex].AsObject(m_resourceMappings[resourceMappingsIndex].Jsonize());
   }
   payload.WithArray("resourceMappings", std::move(resourceMappingsJsonList));

  }

  return payload.View().WriteReadable();
}




