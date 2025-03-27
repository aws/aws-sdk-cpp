/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/UpdatePreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePreferencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_managementAccountRateTypeSelectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managementAccountRateTypeSelectionsJsonList(m_managementAccountRateTypeSelections.size());
   for(unsigned managementAccountRateTypeSelectionsIndex = 0; managementAccountRateTypeSelectionsIndex < managementAccountRateTypeSelectionsJsonList.GetLength(); ++managementAccountRateTypeSelectionsIndex)
   {
     managementAccountRateTypeSelectionsJsonList[managementAccountRateTypeSelectionsIndex].AsString(RateTypeMapper::GetNameForRateType(m_managementAccountRateTypeSelections[managementAccountRateTypeSelectionsIndex]));
   }
   payload.WithArray("managementAccountRateTypeSelections", std::move(managementAccountRateTypeSelectionsJsonList));

  }

  if(m_memberAccountRateTypeSelectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberAccountRateTypeSelectionsJsonList(m_memberAccountRateTypeSelections.size());
   for(unsigned memberAccountRateTypeSelectionsIndex = 0; memberAccountRateTypeSelectionsIndex < memberAccountRateTypeSelectionsJsonList.GetLength(); ++memberAccountRateTypeSelectionsIndex)
   {
     memberAccountRateTypeSelectionsJsonList[memberAccountRateTypeSelectionsIndex].AsString(RateTypeMapper::GetNameForRateType(m_memberAccountRateTypeSelections[memberAccountRateTypeSelectionsIndex]));
   }
   payload.WithArray("memberAccountRateTypeSelections", std::move(memberAccountRateTypeSelectionsJsonList));

  }

  if(m_standaloneAccountRateTypeSelectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standaloneAccountRateTypeSelectionsJsonList(m_standaloneAccountRateTypeSelections.size());
   for(unsigned standaloneAccountRateTypeSelectionsIndex = 0; standaloneAccountRateTypeSelectionsIndex < standaloneAccountRateTypeSelectionsJsonList.GetLength(); ++standaloneAccountRateTypeSelectionsIndex)
   {
     standaloneAccountRateTypeSelectionsJsonList[standaloneAccountRateTypeSelectionsIndex].AsString(RateTypeMapper::GetNameForRateType(m_standaloneAccountRateTypeSelections[standaloneAccountRateTypeSelectionsIndex]));
   }
   payload.WithArray("standaloneAccountRateTypeSelections", std::move(standaloneAccountRateTypeSelectionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePreferencesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMPricingCalculator.UpdatePreferences"));
  return headers;

}




