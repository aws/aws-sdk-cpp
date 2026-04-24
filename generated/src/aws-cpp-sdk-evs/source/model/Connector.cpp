/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/Connector.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {

Connector::Connector(JsonView jsonValue) { *this = jsonValue; }

Connector& Connector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("environmentId")) {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorId")) {
    m_connectorId = jsonValue.GetString("connectorId");
    m_connectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applianceFqdn")) {
    m_applianceFqdn = jsonValue.GetString("applianceFqdn");
    m_applianceFqdnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretArn")) {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ConnectorStateMapper::GetConnectorStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateDetails")) {
    m_stateDetails = jsonValue.GetString("stateDetails");
    m_stateDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CheckResultMapper::GetCheckResultForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checks")) {
    Aws::Utils::Array<JsonView> checksJsonList = jsonValue.GetArray("checks");
    for (unsigned checksIndex = 0; checksIndex < checksJsonList.GetLength(); ++checksIndex) {
      m_checks.push_back(checksJsonList[checksIndex].AsObject());
    }
    m_checksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modifiedAt")) {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Connector::Jsonize() const {
  JsonValue payload;

  if (m_environmentIdHasBeenSet) {
    payload.WithString("environmentId", m_environmentId);
  }

  if (m_connectorIdHasBeenSet) {
    payload.WithString("connectorId", m_connectorId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", ConnectorTypeMapper::GetNameForConnectorType(m_type));
  }

  if (m_applianceFqdnHasBeenSet) {
    payload.WithString("applianceFqdn", m_applianceFqdn);
  }

  if (m_secretArnHasBeenSet) {
    payload.WithString("secretArn", m_secretArn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", ConnectorStateMapper::GetNameForConnectorState(m_state));
  }

  if (m_stateDetailsHasBeenSet) {
    payload.WithString("stateDetails", m_stateDetails);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CheckResultMapper::GetNameForCheckResult(m_status));
  }

  if (m_checksHasBeenSet) {
    Aws::Utils::Array<JsonValue> checksJsonList(m_checks.size());
    for (unsigned checksIndex = 0; checksIndex < checksJsonList.GetLength(); ++checksIndex) {
      checksJsonList[checksIndex].AsObject(m_checks[checksIndex].Jsonize());
    }
    payload.WithArray("checks", std::move(checksJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_modifiedAtHasBeenSet) {
    payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
