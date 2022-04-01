/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/UpdateLongTermPricingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLongTermPricingRequest::UpdateLongTermPricingRequest() : 
    m_longTermPricingIdHasBeenSet(false),
    m_replacementJobHasBeenSet(false),
    m_isLongTermPricingAutoRenew(false),
    m_isLongTermPricingAutoRenewHasBeenSet(false)
{
}

Aws::String UpdateLongTermPricingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_longTermPricingIdHasBeenSet)
  {
   payload.WithString("LongTermPricingId", m_longTermPricingId);

  }

  if(m_replacementJobHasBeenSet)
  {
   payload.WithString("ReplacementJob", m_replacementJob);

  }

  if(m_isLongTermPricingAutoRenewHasBeenSet)
  {
   payload.WithBool("IsLongTermPricingAutoRenew", m_isLongTermPricingAutoRenew);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLongTermPricingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.UpdateLongTermPricing"));
  return headers;

}




