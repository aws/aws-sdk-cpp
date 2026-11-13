/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/TrustedExecutionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

TrustedExecutionSummary::TrustedExecutionSummary(JsonView jsonValue) { *this = jsonValue; }

TrustedExecutionSummary& TrustedExecutionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isolationMode")) {
    m_isolationMode = IsolationModeMapper::GetIsolationModeForName(jsonValue.GetString("isolationMode"));
    m_isolationModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attestationPolicyStatus")) {
    m_attestationPolicyStatus =
        AttestationPolicyStatusMapper::GetAttestationPolicyStatusForName(jsonValue.GetString("attestationPolicyStatus"));
    m_attestationPolicyStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustedExecutionSummary::Jsonize() const {
  JsonValue payload;

  if (m_isolationModeHasBeenSet) {
    payload.WithString("isolationMode", IsolationModeMapper::GetNameForIsolationMode(m_isolationMode));
  }

  if (m_attestationPolicyStatusHasBeenSet) {
    payload.WithString("attestationPolicyStatus",
                       AttestationPolicyStatusMapper::GetNameForAttestationPolicyStatus(m_attestationPolicyStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
