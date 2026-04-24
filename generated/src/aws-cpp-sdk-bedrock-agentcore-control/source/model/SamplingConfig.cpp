/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SamplingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SamplingConfig::SamplingConfig(JsonView jsonValue) { *this = jsonValue; }

SamplingConfig& SamplingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("samplingPercentage")) {
    m_samplingPercentage = jsonValue.GetDouble("samplingPercentage");
    m_samplingPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue SamplingConfig::Jsonize() const {
  JsonValue payload;

  if (m_samplingPercentageHasBeenSet) {
    payload.WithDouble("samplingPercentage", m_samplingPercentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
