/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/EndChatForCaseRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EndChatForCaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  if (m_requesterHasBeenSet) {
    payload.WithString("requester", m_requester);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
