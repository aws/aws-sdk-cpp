/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/CreateBacklogTaskRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBacklogTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_referenceHasBeenSet) {
    payload.WithObject("reference", m_reference.Jsonize());
  }

  if (m_taskTypeHasBeenSet) {
    payload.WithString("taskType", TaskTypeMapper::GetNameForTaskType(m_taskType));
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", PriorityMapper::GetNameForPriority(m_priority));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
