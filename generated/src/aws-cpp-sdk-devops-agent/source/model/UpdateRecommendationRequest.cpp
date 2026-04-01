/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/UpdateRecommendationRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRecommendationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecommendationStatusMapper::GetNameForRecommendationStatus(m_status));
  }

  if (m_additionalContextHasBeenSet) {
    payload.WithString("additionalContext", m_additionalContext);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
