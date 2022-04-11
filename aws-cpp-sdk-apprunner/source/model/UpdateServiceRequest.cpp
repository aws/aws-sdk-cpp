/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/UpdateServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceRequest::UpdateServiceRequest() : 
    m_serviceArnHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false),
    m_instanceConfigurationHasBeenSet(false),
    m_autoScalingConfigurationArnHasBeenSet(false),
    m_healthCheckConfigurationHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_observabilityConfigurationHasBeenSet(false)
{
}

Aws::String UpdateServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("SourceConfiguration", m_sourceConfiguration.Jsonize());

  }

  if(m_instanceConfigurationHasBeenSet)
  {
   payload.WithObject("InstanceConfiguration", m_instanceConfiguration.Jsonize());

  }

  if(m_autoScalingConfigurationArnHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationArn", m_autoScalingConfigurationArn);

  }

  if(m_healthCheckConfigurationHasBeenSet)
  {
   payload.WithObject("HealthCheckConfiguration", m_healthCheckConfiguration.Jsonize());

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

Aws::Http::HeaderValueCollection UpdateServiceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.UpdateService"));
  return headers;

}




