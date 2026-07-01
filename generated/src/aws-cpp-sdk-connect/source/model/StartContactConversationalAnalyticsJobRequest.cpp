/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartContactConversationalAnalyticsJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartContactConversationalAnalyticsJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_analyticsModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> analyticsModesJsonList(m_analyticsModes.size());
    for (unsigned analyticsModesIndex = 0; analyticsModesIndex < analyticsModesJsonList.GetLength(); ++analyticsModesIndex) {
      analyticsModesJsonList[analyticsModesIndex].AsString(
          AnalyticsModeMapper::GetNameForAnalyticsMode(m_analyticsModes[analyticsModesIndex]));
    }
    payload.WithArray("AnalyticsModes", std::move(analyticsModesJsonList));
  }

  if (m_analyticsConfigurationHasBeenSet) {
    payload.WithObject("AnalyticsConfiguration", m_analyticsConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
