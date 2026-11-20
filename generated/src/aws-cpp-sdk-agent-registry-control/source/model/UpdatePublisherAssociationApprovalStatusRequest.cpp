/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatePublisherAssociationApprovalStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AgentRegistryControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePublisherAssociationApprovalStatusRequest::SerializePayload() const {
  JsonValue payload;

  if (m_approvalStatusHasBeenSet) {
    payload.WithString("approvalStatus", AssociationApprovalStatusMapper::GetNameForAssociationApprovalStatus(m_approvalStatus));
  }

  if (m_approvalStatusReasonHasBeenSet) {
    payload.WithString("approvalStatusReason", m_approvalStatusReason);
  }

  return payload.View().WriteReadable();
}
