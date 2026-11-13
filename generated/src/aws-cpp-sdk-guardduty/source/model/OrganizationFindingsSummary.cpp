/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/OrganizationFindingsSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

OrganizationFindingsSummary::OrganizationFindingsSummary(JsonView jsonValue) { *this = jsonValue; }

OrganizationFindingsSummary& OrganizationFindingsSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalFindings")) {
    m_totalFindings = jsonValue.GetInteger("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityBreakdown")) {
    m_severityBreakdown = jsonValue.GetObject("severityBreakdown");
    m_severityBreakdownHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topFindingTypes")) {
    Aws::Utils::Array<JsonView> topFindingTypesJsonList = jsonValue.GetArray("topFindingTypes");
    for (unsigned topFindingTypesIndex = 0; topFindingTypesIndex < topFindingTypesJsonList.GetLength(); ++topFindingTypesIndex) {
      m_topFindingTypes.push_back(topFindingTypesJsonList[topFindingTypesIndex].AsObject());
    }
    m_topFindingTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("byTimeWindow")) {
    Aws::Utils::Array<JsonView> byTimeWindowJsonList = jsonValue.GetArray("byTimeWindow");
    for (unsigned byTimeWindowIndex = 0; byTimeWindowIndex < byTimeWindowJsonList.GetLength(); ++byTimeWindowIndex) {
      m_byTimeWindow.push_back(byTimeWindowJsonList[byTimeWindowIndex].AsObject());
    }
    m_byTimeWindowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalAccountCount")) {
    m_totalAccountCount = jsonValue.GetInteger("totalAccountCount");
    m_totalAccountCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedAccountCount")) {
    m_affectedAccountCount = jsonValue.GetInteger("affectedAccountCount");
    m_affectedAccountCountHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationFindingsSummary::Jsonize() const {
  JsonValue payload;

  if (m_totalFindingsHasBeenSet) {
    payload.WithInteger("totalFindings", m_totalFindings);
  }

  if (m_severityBreakdownHasBeenSet) {
    payload.WithObject("severityBreakdown", m_severityBreakdown.Jsonize());
  }

  if (m_topFindingTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> topFindingTypesJsonList(m_topFindingTypes.size());
    for (unsigned topFindingTypesIndex = 0; topFindingTypesIndex < topFindingTypesJsonList.GetLength(); ++topFindingTypesIndex) {
      topFindingTypesJsonList[topFindingTypesIndex].AsObject(m_topFindingTypes[topFindingTypesIndex].Jsonize());
    }
    payload.WithArray("topFindingTypes", std::move(topFindingTypesJsonList));
  }

  if (m_byTimeWindowHasBeenSet) {
    Aws::Utils::Array<JsonValue> byTimeWindowJsonList(m_byTimeWindow.size());
    for (unsigned byTimeWindowIndex = 0; byTimeWindowIndex < byTimeWindowJsonList.GetLength(); ++byTimeWindowIndex) {
      byTimeWindowJsonList[byTimeWindowIndex].AsObject(m_byTimeWindow[byTimeWindowIndex].Jsonize());
    }
    payload.WithArray("byTimeWindow", std::move(byTimeWindowJsonList));
  }

  if (m_totalAccountCountHasBeenSet) {
    payload.WithInteger("totalAccountCount", m_totalAccountCount);
  }

  if (m_affectedAccountCountHasBeenSet) {
    payload.WithInteger("affectedAccountCount", m_affectedAccountCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
