/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/UpdateSnapmirrorPolicyRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSnapmirrorPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_snapmirrorPolicyIdHasBeenSet) {
    payload.WithString("SnapmirrorPolicyId", m_snapmirrorPolicyId);
  }

  if (m_retentionRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> retentionRulesJsonList(m_retentionRules.size());
    for (unsigned retentionRulesIndex = 0; retentionRulesIndex < retentionRulesJsonList.GetLength(); ++retentionRulesIndex) {
      retentionRulesJsonList[retentionRulesIndex].AsObject(m_retentionRules[retentionRulesIndex].Jsonize());
    }
    payload.WithArray("RetentionRules", std::move(retentionRulesJsonList));
  }

  if (m_transferScheduleHasBeenSet) {
    payload.WithString("TransferSchedule", m_transferSchedule);
  }

  if (m_networkCompressionEnabledHasBeenSet) {
    payload.WithBool("NetworkCompressionEnabled", m_networkCompressionEnabled);
  }

  if (m_throttleInKbpsHasBeenSet) {
    payload.WithInt64("ThrottleInKbps", m_throttleInKbps);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSnapmirrorPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.UpdateSnapmirrorPolicy"));
  return headers;
}
