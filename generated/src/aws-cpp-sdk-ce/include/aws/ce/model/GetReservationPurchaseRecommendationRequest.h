/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/Expression.h>
#include <aws/ce/model/AccountScope.h>
#include <aws/ce/model/LookbackPeriodInDays.h>
#include <aws/ce/model/TermInYears.h>
#include <aws/ce/model/PaymentOption.h>
#include <aws/ce/model/ServiceSpecification.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetReservationPurchaseRecommendationRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservationPurchaseRecommendation"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The account ID that's associated with the recommendation. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline GetReservationPurchaseRecommendationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline GetReservationPurchaseRecommendationRequest& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    
    inline const Expression& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline GetReservationPurchaseRecommendationRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline const AccountScope& GetAccountScope() const{ return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(const AccountScope& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline void SetAccountScope(AccountScope&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }
    inline GetReservationPurchaseRecommendationRequest& WithAccountScope(const AccountScope& value) { SetAccountScope(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithAccountScope(AccountScope&& value) { SetAccountScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of previous days that you want Amazon Web Services to consider
     * when it calculates your recommendations.</p>
     */
    inline const LookbackPeriodInDays& GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(const LookbackPeriodInDays& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays&& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = std::move(value); }
    inline GetReservationPurchaseRecommendationRequest& WithLookbackPeriodInDays(const LookbackPeriodInDays& value) { SetLookbackPeriodInDays(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithLookbackPeriodInDays(LookbackPeriodInDays&& value) { SetLookbackPeriodInDays(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reservation term that you want recommendations for.</p>
     */
    inline const TermInYears& GetTermInYears() const{ return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(const TermInYears& value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline void SetTermInYears(TermInYears&& value) { m_termInYearsHasBeenSet = true; m_termInYears = std::move(value); }
    inline GetReservationPurchaseRecommendationRequest& WithTermInYears(const TermInYears& value) { SetTermInYears(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithTermInYears(TermInYears&& value) { SetTermInYears(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reservation purchase option that you want recommendations for.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline GetReservationPurchaseRecommendationRequest& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware specifications for the service instances that you want
     * recommendations for, such as standard or convertible Amazon EC2 instances.</p>
     */
    inline const ServiceSpecification& GetServiceSpecification() const{ return m_serviceSpecification; }
    inline bool ServiceSpecificationHasBeenSet() const { return m_serviceSpecificationHasBeenSet; }
    inline void SetServiceSpecification(const ServiceSpecification& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = value; }
    inline void SetServiceSpecification(ServiceSpecification&& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = std::move(value); }
    inline GetReservationPurchaseRecommendationRequest& WithServiceSpecification(const ServiceSpecification& value) { SetServiceSpecification(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithServiceSpecification(ServiceSpecification&& value) { SetServiceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline GetReservationPurchaseRecommendationRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }
    inline GetReservationPurchaseRecommendationRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetReservationPurchaseRecommendationRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    AccountScope m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    TermInYears m_termInYears;
    bool m_termInYearsHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    ServiceSpecification m_serviceSpecification;
    bool m_serviceSpecificationHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
