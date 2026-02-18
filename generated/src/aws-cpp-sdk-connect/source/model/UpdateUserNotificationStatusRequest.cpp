/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserNotificationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateUserNotificationStatusRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", NotificationStatusMapper::GetNameForNotificationStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserNotificationStatusRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_lastModifiedTimeHasBeenSet) {
    headers.emplace("x-amz-last-modified-time", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if (m_lastModifiedRegionHasBeenSet) {
    ss << m_lastModifiedRegion;
    headers.emplace("x-amz-last-modified-region", ss.str());
    ss.str("");
  }

  return headers;
}
