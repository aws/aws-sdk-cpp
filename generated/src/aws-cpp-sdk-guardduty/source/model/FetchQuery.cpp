/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FetchQuery.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FetchQuery::FetchQuery(JsonView jsonValue) { *this = jsonValue; }

FetchQuery& FetchQuery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("criteria")) {
    Aws::Utils::Array<JsonView> criteriaJsonList = jsonValue.GetArray("criteria");
    for (unsigned criteriaIndex = 0; criteriaIndex < criteriaJsonList.GetLength(); ++criteriaIndex) {
      m_criteria.push_back(criteriaJsonList[criteriaIndex].AsObject());
    }
    m_criteriaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeWindow")) {
    m_timeWindow = jsonValue.GetObject("timeWindow");
    m_timeWindowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rowLimit")) {
    m_rowLimit = jsonValue.GetInteger("rowLimit");
    m_rowLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("indicator")) {
    m_indicator = jsonValue.GetString("indicator");
    m_indicatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("indicatorType")) {
    m_indicatorType = InvestigationIndicatorTypeMapper::GetInvestigationIndicatorTypeForName(jsonValue.GetString("indicatorType"));
    m_indicatorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingType")) {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FetchQuery::Jsonize() const {
  JsonValue payload;

  if (m_criteriaHasBeenSet) {
    Aws::Utils::Array<JsonValue> criteriaJsonList(m_criteria.size());
    for (unsigned criteriaIndex = 0; criteriaIndex < criteriaJsonList.GetLength(); ++criteriaIndex) {
      criteriaJsonList[criteriaIndex].AsObject(m_criteria[criteriaIndex].Jsonize());
    }
    payload.WithArray("criteria", std::move(criteriaJsonList));
  }

  if (m_timeWindowHasBeenSet) {
    payload.WithObject("timeWindow", m_timeWindow.Jsonize());
  }

  if (m_rowLimitHasBeenSet) {
    payload.WithInteger("rowLimit", m_rowLimit);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_indicatorHasBeenSet) {
    payload.WithString("indicator", m_indicator);
  }

  if (m_indicatorTypeHasBeenSet) {
    payload.WithString("indicatorType", InvestigationIndicatorTypeMapper::GetNameForInvestigationIndicatorType(m_indicatorType));
  }

  if (m_findingTypeHasBeenSet) {
    payload.WithString("findingType", m_findingType);
  }

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
