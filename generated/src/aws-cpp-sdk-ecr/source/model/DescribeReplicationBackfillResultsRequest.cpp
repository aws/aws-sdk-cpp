/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/DescribeReplicationBackfillResultsRequest.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeReplicationBackfillResultsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_registryIdHasBeenSet) {
    payload.WithString("registryId", m_registryId);
  }

  if (m_replicationBackfillIdHasBeenSet) {
    payload.WithString("replicationBackfillId", m_replicationBackfillId);
  }

  if (m_resultStatusFilterHasBeenSet) {
    payload.WithString("resultStatusFilter",
                       ReplicationBackfillResultStatusMapper::GetNameForReplicationBackfillResultStatus(m_resultStatusFilter));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeReplicationBackfillResultsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.DescribeReplicationBackfillResults"));
  return headers;
}
