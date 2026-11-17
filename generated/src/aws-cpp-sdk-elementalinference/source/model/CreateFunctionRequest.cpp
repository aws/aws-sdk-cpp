/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/CreateFunctionRequest.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFunctionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("target", m_target.Jsonize());
  }

  if (m_requestExpressionHasBeenSet) {
    payload.WithString("requestExpression", m_requestExpression);
  }

  if (m_responseExpressionHasBeenSet) {
    payload.WithString("responseExpression", m_responseExpression);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_eventBridgeDeliveryHasBeenSet) {
    payload.WithString("eventBridgeDelivery", EventBridgeDeliveryModeMapper::GetNameForEventBridgeDeliveryMode(m_eventBridgeDelivery));
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
