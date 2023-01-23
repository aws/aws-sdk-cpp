/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CreateServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServiceRequest::CreateServiceRequest() : 
    m_serviceNameHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false),
    m_instanceConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_healthCheckConfigurationHasBeenSet(false),
    m_autoScalingConfigurationArnHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_observabilityConfigurationHasBeenSet(false)
{
}

Aws::String CreateServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("SourceConfiguration", m_sourceConfiguration.Jsonize());

  }

  if(m_instanceConfigurationHasBeenSet)
  {
   payload.WithObject("InstanceConfiguration", m_instanceConfiguration.Jsonize());

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

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_healthCheckConfigurationHasBeenSet)
  {
   payload.WithObject("HealthCheckConfiguration", m_healthCheckConfiguration.Jsonize());

  }

  if(m_autoScalingConfigurationArnHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationArn", m_autoScalingConfigurationArn);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_observabilityConfigurationHasBeenSet)
  {
   payload.WithObject("ObservabilityConfiguration", m_observabilityConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateServiceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.CreateService"));
  return headers;

}




