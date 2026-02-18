/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateNotificationContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNotificationContentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    JsonValue contentJsonMap;
    for (auto& contentItem : m_content) {
      contentJsonMap.WithString(LocaleCodeMapper::GetNameForLocaleCode(contentItem.first), contentItem.second);
    }
    payload.WithObject("Content", std::move(contentJsonMap));
  }

  return payload.View().WriteReadable();
}
