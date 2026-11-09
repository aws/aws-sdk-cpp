/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/WafConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

WafConfig::WafConfig(JsonView jsonValue) { *this = jsonValue; }

WafConfig& WafConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isWafEnabled")) {
    m_isWafEnabled = jsonValue.GetBool("isWafEnabled");
    m_isWafEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("wafRules")) {
    Aws::Utils::Array<JsonView> wafRulesJsonList = jsonValue.GetArray("wafRules");
    for (unsigned wafRulesIndex = 0; wafRulesIndex < wafRulesJsonList.GetLength(); ++wafRulesIndex) {
      m_wafRules.push_back(wafRulesJsonList[wafRulesIndex].AsObject());
    }
    m_wafRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue WafConfig::Jsonize() const {
  JsonValue payload;

  if (m_isWafEnabledHasBeenSet) {
    payload.WithBool("isWafEnabled", m_isWafEnabled);
  }

  if (m_wafRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> wafRulesJsonList(m_wafRules.size());
    for (unsigned wafRulesIndex = 0; wafRulesIndex < wafRulesJsonList.GetLength(); ++wafRulesIndex) {
      wafRulesJsonList[wafRulesIndex].AsObject(m_wafRules[wafRulesIndex].Jsonize());
    }
    payload.WithArray("wafRules", std::move(wafRulesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
