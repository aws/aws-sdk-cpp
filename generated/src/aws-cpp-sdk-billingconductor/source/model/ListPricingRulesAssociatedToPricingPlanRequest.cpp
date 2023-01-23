/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListPricingRulesAssociatedToPricingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPricingRulesAssociatedToPricingPlanRequest::ListPricingRulesAssociatedToPricingPlanRequest() : 
    m_billingPeriodHasBeenSet(false),
    m_pricingPlanArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListPricingRulesAssociatedToPricingPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billingPeriodHasBeenSet)
  {
   payload.WithString("BillingPeriod", m_billingPeriod);

  }

  if(m_pricingPlanArnHasBeenSet)
  {
   payload.WithString("PricingPlanArn", m_pricingPlanArn);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




