/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CreateObservabilityConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateObservabilityConfigurationRequest::CreateObservabilityConfigurationRequest() : 
    m_observabilityConfigurationNameHasBeenSet(false),
    m_traceConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateObservabilityConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_observabilityConfigurationNameHasBeenSet)
  {
   payload.WithString("ObservabilityConfigurationName", m_observabilityConfigurationName);

  }

  if(m_traceConfigurationHasBeenSet)
  {
   payload.WithObject("TraceConfiguration", m_traceConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateObservabilityConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.CreateObservabilityConfiguration"));
  return headers;

}




