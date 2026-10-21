/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/Gateway.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

Gateway::Gateway(JsonView jsonValue) { *this = jsonValue; }

Gateway& Gateway::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = GatewayStatusMapper::GetGatewayStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failures")) {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("infrastructureRoleArn")) {
    m_infrastructureRoleArn = jsonValue.GetString("infrastructureRoleArn");
    m_infrastructureRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletionProtection")) {
    m_deletionProtection = jsonValue.GetBool("deletionProtection");
    m_deletionProtectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessType")) {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("accessType"));
    m_accessTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("propagateTags")) {
    m_propagateTags = PropagateGatewayTagsMapper::GetPropagateGatewayTagsForName(jsonValue.GetString("propagateTags"));
    m_propagateTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Gateway::Jsonize() const {
  JsonValue payload;

  if (m_gatewayArnHasBeenSet) {
    payload.WithString("gatewayArn", m_gatewayArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", GatewayStatusMapper::GetNameForGatewayStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_failuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> failuresJsonList(m_failures.size());
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      failuresJsonList[failuresIndex].AsObject(m_failures[failuresIndex].Jsonize());
    }
    payload.WithArray("failures", std::move(failuresJsonList));
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

  if (m_accessTypeHasBeenSet) {
    payload.WithString("accessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  if (m_propagateTagsHasBeenSet) {
    payload.WithString("propagateTags", PropagateGatewayTagsMapper::GetNameForPropagateGatewayTags(m_propagateTags));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
