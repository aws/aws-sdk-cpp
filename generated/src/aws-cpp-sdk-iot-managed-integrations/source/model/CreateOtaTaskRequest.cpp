/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CreateOtaTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOtaTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_s3UrlHasBeenSet)
  {
   payload.WithString("S3Url", m_s3Url);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", OtaProtocolMapper::GetNameForOtaProtocol(m_protocol));
  }

  if(m_targetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetJsonList(m_target.size());
   for(unsigned targetIndex = 0; targetIndex < targetJsonList.GetLength(); ++targetIndex)
   {
     targetJsonList[targetIndex].AsString(m_target[targetIndex]);
   }
   payload.WithArray("Target", std::move(targetJsonList));

  }

  if(m_taskConfigurationIdHasBeenSet)
  {
   payload.WithString("TaskConfigurationId", m_taskConfigurationId);

  }

  if(m_otaMechanismHasBeenSet)
  {
   payload.WithString("OtaMechanism", OtaMechanismMapper::GetNameForOtaMechanism(m_otaMechanism));
  }

  if(m_otaTypeHasBeenSet)
  {
   payload.WithString("OtaType", OtaTypeMapper::GetNameForOtaType(m_otaType));
  }

  if(m_otaTargetQueryStringHasBeenSet)
  {
   payload.WithString("OtaTargetQueryString", m_otaTargetQueryString);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_otaSchedulingConfigHasBeenSet)
  {
   payload.WithObject("OtaSchedulingConfig", m_otaSchedulingConfig.Jsonize());

  }

  if(m_otaTaskExecutionRetryConfigHasBeenSet)
  {
   payload.WithObject("OtaTaskExecutionRetryConfig", m_otaTaskExecutionRetryConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




