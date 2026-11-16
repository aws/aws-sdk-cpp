/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteAllEntitySessionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteAllEntitySessionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_instanceIdHasBeenSet) {
    payload.WithString("InstanceId", m_instanceId);
  }

  if (m_entityIdHasBeenSet) {
    payload.WithString("EntityId", m_entityId);
  }

  if (m_entityTypeHasBeenSet) {
    payload.WithString("EntityType", SessionEntityTypeMapper::GetNameForSessionEntityType(m_entityType));
  }

  return payload.View().WriteReadable();
}
