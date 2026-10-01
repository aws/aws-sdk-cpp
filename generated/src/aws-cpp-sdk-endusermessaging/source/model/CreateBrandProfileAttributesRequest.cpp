/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/CreateBrandProfileAttributesRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBrandProfileAttributesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_attributesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
    for (unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex) {
      attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
    }
    payload.WithArray("attributes", std::move(attributesJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
