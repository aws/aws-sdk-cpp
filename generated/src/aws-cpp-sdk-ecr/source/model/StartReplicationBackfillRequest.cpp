/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/StartReplicationBackfillRequest.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartReplicationBackfillRequest::SerializePayload() const {
  JsonValue payload;

  if (m_registryIdHasBeenSet) {
    payload.WithString("registryId", m_registryId);
  }

  if (m_destinationHasBeenSet) {
    payload.WithObject("destination", m_destination.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartReplicationBackfillRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.StartReplicationBackfill"));
  return headers;
}
