/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

OutputConfig::OutputConfig(JsonView jsonValue) { *this = jsonValue; }

OutputConfig& OutputConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cloudWatchConfig")) {
    m_cloudWatchConfig = jsonValue.GetObject("cloudWatchConfig");
    m_cloudWatchConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputConfig::Jsonize() const {
  JsonValue payload;

  if (m_cloudWatchConfigHasBeenSet) {
    payload.WithObject("cloudWatchConfig", m_cloudWatchConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
