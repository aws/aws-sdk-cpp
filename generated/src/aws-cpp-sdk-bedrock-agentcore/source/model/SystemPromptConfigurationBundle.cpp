/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SystemPromptConfigurationBundle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SystemPromptConfigurationBundle::SystemPromptConfigurationBundle(JsonView jsonValue) { *this = jsonValue; }

SystemPromptConfigurationBundle& SystemPromptConfigurationBundle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bundleArn")) {
    m_bundleArn = jsonValue.GetString("bundleArn");
    m_bundleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemPromptJsonPath")) {
    m_systemPromptJsonPath = jsonValue.GetString("systemPromptJsonPath");
    m_systemPromptJsonPathHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemPromptConfigurationBundle::Jsonize() const {
  JsonValue payload;

  if (m_bundleArnHasBeenSet) {
    payload.WithString("bundleArn", m_bundleArn);
  }

  if (m_versionIdHasBeenSet) {
    payload.WithString("versionId", m_versionId);
  }

  if (m_systemPromptJsonPathHasBeenSet) {
    payload.WithString("systemPromptJsonPath", m_systemPromptJsonPath);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
