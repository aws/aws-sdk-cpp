/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/UpdatePortalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIPortal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePortalRequest::SerializePayload() const {
  JsonValue payload;

  if (m_portalContentHasBeenSet) {
    payload.WithObject("portalContent", m_portalContent.Jsonize());
  }

  if (m_endpointConfigurationHasBeenSet) {
    payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());
  }

  if (m_authorizationHasBeenSet) {
    payload.WithObject("authorization", m_authorization.Jsonize());
  }

  if (m_rumAppMonitorNameHasBeenSet) {
    payload.WithString("rumAppMonitorName", m_rumAppMonitorName);
  }

  if (m_includedProductArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> includedProductArnsJsonList(m_includedProductArns.size());
    for (unsigned includedProductArnsIndex = 0; includedProductArnsIndex < includedProductArnsJsonList.GetLength();
         ++includedProductArnsIndex) {
      includedProductArnsJsonList[includedProductArnsIndex].AsString(m_includedProductArns[includedProductArnsIndex]);
    }
    payload.WithArray("includedProductArns", std::move(includedProductArnsJsonList));
  }

  if (m_logoUriHasBeenSet) {
    payload.WithString("logoUri", m_logoUri);
  }

  return payload.View().WriteReadable();
}
