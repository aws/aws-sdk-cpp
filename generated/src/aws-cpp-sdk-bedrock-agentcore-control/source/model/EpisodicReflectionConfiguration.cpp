/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EpisodicReflectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EpisodicReflectionConfiguration::EpisodicReflectionConfiguration(JsonView jsonValue) { *this = jsonValue; }

EpisodicReflectionConfiguration& EpisodicReflectionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("namespaces")) {
    Aws::Utils::Array<JsonView> namespacesJsonList = jsonValue.GetArray("namespaces");
    for (unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex) {
      m_namespaces.push_back(namespacesJsonList[namespacesIndex].AsString());
    }
    m_namespacesHasBeenSet = true;
  }
  return *this;
}

JsonValue EpisodicReflectionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_namespacesHasBeenSet) {
    Aws::Utils::Array<JsonValue> namespacesJsonList(m_namespaces.size());
    for (unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex) {
      namespacesJsonList[namespacesIndex].AsString(m_namespaces[namespacesIndex]);
    }
    payload.WithArray("namespaces", std::move(namespacesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
