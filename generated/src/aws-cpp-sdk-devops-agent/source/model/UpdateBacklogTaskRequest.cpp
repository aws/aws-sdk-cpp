/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/UpdateBacklogTaskRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBacklogTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_taskStatusHasBeenSet) {
    payload.WithString("taskStatus", TaskStatusMapper::GetNameForTaskStatus(m_taskStatus));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
