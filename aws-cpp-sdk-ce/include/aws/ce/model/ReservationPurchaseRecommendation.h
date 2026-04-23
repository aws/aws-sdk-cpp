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
#include <aws/ce/model/AccountScope.h>
#include <aws/ce/model/LookbackPeriodInDays.h>
#include <aws/ce/model/TermInYears.h>
#include <aws/ce/model/PaymentOption.h>
#include <aws/ce/model/ServiceSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/ReservationPurchaseRecommendationSummary.h>
#include <aws/ce/model/ReservationPurchaseRecommendationDetail.h>
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
   * <p>A specific reservation that AWS recommends for purchase.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationPurchaseRecommendation">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ReservationPurchaseRecommendation
  {
  public:
    ReservationPurchaseRecommendation();
    ReservationPurchaseRecommendation(Aws::Utils::Json::JsonView jsonValue);
    ReservationPurchaseRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account scope that AWS recommends that you purchase this instance for.
     * For example, you can purchase this reservation for an entire organization in AWS
     * Organizations.</p>
     */
    inline const AccountScope& GetAccountScope() const{ return m_accountScope; }

    /**
     * <p>The account scope that AWS recommends that you purchase this instance for.
     * For example, you can purchase this reservation for an entire organization in AWS
     * Organizations.</p>
     */
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }

    /**
     * <p>The account scope that AWS recommends that you purchase this instance for.
     * For example, you can purchase this reservation for an entire organization in AWS
     * Organizations.</p>
     */
    inline void SetAccountScope(const AccountScope& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }

    /**
     * <p>The account scope that AWS recommends that you purchase this instance for.
     * For example, you can purchase this reservation for an entire organization in AWS
     * Organizations.</p>
     */
    inline void SetAccountScope(AccountScope&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }

    /**
     * <p>The account scope that AWS recommends that you purchase this instance for.
     * For example, you can purchase this reservation for an entire organization in AWS
     * Organizations.</p>
     */
    inline ReservationPurchaseRecommendation& WithAccountScope(const AccountScope& value) { SetAccountScope(value); return *this;}

    /**
     * <p>The account scope that AWS recommends that you purchase this instance for.
     * For example, you can purchase this reservation for an entire organization in AWS
     * Organizations.</p>
     */
    inline ReservationPurchaseRecommendation& WithAccountScope(AccountScope&& value) { SetAccountScope(std::move(value)); return *this;}


    /**
     * <p>How many days of previous usage that AWS considers when making this
     * recommendation.</p>
     */
    inline const LookbackPeriodInDays& GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }

    /**
     * <p>How many days of previous usage that AWS considers when making this
     * recommendation.</p>
     */
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }

    /**
     * <p>How many days of previous usage that AWS considers when making this
     * recommendation.</p>
     */
    inline void SetLookbackPeriodInDays(const LookbackPeriodInDays& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }

    /**
     * <p>How many days of previous usage that AWS considers when making this
     * recommendation.</p>
     */
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays&& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = std::move(value); }

    /**
     * <p>How many days of previous usage that AWS considers when making this
     * recommendation.</p>
     */
    inline ReservationPurchaseRecommendation& WithLookbackPeriodInDays(const LookbackPeriodInDays& value) { SetLookbackPeriodInDays(value); return *this;}

    /**
     * <p>How many days of previous usage that AWS considers when making this
     * recommendation.</p>
     */
    inline ReservationPurchaseRecommendation& WithLookbackPeriodInDays(LookbackPeriodInDays&& value) { SetLookbackPeriodInDays(std::move(value)); return *this;}


    /**
     * <p>The term of the reservation that you want recommendations for, in years.</p>
     */
    inline const TermInYears& GetTermInYears() const{ return m_termInYears; }

    /**
     * <p>The term of the reservation that you want recommendations for, in years.</p>
     */
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }

    /**
     * <p>The term of the reservation that you want recommendations for, in years.</p>
     */
    inline void SetTermInYears(const TermInYears& value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }

    /**
     * <p>The term of the reservation that you want recommendations for, in years.</p>
     */
    inline void SetTermInYears(TermInYears&& value) { m_termInYearsHasBeenSet = true; m_termInYears = std::move(value); }

    /**
     * <p>The term of the reservation that you want recommendations for, in years.</p>
     */
    inline ReservationPurchaseRecommendation& WithTermInYears(const TermInYears& value) { SetTermInYears(value); return *this;}

    /**
     * <p>The term of the reservation that you want recommendations for, in years.</p>
     */
    inline ReservationPurchaseRecommendation& WithTermInYears(TermInYears&& value) { SetTermInYears(std::move(value)); return *this;}


    /**
     * <p>The payment option for the reservation. For example, <code>AllUpfront</code>
     * or <code>NoUpfront</code>.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option for the reservation. For example, <code>AllUpfront</code>
     * or <code>NoUpfront</code>.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option for the reservation. For example, <code>AllUpfront</code>
     * or <code>NoUpfront</code>.</p>
     */
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option for the reservation. For example, <code>AllUpfront</code>
     * or <code>NoUpfront</code>.</p>
     */
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option for the reservation. For example, <code>AllUpfront</code>
     * or <code>NoUpfront</code>.</p>
     */
    inline ReservationPurchaseRecommendation& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option for the reservation. For example, <code>AllUpfront</code>
     * or <code>NoUpfront</code>.</p>
     */
    inline ReservationPurchaseRecommendation& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>Hardware specifications for the service that you want recommendations
     * for.</p>
     */
    inline const ServiceSpecification& GetServiceSpecification() const{ return m_serviceSpecification; }

    /**
     * <p>Hardware specifications for the service that you want recommendations
     * for.</p>
     */
    inline bool ServiceSpecificationHasBeenSet() const { return m_serviceSpecificationHasBeenSet; }

    /**
     * <p>Hardware specifications for the service that you want recommendations
     * for.</p>
     */
    inline void SetServiceSpecification(const ServiceSpecification& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = value; }

    /**
     * <p>Hardware specifications for the service that you want recommendations
     * for.</p>
     */
    inline void SetServiceSpecification(ServiceSpecification&& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = std::move(value); }

    /**
     * <p>Hardware specifications for the service that you want recommendations
     * for.</p>
     */
    inline ReservationPurchaseRecommendation& WithServiceSpecification(const ServiceSpecification& value) { SetServiceSpecification(value); return *this;}

    /**
     * <p>Hardware specifications for the service that you want recommendations
     * for.</p>
     */
    inline ReservationPurchaseRecommendation& WithServiceSpecification(ServiceSpecification&& value) { SetServiceSpecification(std::move(value)); return *this;}


    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline const Aws::Vector<ReservationPurchaseRecommendationDetail>& GetRecommendationDetails() const{ return m_recommendationDetails; }

    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline bool RecommendationDetailsHasBeenSet() const { return m_recommendationDetailsHasBeenSet; }

    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline void SetRecommendationDetails(const Aws::Vector<ReservationPurchaseRecommendationDetail>& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails = value; }

    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline void SetRecommendationDetails(Aws::Vector<ReservationPurchaseRecommendationDetail>&& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails = std::move(value); }

    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline ReservationPurchaseRecommendation& WithRecommendationDetails(const Aws::Vector<ReservationPurchaseRecommendationDetail>& value) { SetRecommendationDetails(value); return *this;}

    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline ReservationPurchaseRecommendation& WithRecommendationDetails(Aws::Vector<ReservationPurchaseRecommendationDetail>&& value) { SetRecommendationDetails(std::move(value)); return *this;}

    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline ReservationPurchaseRecommendation& AddRecommendationDetails(const ReservationPurchaseRecommendationDetail& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails.push_back(value); return *this; }

    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline ReservationPurchaseRecommendation& AddRecommendationDetails(ReservationPurchaseRecommendationDetail&& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>A summary about the recommended purchase.</p>
     */
    inline const ReservationPurchaseRecommendationSummary& GetRecommendationSummary() const{ return m_recommendationSummary; }

    /**
     * <p>A summary about the recommended purchase.</p>
     */
    inline bool RecommendationSummaryHasBeenSet() const { return m_recommendationSummaryHasBeenSet; }

    /**
     * <p>A summary about the recommended purchase.</p>
     */
    inline void SetRecommendationSummary(const ReservationPurchaseRecommendationSummary& value) { m_recommendationSummaryHasBeenSet = true; m_recommendationSummary = value; }

    /**
     * <p>A summary about the recommended purchase.</p>
     */
    inline void SetRecommendationSummary(ReservationPurchaseRecommendationSummary&& value) { m_recommendationSummaryHasBeenSet = true; m_recommendationSummary = std::move(value); }

    /**
     * <p>A summary about the recommended purchase.</p>
     */
    inline ReservationPurchaseRecommendation& WithRecommendationSummary(const ReservationPurchaseRecommendationSummary& value) { SetRecommendationSummary(value); return *this;}

    /**
     * <p>A summary about the recommended purchase.</p>
     */
    inline ReservationPurchaseRecommendation& WithRecommendationSummary(ReservationPurchaseRecommendationSummary&& value) { SetRecommendationSummary(std::move(value)); return *this;}

  private:

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

    Aws::Vector<ReservationPurchaseRecommendationDetail> m_recommendationDetails;
    bool m_recommendationDetailsHasBeenSet;

    ReservationPurchaseRecommendationSummary m_recommendationSummary;
    bool m_recommendationSummaryHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
