/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/NetworkConnectorVersionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

NetworkConnectorVersionSummary::NetworkConnectorVersionSummary(JsonView jsonValue) { *this = jsonValue; }

NetworkConnectorVersionSummary& NetworkConnectorVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VersionArn")) {
    m_versionArn = jsonValue.GetString("VersionArn");
    m_versionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetInt64("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = NetworkConnectorStateMapper::GetNetworkConnectorStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StateReason")) {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StateReasonCode")) {
    m_stateReasonCode =
        NetworkConnectorStateReasonCodeMapper::GetNetworkConnectorStateReasonCodeForName(jsonValue.GetString("StateReasonCode"));
    m_stateReasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModified")) {
    m_lastModified = jsonValue.GetString("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConnectorVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_versionArnHasBeenSet) {
    payload.WithString("VersionArn", m_versionArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_versionHasBeenSet) {
    payload.WithInt64("Version", m_version);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", NetworkConnectorStateMapper::GetNameForNetworkConnectorState(m_state));
  }

  if (m_stateReasonHasBeenSet) {
    payload.WithString("StateReason", m_stateReason);
  }

  if (m_stateReasonCodeHasBeenSet) {
    payload.WithString("StateReasonCode",
                       NetworkConnectorStateReasonCodeMapper::GetNameForNetworkConnectorStateReasonCode(m_stateReasonCode));
  }

  if (m_lastModifiedHasBeenSet) {
    payload.WithString("LastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
