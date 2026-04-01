/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/Association.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

Association::Association(JsonView jsonValue) { *this = jsonValue; }

Association& Association::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ValidationStatusMapper::GetValidationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associationId")) {
    m_associationId = jsonValue.GetString("associationId");
    m_associationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceId")) {
    m_serviceId = jsonValue.GetString("serviceId");
    m_serviceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Association::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ValidationStatusMapper::GetNameForValidationStatus(m_status));
  }

  if (m_associationIdHasBeenSet) {
    payload.WithString("associationId", m_associationId);
  }

  if (m_serviceIdHasBeenSet) {
    payload.WithString("serviceId", m_serviceId);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
