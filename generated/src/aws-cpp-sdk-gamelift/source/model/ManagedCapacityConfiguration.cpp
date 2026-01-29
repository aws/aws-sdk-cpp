/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/ManagedCapacityConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

ManagedCapacityConfiguration::ManagedCapacityConfiguration(JsonView jsonValue) { *this = jsonValue; }

ManagedCapacityConfiguration& ManagedCapacityConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ZeroCapacityStrategy")) {
    m_zeroCapacityStrategy = ZeroCapacityStrategyMapper::GetZeroCapacityStrategyForName(jsonValue.GetString("ZeroCapacityStrategy"));
    m_zeroCapacityStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScaleInAfterInactivityMinutes")) {
    m_scaleInAfterInactivityMinutes = jsonValue.GetInteger("ScaleInAfterInactivityMinutes");
    m_scaleInAfterInactivityMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedCapacityConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_zeroCapacityStrategyHasBeenSet) {
    payload.WithString("ZeroCapacityStrategy", ZeroCapacityStrategyMapper::GetNameForZeroCapacityStrategy(m_zeroCapacityStrategy));
  }

  if (m_scaleInAfterInactivityMinutesHasBeenSet) {
    payload.WithInteger("ScaleInAfterInactivityMinutes", m_scaleInAfterInactivityMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
