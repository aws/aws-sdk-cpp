/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/UpdateDaemonRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDaemonRequest::SerializePayload() const {
  JsonValue payload;

  if (m_daemonArnHasBeenSet) {
    payload.WithString("daemonArn", m_daemonArn);
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

  if (m_propagateTagsHasBeenSet) {
    payload.WithString("propagateTags", DaemonPropagateTagsMapper::GetNameForDaemonPropagateTags(m_propagateTags));
  }

  if (m_enableECSManagedTagsHasBeenSet) {
    payload.WithBool("enableECSManagedTags", m_enableECSManagedTags);
  }

  if (m_enableExecuteCommandHasBeenSet) {
    payload.WithBool("enableExecuteCommand", m_enableExecuteCommand);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDaemonRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.UpdateDaemon"));
  return headers;
}
