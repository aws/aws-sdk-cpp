/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/HealthStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BCMDashboards {
namespace Model {

HealthStatus::HealthStatus(JsonView jsonValue) { *this = jsonValue; }

HealthStatus& HealthStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("statusCode")) {
    m_statusCode = HealthStatusCodeMapper::GetHealthStatusCodeForName(jsonValue.GetString("statusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastRefreshedAt")) {
    m_lastRefreshedAt = jsonValue.GetDouble("lastRefreshedAt");
    m_lastRefreshedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReasons")) {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for (unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex) {
      m_statusReasons.push_back(StatusReasonMapper::GetStatusReasonForName(statusReasonsJsonList[statusReasonsIndex].AsString()));
    }
    m_statusReasonsHasBeenSet = true;
  }
  return *this;
}

JsonValue HealthStatus::Jsonize() const {
  JsonValue payload;

  if (m_statusCodeHasBeenSet) {
    payload.WithString("statusCode", HealthStatusCodeMapper::GetNameForHealthStatusCode(m_statusCode));
  }

  if (m_lastRefreshedAtHasBeenSet) {
    payload.WithDouble("lastRefreshedAt", m_lastRefreshedAt.SecondsWithMSPrecision());
  }

  if (m_statusReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusReasonsJsonList(m_statusReasons.size());
    for (unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex) {
      statusReasonsJsonList[statusReasonsIndex].AsString(StatusReasonMapper::GetNameForStatusReason(m_statusReasons[statusReasonsIndex]));
    }
    payload.WithArray("statusReasons", std::move(statusReasonsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
