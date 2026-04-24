/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdatePortalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePortalRequest::SerializePayload() const {
  JsonValue payload;

  if (m_authorizationHasBeenSet) {
    payload.WithObject("authorization", m_authorization.Jsonize());
  }

  if (m_endpointConfigurationHasBeenSet) {
    payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());
  }

  if (m_includedPortalProductArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> includedPortalProductArnsJsonList(m_includedPortalProductArns.size());
    for (unsigned includedPortalProductArnsIndex = 0; includedPortalProductArnsIndex < includedPortalProductArnsJsonList.GetLength();
         ++includedPortalProductArnsIndex) {
      includedPortalProductArnsJsonList[includedPortalProductArnsIndex].AsString(
          m_includedPortalProductArns[includedPortalProductArnsIndex]);
    }
    payload.WithArray("includedPortalProductArns", std::move(includedPortalProductArnsJsonList));
  }

  if (m_logoUriHasBeenSet) {
    payload.WithString("logoUri", m_logoUri);
  }

  if (m_portalContentHasBeenSet) {
    payload.WithObject("portalContent", m_portalContent.Jsonize());
  }

  if (m_rumAppMonitorNameHasBeenSet) {
    payload.WithString("rumAppMonitorName", m_rumAppMonitorName);
  }

  return payload.View().WriteReadable();
}
