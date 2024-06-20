/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/UpdatePreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePreferencesRequest::UpdatePreferencesRequest() : 
    m_savingsEstimationMode(SavingsEstimationMode::NOT_SET),
    m_savingsEstimationModeHasBeenSet(false),
    m_memberAccountDiscountVisibility(MemberAccountDiscountVisibility::NOT_SET),
    m_memberAccountDiscountVisibilityHasBeenSet(false)
{
}

Aws::String UpdatePreferencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_savingsEstimationModeHasBeenSet)
  {
   payload.WithString("savingsEstimationMode", SavingsEstimationModeMapper::GetNameForSavingsEstimationMode(m_savingsEstimationMode));
  }

  if(m_memberAccountDiscountVisibilityHasBeenSet)
  {
   payload.WithString("memberAccountDiscountVisibility", MemberAccountDiscountVisibilityMapper::GetNameForMemberAccountDiscountVisibility(m_memberAccountDiscountVisibility));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePreferencesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CostOptimizationHubService.UpdatePreferences"));
  return headers;

}




