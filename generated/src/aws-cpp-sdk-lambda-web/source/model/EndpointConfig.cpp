/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/EndpointConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

EndpointConfig::EndpointConfig(JsonView jsonValue) { *this = jsonValue; }

EndpointConfig& EndpointConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpointName")) {
    m_endpointName = jsonValue.GetString("endpointName");
    m_endpointNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointType")) {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("endpointType"));
    m_endpointTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authType")) {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoDeploymentMode")) {
    m_autoDeploymentMode = AutoDeploymentModeMapper::GetAutoDeploymentModeForName(jsonValue.GetString("autoDeploymentMode"));
    m_autoDeploymentModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scalingConfig")) {
    m_scalingConfig = jsonValue.GetObject("scalingConfig");
    m_scalingConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("throttleConfig")) {
    m_throttleConfig = jsonValue.GetObject("throttleConfig");
    m_throttleConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue EndpointConfig::Jsonize() const {
  JsonValue payload;

  if (m_endpointNameHasBeenSet) {
    payload.WithString("endpointName", m_endpointName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_endpointTypeHasBeenSet) {
    payload.WithString("endpointType", EndpointTypeMapper::GetNameForEndpointType(m_endpointType));
  }

  if (m_authTypeHasBeenSet) {
    payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if (m_autoDeploymentModeHasBeenSet) {
    payload.WithString("autoDeploymentMode", AutoDeploymentModeMapper::GetNameForAutoDeploymentMode(m_autoDeploymentMode));
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_scalingConfigHasBeenSet) {
    payload.WithObject("scalingConfig", m_scalingConfig.Jsonize());
  }

  if (m_throttleConfigHasBeenSet) {
    payload.WithObject("throttleConfig", m_throttleConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
