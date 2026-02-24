/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/CreateFeedRequest.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFeedRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_outputsHasBeenSet) {
    Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
    for (unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex) {
      outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
    }
    payload.WithArray("outputs", std::move(outputsJsonList));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
