/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ConfigurationBundleToolEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ConfigurationBundleToolEntry::ConfigurationBundleToolEntry(JsonView jsonValue) { *this = jsonValue; }

ConfigurationBundleToolEntry& ConfigurationBundleToolEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolName")) {
    m_toolName = jsonValue.GetString("toolName");
    m_toolNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolDescriptionJsonPath")) {
    m_toolDescriptionJsonPath = jsonValue.GetString("toolDescriptionJsonPath");
    m_toolDescriptionJsonPathHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationBundleToolEntry::Jsonize() const {
  JsonValue payload;

  if (m_toolNameHasBeenSet) {
    payload.WithString("toolName", m_toolName);
  }

  if (m_toolDescriptionJsonPathHasBeenSet) {
    payload.WithString("toolDescriptionJsonPath", m_toolDescriptionJsonPath);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
