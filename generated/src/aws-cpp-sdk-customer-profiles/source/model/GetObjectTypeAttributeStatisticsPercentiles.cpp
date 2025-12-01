/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/GetObjectTypeAttributeStatisticsPercentiles.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

GetObjectTypeAttributeStatisticsPercentiles::GetObjectTypeAttributeStatisticsPercentiles(JsonView jsonValue) { *this = jsonValue; }

GetObjectTypeAttributeStatisticsPercentiles& GetObjectTypeAttributeStatisticsPercentiles::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("P5")) {
    m_p5 = jsonValue.GetDouble("P5");
    m_p5HasBeenSet = true;
  }
  if (jsonValue.ValueExists("P25")) {
    m_p25 = jsonValue.GetDouble("P25");
    m_p25HasBeenSet = true;
  }
  if (jsonValue.ValueExists("P50")) {
    m_p50 = jsonValue.GetDouble("P50");
    m_p50HasBeenSet = true;
  }
  if (jsonValue.ValueExists("P75")) {
    m_p75 = jsonValue.GetDouble("P75");
    m_p75HasBeenSet = true;
  }
  if (jsonValue.ValueExists("P95")) {
    m_p95 = jsonValue.GetDouble("P95");
    m_p95HasBeenSet = true;
  }
  return *this;
}

JsonValue GetObjectTypeAttributeStatisticsPercentiles::Jsonize() const {
  JsonValue payload;

  if (m_p5HasBeenSet) {
    payload.WithDouble("P5", m_p5);
  }

  if (m_p25HasBeenSet) {
    payload.WithDouble("P25", m_p25);
  }

  if (m_p50HasBeenSet) {
    payload.WithDouble("P50", m_p50);
  }

  if (m_p75HasBeenSet) {
    payload.WithDouble("P75", m_p75);
  }

  if (m_p95HasBeenSet) {
    payload.WithDouble("P95", m_p95);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
