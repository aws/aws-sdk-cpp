/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/GetObjectTypeAttributeStatisticsStats.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

GetObjectTypeAttributeStatisticsStats::GetObjectTypeAttributeStatisticsStats(JsonView jsonValue) { *this = jsonValue; }

GetObjectTypeAttributeStatisticsStats& GetObjectTypeAttributeStatisticsStats::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Maximum")) {
    m_maximum = jsonValue.GetDouble("Maximum");
    m_maximumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Minimum")) {
    m_minimum = jsonValue.GetDouble("Minimum");
    m_minimumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Average")) {
    m_average = jsonValue.GetDouble("Average");
    m_averageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StandardDeviation")) {
    m_standardDeviation = jsonValue.GetDouble("StandardDeviation");
    m_standardDeviationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Percentiles")) {
    m_percentiles = jsonValue.GetObject("Percentiles");
    m_percentilesHasBeenSet = true;
  }
  return *this;
}

JsonValue GetObjectTypeAttributeStatisticsStats::Jsonize() const {
  JsonValue payload;

  if (m_maximumHasBeenSet) {
    payload.WithDouble("Maximum", m_maximum);
  }

  if (m_minimumHasBeenSet) {
    payload.WithDouble("Minimum", m_minimum);
  }

  if (m_averageHasBeenSet) {
    payload.WithDouble("Average", m_average);
  }

  if (m_standardDeviationHasBeenSet) {
    payload.WithDouble("StandardDeviation", m_standardDeviation);
  }

  if (m_percentilesHasBeenSet) {
    payload.WithObject("Percentiles", m_percentiles.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
