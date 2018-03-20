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

#include <aws/ce/model/ReservationPurchaseRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

ReservationPurchaseRecommendation::ReservationPurchaseRecommendation() : 
    m_accountScope(AccountScope::NOT_SET),
    m_accountScopeHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_termInYears(TermInYears::NOT_SET),
    m_termInYearsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_serviceSpecificationHasBeenSet(false),
    m_recommendationDetailsHasBeenSet(false),
    m_recommendationSummaryHasBeenSet(false)
{
}

ReservationPurchaseRecommendation::ReservationPurchaseRecommendation(const JsonValue& jsonValue) : 
    m_accountScope(AccountScope::NOT_SET),
    m_accountScopeHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_termInYears(TermInYears::NOT_SET),
    m_termInYearsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_serviceSpecificationHasBeenSet(false),
    m_recommendationDetailsHasBeenSet(false),
    m_recommendationSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationPurchaseRecommendation& ReservationPurchaseRecommendation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AccountScope"))
  {
    m_accountScope = AccountScopeMapper::GetAccountScopeForName(jsonValue.GetString("AccountScope"));

    m_accountScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LookbackPeriodInDays"))
  {
    m_lookbackPeriodInDays = LookbackPeriodInDaysMapper::GetLookbackPeriodInDaysForName(jsonValue.GetString("LookbackPeriodInDays"));

    m_lookbackPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TermInYears"))
  {
    m_termInYears = TermInYearsMapper::GetTermInYearsForName(jsonValue.GetString("TermInYears"));

    m_termInYearsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaymentOption"))
  {
    m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(jsonValue.GetString("PaymentOption"));

    m_paymentOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceSpecification"))
  {
    m_serviceSpecification = jsonValue.GetObject("ServiceSpecification");

    m_serviceSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationDetails"))
  {
    Array<JsonValue> recommendationDetailsJsonList = jsonValue.GetArray("RecommendationDetails");
    for(unsigned recommendationDetailsIndex = 0; recommendationDetailsIndex < recommendationDetailsJsonList.GetLength(); ++recommendationDetailsIndex)
    {
      m_recommendationDetails.push_back(recommendationDetailsJsonList[recommendationDetailsIndex].AsObject());
    }
    m_recommendationDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationSummary"))
  {
    m_recommendationSummary = jsonValue.GetObject("RecommendationSummary");

    m_recommendationSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationPurchaseRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("AccountScope", AccountScopeMapper::GetNameForAccountScope(m_accountScope));
  }

  if(m_lookbackPeriodInDaysHasBeenSet)
  {
   payload.WithString("LookbackPeriodInDays", LookbackPeriodInDaysMapper::GetNameForLookbackPeriodInDays(m_lookbackPeriodInDays));
  }

  if(m_termInYearsHasBeenSet)
  {
   payload.WithString("TermInYears", TermInYearsMapper::GetNameForTermInYears(m_termInYears));
  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("PaymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
  }

  if(m_serviceSpecificationHasBeenSet)
  {
   payload.WithObject("ServiceSpecification", m_serviceSpecification.Jsonize());

  }

  if(m_recommendationDetailsHasBeenSet)
  {
   Array<JsonValue> recommendationDetailsJsonList(m_recommendationDetails.size());
   for(unsigned recommendationDetailsIndex = 0; recommendationDetailsIndex < recommendationDetailsJsonList.GetLength(); ++recommendationDetailsIndex)
   {
     recommendationDetailsJsonList[recommendationDetailsIndex].AsObject(m_recommendationDetails[recommendationDetailsIndex].Jsonize());
   }
   payload.WithArray("RecommendationDetails", std::move(recommendationDetailsJsonList));

  }

  if(m_recommendationSummaryHasBeenSet)
  {
   payload.WithObject("RecommendationSummary", m_recommendationSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
