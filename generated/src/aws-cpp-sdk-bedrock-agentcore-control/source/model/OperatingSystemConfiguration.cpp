/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OperatingSystemConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

OperatingSystemConfiguration::OperatingSystemConfiguration(JsonView jsonValue) { *this = jsonValue; }

OperatingSystemConfiguration& OperatingSystemConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("linux")) {
    m_linux = jsonValue.GetObject("linux");
    m_linuxHasBeenSet = true;
  }
  return *this;
}

JsonValue OperatingSystemConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_linuxHasBeenSet) {
    payload.WithObject("linux", m_linux.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
