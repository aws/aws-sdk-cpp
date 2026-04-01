/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonTaskDefinitionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonTaskDefinitionSummary::DaemonTaskDefinitionSummary(JsonView jsonValue) { *this = jsonValue; }

DaemonTaskDefinitionSummary& DaemonTaskDefinitionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registeredAt")) {
    m_registeredAt = jsonValue.GetDouble("registeredAt");
    m_registeredAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registeredBy")) {
    m_registeredBy = jsonValue.GetString("registeredBy");
    m_registeredByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deleteRequestedAt")) {
    m_deleteRequestedAt = jsonValue.GetDouble("deleteRequestedAt");
    m_deleteRequestedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DaemonTaskDefinitionStatusMapper::GetDaemonTaskDefinitionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonTaskDefinitionSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_registeredAtHasBeenSet) {
    payload.WithDouble("registeredAt", m_registeredAt.SecondsWithMSPrecision());
  }

  if (m_registeredByHasBeenSet) {
    payload.WithString("registeredBy", m_registeredBy);
  }

  if (m_deleteRequestedAtHasBeenSet) {
    payload.WithDouble("deleteRequestedAt", m_deleteRequestedAt.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DaemonTaskDefinitionStatusMapper::GetNameForDaemonTaskDefinitionStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
