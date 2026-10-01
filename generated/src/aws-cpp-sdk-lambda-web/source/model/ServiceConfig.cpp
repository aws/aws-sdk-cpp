/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/ServiceConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

ServiceConfig::ServiceConfig(JsonView jsonValue) { *this = jsonValue; }

ServiceConfig& ServiceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutSeconds")) {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");
    m_timeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxConcurrencyPerEnvironment")) {
    m_maxConcurrencyPerEnvironment = jsonValue.GetInteger("maxConcurrencyPerEnvironment");
    m_maxConcurrencyPerEnvironmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentVariables")) {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for (auto& environmentVariablesItem : environmentVariablesJsonMap) {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("telemetryConfig")) {
    m_telemetryConfig = jsonValue.GetObject("telemetryConfig");
    m_telemetryConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceConfig::Jsonize() const {
  JsonValue payload;

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_timeoutSecondsHasBeenSet) {
    payload.WithInteger("timeoutSeconds", m_timeoutSeconds);
  }

  if (m_maxConcurrencyPerEnvironmentHasBeenSet) {
    payload.WithInteger("maxConcurrencyPerEnvironment", m_maxConcurrencyPerEnvironment);
  }

  if (m_environmentVariablesHasBeenSet) {
    JsonValue environmentVariablesJsonMap;
    for (auto& environmentVariablesItem : m_environmentVariables) {
      environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
    }
    payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));
  }

  if (m_telemetryConfigHasBeenSet) {
    payload.WithObject("telemetryConfig", m_telemetryConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
