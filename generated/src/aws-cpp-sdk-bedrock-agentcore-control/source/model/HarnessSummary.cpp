/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessSummary::HarnessSummary(JsonView jsonValue) { *this = jsonValue; }

HarnessSummary& HarnessSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("harnessId")) {
    m_harnessId = jsonValue.GetString("harnessId");
    m_harnessIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("harnessName")) {
    m_harnessName = jsonValue.GetString("harnessName");
    m_harnessNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = HarnessStatusMapper::GetHarnessStatusForName(jsonValue.GetString("status"));
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
  return *this;
}

JsonValue HarnessSummary::Jsonize() const {
  JsonValue payload;

  if (m_harnessIdHasBeenSet) {
    payload.WithString("harnessId", m_harnessId);
  }

  if (m_harnessNameHasBeenSet) {
    payload.WithString("harnessName", m_harnessName);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", HarnessStatusMapper::GetNameForHarnessStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
