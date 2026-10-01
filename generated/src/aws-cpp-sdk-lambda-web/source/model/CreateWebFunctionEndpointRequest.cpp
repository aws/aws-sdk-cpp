/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/CreateWebFunctionEndpointRequest.h>

#include <utility>

using namespace Aws::LambdaWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWebFunctionEndpointRequest::SerializePayload() const {
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

  if (m_revisionWeightsHasBeenSet) {
    Aws::Utils::Array<JsonValue> revisionWeightsJsonList(m_revisionWeights.size());
    for (unsigned revisionWeightsIndex = 0; revisionWeightsIndex < revisionWeightsJsonList.GetLength(); ++revisionWeightsIndex) {
      revisionWeightsJsonList[revisionWeightsIndex].AsObject(m_revisionWeights[revisionWeightsIndex].Jsonize());
    }
    payload.WithArray("revisionWeights", std::move(revisionWeightsJsonList));
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

  return payload.View().WriteReadable();
}
