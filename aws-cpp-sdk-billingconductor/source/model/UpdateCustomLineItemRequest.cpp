/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateCustomLineItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCustomLineItemRequest::UpdateCustomLineItemRequest() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_chargeDetailsHasBeenSet(false),
    m_billingPeriodRangeHasBeenSet(false)
{
}

Aws::String UpdateCustomLineItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_chargeDetailsHasBeenSet)
  {
   payload.WithObject("ChargeDetails", m_chargeDetails.Jsonize());

  }

  if(m_billingPeriodRangeHasBeenSet)
  {
   payload.WithObject("BillingPeriodRange", m_billingPeriodRange.Jsonize());

  }

  return payload.View().WriteReadable();
}




