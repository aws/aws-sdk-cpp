/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/savingsplans/model/CreateSavingsPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSavingsPlanRequest::CreateSavingsPlanRequest() : 
    m_savingsPlanOfferingIdHasBeenSet(false),
    m_commitmentHasBeenSet(false),
    m_upfrontPaymentAmountHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSavingsPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_savingsPlanOfferingIdHasBeenSet)
  {
   payload.WithString("savingsPlanOfferingId", m_savingsPlanOfferingId);

  }

  if(m_commitmentHasBeenSet)
  {
   payload.WithString("commitment", m_commitment);

  }

  if(m_upfrontPaymentAmountHasBeenSet)
  {
   payload.WithString("upfrontPaymentAmount", m_upfrontPaymentAmount);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




