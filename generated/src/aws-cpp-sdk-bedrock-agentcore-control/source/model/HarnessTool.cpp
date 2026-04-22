/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessTool.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessTool::HarnessTool(JsonView jsonValue) { *this = jsonValue; }

HarnessTool& HarnessTool::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = HarnessToolTypeMapper::GetHarnessToolTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("config")) {
    m_config = jsonValue.GetObject("config");
    m_configHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessTool::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", HarnessToolTypeMapper::GetNameForHarnessToolType(m_type));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_configHasBeenSet) {
    payload.WithObject("config", m_config.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
