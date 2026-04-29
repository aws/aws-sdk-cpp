/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ToolDescriptionSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ToolDescriptionSource::ToolDescriptionSource(JsonView jsonValue) { *this = jsonValue; }

ToolDescriptionSource& ToolDescriptionSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolDescriptionText")) {
    m_toolDescriptionText = jsonValue.GetObject("toolDescriptionText");
    m_toolDescriptionTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurationBundle")) {
    m_configurationBundle = jsonValue.GetObject("configurationBundle");
    m_configurationBundleHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolDescriptionSource::Jsonize() const {
  JsonValue payload;

  if (m_toolDescriptionTextHasBeenSet) {
    payload.WithObject("toolDescriptionText", m_toolDescriptionText.Jsonize());
  }

  if (m_configurationBundleHasBeenSet) {
    payload.WithObject("configurationBundle", m_configurationBundle.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
