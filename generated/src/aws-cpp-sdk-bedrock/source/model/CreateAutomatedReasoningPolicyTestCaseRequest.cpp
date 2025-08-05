/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateAutomatedReasoningPolicyTestCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAutomatedReasoningPolicyTestCaseRequest::SerializePayload() const
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

  if(m_expectedAggregatedFindingsResultHasBeenSet)
  {
   payload.WithString("expectedAggregatedFindingsResult", AutomatedReasoningCheckResultMapper::GetNameForAutomatedReasoningCheckResult(m_expectedAggregatedFindingsResult));
  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_confidenceThresholdHasBeenSet)
  {
   payload.WithDouble("confidenceThreshold", m_confidenceThreshold);

  }

  return payload.View().WriteReadable();
}




