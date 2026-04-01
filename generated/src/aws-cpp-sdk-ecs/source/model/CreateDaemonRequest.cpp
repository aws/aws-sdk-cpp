/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/CreateDaemonRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDaemonRequest::SerializePayload() const {
  JsonValue payload;

  if (m_daemonNameHasBeenSet) {
    payload.WithString("daemonName", m_daemonName);
  }

  if (m_clusterArnHasBeenSet) {
    payload.WithString("clusterArn", m_clusterArn);
  }

  if (m_daemonTaskDefinitionArnHasBeenSet) {
    payload.WithString("daemonTaskDefinitionArn", m_daemonTaskDefinitionArn);
  }

  if (m_capacityProviderArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacityProviderArnsJsonList(m_capacityProviderArns.size());
    for (unsigned capacityProviderArnsIndex = 0; capacityProviderArnsIndex < capacityProviderArnsJsonList.GetLength();
         ++capacityProviderArnsIndex) {
      capacityProviderArnsJsonList[capacityProviderArnsIndex].AsString(m_capacityProviderArns[capacityProviderArnsIndex]);
    }
    payload.WithArray("capacityProviderArns", std::move(capacityProviderArnsJsonList));
  }

  if (m_deploymentConfigurationHasBeenSet) {
    payload.WithObject("deploymentConfiguration", m_deploymentConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  if (m_propagateTagsHasBeenSet) {
    payload.WithString("propagateTags", DaemonPropagateTagsMapper::GetNameForDaemonPropagateTags(m_propagateTags));
  }

  if (m_enableECSManagedTagsHasBeenSet) {
    payload.WithBool("enableECSManagedTags", m_enableECSManagedTags);
  }

  if (m_enableExecuteCommandHasBeenSet) {
    payload.WithBool("enableExecuteCommand", m_enableExecuteCommand);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDaemonRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.CreateDaemon"));
  return headers;
}
