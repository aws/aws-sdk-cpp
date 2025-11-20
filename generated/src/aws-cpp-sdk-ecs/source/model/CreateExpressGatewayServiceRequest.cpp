/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/CreateExpressGatewayServiceRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateExpressGatewayServiceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_infrastructureRoleArnHasBeenSet) {
    payload.WithString("infrastructureRoleArn", m_infrastructureRoleArn);
  }

  if (m_serviceNameHasBeenSet) {
    payload.WithString("serviceName", m_serviceName);
  }

  if (m_clusterHasBeenSet) {
    payload.WithString("cluster", m_cluster);
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

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateExpressGatewayServiceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.CreateExpressGatewayService"));
  return headers;
}
