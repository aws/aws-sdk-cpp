/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/RegisterDaemonTaskDefinitionRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterDaemonTaskDefinitionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_familyHasBeenSet) {
    payload.WithString("family", m_family);
  }

  if (m_taskRoleArnHasBeenSet) {
    payload.WithString("taskRoleArn", m_taskRoleArn);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_containerDefinitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> containerDefinitionsJsonList(m_containerDefinitions.size());
    for (unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength();
         ++containerDefinitionsIndex) {
      containerDefinitionsJsonList[containerDefinitionsIndex].AsObject(m_containerDefinitions[containerDefinitionsIndex].Jsonize());
    }
    payload.WithArray("containerDefinitions", std::move(containerDefinitionsJsonList));
  }

  if (m_cpuHasBeenSet) {
    payload.WithString("cpu", m_cpu);
  }

  if (m_memoryHasBeenSet) {
    payload.WithString("memory", m_memory);
  }

  if (m_volumesHasBeenSet) {
    Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
    for (unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex) {
      volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
    }
    payload.WithArray("volumes", std::move(volumesJsonList));
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

Aws::Http::HeaderValueCollection RegisterDaemonTaskDefinitionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.RegisterDaemonTaskDefinition"));
  return headers;
}
