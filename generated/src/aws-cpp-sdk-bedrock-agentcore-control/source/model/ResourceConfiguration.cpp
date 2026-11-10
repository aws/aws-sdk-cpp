/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ResourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ResourceConfiguration::ResourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ResourceConfiguration& ResourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minimumMemoryInMiB")) {
    m_minimumMemoryInMiB = jsonValue.GetInteger("minimumMemoryInMiB");
    m_minimumMemoryInMiBHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_minimumMemoryInMiBHasBeenSet) {
    payload.WithInteger("minimumMemoryInMiB", m_minimumMemoryInMiB);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
