/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/UpdateChatRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChatRequest::SerializePayload() const {
  JsonValue payload;

  if (m_summaryHasBeenSet) {
    payload.WithString("summary", m_summary);
  }

  if (m_archiveStatusHasBeenSet) {
    payload.WithString("archiveStatus", ChatArchiveStatusMapper::GetNameForChatArchiveStatus(m_archiveStatus));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
