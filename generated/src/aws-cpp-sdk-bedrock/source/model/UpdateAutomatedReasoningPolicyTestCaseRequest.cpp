/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/UpdateAutomatedReasoningPolicyTestCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAutomatedReasoningPolicyTestCaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_guardContentHasBeenSet)
  {
   payload.WithString("guardContent", m_guardContent);

  }

  if(m_queryContentHasBeenSet)
  {
   payload.WithString("queryContent", m_queryContent);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_expectedAggregatedFindingsResultHasBeenSet)
  {
   payload.WithString("expectedAggregatedFindingsResult", AutomatedReasoningCheckResultMapper::GetNameForAutomatedReasoningCheckResult(m_expectedAggregatedFindingsResult));
  }

  if(m_confidenceThresholdHasBeenSet)
  {
   payload.WithDouble("confidenceThreshold", m_confidenceThreshold);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




