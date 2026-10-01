/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/CreateWebFunctionRequest.h>

#include <utility>

using namespace Aws::LambdaWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWebFunctionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_functionNameHasBeenSet) {
    payload.WithString("functionName", m_functionName);
  }

  if (m_revisionConfigHasBeenSet) {
    payload.WithObject("revisionConfig", m_revisionConfig.Jsonize());
  }

  if (m_endpointConfigHasBeenSet) {
    payload.WithObject("endpointConfig", m_endpointConfig.Jsonize());
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
