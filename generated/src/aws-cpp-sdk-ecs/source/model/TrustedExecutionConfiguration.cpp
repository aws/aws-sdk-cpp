/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/TrustedExecutionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

TrustedExecutionConfiguration::TrustedExecutionConfiguration(JsonView jsonValue) { *this = jsonValue; }

TrustedExecutionConfiguration& TrustedExecutionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isolationMode")) {
    m_isolationMode = IsolationModeMapper::GetIsolationModeForName(jsonValue.GetString("isolationMode"));
    m_isolationModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attestationPolicy")) {
    m_attestationPolicy = jsonValue.GetString("attestationPolicy");
    m_attestationPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustedExecutionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_isolationModeHasBeenSet) {
    payload.WithString("isolationMode", IsolationModeMapper::GetNameForIsolationMode(m_isolationMode));
  }

  if (m_attestationPolicyHasBeenSet) {
    payload.WithString("attestationPolicy", m_attestationPolicy);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
