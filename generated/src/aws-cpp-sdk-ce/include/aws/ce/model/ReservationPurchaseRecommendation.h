/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A specific reservation that Amazon Web Services recommends for
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationPurchaseRecommendation">AWS
   * API Reference</a></p>
   */
  class ReservationPurchaseRecommendation
  {
  public:
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendation();
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that Amazon Web Services recommends that you purchase this
     * instance for. For example, you can purchase this reservation for an entire
     * organization in Amazon Web Services Organizations.</p>
     */
    inline const AccountScope& GetAccountScope() const{ return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(const AccountScope& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline void SetAccountScope(AccountScope&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }
    inline ReservationPurchaseRecommendation& WithAccountScope(const AccountScope& value) { SetAccountScope(value); return *this;}
    inline ReservationPurchaseRecommendation& WithAccountScope(AccountScope&& value) { SetAccountScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline const LookbackPeriodInDays& GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(const LookbackPeriodInDays& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays&& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = std::move(value); }
    inline ReservationPurchaseRecommendation& WithLookbackPeriodInDays(const LookbackPeriodInDays& value) { SetLookbackPeriodInDays(value); return *this;}
    inline ReservationPurchaseRecommendation& WithLookbackPeriodInDays(LookbackPeriodInDays&& value) { SetLookbackPeriodInDays(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term of the reservation that you want recommendations for, in years.</p>
     */
    inline const TermInYears& GetTermInYears() const{ return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(const TermInYears& value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline void SetTermInYears(TermInYears&& value) { m_termInYearsHasBeenSet = true; m_termInYears = std::move(value); }
    inline ReservationPurchaseRecommendation& WithTermInYears(const TermInYears& value) { SetTermInYears(value); return *this;}
    inline ReservationPurchaseRecommendation& WithTermInYears(TermInYears&& value) { SetTermInYears(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the reservation (for example, <code>AllUpfront</code>
     * or <code>NoUpfront</code>).</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline ReservationPurchaseRecommendation& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline ReservationPurchaseRecommendation& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hardware specifications for the service that you want recommendations
     * for.</p>
     */
    inline const ServiceSpecification& GetServiceSpecification() const{ return m_serviceSpecification; }
    inline bool ServiceSpecificationHasBeenSet() const { return m_serviceSpecificationHasBeenSet; }
    inline void SetServiceSpecification(const ServiceSpecification& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = value; }
    inline void SetServiceSpecification(ServiceSpecification&& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = std::move(value); }
    inline ReservationPurchaseRecommendation& WithServiceSpecification(const ServiceSpecification& value) { SetServiceSpecification(value); return *this;}
    inline ReservationPurchaseRecommendation& WithServiceSpecification(ServiceSpecification&& value) { SetServiceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline const Aws::Vector<ReservationPurchaseRecommendationDetail>& GetRecommendationDetails() const{ return m_recommendationDetails; }
    inline bool RecommendationDetailsHasBeenSet() const { return m_recommendationDetailsHasBeenSet; }
    inline void SetRecommendationDetails(const Aws::Vector<ReservationPurchaseRecommendationDetail>& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails = value; }
    inline void SetRecommendationDetails(Aws::Vector<ReservationPurchaseRecommendationDetail>&& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails = std::move(value); }
    inline ReservationPurchaseRecommendation& WithRecommendationDetails(const Aws::Vector<ReservationPurchaseRecommendationDetail>& value) { SetRecommendationDetails(value); return *this;}
    inline ReservationPurchaseRecommendation& WithRecommendationDetails(Aws::Vector<ReservationPurchaseRecommendationDetail>&& value) { SetRecommendationDetails(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendation& AddRecommendationDetails(const ReservationPurchaseRecommendationDetail& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails.push_back(value); return *this; }
    inline ReservationPurchaseRecommendation& AddRecommendationDetails(ReservationPurchaseRecommendationDetail&& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A summary about the recommended purchase.</p>
     */
    inline const ReservationPurchaseRecommendationSummary& GetRecommendationSummary() const{ return m_recommendationSummary; }
    inline bool RecommendationSummaryHasBeenSet() const { return m_recommendationSummaryHasBeenSet; }
    inline void SetRecommendationSummary(const ReservationPurchaseRecommendationSummary& value) { m_recommendationSummaryHasBeenSet = true; m_recommendationSummary = value; }
    inline void SetRecommendationSummary(ReservationPurchaseRecommendationSummary&& value) { m_recommendationSummaryHasBeenSet = true; m_recommendationSummary = std::move(value); }
    inline ReservationPurchaseRecommendation& WithRecommendationSummary(const ReservationPurchaseRecommendationSummary& value) { SetRecommendationSummary(value); return *this;}
    inline ReservationPurchaseRecommendation& WithRecommendationSummary(ReservationPurchaseRecommendationSummary&& value) { SetRecommendationSummary(std::move(value)); return *this;}
    ///@}
  private:

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

    Aws::Vector<ReservationPurchaseRecommendationDetail> m_recommendationDetails;
    bool m_recommendationDetailsHasBeenSet = false;

    ReservationPurchaseRecommendationSummary m_recommendationSummary;
    bool m_recommendationSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
