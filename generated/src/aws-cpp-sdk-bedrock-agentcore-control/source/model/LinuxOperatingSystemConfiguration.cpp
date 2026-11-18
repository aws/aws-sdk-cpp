/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LinuxOperatingSystemConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LinuxOperatingSystemConfiguration::LinuxOperatingSystemConfiguration(JsonView jsonValue) { *this = jsonValue; }

LinuxOperatingSystemConfiguration& LinuxOperatingSystemConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("privilegeMode")) {
    m_privilegeMode = PrivilegeModeMapper::GetPrivilegeModeForName(jsonValue.GetString("privilegeMode"));
    m_privilegeModeHasBeenSet = true;
  }
  return *this;
}

JsonValue LinuxOperatingSystemConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_privilegeModeHasBeenSet) {
    payload.WithString("privilegeMode", PrivilegeModeMapper::GetNameForPrivilegeMode(m_privilegeMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
