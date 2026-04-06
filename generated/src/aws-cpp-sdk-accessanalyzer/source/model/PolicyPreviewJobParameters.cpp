/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyPreviewJobParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {

PolicyPreviewJobParameters::PolicyPreviewJobParameters(JsonView jsonValue) { *this = jsonValue; }

PolicyPreviewJobParameters& PolicyPreviewJobParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyConfigurations")) {
    Aws::Utils::Array<JsonView> policyConfigurationsJsonList = jsonValue.GetArray("policyConfigurations");
    for (unsigned policyConfigurationsIndex = 0; policyConfigurationsIndex < policyConfigurationsJsonList.GetLength();
         ++policyConfigurationsIndex) {
      m_policyConfigurations.push_back(policyConfigurationsJsonList[policyConfigurationsIndex].AsObject());
    }
    m_policyConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyPreviewJobParameters::Jsonize() const {
  JsonValue payload;

  if (m_startTimeHasBeenSet) {
    payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endTimeHasBeenSet) {
    payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_policyConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> policyConfigurationsJsonList(m_policyConfigurations.size());
    for (unsigned policyConfigurationsIndex = 0; policyConfigurationsIndex < policyConfigurationsJsonList.GetLength();
         ++policyConfigurationsIndex) {
      policyConfigurationsJsonList[policyConfigurationsIndex].AsObject(m_policyConfigurations[policyConfigurationsIndex].Jsonize());
    }
    payload.WithArray("policyConfigurations", std::move(policyConfigurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
