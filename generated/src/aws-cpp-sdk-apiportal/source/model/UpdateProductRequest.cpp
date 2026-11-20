/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/UpdateProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIPortal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProductRequest::SerializePayload() const {
  JsonValue payload;

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_displayOrderHasBeenSet) {
    payload.WithObject("displayOrder", m_displayOrder.Jsonize());
  }

  if (m_apiSelectionConfigurationHasBeenSet) {
    payload.WithObject("apiSelectionConfiguration", m_apiSelectionConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
