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

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationRequest : public CostExplorerRequest
  {
  public:
    GetReservationPurchaseRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservationPurchaseRecommendation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The account ID that is associated with the recommendation. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID that is associated with the recommendation. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID that is associated with the recommendation. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID that is associated with the recommendation. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID that is associated with the recommendation. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID that is associated with the recommendation. </p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID that is associated with the recommendation. </p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID that is associated with the recommendation. </p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The specific service that you want recommendations for.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The account scope that you want recommendations for. <code>PAYER</code> means
     * that AWS includes the master account and any member accounts when it calculates
     * its recommendations. <code>LINKED</code> means that AWS includes only member
     * accounts when it calculates its recommendations.</p> <p>Valid values are
     * <code>PAYER</code> and <code>LINKED</code>.</p>
     */
    inline const AccountScope& GetAccountScope() const{ return m_accountScope; }

    /**
     * <p>The account scope that you want recommendations for. <code>PAYER</code> means
     * that AWS includes the master account and any member accounts when it calculates
     * its recommendations. <code>LINKED</code> means that AWS includes only member
     * accounts when it calculates its recommendations.</p> <p>Valid values are
     * <code>PAYER</code> and <code>LINKED</code>.</p>
     */
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }

    /**
     * <p>The account scope that you want recommendations for. <code>PAYER</code> means
     * that AWS includes the master account and any member accounts when it calculates
     * its recommendations. <code>LINKED</code> means that AWS includes only member
     * accounts when it calculates its recommendations.</p> <p>Valid values are
     * <code>PAYER</code> and <code>LINKED</code>.</p>
     */
    inline void SetAccountScope(const AccountScope& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }

    /**
     * <p>The account scope that you want recommendations for. <code>PAYER</code> means
     * that AWS includes the master account and any member accounts when it calculates
     * its recommendations. <code>LINKED</code> means that AWS includes only member
     * accounts when it calculates its recommendations.</p> <p>Valid values are
     * <code>PAYER</code> and <code>LINKED</code>.</p>
     */
    inline void SetAccountScope(AccountScope&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }

    /**
     * <p>The account scope that you want recommendations for. <code>PAYER</code> means
     * that AWS includes the master account and any member accounts when it calculates
     * its recommendations. <code>LINKED</code> means that AWS includes only member
     * accounts when it calculates its recommendations.</p> <p>Valid values are
     * <code>PAYER</code> and <code>LINKED</code>.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithAccountScope(const AccountScope& value) { SetAccountScope(value); return *this;}

    /**
     * <p>The account scope that you want recommendations for. <code>PAYER</code> means
     * that AWS includes the master account and any member accounts when it calculates
     * its recommendations. <code>LINKED</code> means that AWS includes only member
     * accounts when it calculates its recommendations.</p> <p>Valid values are
     * <code>PAYER</code> and <code>LINKED</code>.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithAccountScope(AccountScope&& value) { SetAccountScope(std::move(value)); return *this;}


    /**
     * <p>The number of previous days that you want AWS to consider when it calculates
     * your recommendations.</p>
     */
    inline const LookbackPeriodInDays& GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }

    /**
     * <p>The number of previous days that you want AWS to consider when it calculates
     * your recommendations.</p>
     */
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of previous days that you want AWS to consider when it calculates
     * your recommendations.</p>
     */
    inline void SetLookbackPeriodInDays(const LookbackPeriodInDays& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }

    /**
     * <p>The number of previous days that you want AWS to consider when it calculates
     * your recommendations.</p>
     */
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays&& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = std::move(value); }

    /**
     * <p>The number of previous days that you want AWS to consider when it calculates
     * your recommendations.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithLookbackPeriodInDays(const LookbackPeriodInDays& value) { SetLookbackPeriodInDays(value); return *this;}

    /**
     * <p>The number of previous days that you want AWS to consider when it calculates
     * your recommendations.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithLookbackPeriodInDays(LookbackPeriodInDays&& value) { SetLookbackPeriodInDays(std::move(value)); return *this;}


    /**
     * <p>The reservation term that you want recommendations for.</p>
     */
    inline const TermInYears& GetTermInYears() const{ return m_termInYears; }

    /**
     * <p>The reservation term that you want recommendations for.</p>
     */
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }

    /**
     * <p>The reservation term that you want recommendations for.</p>
     */
    inline void SetTermInYears(const TermInYears& value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }

    /**
     * <p>The reservation term that you want recommendations for.</p>
     */
    inline void SetTermInYears(TermInYears&& value) { m_termInYearsHasBeenSet = true; m_termInYears = std::move(value); }

    /**
     * <p>The reservation term that you want recommendations for.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithTermInYears(const TermInYears& value) { SetTermInYears(value); return *this;}

    /**
     * <p>The reservation term that you want recommendations for.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithTermInYears(TermInYears&& value) { SetTermInYears(std::move(value)); return *this;}


    /**
     * <p>The reservation purchase option that you want recommendations for.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The reservation purchase option that you want recommendations for.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The reservation purchase option that you want recommendations for.</p>
     */
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The reservation purchase option that you want recommendations for.</p>
     */
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The reservation purchase option that you want recommendations for.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The reservation purchase option that you want recommendations for.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The hardware specifications for the service instances that you want
     * recommendations for, such as standard or convertible Amazon EC2 instances.</p>
     */
    inline const ServiceSpecification& GetServiceSpecification() const{ return m_serviceSpecification; }

    /**
     * <p>The hardware specifications for the service instances that you want
     * recommendations for, such as standard or convertible Amazon EC2 instances.</p>
     */
    inline bool ServiceSpecificationHasBeenSet() const { return m_serviceSpecificationHasBeenSet; }

    /**
     * <p>The hardware specifications for the service instances that you want
     * recommendations for, such as standard or convertible Amazon EC2 instances.</p>
     */
    inline void SetServiceSpecification(const ServiceSpecification& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = value; }

    /**
     * <p>The hardware specifications for the service instances that you want
     * recommendations for, such as standard or convertible Amazon EC2 instances.</p>
     */
    inline void SetServiceSpecification(ServiceSpecification&& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = std::move(value); }

    /**
     * <p>The hardware specifications for the service instances that you want
     * recommendations for, such as standard or convertible Amazon EC2 instances.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithServiceSpecification(const ServiceSpecification& value) { SetServiceSpecification(value); return *this;}

    /**
     * <p>The hardware specifications for the service instances that you want
     * recommendations for, such as standard or convertible Amazon EC2 instances.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithServiceSpecification(ServiceSpecification&& value) { SetServiceSpecification(std::move(value)); return *this;}


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
    inline GetReservationPurchaseRecommendationRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline GetReservationPurchaseRecommendationRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    AccountScope m_accountScope;
    bool m_accountScopeHasBeenSet;

    LookbackPeriodInDays m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet;

    TermInYears m_termInYears;
    bool m_termInYearsHasBeenSet;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet;

    ServiceSpecification m_serviceSpecification;
    bool m_serviceSpecificationHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
