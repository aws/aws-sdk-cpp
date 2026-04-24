/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/LinearConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

LinearConfiguration::LinearConfiguration(JsonView jsonValue) { *this = jsonValue; }

LinearConfiguration& LinearConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stepPercent")) {
    m_stepPercent = jsonValue.GetDouble("stepPercent");
    m_stepPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepBakeTimeInMinutes")) {
    m_stepBakeTimeInMinutes = jsonValue.GetInteger("stepBakeTimeInMinutes");
    m_stepBakeTimeInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue LinearConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_stepPercentHasBeenSet) {
    payload.WithDouble("stepPercent", m_stepPercent);
  }

  if (m_stepBakeTimeInMinutesHasBeenSet) {
    payload.WithInteger("stepBakeTimeInMinutes", m_stepBakeTimeInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
