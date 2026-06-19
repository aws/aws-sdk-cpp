/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessEndpoint::HarnessEndpoint(JsonView jsonValue) { *this = jsonValue; }

HarnessEndpoint& HarnessEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("harnessId")) {
    m_harnessId = jsonValue.GetString("harnessId");
    m_harnessIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("harnessName")) {
    m_harnessName = jsonValue.GetString("harnessName");
    m_harnessNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointName")) {
    m_endpointName = jsonValue.GetString("endpointName");
    m_endpointNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = HarnessEndpointStatusMapper::GetHarnessEndpointStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("liveVersion")) {
    m_liveVersion = jsonValue.GetString("liveVersion");
    m_liveVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetVersion")) {
    m_targetVersion = jsonValue.GetString("targetVersion");
    m_targetVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_harnessIdHasBeenSet) {
    payload.WithString("harnessId", m_harnessId);
  }

  if (m_harnessNameHasBeenSet) {
    payload.WithString("harnessName", m_harnessName);
  }

  if (m_endpointNameHasBeenSet) {
    payload.WithString("endpointName", m_endpointName);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", HarnessEndpointStatusMapper::GetNameForHarnessEndpointStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_liveVersionHasBeenSet) {
    payload.WithString("liveVersion", m_liveVersion);
  }

  if (m_targetVersionHasBeenSet) {
    payload.WithString("targetVersion", m_targetVersion);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("failureReason", m_failureReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
