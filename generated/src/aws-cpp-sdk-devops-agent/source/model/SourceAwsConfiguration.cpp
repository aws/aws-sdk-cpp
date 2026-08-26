/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SourceAwsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SourceAwsConfiguration::SourceAwsConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceAwsConfiguration& SourceAwsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountType")) {
    m_accountType = SourceAccountTypeMapper::GetSourceAccountTypeForName(jsonValue.GetString("accountType"));
    m_accountTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assumableRoleArn")) {
    m_assumableRoleArn = jsonValue.GetString("assumableRoleArn");
    m_assumableRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("externalId")) {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentElevatedRoleArn")) {
    m_agentElevatedRoleArn = jsonValue.GetString("agentElevatedRoleArn");
    m_agentElevatedRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentElevatedRoleArnStatus")) {
    m_agentElevatedRoleArnStatus = ValidationStatusMapper::GetValidationStatusForName(jsonValue.GetString("agentElevatedRoleArnStatus"));
    m_agentElevatedRoleArnStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceAwsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_accountTypeHasBeenSet) {
    payload.WithString("accountType", SourceAccountTypeMapper::GetNameForSourceAccountType(m_accountType));
  }

  if (m_assumableRoleArnHasBeenSet) {
    payload.WithString("assumableRoleArn", m_assumableRoleArn);
  }

  if (m_externalIdHasBeenSet) {
    payload.WithString("externalId", m_externalId);
  }

  if (m_agentElevatedRoleArnHasBeenSet) {
    payload.WithString("agentElevatedRoleArn", m_agentElevatedRoleArn);
  }

  if (m_agentElevatedRoleArnStatusHasBeenSet) {
    payload.WithString("agentElevatedRoleArnStatus", ValidationStatusMapper::GetNameForValidationStatus(m_agentElevatedRoleArnStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
