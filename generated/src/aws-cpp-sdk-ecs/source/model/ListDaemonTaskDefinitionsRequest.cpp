/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ListDaemonTaskDefinitionsRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListDaemonTaskDefinitionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_familyPrefixHasBeenSet) {
    payload.WithString("familyPrefix", m_familyPrefix);
  }

  if (m_familyHasBeenSet) {
    payload.WithString("family", m_family);
  }

  if (m_revisionHasBeenSet) {
    payload.WithString("revision", DaemonTaskDefinitionRevisionFilterMapper::GetNameForDaemonTaskDefinitionRevisionFilter(m_revision));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DaemonTaskDefinitionStatusFilterMapper::GetNameForDaemonTaskDefinitionStatusFilter(m_status));
  }

  if (m_sortHasBeenSet) {
    payload.WithString("sort", SortOrderMapper::GetNameForSortOrder(m_sort));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDaemonTaskDefinitionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListDaemonTaskDefinitions"));
  return headers;
}
