/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/TypeDistribution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

TypeDistribution::TypeDistribution(JsonView jsonValue) { *this = jsonValue; }

TypeDistribution& TypeDistribution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingType")) {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("percentage")) {
    m_percentage = jsonValue.GetDouble("percentage");
    m_percentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dominantSeverity")) {
    m_dominantSeverity = jsonValue.GetString("dominantSeverity");
    m_dominantSeverityHasBeenSet = true;
  }
  return *this;
}

JsonValue TypeDistribution::Jsonize() const {
  JsonValue payload;

  if (m_findingTypeHasBeenSet) {
    payload.WithString("findingType", m_findingType);
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  if (m_percentageHasBeenSet) {
    payload.WithDouble("percentage", m_percentage);
  }

  if (m_dominantSeverityHasBeenSet) {
    payload.WithString("dominantSeverity", m_dominantSeverity);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
