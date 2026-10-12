/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/TelemetryConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

TelemetryConfig::TelemetryConfig(JsonView jsonValue) { *this = jsonValue; }

TelemetryConfig& TelemetryConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("loggingConfig")) {
    m_loggingConfig = jsonValue.GetObject("loggingConfig");
    m_loggingConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryConfig::Jsonize() const {
  JsonValue payload;

  if (m_loggingConfigHasBeenSet) {
    payload.WithObject("loggingConfig", m_loggingConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
