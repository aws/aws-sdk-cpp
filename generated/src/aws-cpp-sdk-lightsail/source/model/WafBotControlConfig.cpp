/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/WafBotControlConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

WafBotControlConfig::WafBotControlConfig(JsonView jsonValue) { *this = jsonValue; }

WafBotControlConfig& WafBotControlConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inspectionLevel")) {
    m_inspectionLevel = WafInspectionLevelEnumMapper::GetWafInspectionLevelEnumForName(jsonValue.GetString("inspectionLevel"));
    m_inspectionLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue WafBotControlConfig::Jsonize() const {
  JsonValue payload;

  if (m_inspectionLevelHasBeenSet) {
    payload.WithString("inspectionLevel", WafInspectionLevelEnumMapper::GetNameForWafInspectionLevelEnum(m_inspectionLevel));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
