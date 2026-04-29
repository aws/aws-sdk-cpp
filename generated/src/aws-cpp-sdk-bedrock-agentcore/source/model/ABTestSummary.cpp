/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ABTestSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ABTestSummary::ABTestSummary(JsonView jsonValue) { *this = jsonValue; }

ABTestSummary& ABTestSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("abTestId")) {
    m_abTestId = jsonValue.GetString("abTestId");
    m_abTestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("abTestArn")) {
    m_abTestArn = jsonValue.GetString("abTestArn");
    m_abTestArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ABTestStatusMapper::GetABTestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStatus")) {
    m_executionStatus = ABTestExecutionStatusMapper::GetABTestExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
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

JsonValue ABTestSummary::Jsonize() const {
  JsonValue payload;

  if (m_abTestIdHasBeenSet) {
    payload.WithString("abTestId", m_abTestId);
  }

  if (m_abTestArnHasBeenSet) {
    payload.WithString("abTestArn", m_abTestArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ABTestStatusMapper::GetNameForABTestStatus(m_status));
  }

  if (m_executionStatusHasBeenSet) {
    payload.WithString("executionStatus", ABTestExecutionStatusMapper::GetNameForABTestExecutionStatus(m_executionStatus));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_gatewayArnHasBeenSet) {
    payload.WithString("gatewayArn", m_gatewayArn);
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
}  // namespace BedrockAgentCore
}  // namespace Aws
