/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/AssociateManagedApisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIPortal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateManagedApisRequest::SerializePayload() const {
  JsonValue payload;

  if (m_managedApiIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> managedApiIdsJsonList(m_managedApiIds.size());
    for (unsigned managedApiIdsIndex = 0; managedApiIdsIndex < managedApiIdsJsonList.GetLength(); ++managedApiIdsIndex) {
      managedApiIdsJsonList[managedApiIdsIndex].AsString(m_managedApiIds[managedApiIdsIndex]);
    }
    payload.WithArray("managedApiIds", std::move(managedApiIdsJsonList));
  }

  return payload.View().WriteReadable();
}
