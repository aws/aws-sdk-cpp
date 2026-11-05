/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/LogDriverVolumeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

LogDriverVolumeConfiguration::LogDriverVolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

LogDriverVolumeConfiguration& LogDriverVolumeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("driver")) {
    m_driver = LogDriverMapper::GetLogDriverForName(jsonValue.GetString("driver"));
    m_driverHasBeenSet = true;
  }
  return *this;
}

JsonValue LogDriverVolumeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_driverHasBeenSet) {
    payload.WithString("driver", LogDriverMapper::GetNameForLogDriver(m_driver));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
