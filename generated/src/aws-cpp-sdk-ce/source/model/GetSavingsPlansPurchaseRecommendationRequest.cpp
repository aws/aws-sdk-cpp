/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetSavingsPlansPurchaseRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSavingsPlansPurchaseRecommendationRequest::GetSavingsPlansPurchaseRecommendationRequest() : 
    m_savingsPlansType(SupportedSavingsPlansType::NOT_SET),
    m_savingsPlansTypeHasBeenSet(false),
    m_termInYears(TermInYears::NOT_SET),
    m_termInYearsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_accountScope(AccountScope::NOT_SET),
    m_accountScopeHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

Aws::String GetSavingsPlansPurchaseRecommendationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_savingsPlansTypeHasBeenSet)
  {
   payload.WithString("SavingsPlansType", SupportedSavingsPlansTypeMapper::GetNameForSupportedSavingsPlansType(m_savingsPlansType));
  }

  if(m_termInYearsHasBeenSet)
  {
   payload.WithString("TermInYears", TermInYearsMapper::GetNameForTermInYears(m_termInYears));
  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("PaymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
  }

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("AccountScope", AccountScopeMapper::GetNameForAccountScope(m_accountScope));
  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_lookbackPeriodInDaysHasBeenSet)
  {
   payload.WithString("LookbackPeriodInDays", LookbackPeriodInDaysMapper::GetNameForLookbackPeriodInDays(m_lookbackPeriodInDays));
  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSavingsPlansPurchaseRecommendationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetSavingsPlansPurchaseRecommendation"));
  return headers;

}




