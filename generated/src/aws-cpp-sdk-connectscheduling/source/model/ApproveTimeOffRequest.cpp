/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/ApproveTimeOffRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectScheduling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ApproveTimeOffRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_ruleFailureActionHasBeenSet) {
    payload.WithString("RuleFailureAction", RuleFailureActionMapper::GetNameForRuleFailureAction(m_ruleFailureAction));
  }

  return payload.View().WriteReadable();
}
