/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/LogEventConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

LogEventConfiguration::LogEventConfiguration(JsonView jsonValue) { *this = jsonValue; }

LogEventConfiguration& LogEventConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventType")) {
    m_eventType = jsonValue.GetString("eventType");
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logLevel")) {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("logLevel"));
    m_logLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logDestination")) {
    m_logDestination = jsonValue.GetString("logDestination");
    m_logDestinationHasBeenSet = true;
  }
  return *this;
}

JsonValue LogEventConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_eventTypeHasBeenSet) {
    payload.WithString("eventType", m_eventType);
  }

  if (m_logLevelHasBeenSet) {
    payload.WithString("logLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  if (m_logDestinationHasBeenSet) {
    payload.WithString("logDestination", m_logDestination);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
