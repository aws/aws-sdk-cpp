/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/CreateFailoverSlateConfigurationRequest.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFailoverSlateConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_activationThresholdSecondsHasBeenSet) {
    payload.WithInteger("activationThresholdSeconds", m_activationThresholdSeconds);
  }

  if (m_minSlateDisplaySecondsHasBeenSet) {
    payload.WithInteger("minSlateDisplaySeconds", m_minSlateDisplaySeconds);
  }

  if (m_maxSlateDisplaySecondsHasBeenSet) {
    payload.WithInteger("maxSlateDisplaySeconds", m_maxSlateDisplaySeconds);
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
