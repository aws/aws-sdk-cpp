/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateSecurityProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSecurityProfileRequest::CreateSecurityProfileRequest() : 
    m_securityProfileNameHasBeenSet(false),
    m_securityProfileDescriptionHasBeenSet(false),
    m_behaviorsHasBeenSet(false),
    m_alertTargetsHasBeenSet(false),
    m_additionalMetricsToRetainV2HasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSecurityProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_securityProfileDescriptionHasBeenSet)
  {
   payload.WithString("securityProfileDescription", m_securityProfileDescription);

  }

  if(m_behaviorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> behaviorsJsonList(m_behaviors.size());
   for(unsigned behaviorsIndex = 0; behaviorsIndex < behaviorsJsonList.GetLength(); ++behaviorsIndex)
   {
     behaviorsJsonList[behaviorsIndex].AsObject(m_behaviors[behaviorsIndex].Jsonize());
   }
   payload.WithArray("behaviors", std::move(behaviorsJsonList));

  }

  if(m_alertTargetsHasBeenSet)
  {
   JsonValue alertTargetsJsonMap;
   for(auto& alertTargetsItem : m_alertTargets)
   {
     alertTargetsJsonMap.WithObject(AlertTargetTypeMapper::GetNameForAlertTargetType(alertTargetsItem.first), alertTargetsItem.second.Jsonize());
   }
   payload.WithObject("alertTargets", std::move(alertTargetsJsonMap));

  }

  if(m_additionalMetricsToRetainV2HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalMetricsToRetainV2JsonList(m_additionalMetricsToRetainV2.size());
   for(unsigned additionalMetricsToRetainV2Index = 0; additionalMetricsToRetainV2Index < additionalMetricsToRetainV2JsonList.GetLength(); ++additionalMetricsToRetainV2Index)
   {
     additionalMetricsToRetainV2JsonList[additionalMetricsToRetainV2Index].AsObject(m_additionalMetricsToRetainV2[additionalMetricsToRetainV2Index].Jsonize());
   }
   payload.WithArray("additionalMetricsToRetainV2", std::move(additionalMetricsToRetainV2JsonList));

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




