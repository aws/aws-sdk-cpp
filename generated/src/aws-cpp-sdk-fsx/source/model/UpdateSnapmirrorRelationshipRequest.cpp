/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/UpdateSnapmirrorRelationshipRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSnapmirrorRelationshipRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_snapmirrorRelationshipIdHasBeenSet) {
    payload.WithString("SnapmirrorRelationshipId", m_snapmirrorRelationshipId);
  }

  if (m_policyIdHasBeenSet) {
    payload.WithString("PolicyId", m_policyId);
  }

  if (m_transferScheduleHasBeenSet) {
    payload.WithString("TransferSchedule", m_transferSchedule);
  }

  if (m_throttleInKbpsHasBeenSet) {
    payload.WithInt64("ThrottleInKbps", m_throttleInKbps);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", UpdatableSnapmirrorRelationshipStateMapper::GetNameForUpdatableSnapmirrorRelationshipState(m_state));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSnapmirrorRelationshipRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.UpdateSnapmirrorRelationship"));
  return headers;
}
