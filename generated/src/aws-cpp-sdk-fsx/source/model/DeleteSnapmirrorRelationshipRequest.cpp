/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/DeleteSnapmirrorRelationshipRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteSnapmirrorRelationshipRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_snapmirrorRelationshipIdHasBeenSet) {
    payload.WithString("SnapmirrorRelationshipId", m_snapmirrorRelationshipId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSnapmirrorRelationshipRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DeleteSnapmirrorRelationship"));
  return headers;
}
