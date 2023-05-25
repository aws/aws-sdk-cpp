/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/StartImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartImportRequest::StartImportRequest() : 
    m_payloadHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_mergeStrategyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_payloadHasBeenSet)
  {
   payload.WithString("payload", HashingUtils::Base64Encode(m_payload));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_mergeStrategyHasBeenSet)
  {
   payload.WithString("mergeStrategy", MergeStrategyMapper::GetNameForMergeStrategy(m_mergeStrategy));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




