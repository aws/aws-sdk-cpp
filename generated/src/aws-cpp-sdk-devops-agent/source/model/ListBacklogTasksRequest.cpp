/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ListBacklogTasksRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListBacklogTasksRequest::SerializePayload() const {
  JsonValue payload;

  if (m_filterHasBeenSet) {
    payload.WithObject("filter", m_filter.Jsonize());
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("limit", m_limit);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_sortFieldHasBeenSet) {
    payload.WithString("sortField", TaskSortFieldMapper::GetNameForTaskSortField(m_sortField));
  }

  if (m_orderHasBeenSet) {
    payload.WithString("order", TaskSortOrderMapper::GetNameForTaskSortOrder(m_order));
  }

  return payload.View().WriteReadable();
}
