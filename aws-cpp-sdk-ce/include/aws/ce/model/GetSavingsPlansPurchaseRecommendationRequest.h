/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/SupportedSavingsPlansType.h>
#include <aws/ce/model/TermInYears.h>
#include <aws/ce/model/PaymentOption.h>
#include <aws/ce/model/AccountScope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/LookbackPeriodInDays.h>
#include <aws/ce/model/Expression.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetSavingsPlansPurchaseRecommendationRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansPurchaseRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSavingsPlansPurchaseRecommendation"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Savings Plans recommendation type that's requested.</p>
     */
    inline const SupportedSavingsPlansType& GetSavingsPlansType() const{ return m_savingsPlansType; }

    /**
     * <p>The Savings Plans recommendation type that's requested.</p>
     */
    inline bool SavingsPlansTypeHasBeenSet() const { return m_savingsPlansTypeHasBeenSet; }

    /**
     * <p>The Savings Plans recommendation type that's requested.</p>
     */
    inline void SetSavingsPlansType(const SupportedSavingsPlansType& value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = value; }

    /**
     * <p>The Savings Plans recommendation type that's requested.</p>
     */
    inline void SetSavingsPlansType(SupportedSavingsPlansType&& value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = std::move(value); }

    /**
     * <p>The Savings Plans recommendation type that's requested.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithSavingsPlansType(const SupportedSavingsPlansType& value) { SetSavingsPlansType(value); return *this;}

    /**
     * <p>The Savings Plans recommendation type that's requested.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithSavingsPlansType(SupportedSavingsPlansType&& value) { SetSavingsPlansType(std::move(value)); return *this;}


    /**
     * <p>The savings plan recommendation term that's used to generate these
     * recommendations.</p>
     */
    inline const TermInYears& GetTermInYears() const{ return m_termInYears; }

    /**
     * <p>The savings plan recommendation term that's used to generate these
     * recommendations.</p>
     */
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }

    /**
     * <p>The savings plan recommendation term that's used to generate these
     * recommendations.</p>
     */
    inline void SetTermInYears(const TermInYears& value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }

    /**
     * <p>The savings plan recommendation term that's used to generate these
     * recommendations.</p>
     */
    inline void SetTermInYears(TermInYears&& value) { m_termInYearsHasBeenSet = true; m_termInYears = std::move(value); }

    /**
     * <p>The savings plan recommendation term that's used to generate these
     * recommendations.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithTermInYears(const TermInYears& value) { SetTermInYears(value); return *this;}

    /**
     * <p>The savings plan recommendation term that's used to generate these
     * recommendations.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithTermInYears(TermInYears&& value) { SetTermInYears(std::move(value)); return *this;}


    /**
     * <p>The payment option that's used to generate these recommendations.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option that's used to generate these recommendations.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option that's used to generate these recommendations.</p>
     */
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option that's used to generate these recommendations.</p>
     */
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option that's used to generate these recommendations.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option that's used to generate these recommendations.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline const AccountScope& GetAccountScope() const{ return m_accountScope; }

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline void SetAccountScope(const AccountScope& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline void SetAccountScope(AccountScope&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithAccountScope(const AccountScope& value) { SetAccountScope(value); return *this;}

    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithAccountScope(AccountScope&& value) { SetAccountScope(std::move(value)); return *this;}


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline const LookbackPeriodInDays& GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }

    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }

    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline void SetLookbackPeriodInDays(const LookbackPeriodInDays& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }

    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays&& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = std::move(value); }

    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithLookbackPeriodInDays(const LookbackPeriodInDays& value) { SetLookbackPeriodInDays(value); return *this;}

    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithLookbackPeriodInDays(LookbackPeriodInDays&& value) { SetLookbackPeriodInDays(std::move(value)); return *this;}


    /**
     * <p>You can filter your recommendations by Account ID with the
     * <code>LINKED_ACCOUNT</code> dimension. To filter your recommendations by Account
     * ID, specify <code>Key</code> as <code>LINKED_ACCOUNT</code> and
     * <code>Value</code> as the comma-separated Acount ID(s) that you want to see
     * Savings Plans purchase recommendations for.</p> <p>For
     * GetSavingsPlansPurchaseRecommendation, the <code>Filter</code> doesn't include
     * <code>CostCategories</code> or <code>Tags</code>. It only includes
     * <code>Dimensions</code>. With <code>Dimensions</code>, <code>Key</code> must be
     * <code>LINKED_ACCOUNT</code> and <code>Value</code> can be a single Account ID or
     * multiple comma-separated Account IDs that you want to see Savings Plans Purchase
     * Recommendations for. <code>AND</code> and <code>OR</code> operators are not
     * supported.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>You can filter your recommendations by Account ID with the
     * <code>LINKED_ACCOUNT</code> dimension. To filter your recommendations by Account
     * ID, specify <code>Key</code> as <code>LINKED_ACCOUNT</code> and
     * <code>Value</code> as the comma-separated Acount ID(s) that you want to see
     * Savings Plans purchase recommendations for.</p> <p>For
     * GetSavingsPlansPurchaseRecommendation, the <code>Filter</code> doesn't include
     * <code>CostCategories</code> or <code>Tags</code>. It only includes
     * <code>Dimensions</code>. With <code>Dimensions</code>, <code>Key</code> must be
     * <code>LINKED_ACCOUNT</code> and <code>Value</code> can be a single Account ID or
     * multiple comma-separated Account IDs that you want to see Savings Plans Purchase
     * Recommendations for. <code>AND</code> and <code>OR</code> operators are not
     * supported.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>You can filter your recommendations by Account ID with the
     * <code>LINKED_ACCOUNT</code> dimension. To filter your recommendations by Account
     * ID, specify <code>Key</code> as <code>LINKED_ACCOUNT</code> and
     * <code>Value</code> as the comma-separated Acount ID(s) that you want to see
     * Savings Plans purchase recommendations for.</p> <p>For
     * GetSavingsPlansPurchaseRecommendation, the <code>Filter</code> doesn't include
     * <code>CostCategories</code> or <code>Tags</code>. It only includes
     * <code>Dimensions</code>. With <code>Dimensions</code>, <code>Key</code> must be
     * <code>LINKED_ACCOUNT</code> and <code>Value</code> can be a single Account ID or
     * multiple comma-separated Account IDs that you want to see Savings Plans Purchase
     * Recommendations for. <code>AND</code> and <code>OR</code> operators are not
     * supported.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can filter your recommendations by Account ID with the
     * <code>LINKED_ACCOUNT</code> dimension. To filter your recommendations by Account
     * ID, specify <code>Key</code> as <code>LINKED_ACCOUNT</code> and
     * <code>Value</code> as the comma-separated Acount ID(s) that you want to see
     * Savings Plans purchase recommendations for.</p> <p>For
     * GetSavingsPlansPurchaseRecommendation, the <code>Filter</code> doesn't include
     * <code>CostCategories</code> or <code>Tags</code>. It only includes
     * <code>Dimensions</code>. With <code>Dimensions</code>, <code>Key</code> must be
     * <code>LINKED_ACCOUNT</code> and <code>Value</code> can be a single Account ID or
     * multiple comma-separated Account IDs that you want to see Savings Plans Purchase
     * Recommendations for. <code>AND</code> and <code>OR</code> operators are not
     * supported.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>You can filter your recommendations by Account ID with the
     * <code>LINKED_ACCOUNT</code> dimension. To filter your recommendations by Account
     * ID, specify <code>Key</code> as <code>LINKED_ACCOUNT</code> and
     * <code>Value</code> as the comma-separated Acount ID(s) that you want to see
     * Savings Plans purchase recommendations for.</p> <p>For
     * GetSavingsPlansPurchaseRecommendation, the <code>Filter</code> doesn't include
     * <code>CostCategories</code> or <code>Tags</code>. It only includes
     * <code>Dimensions</code>. With <code>Dimensions</code>, <code>Key</code> must be
     * <code>LINKED_ACCOUNT</code> and <code>Value</code> can be a single Account ID or
     * multiple comma-separated Account IDs that you want to see Savings Plans Purchase
     * Recommendations for. <code>AND</code> and <code>OR</code> operators are not
     * supported.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>You can filter your recommendations by Account ID with the
     * <code>LINKED_ACCOUNT</code> dimension. To filter your recommendations by Account
     * ID, specify <code>Key</code> as <code>LINKED_ACCOUNT</code> and
     * <code>Value</code> as the comma-separated Acount ID(s) that you want to see
     * Savings Plans purchase recommendations for.</p> <p>For
     * GetSavingsPlansPurchaseRecommendation, the <code>Filter</code> doesn't include
     * <code>CostCategories</code> or <code>Tags</code>. It only includes
     * <code>Dimensions</code>. With <code>Dimensions</code>, <code>Key</code> must be
     * <code>LINKED_ACCOUNT</code> and <code>Value</code> can be a single Account ID or
     * multiple comma-separated Account IDs that you want to see Savings Plans Purchase
     * Recommendations for. <code>AND</code> and <code>OR</code> operators are not
     * supported.</p>
     */
    inline GetSavingsPlansPurchaseRecommendationRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}

  private:

    SupportedSavingsPlansType m_savingsPlansType;
    bool m_savingsPlansTypeHasBeenSet = false;

    TermInYears m_termInYears;
    bool m_termInYearsHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    AccountScope m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
