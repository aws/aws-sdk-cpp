/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ContinueServiceDeploymentRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ContinueServiceDeploymentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceDeploymentArnHasBeenSet) {
    payload.WithString("serviceDeploymentArn", m_serviceDeploymentArn);
  }

  if (m_hookIdHasBeenSet) {
    payload.WithString("hookId", m_hookId);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", DeploymentLifecycleHookActionMapper::GetNameForDeploymentLifecycleHookAction(m_action));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ContinueServiceDeploymentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ContinueServiceDeployment"));
  return headers;
}
