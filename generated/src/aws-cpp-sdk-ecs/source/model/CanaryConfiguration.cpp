/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/CanaryConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

CanaryConfiguration::CanaryConfiguration(JsonView jsonValue) { *this = jsonValue; }

CanaryConfiguration& CanaryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("canaryPercent")) {
    m_canaryPercent = jsonValue.GetDouble("canaryPercent");
    m_canaryPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("canaryBakeTimeInMinutes")) {
    m_canaryBakeTimeInMinutes = jsonValue.GetInteger("canaryBakeTimeInMinutes");
    m_canaryBakeTimeInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue CanaryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_canaryPercentHasBeenSet) {
    payload.WithDouble("canaryPercent", m_canaryPercent);
  }

  if (m_canaryBakeTimeInMinutesHasBeenSet) {
    payload.WithInteger("canaryBakeTimeInMinutes", m_canaryBakeTimeInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
