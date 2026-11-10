/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RuntimeHooksConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RuntimeHooksConfiguration::RuntimeHooksConfiguration(JsonView jsonValue) { *this = jsonValue; }

RuntimeHooksConfiguration& RuntimeHooksConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("build")) {
    m_build = jsonValue.GetObject("build");
    m_buildHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeHooksConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_buildHasBeenSet) {
    payload.WithObject("build", m_build.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
