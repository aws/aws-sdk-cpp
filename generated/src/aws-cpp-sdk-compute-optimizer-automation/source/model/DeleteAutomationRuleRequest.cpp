/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/DeleteAutomationRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteAutomationRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ruleArnHasBeenSet) {
    payload.WithString("ruleArn", m_ruleArn);
  }

  if (m_ruleRevisionHasBeenSet) {
    payload.WithInt64("ruleRevision", m_ruleRevision);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAutomationRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerAutomationService.DeleteAutomationRule"));
  return headers;
}
