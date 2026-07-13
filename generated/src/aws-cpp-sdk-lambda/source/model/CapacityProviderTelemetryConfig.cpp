/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CapacityProviderTelemetryConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CapacityProviderTelemetryConfig::CapacityProviderTelemetryConfig(JsonView jsonValue) { *this = jsonValue; }

CapacityProviderTelemetryConfig& CapacityProviderTelemetryConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LoggingConfig")) {
    m_loggingConfig = jsonValue.GetObject("LoggingConfig");
    m_loggingConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProviderTelemetryConfig::Jsonize() const {
  JsonValue payload;

  if (m_loggingConfigHasBeenSet) {
    payload.WithObject("LoggingConfig", m_loggingConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
