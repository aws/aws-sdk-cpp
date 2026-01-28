/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/EventSourceMappingLoggingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

EventSourceMappingLoggingConfig::EventSourceMappingLoggingConfig(JsonView jsonValue) { *this = jsonValue; }

EventSourceMappingLoggingConfig& EventSourceMappingLoggingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SystemLogLevel")) {
    m_systemLogLevel =
        EventSourceMappingSystemLogLevelMapper::GetEventSourceMappingSystemLogLevelForName(jsonValue.GetString("SystemLogLevel"));
    m_systemLogLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue EventSourceMappingLoggingConfig::Jsonize() const {
  JsonValue payload;

  if (m_systemLogLevelHasBeenSet) {
    payload.WithString("SystemLogLevel",
                       EventSourceMappingSystemLogLevelMapper::GetNameForEventSourceMappingSystemLogLevel(m_systemLogLevel));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
