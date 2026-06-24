/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QuestionOptionPointsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

QuestionOptionPointsConfiguration::QuestionOptionPointsConfiguration(JsonView jsonValue) { *this = jsonValue; }

QuestionOptionPointsConfiguration& QuestionOptionPointsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PointValue")) {
    m_pointValue = jsonValue.GetInteger("PointValue");
    m_pointValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsBonus")) {
    m_isBonus = jsonValue.GetBool("IsBonus");
    m_isBonusHasBeenSet = true;
  }
  return *this;
}

JsonValue QuestionOptionPointsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_pointValueHasBeenSet) {
    payload.WithInteger("PointValue", m_pointValue);
  }

  if (m_isBonusHasBeenSet) {
    payload.WithBool("IsBonus", m_isBonus);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
