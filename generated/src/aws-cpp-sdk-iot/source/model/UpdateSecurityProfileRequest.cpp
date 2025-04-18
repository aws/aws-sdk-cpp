﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateSecurityProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String UpdateSecurityProfileRequest::SerializePayload() const
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

  if(m_deleteBehaviorsHasBeenSet)
  {
   payload.WithBool("deleteBehaviors", m_deleteBehaviors);

  }

  if(m_deleteAlertTargetsHasBeenSet)
  {
   payload.WithBool("deleteAlertTargets", m_deleteAlertTargets);

  }

  if(m_deleteAdditionalMetricsToRetainHasBeenSet)
  {
   payload.WithBool("deleteAdditionalMetricsToRetain", m_deleteAdditionalMetricsToRetain);

  }

  if(m_metricsExportConfigHasBeenSet)
  {
   payload.WithObject("metricsExportConfig", m_metricsExportConfig.Jsonize());

  }

  if(m_deleteMetricsExportConfigHasBeenSet)
  {
   payload.WithBool("deleteMetricsExportConfig", m_deleteMetricsExportConfig);

  }

  return payload.View().WriteReadable();
}

void UpdateSecurityProfileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_expectedVersionHasBeenSet)
    {
      ss << m_expectedVersion;
      uri.AddQueryStringParameter("expectedVersion", ss.str());
      ss.str("");
    }

}



