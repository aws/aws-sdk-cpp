/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ServiceConnectContainerConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ServiceConnectContainerConfiguration::ServiceConnectContainerConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceConnectContainerConfiguration& ServiceConnectContainerConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logLevel")) {
    m_logLevel = ServiceConnectContainerLogLevelMapper::GetServiceConnectContainerLogLevelForName(jsonValue.GetString("logLevel"));
    m_logLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceConnectContainerConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_logLevelHasBeenSet) {
    payload.WithString("logLevel", ServiceConnectContainerLogLevelMapper::GetNameForServiceConnectContainerLogLevel(m_logLevel));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
