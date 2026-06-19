/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/MonitoringConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

MonitoringConfiguration::MonitoringConfiguration(JsonView jsonValue) { *this = jsonValue; }

MonitoringConfiguration& MonitoringConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metricConfigurations")) {
    Aws::Utils::Array<JsonView> metricConfigurationsJsonList = jsonValue.GetArray("metricConfigurations");
    for (unsigned metricConfigurationsIndex = 0; metricConfigurationsIndex < metricConfigurationsJsonList.GetLength();
         ++metricConfigurationsIndex) {
      m_metricConfigurations.push_back(metricConfigurationsJsonList[metricConfigurationsIndex].AsObject());
    }
    m_metricConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitoringConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_metricConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> metricConfigurationsJsonList(m_metricConfigurations.size());
    for (unsigned metricConfigurationsIndex = 0; metricConfigurationsIndex < metricConfigurationsJsonList.GetLength();
         ++metricConfigurationsIndex) {
      metricConfigurationsJsonList[metricConfigurationsIndex].AsObject(m_metricConfigurations[metricConfigurationsIndex].Jsonize());
    }
    payload.WithArray("metricConfigurations", std::move(metricConfigurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
