/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RateConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RateConfig::RateConfig(JsonView jsonValue) { *this = jsonValue; }

RateConfig& RateConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rate")) {
    m_rate = jsonValue.GetDouble("rate");
    m_rateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("period")) {
    m_period = PeriodMapper::GetPeriodForName(jsonValue.GetString("period"));
    m_periodHasBeenSet = true;
  }
  return *this;
}

JsonValue RateConfig::Jsonize() const {
  JsonValue payload;

  if (m_rateHasBeenSet) {
    payload.WithDouble("rate", m_rate);
  }

  if (m_periodHasBeenSet) {
    payload.WithString("period", PeriodMapper::GetNameForPeriod(m_period));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
