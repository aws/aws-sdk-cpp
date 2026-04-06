/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/StartPolicyPreviewJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartPolicyPreviewJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> policyConfigurationsJsonList(m_policyConfigurations.size());
    for (unsigned policyConfigurationsIndex = 0; policyConfigurationsIndex < policyConfigurationsJsonList.GetLength();
         ++policyConfigurationsIndex) {
      policyConfigurationsJsonList[policyConfigurationsIndex].AsObject(m_policyConfigurations[policyConfigurationsIndex].Jsonize());
    }
    payload.WithArray("policyConfigurations", std::move(policyConfigurationsJsonList));
  }

  if (m_startTimeHasBeenSet) {
    payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endTimeHasBeenSet) {
    payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_outputS3UriHasBeenSet) {
    payload.WithString("outputS3Uri", m_outputS3Uri);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
