/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/StopReplicationBackfillRequest.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopReplicationBackfillRequest::SerializePayload() const {
  JsonValue payload;

  if (m_registryIdHasBeenSet) {
    payload.WithString("registryId", m_registryId);
  }

  if (m_replicationBackfillIdHasBeenSet) {
    payload.WithString("replicationBackfillId", m_replicationBackfillId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopReplicationBackfillRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.StopReplicationBackfill"));
  return headers;
}
