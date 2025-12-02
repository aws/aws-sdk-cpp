/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/StartMetadataGenerationRunRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartMetadataGenerationRunRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_owningProjectIdentifierHasBeenSet) {
    payload.WithString("owningProjectIdentifier", m_owningProjectIdentifier);
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("target", m_target.Jsonize());
  }

  if (m_typesHasBeenSet) {
    Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      typesJsonList[typesIndex].AsString(MetadataGenerationRunTypeMapper::GetNameForMetadataGenerationRunType(m_types[typesIndex]));
    }
    payload.WithArray("types", std::move(typesJsonList));
  }

  return payload.View().WriteReadable();
}
