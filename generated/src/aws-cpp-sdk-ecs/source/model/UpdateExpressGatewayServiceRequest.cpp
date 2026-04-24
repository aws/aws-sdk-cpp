/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/UpdateExpressGatewayServiceRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateExpressGatewayServiceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_healthCheckPathHasBeenSet) {
    payload.WithString("healthCheckPath", m_healthCheckPath);
  }

  if (m_primaryContainerHasBeenSet) {
    payload.WithObject("primaryContainer", m_primaryContainer.Jsonize());
  }

  if (m_taskRoleArnHasBeenSet) {
    payload.WithString("taskRoleArn", m_taskRoleArn);
  }

  if (m_networkConfigurationHasBeenSet) {
    payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());
  }

  if (m_cpuHasBeenSet) {
    payload.WithString("cpu", m_cpu);
  }

  if (m_memoryHasBeenSet) {
    payload.WithString("memory", m_memory);
  }

  if (m_scalingTargetHasBeenSet) {
    payload.WithObject("scalingTarget", m_scalingTarget.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateExpressGatewayServiceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.UpdateExpressGatewayService"));
  return headers;
}
