/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/SendHeartbeatRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SagemakerEdgeManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendHeartbeatRequest::SendHeartbeatRequest() : 
    m_agentMetricsHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false),
    m_deploymentResultHasBeenSet(false)
{
}

Aws::String SendHeartbeatRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentMetricsJsonList(m_agentMetrics.size());
   for(unsigned agentMetricsIndex = 0; agentMetricsIndex < agentMetricsJsonList.GetLength(); ++agentMetricsIndex)
   {
     agentMetricsJsonList[agentMetricsIndex].AsObject(m_agentMetrics[agentMetricsIndex].Jsonize());
   }
   payload.WithArray("AgentMetrics", std::move(agentMetricsJsonList));

  }

  if(m_modelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelsJsonList(m_models.size());
   for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
   {
     modelsJsonList[modelsIndex].AsObject(m_models[modelsIndex].Jsonize());
   }
   payload.WithArray("Models", std::move(modelsJsonList));

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  if(m_deploymentResultHasBeenSet)
  {
   payload.WithObject("DeploymentResult", m_deploymentResult.Jsonize());

  }

  return payload.View().WriteReadable();
}




