/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DeletionProtectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

DeletionProtectionConfiguration::DeletionProtectionConfiguration(JsonView jsonValue) { *this = jsonValue; }

DeletionProtectionConfiguration& DeletionProtectionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deletionProtectionStatus")) {
    m_deletionProtectionStatus =
        EnabledOrDisabledStateMapper::GetEnabledOrDisabledStateForName(jsonValue.GetString("deletionProtectionStatus"));
    m_deletionProtectionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletionProtectionThreshold")) {
    m_deletionProtectionThreshold = jsonValue.GetInteger("deletionProtectionThreshold");
    m_deletionProtectionThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue DeletionProtectionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_deletionProtectionStatusHasBeenSet) {
    payload.WithString("deletionProtectionStatus",
                       EnabledOrDisabledStateMapper::GetNameForEnabledOrDisabledState(m_deletionProtectionStatus));
  }

  if (m_deletionProtectionThresholdHasBeenSet) {
    payload.WithInteger("deletionProtectionThreshold", m_deletionProtectionThreshold);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
