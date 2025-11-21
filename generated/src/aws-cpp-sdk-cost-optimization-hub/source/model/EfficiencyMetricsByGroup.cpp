/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cost-optimization-hub/model/EfficiencyMetricsByGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CostOptimizationHub {
namespace Model {

EfficiencyMetricsByGroup::EfficiencyMetricsByGroup(JsonView jsonValue) { *this = jsonValue; }

EfficiencyMetricsByGroup& EfficiencyMetricsByGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metricsByTime")) {
    Aws::Utils::Array<JsonView> metricsByTimeJsonList = jsonValue.GetArray("metricsByTime");
    for (unsigned metricsByTimeIndex = 0; metricsByTimeIndex < metricsByTimeJsonList.GetLength(); ++metricsByTimeIndex) {
      m_metricsByTime.push_back(metricsByTimeJsonList[metricsByTimeIndex].AsObject());
    }
    m_metricsByTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("group")) {
    m_group = jsonValue.GetString("group");
    m_groupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue EfficiencyMetricsByGroup::Jsonize() const {
  JsonValue payload;

  if (m_metricsByTimeHasBeenSet) {
    Aws::Utils::Array<JsonValue> metricsByTimeJsonList(m_metricsByTime.size());
    for (unsigned metricsByTimeIndex = 0; metricsByTimeIndex < metricsByTimeJsonList.GetLength(); ++metricsByTimeIndex) {
      metricsByTimeJsonList[metricsByTimeIndex].AsObject(m_metricsByTime[metricsByTimeIndex].Jsonize());
    }
    payload.WithArray("metricsByTime", std::move(metricsByTimeJsonList));
  }

  if (m_groupHasBeenSet) {
    payload.WithString("group", m_group);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
