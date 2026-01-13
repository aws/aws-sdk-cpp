/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/BatchPutAttributesMetadataRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchPutAttributesMetadataRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_attributesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
    for (unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex) {
      attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
    }
    payload.WithArray("attributes", std::move(attributesJsonList));
  }

  return payload.View().WriteReadable();
}
