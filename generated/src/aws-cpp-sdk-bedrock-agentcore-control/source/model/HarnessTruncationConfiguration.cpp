/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessTruncationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessTruncationConfiguration::HarnessTruncationConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessTruncationConfiguration& HarnessTruncationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("strategy")) {
    m_strategy = HarnessTruncationStrategyMapper::GetHarnessTruncationStrategyForName(jsonValue.GetString("strategy"));
    m_strategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("config")) {
    m_config = jsonValue.GetObject("config");
    m_configHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessTruncationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_strategyHasBeenSet) {
    payload.WithString("strategy", HarnessTruncationStrategyMapper::GetNameForHarnessTruncationStrategy(m_strategy));
  }

  if (m_configHasBeenSet) {
    payload.WithObject("config", m_config.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
