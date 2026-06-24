/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessSkillAwsSkillsSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessSkillAwsSkillsSource::HarnessSkillAwsSkillsSource(JsonView jsonValue) { *this = jsonValue; }

HarnessSkillAwsSkillsSource& HarnessSkillAwsSkillsSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("paths")) {
    Aws::Utils::Array<JsonView> pathsJsonList = jsonValue.GetArray("paths");
    for (unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex) {
      m_paths.push_back(pathsJsonList[pathsIndex].AsString());
    }
    m_pathsHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessSkillAwsSkillsSource::Jsonize() const {
  JsonValue payload;

  if (m_pathsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pathsJsonList(m_paths.size());
    for (unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex) {
      pathsJsonList[pathsIndex].AsString(m_paths[pathsIndex]);
    }
    payload.WithArray("paths", std::move(pathsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
