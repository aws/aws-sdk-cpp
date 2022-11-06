/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansPurchaseRecommendation.h>
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

SavingsPlansPurchaseRecommendation::SavingsPlansPurchaseRecommendation() : 
    m_accountScope(AccountScope::NOT_SET),
    m_accountScopeHasBeenSet(false),
    m_savingsPlansType(SupportedSavingsPlansType::NOT_SET),
    m_savingsPlansTypeHasBeenSet(false),
    m_termInYears(TermInYears::NOT_SET),
    m_termInYearsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_savingsPlansPurchaseRecommendationDetailsHasBeenSet(false),
    m_savingsPlansPurchaseRecommendationSummaryHasBeenSet(false)
{
}

SavingsPlansPurchaseRecommendation::SavingsPlansPurchaseRecommendation(JsonView jsonValue) : 
    m_accountScope(AccountScope::NOT_SET),
    m_accountScopeHasBeenSet(false),
    m_savingsPlansType(SupportedSavingsPlansType::NOT_SET),
    m_savingsPlansTypeHasBeenSet(false),
    m_termInYears(TermInYears::NOT_SET),
    m_termInYearsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_savingsPlansPurchaseRecommendationDetailsHasBeenSet(false),
    m_savingsPlansPurchaseRecommendationSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansPurchaseRecommendation& SavingsPlansPurchaseRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountScope"))
  {
    m_accountScope = AccountScopeMapper::GetAccountScopeForName(jsonValue.GetString("AccountScope"));

    m_accountScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SavingsPlansType"))
  {
    m_savingsPlansType = SupportedSavingsPlansTypeMapper::GetSupportedSavingsPlansTypeForName(jsonValue.GetString("SavingsPlansType"));

    m_savingsPlansTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("LookbackPeriodInDays"))
  {
    m_lookbackPeriodInDays = LookbackPeriodInDaysMapper::GetLookbackPeriodInDaysForName(jsonValue.GetString("LookbackPeriodInDays"));

    m_lookbackPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SavingsPlansPurchaseRecommendationDetails"))
  {
    Aws::Utils::Array<JsonView> savingsPlansPurchaseRecommendationDetailsJsonList = jsonValue.GetArray("SavingsPlansPurchaseRecommendationDetails");
    for(unsigned savingsPlansPurchaseRecommendationDetailsIndex = 0; savingsPlansPurchaseRecommendationDetailsIndex < savingsPlansPurchaseRecommendationDetailsJsonList.GetLength(); ++savingsPlansPurchaseRecommendationDetailsIndex)
    {
      m_savingsPlansPurchaseRecommendationDetails.push_back(savingsPlansPurchaseRecommendationDetailsJsonList[savingsPlansPurchaseRecommendationDetailsIndex].AsObject());
    }
    m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SavingsPlansPurchaseRecommendationSummary"))
  {
    m_savingsPlansPurchaseRecommendationSummary = jsonValue.GetObject("SavingsPlansPurchaseRecommendationSummary");

    m_savingsPlansPurchaseRecommendationSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansPurchaseRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("AccountScope", AccountScopeMapper::GetNameForAccountScope(m_accountScope));
  }

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

  if(m_lookbackPeriodInDaysHasBeenSet)
  {
   payload.WithString("LookbackPeriodInDays", LookbackPeriodInDaysMapper::GetNameForLookbackPeriodInDays(m_lookbackPeriodInDays));
  }

  if(m_savingsPlansPurchaseRecommendationDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlansPurchaseRecommendationDetailsJsonList(m_savingsPlansPurchaseRecommendationDetails.size());
   for(unsigned savingsPlansPurchaseRecommendationDetailsIndex = 0; savingsPlansPurchaseRecommendationDetailsIndex < savingsPlansPurchaseRecommendationDetailsJsonList.GetLength(); ++savingsPlansPurchaseRecommendationDetailsIndex)
   {
     savingsPlansPurchaseRecommendationDetailsJsonList[savingsPlansPurchaseRecommendationDetailsIndex].AsObject(m_savingsPlansPurchaseRecommendationDetails[savingsPlansPurchaseRecommendationDetailsIndex].Jsonize());
   }
   payload.WithArray("SavingsPlansPurchaseRecommendationDetails", std::move(savingsPlansPurchaseRecommendationDetailsJsonList));

  }

  if(m_savingsPlansPurchaseRecommendationSummaryHasBeenSet)
  {
   payload.WithObject("SavingsPlansPurchaseRecommendationSummary", m_savingsPlansPurchaseRecommendationSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
