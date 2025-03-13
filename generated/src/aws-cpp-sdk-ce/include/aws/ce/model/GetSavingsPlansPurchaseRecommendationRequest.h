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
    AWS_COSTEXPLORER_API GetSavingsPlansPurchaseRecommendationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSavingsPlansPurchaseRecommendation"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Savings Plans recommendation type that's requested.</p>
     */
    inline SupportedSavingsPlansType GetSavingsPlansType() const { return m_savingsPlansType; }
    inline bool SavingsPlansTypeHasBeenSet() const { return m_savingsPlansTypeHasBeenSet; }
    inline void SetSavingsPlansType(SupportedSavingsPlansType value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = value; }
    inline GetSavingsPlansPurchaseRecommendationRequest& WithSavingsPlansType(SupportedSavingsPlansType value) { SetSavingsPlansType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The savings plan recommendation term that's used to generate these
     * recommendations.</p>
     */
    inline TermInYears GetTermInYears() const { return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(TermInYears value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline GetSavingsPlansPurchaseRecommendationRequest& WithTermInYears(TermInYears value) { SetTermInYears(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option that's used to generate these recommendations.</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline GetSavingsPlansPurchaseRecommendationRequest& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline AccountScope GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(AccountScope value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline GetSavingsPlansPurchaseRecommendationRequest& WithAccountScope(AccountScope value) { SetAccountScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetSavingsPlansPurchaseRecommendationRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline GetSavingsPlansPurchaseRecommendationRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline LookbackPeriodInDays GetLookbackPeriodInDays() const { return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline GetSavingsPlansPurchaseRecommendationRequest& WithLookbackPeriodInDays(LookbackPeriodInDays value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
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
    inline const Expression& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Expression>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Expression>
    GetSavingsPlansPurchaseRecommendationRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    SupportedSavingsPlansType m_savingsPlansType{SupportedSavingsPlansType::NOT_SET};
    bool m_savingsPlansTypeHasBeenSet = false;

    TermInYears m_termInYears{TermInYears::NOT_SET};
    bool m_termInYearsHasBeenSet = false;

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    AccountScope m_accountScope{AccountScope::NOT_SET};
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays{LookbackPeriodInDays::NOT_SET};
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
