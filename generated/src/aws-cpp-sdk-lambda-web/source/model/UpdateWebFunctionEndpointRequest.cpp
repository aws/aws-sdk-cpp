/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/UpdateWebFunctionEndpointRequest.h>

#include <utility>

using namespace Aws::LambdaWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWebFunctionEndpointRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
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

  if (m_scalingConfigHasBeenSet) {
    payload.WithObject("scalingConfig", m_scalingConfig.Jsonize());
  }

  if (m_throttleConfigHasBeenSet) {
    payload.WithObject("throttleConfig", m_throttleConfig.Jsonize());
  }

  return payload.View().WriteReadable();
}
