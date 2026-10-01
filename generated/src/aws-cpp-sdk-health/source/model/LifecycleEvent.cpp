/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/health/model/LifecycleEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {

LifecycleEvent::LifecycleEvent(JsonView jsonValue) { *this = jsonValue; }

LifecycleEvent& LifecycleEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lifecycleEventType")) {
    m_lifecycleEventType = jsonValue.GetString("lifecycleEventType");
    m_lifecycleEventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("date")) {
    m_date = jsonValue.GetDouble("date");
    m_dateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impactRisks")) {
    Aws::Utils::Array<JsonView> impactRisksJsonList = jsonValue.GetArray("impactRisks");
    for (unsigned impactRisksIndex = 0; impactRisksIndex < impactRisksJsonList.GetLength(); ++impactRisksIndex) {
      m_impactRisks.push_back(impactRisksJsonList[impactRisksIndex].AsString());
    }
    m_impactRisksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue LifecycleEvent::Jsonize() const {
  JsonValue payload;

  if (m_lifecycleEventTypeHasBeenSet) {
    payload.WithString("lifecycleEventType", m_lifecycleEventType);
  }

  if (m_dateHasBeenSet) {
    payload.WithDouble("date", m_date.SecondsWithMSPrecision());
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_impactRisksHasBeenSet) {
    Aws::Utils::Array<JsonValue> impactRisksJsonList(m_impactRisks.size());
    for (unsigned impactRisksIndex = 0; impactRisksIndex < impactRisksJsonList.GetLength(); ++impactRisksIndex) {
      impactRisksJsonList[impactRisksIndex].AsString(m_impactRisks[impactRisksIndex]);
    }
    payload.WithArray("impactRisks", std::move(impactRisksJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace Health
}  // namespace Aws
