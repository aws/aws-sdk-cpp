/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/UpdateGatewayRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateGatewayRequest::SerializePayload() const {
  JsonValue payload;

  if (m_gatewayHasBeenSet) {
    payload.WithString("gateway", m_gateway);
  }

  if (m_infrastructureRoleArnHasBeenSet) {
    payload.WithString("infrastructureRoleArn", m_infrastructureRoleArn);
  }

  if (m_deletionProtectionHasBeenSet) {
    payload.WithBool("deletionProtection", m_deletionProtection);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_propagateTagsHasBeenSet) {
    payload.WithString("propagateTags", PropagateGatewayTagsMapper::GetNameForPropagateGatewayTags(m_propagateTags));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGatewayRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.UpdateGateway"));
  return headers;
}
