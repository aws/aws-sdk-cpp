/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QuestionPointsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

QuestionPointsConfiguration::QuestionPointsConfiguration(JsonView jsonValue) { *this = jsonValue; }

QuestionPointsConfiguration& QuestionPointsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxPointValue")) {
    m_maxPointValue = jsonValue.GetInteger("MaxPointValue");
    m_maxPointValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MinPointValue")) {
    m_minPointValue = jsonValue.GetInteger("MinPointValue");
    m_minPointValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsBonus")) {
    m_isBonus = jsonValue.GetBool("IsBonus");
    m_isBonusHasBeenSet = true;
  }
  return *this;
}

JsonValue QuestionPointsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_maxPointValueHasBeenSet) {
    payload.WithInteger("MaxPointValue", m_maxPointValue);
  }

  if (m_minPointValueHasBeenSet) {
    payload.WithInteger("MinPointValue", m_minPointValue);
  }

  if (m_isBonusHasBeenSet) {
    payload.WithBool("IsBonus", m_isBonus);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
