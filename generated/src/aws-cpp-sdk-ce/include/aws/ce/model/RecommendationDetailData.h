/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/AccountScope.h>
#include <aws/ce/model/LookbackPeriodInDays.h>
#include <aws/ce/model/SupportedSavingsPlansType.h>
#include <aws/ce/model/TermInYears.h>
#include <aws/ce/model/PaymentOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/RecommendationDetailHourlyMetrics.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The details and metrics for the given recommendation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RecommendationDetailData">AWS
   * API Reference</a></p>
   */
  class RecommendationDetailData
  {
  public:
    AWS_COSTEXPLORER_API RecommendationDetailData();
    AWS_COSTEXPLORER_API RecommendationDetailData(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RecommendationDetailData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to PAYER. If the value is LINKED, recommendations are
     * calculated for individual member accounts only.</p>
     */
    inline const AccountScope& GetAccountScope() const{ return m_accountScope; }

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to PAYER. If the value is LINKED, recommendations are
     * calculated for individual member accounts only.</p>
     */
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to PAYER. If the value is LINKED, recommendations are
     * calculated for individual member accounts only.</p>
     */
    inline void SetAccountScope(const AccountScope& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to PAYER. If the value is LINKED, recommendations are
     * calculated for individual member accounts only.</p>
     */
    inline void SetAccountScope(AccountScope&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to PAYER. If the value is LINKED, recommendations are
     * calculated for individual member accounts only.</p>
     */
    inline RecommendationDetailData& WithAccountScope(const AccountScope& value) { SetAccountScope(value); return *this;}

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to PAYER. If the value is LINKED, recommendations are
     * calculated for individual member accounts only.</p>
     */
    inline RecommendationDetailData& WithAccountScope(AccountScope&& value) { SetAccountScope(std::move(value)); return *this;}


    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline const LookbackPeriodInDays& GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }

    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }

    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline void SetLookbackPeriodInDays(const LookbackPeriodInDays& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }

    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays&& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = std::move(value); }

    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline RecommendationDetailData& WithLookbackPeriodInDays(const LookbackPeriodInDays& value) { SetLookbackPeriodInDays(value); return *this;}

    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline RecommendationDetailData& WithLookbackPeriodInDays(LookbackPeriodInDays&& value) { SetLookbackPeriodInDays(std::move(value)); return *this;}


    /**
     * <p>The requested Savings Plan recommendation type.</p>
     */
    inline const SupportedSavingsPlansType& GetSavingsPlansType() const{ return m_savingsPlansType; }

    /**
     * <p>The requested Savings Plan recommendation type.</p>
     */
    inline bool SavingsPlansTypeHasBeenSet() const { return m_savingsPlansTypeHasBeenSet; }

    /**
     * <p>The requested Savings Plan recommendation type.</p>
     */
    inline void SetSavingsPlansType(const SupportedSavingsPlansType& value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = value; }

    /**
     * <p>The requested Savings Plan recommendation type.</p>
     */
    inline void SetSavingsPlansType(SupportedSavingsPlansType&& value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = std::move(value); }

    /**
     * <p>The requested Savings Plan recommendation type.</p>
     */
    inline RecommendationDetailData& WithSavingsPlansType(const SupportedSavingsPlansType& value) { SetSavingsPlansType(value); return *this;}

    /**
     * <p>The requested Savings Plan recommendation type.</p>
     */
    inline RecommendationDetailData& WithSavingsPlansType(SupportedSavingsPlansType&& value) { SetSavingsPlansType(std::move(value)); return *this;}


    /**
     * <p>The term of the commitment in years.</p>
     */
    inline const TermInYears& GetTermInYears() const{ return m_termInYears; }

    /**
     * <p>The term of the commitment in years.</p>
     */
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }

    /**
     * <p>The term of the commitment in years.</p>
     */
    inline void SetTermInYears(const TermInYears& value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }

    /**
     * <p>The term of the commitment in years.</p>
     */
    inline void SetTermInYears(TermInYears&& value) { m_termInYearsHasBeenSet = true; m_termInYears = std::move(value); }

    /**
     * <p>The term of the commitment in years.</p>
     */
    inline RecommendationDetailData& WithTermInYears(const TermInYears& value) { SetTermInYears(value); return *this;}

    /**
     * <p>The term of the commitment in years.</p>
     */
    inline RecommendationDetailData& WithTermInYears(TermInYears&& value) { SetTermInYears(std::move(value)); return *this;}


    /**
     * <p>The payment option for the commitment (for example, All Upfront or No
     * Upfront).</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option for the commitment (for example, All Upfront or No
     * Upfront).</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option for the commitment (for example, All Upfront or No
     * Upfront).</p>
     */
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option for the commitment (for example, All Upfront or No
     * Upfront).</p>
     */
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option for the commitment (for example, All Upfront or No
     * Upfront).</p>
     */
    inline RecommendationDetailData& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option for the commitment (for example, All Upfront or No
     * Upfront).</p>
     */
    inline RecommendationDetailData& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline RecommendationDetailData& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline RecommendationDetailData& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline RecommendationDetailData& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline RecommendationDetailData& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline RecommendationDetailData& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline RecommendationDetailData& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }

    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }

    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }

    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }

    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }

    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}

    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}

    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}


    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline RecommendationDetailData& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline RecommendationDetailData& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline RecommendationDetailData& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline RecommendationDetailData& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline RecommendationDetailData& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline RecommendationDetailData& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    
    inline const Aws::String& GetGenerationTimestamp() const{ return m_generationTimestamp; }

    
    inline bool GenerationTimestampHasBeenSet() const { return m_generationTimestampHasBeenSet; }

    
    inline void SetGenerationTimestamp(const Aws::String& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = value; }

    
    inline void SetGenerationTimestamp(Aws::String&& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = std::move(value); }

    
    inline void SetGenerationTimestamp(const char* value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp.assign(value); }

    
    inline RecommendationDetailData& WithGenerationTimestamp(const Aws::String& value) { SetGenerationTimestamp(value); return *this;}

    
    inline RecommendationDetailData& WithGenerationTimestamp(Aws::String&& value) { SetGenerationTimestamp(std::move(value)); return *this;}

    
    inline RecommendationDetailData& WithGenerationTimestamp(const char* value) { SetGenerationTimestamp(value); return *this;}


    
    inline const Aws::String& GetLatestUsageTimestamp() const{ return m_latestUsageTimestamp; }

    
    inline bool LatestUsageTimestampHasBeenSet() const { return m_latestUsageTimestampHasBeenSet; }

    
    inline void SetLatestUsageTimestamp(const Aws::String& value) { m_latestUsageTimestampHasBeenSet = true; m_latestUsageTimestamp = value; }

    
    inline void SetLatestUsageTimestamp(Aws::String&& value) { m_latestUsageTimestampHasBeenSet = true; m_latestUsageTimestamp = std::move(value); }

    
    inline void SetLatestUsageTimestamp(const char* value) { m_latestUsageTimestampHasBeenSet = true; m_latestUsageTimestamp.assign(value); }

    
    inline RecommendationDetailData& WithLatestUsageTimestamp(const Aws::String& value) { SetLatestUsageTimestamp(value); return *this;}

    
    inline RecommendationDetailData& WithLatestUsageTimestamp(Aws::String&& value) { SetLatestUsageTimestamp(std::move(value)); return *this;}

    
    inline RecommendationDetailData& WithLatestUsageTimestamp(const char* value) { SetLatestUsageTimestamp(value); return *this;}


    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentAverageHourlyOnDemandSpend() const{ return m_currentAverageHourlyOnDemandSpend; }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline bool CurrentAverageHourlyOnDemandSpendHasBeenSet() const { return m_currentAverageHourlyOnDemandSpendHasBeenSet; }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentAverageHourlyOnDemandSpend(const Aws::String& value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend = value; }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentAverageHourlyOnDemandSpend(Aws::String&& value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend = std::move(value); }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentAverageHourlyOnDemandSpend(const char* value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend.assign(value); }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentAverageHourlyOnDemandSpend(const Aws::String& value) { SetCurrentAverageHourlyOnDemandSpend(value); return *this;}

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentAverageHourlyOnDemandSpend(Aws::String&& value) { SetCurrentAverageHourlyOnDemandSpend(std::move(value)); return *this;}

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentAverageHourlyOnDemandSpend(const char* value) { SetCurrentAverageHourlyOnDemandSpend(value); return *this;}


    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentMaximumHourlyOnDemandSpend() const{ return m_currentMaximumHourlyOnDemandSpend; }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline bool CurrentMaximumHourlyOnDemandSpendHasBeenSet() const { return m_currentMaximumHourlyOnDemandSpendHasBeenSet; }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMaximumHourlyOnDemandSpend(const Aws::String& value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend = value; }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMaximumHourlyOnDemandSpend(Aws::String&& value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend = std::move(value); }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMaximumHourlyOnDemandSpend(const char* value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend.assign(value); }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentMaximumHourlyOnDemandSpend(const Aws::String& value) { SetCurrentMaximumHourlyOnDemandSpend(value); return *this;}

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentMaximumHourlyOnDemandSpend(Aws::String&& value) { SetCurrentMaximumHourlyOnDemandSpend(std::move(value)); return *this;}

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentMaximumHourlyOnDemandSpend(const char* value) { SetCurrentMaximumHourlyOnDemandSpend(value); return *this;}


    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentMinimumHourlyOnDemandSpend() const{ return m_currentMinimumHourlyOnDemandSpend; }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline bool CurrentMinimumHourlyOnDemandSpendHasBeenSet() const { return m_currentMinimumHourlyOnDemandSpendHasBeenSet; }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMinimumHourlyOnDemandSpend(const Aws::String& value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend = value; }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMinimumHourlyOnDemandSpend(Aws::String&& value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend = std::move(value); }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMinimumHourlyOnDemandSpend(const char* value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend.assign(value); }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentMinimumHourlyOnDemandSpend(const Aws::String& value) { SetCurrentMinimumHourlyOnDemandSpend(value); return *this;}

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentMinimumHourlyOnDemandSpend(Aws::String&& value) { SetCurrentMinimumHourlyOnDemandSpend(std::move(value)); return *this;}

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline RecommendationDetailData& WithCurrentMinimumHourlyOnDemandSpend(const char* value) { SetCurrentMinimumHourlyOnDemandSpend(value); return *this;}


    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedAverageUtilization() const{ return m_estimatedAverageUtilization; }

    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline bool EstimatedAverageUtilizationHasBeenSet() const { return m_estimatedAverageUtilizationHasBeenSet; }

    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline void SetEstimatedAverageUtilization(const Aws::String& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = value; }

    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline void SetEstimatedAverageUtilization(Aws::String&& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = std::move(value); }

    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline void SetEstimatedAverageUtilization(const char* value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization.assign(value); }

    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedAverageUtilization(const Aws::String& value) { SetEstimatedAverageUtilization(value); return *this;}

    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedAverageUtilization(Aws::String&& value) { SetEstimatedAverageUtilization(std::move(value)); return *this;}

    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedAverageUtilization(const char* value) { SetEstimatedAverageUtilization(value); return *this;}


    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const{ return m_estimatedMonthlySavingsAmount; }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(const Aws::String& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = value; }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(Aws::String&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::move(value); }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(const char* value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount.assign(value); }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedMonthlySavingsAmount(const Aws::String& value) { SetEstimatedMonthlySavingsAmount(value); return *this;}

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedMonthlySavingsAmount(Aws::String&& value) { SetEstimatedMonthlySavingsAmount(std::move(value)); return *this;}

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedMonthlySavingsAmount(const char* value) { SetEstimatedMonthlySavingsAmount(value); return *this;}


    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCost() const{ return m_estimatedOnDemandCost; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(const Aws::String& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = value; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(Aws::String&& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = std::move(value); }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(const char* value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost.assign(value); }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedOnDemandCost(const Aws::String& value) { SetEstimatedOnDemandCost(value); return *this;}

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedOnDemandCost(Aws::String&& value) { SetEstimatedOnDemandCost(std::move(value)); return *this;}

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedOnDemandCost(const char* value) { SetEstimatedOnDemandCost(value); return *this;}


    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const{ return m_estimatedOnDemandCostWithCurrentCommitment; }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = value; }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::move(value); }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const char* value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment.assign(value); }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline RecommendationDetailData& WithEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline RecommendationDetailData& WithEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::move(value)); return *this;}

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline RecommendationDetailData& WithEstimatedOnDemandCostWithCurrentCommitment(const char* value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}


    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline const Aws::String& GetEstimatedROI() const{ return m_estimatedROI; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline void SetEstimatedROI(const Aws::String& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = value; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline void SetEstimatedROI(Aws::String&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::move(value); }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline void SetEstimatedROI(const char* value) { m_estimatedROIHasBeenSet = true; m_estimatedROI.assign(value); }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline RecommendationDetailData& WithEstimatedROI(const Aws::String& value) { SetEstimatedROI(value); return *this;}

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline RecommendationDetailData& WithEstimatedROI(Aws::String&& value) { SetEstimatedROI(std::move(value)); return *this;}

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline RecommendationDetailData& WithEstimatedROI(const char* value) { SetEstimatedROI(value); return *this;}


    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline const Aws::String& GetEstimatedSPCost() const{ return m_estimatedSPCost; }

    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline bool EstimatedSPCostHasBeenSet() const { return m_estimatedSPCostHasBeenSet; }

    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline void SetEstimatedSPCost(const Aws::String& value) { m_estimatedSPCostHasBeenSet = true; m_estimatedSPCost = value; }

    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline void SetEstimatedSPCost(Aws::String&& value) { m_estimatedSPCostHasBeenSet = true; m_estimatedSPCost = std::move(value); }

    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline void SetEstimatedSPCost(const char* value) { m_estimatedSPCostHasBeenSet = true; m_estimatedSPCost.assign(value); }

    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSPCost(const Aws::String& value) { SetEstimatedSPCost(value); return *this;}

    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSPCost(Aws::String&& value) { SetEstimatedSPCost(std::move(value)); return *this;}

    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSPCost(const char* value) { SetEstimatedSPCost(value); return *this;}


    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const{ return m_estimatedSavingsAmount; }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline void SetEstimatedSavingsAmount(const Aws::String& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = value; }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline void SetEstimatedSavingsAmount(Aws::String&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::move(value); }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline void SetEstimatedSavingsAmount(const char* value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount.assign(value); }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSavingsAmount(const Aws::String& value) { SetEstimatedSavingsAmount(value); return *this;}

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSavingsAmount(Aws::String&& value) { SetEstimatedSavingsAmount(std::move(value)); return *this;}

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSavingsAmount(const char* value) { SetEstimatedSavingsAmount(value); return *this;}


    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsPercentage() const{ return m_estimatedSavingsPercentage; }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline void SetEstimatedSavingsPercentage(const Aws::String& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = value; }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline void SetEstimatedSavingsPercentage(Aws::String&& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = std::move(value); }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline void SetEstimatedSavingsPercentage(const char* value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage.assign(value); }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSavingsPercentage(const Aws::String& value) { SetEstimatedSavingsPercentage(value); return *this;}

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSavingsPercentage(Aws::String&& value) { SetEstimatedSavingsPercentage(std::move(value)); return *this;}

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline RecommendationDetailData& WithEstimatedSavingsPercentage(const char* value) { SetEstimatedSavingsPercentage(value); return *this;}


    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline const Aws::String& GetExistingHourlyCommitment() const{ return m_existingHourlyCommitment; }

    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline bool ExistingHourlyCommitmentHasBeenSet() const { return m_existingHourlyCommitmentHasBeenSet; }

    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline void SetExistingHourlyCommitment(const Aws::String& value) { m_existingHourlyCommitmentHasBeenSet = true; m_existingHourlyCommitment = value; }

    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline void SetExistingHourlyCommitment(Aws::String&& value) { m_existingHourlyCommitmentHasBeenSet = true; m_existingHourlyCommitment = std::move(value); }

    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline void SetExistingHourlyCommitment(const char* value) { m_existingHourlyCommitmentHasBeenSet = true; m_existingHourlyCommitment.assign(value); }

    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline RecommendationDetailData& WithExistingHourlyCommitment(const Aws::String& value) { SetExistingHourlyCommitment(value); return *this;}

    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline RecommendationDetailData& WithExistingHourlyCommitment(Aws::String&& value) { SetExistingHourlyCommitment(std::move(value)); return *this;}

    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline RecommendationDetailData& WithExistingHourlyCommitment(const char* value) { SetExistingHourlyCommitment(value); return *this;}


    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const{ return m_hourlyCommitmentToPurchase; }

    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }

    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline void SetHourlyCommitmentToPurchase(const Aws::String& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = value; }

    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline void SetHourlyCommitmentToPurchase(Aws::String&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::move(value); }

    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline void SetHourlyCommitmentToPurchase(const char* value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase.assign(value); }

    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline RecommendationDetailData& WithHourlyCommitmentToPurchase(const Aws::String& value) { SetHourlyCommitmentToPurchase(value); return *this;}

    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline RecommendationDetailData& WithHourlyCommitmentToPurchase(Aws::String&& value) { SetHourlyCommitmentToPurchase(std::move(value)); return *this;}

    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline RecommendationDetailData& WithHourlyCommitmentToPurchase(const char* value) { SetHourlyCommitmentToPurchase(value); return *this;}


    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline const Aws::String& GetUpfrontCost() const{ return m_upfrontCost; }

    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }

    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline void SetUpfrontCost(const Aws::String& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = value; }

    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline void SetUpfrontCost(Aws::String&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::move(value); }

    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline void SetUpfrontCost(const char* value) { m_upfrontCostHasBeenSet = true; m_upfrontCost.assign(value); }

    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline RecommendationDetailData& WithUpfrontCost(const Aws::String& value) { SetUpfrontCost(value); return *this;}

    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline RecommendationDetailData& WithUpfrontCost(Aws::String&& value) { SetUpfrontCost(std::move(value)); return *this;}

    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline RecommendationDetailData& WithUpfrontCost(const char* value) { SetUpfrontCost(value); return *this;}


    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentAverageCoverage() const{ return m_currentAverageCoverage; }

    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline bool CurrentAverageCoverageHasBeenSet() const { return m_currentAverageCoverageHasBeenSet; }

    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline void SetCurrentAverageCoverage(const Aws::String& value) { m_currentAverageCoverageHasBeenSet = true; m_currentAverageCoverage = value; }

    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline void SetCurrentAverageCoverage(Aws::String&& value) { m_currentAverageCoverageHasBeenSet = true; m_currentAverageCoverage = std::move(value); }

    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline void SetCurrentAverageCoverage(const char* value) { m_currentAverageCoverageHasBeenSet = true; m_currentAverageCoverage.assign(value); }

    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline RecommendationDetailData& WithCurrentAverageCoverage(const Aws::String& value) { SetCurrentAverageCoverage(value); return *this;}

    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline RecommendationDetailData& WithCurrentAverageCoverage(Aws::String&& value) { SetCurrentAverageCoverage(std::move(value)); return *this;}

    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline RecommendationDetailData& WithCurrentAverageCoverage(const char* value) { SetCurrentAverageCoverage(value); return *this;}


    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedAverageCoverage() const{ return m_estimatedAverageCoverage; }

    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline bool EstimatedAverageCoverageHasBeenSet() const { return m_estimatedAverageCoverageHasBeenSet; }

    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline void SetEstimatedAverageCoverage(const Aws::String& value) { m_estimatedAverageCoverageHasBeenSet = true; m_estimatedAverageCoverage = value; }

    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline void SetEstimatedAverageCoverage(Aws::String&& value) { m_estimatedAverageCoverageHasBeenSet = true; m_estimatedAverageCoverage = std::move(value); }

    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline void SetEstimatedAverageCoverage(const char* value) { m_estimatedAverageCoverageHasBeenSet = true; m_estimatedAverageCoverage.assign(value); }

    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedAverageCoverage(const Aws::String& value) { SetEstimatedAverageCoverage(value); return *this;}

    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedAverageCoverage(Aws::String&& value) { SetEstimatedAverageCoverage(std::move(value)); return *this;}

    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline RecommendationDetailData& WithEstimatedAverageCoverage(const char* value) { SetEstimatedAverageCoverage(value); return *this;}


    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline const Aws::Vector<RecommendationDetailHourlyMetrics>& GetMetricsOverLookbackPeriod() const{ return m_metricsOverLookbackPeriod; }

    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline bool MetricsOverLookbackPeriodHasBeenSet() const { return m_metricsOverLookbackPeriodHasBeenSet; }

    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline void SetMetricsOverLookbackPeriod(const Aws::Vector<RecommendationDetailHourlyMetrics>& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod = value; }

    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline void SetMetricsOverLookbackPeriod(Aws::Vector<RecommendationDetailHourlyMetrics>&& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod = std::move(value); }

    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline RecommendationDetailData& WithMetricsOverLookbackPeriod(const Aws::Vector<RecommendationDetailHourlyMetrics>& value) { SetMetricsOverLookbackPeriod(value); return *this;}

    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline RecommendationDetailData& WithMetricsOverLookbackPeriod(Aws::Vector<RecommendationDetailHourlyMetrics>&& value) { SetMetricsOverLookbackPeriod(std::move(value)); return *this;}

    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline RecommendationDetailData& AddMetricsOverLookbackPeriod(const RecommendationDetailHourlyMetrics& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod.push_back(value); return *this; }

    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline RecommendationDetailData& AddMetricsOverLookbackPeriod(RecommendationDetailHourlyMetrics&& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod.push_back(std::move(value)); return *this; }

  private:

    AccountScope m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    SupportedSavingsPlansType m_savingsPlansType;
    bool m_savingsPlansTypeHasBeenSet = false;

    TermInYears m_termInYears;
    bool m_termInYearsHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    Aws::String m_generationTimestamp;
    bool m_generationTimestampHasBeenSet = false;

    Aws::String m_latestUsageTimestamp;
    bool m_latestUsageTimestampHasBeenSet = false;

    Aws::String m_currentAverageHourlyOnDemandSpend;
    bool m_currentAverageHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentMaximumHourlyOnDemandSpend;
    bool m_currentMaximumHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentMinimumHourlyOnDemandSpend;
    bool m_currentMinimumHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_estimatedAverageUtilization;
    bool m_estimatedAverageUtilizationHasBeenSet = false;

    Aws::String m_estimatedMonthlySavingsAmount;
    bool m_estimatedMonthlySavingsAmountHasBeenSet = false;

    Aws::String m_estimatedOnDemandCost;
    bool m_estimatedOnDemandCostHasBeenSet = false;

    Aws::String m_estimatedOnDemandCostWithCurrentCommitment;
    bool m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = false;

    Aws::String m_estimatedROI;
    bool m_estimatedROIHasBeenSet = false;

    Aws::String m_estimatedSPCost;
    bool m_estimatedSPCostHasBeenSet = false;

    Aws::String m_estimatedSavingsAmount;
    bool m_estimatedSavingsAmountHasBeenSet = false;

    Aws::String m_estimatedSavingsPercentage;
    bool m_estimatedSavingsPercentageHasBeenSet = false;

    Aws::String m_existingHourlyCommitment;
    bool m_existingHourlyCommitmentHasBeenSet = false;

    Aws::String m_hourlyCommitmentToPurchase;
    bool m_hourlyCommitmentToPurchaseHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;

    Aws::String m_currentAverageCoverage;
    bool m_currentAverageCoverageHasBeenSet = false;

    Aws::String m_estimatedAverageCoverage;
    bool m_estimatedAverageCoverageHasBeenSet = false;

    Aws::Vector<RecommendationDetailHourlyMetrics> m_metricsOverLookbackPeriod;
    bool m_metricsOverLookbackPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
