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
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendation() = default;
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that Amazon Web Services recommends that you purchase this
     * instance for. For example, you can purchase this reservation for an entire
     * organization in Amazon Web Services Organizations.</p>
     */
    inline AccountScope GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(AccountScope value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline ReservationPurchaseRecommendation& WithAccountScope(AccountScope value) { SetAccountScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline LookbackPeriodInDays GetLookbackPeriodInDays() const { return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline ReservationPurchaseRecommendation& WithLookbackPeriodInDays(LookbackPeriodInDays value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term of the reservation that you want recommendations for, in years.</p>
     */
    inline TermInYears GetTermInYears() const { return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(TermInYears value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline ReservationPurchaseRecommendation& WithTermInYears(TermInYears value) { SetTermInYears(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the reservation (for example, <code>AllUpfront</code>
     * or <code>NoUpfront</code>).</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline ReservationPurchaseRecommendation& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hardware specifications for the service that you want recommendations
     * for.</p>
     */
    inline const ServiceSpecification& GetServiceSpecification() const { return m_serviceSpecification; }
    inline bool ServiceSpecificationHasBeenSet() const { return m_serviceSpecificationHasBeenSet; }
    template<typename ServiceSpecificationT = ServiceSpecification>
    void SetServiceSpecification(ServiceSpecificationT&& value) { m_serviceSpecificationHasBeenSet = true; m_serviceSpecification = std::forward<ServiceSpecificationT>(value); }
    template<typename ServiceSpecificationT = ServiceSpecification>
    ReservationPurchaseRecommendation& WithServiceSpecification(ServiceSpecificationT&& value) { SetServiceSpecification(std::forward<ServiceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the recommended purchases.</p>
     */
    inline const Aws::Vector<ReservationPurchaseRecommendationDetail>& GetRecommendationDetails() const { return m_recommendationDetails; }
    inline bool RecommendationDetailsHasBeenSet() const { return m_recommendationDetailsHasBeenSet; }
    template<typename RecommendationDetailsT = Aws::Vector<ReservationPurchaseRecommendationDetail>>
    void SetRecommendationDetails(RecommendationDetailsT&& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails = std::forward<RecommendationDetailsT>(value); }
    template<typename RecommendationDetailsT = Aws::Vector<ReservationPurchaseRecommendationDetail>>
    ReservationPurchaseRecommendation& WithRecommendationDetails(RecommendationDetailsT&& value) { SetRecommendationDetails(std::forward<RecommendationDetailsT>(value)); return *this;}
    template<typename RecommendationDetailsT = ReservationPurchaseRecommendationDetail>
    ReservationPurchaseRecommendation& AddRecommendationDetails(RecommendationDetailsT&& value) { m_recommendationDetailsHasBeenSet = true; m_recommendationDetails.emplace_back(std::forward<RecommendationDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A summary about the recommended purchase.</p>
     */
    inline const ReservationPurchaseRecommendationSummary& GetRecommendationSummary() const { return m_recommendationSummary; }
    inline bool RecommendationSummaryHasBeenSet() const { return m_recommendationSummaryHasBeenSet; }
    template<typename RecommendationSummaryT = ReservationPurchaseRecommendationSummary>
    void SetRecommendationSummary(RecommendationSummaryT&& value) { m_recommendationSummaryHasBeenSet = true; m_recommendationSummary = std::forward<RecommendationSummaryT>(value); }
    template<typename RecommendationSummaryT = ReservationPurchaseRecommendationSummary>
    ReservationPurchaseRecommendation& WithRecommendationSummary(RecommendationSummaryT&& value) { SetRecommendationSummary(std::forward<RecommendationSummaryT>(value)); return *this;}
    ///@}
  private:

    AccountScope m_accountScope{AccountScope::NOT_SET};
    bool m_accountScopeHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays{LookbackPeriodInDays::NOT_SET};
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    TermInYears m_termInYears{TermInYears::NOT_SET};
    bool m_termInYearsHasBeenSet = false;

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
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
