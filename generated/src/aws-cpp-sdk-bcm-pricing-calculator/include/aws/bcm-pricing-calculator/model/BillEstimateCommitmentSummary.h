/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/PurchaseAgreementType.h>
#include <aws/bcm-pricing-calculator/model/CostAmount.h>
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
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Provides a summary of commitment-related information for a bill estimate.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BillEstimateCommitmentSummary">AWS
   * API Reference</a></p>
   */
  class BillEstimateCommitmentSummary
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCommitmentSummary() = default;
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCommitmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCommitmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the commitment. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BillEstimateCommitmentSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of purchase agreement (e.g., Reserved Instance, Savings Plan). </p>
     */
    inline PurchaseAgreementType GetPurchaseAgreementType() const { return m_purchaseAgreementType; }
    inline bool PurchaseAgreementTypeHasBeenSet() const { return m_purchaseAgreementTypeHasBeenSet; }
    inline void SetPurchaseAgreementType(PurchaseAgreementType value) { m_purchaseAgreementTypeHasBeenSet = true; m_purchaseAgreementType = value; }
    inline BillEstimateCommitmentSummary& WithPurchaseAgreementType(PurchaseAgreementType value) { SetPurchaseAgreementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the specific offering associated with this commitment.
     * </p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    BillEstimateCommitmentSummary& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with this commitment. </p>
     */
    inline const Aws::String& GetUsageAccountId() const { return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    template<typename UsageAccountIdT = Aws::String>
    void SetUsageAccountId(UsageAccountIdT&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::forward<UsageAccountIdT>(value); }
    template<typename UsageAccountIdT = Aws::String>
    BillEstimateCommitmentSummary& WithUsageAccountId(UsageAccountIdT&& value) { SetUsageAccountId(std::forward<UsageAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services region associated with this commitment. </p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    BillEstimateCommitmentSummary& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of the commitment term. </p>
     */
    inline const Aws::String& GetTermLength() const { return m_termLength; }
    inline bool TermLengthHasBeenSet() const { return m_termLengthHasBeenSet; }
    template<typename TermLengthT = Aws::String>
    void SetTermLength(TermLengthT&& value) { m_termLengthHasBeenSet = true; m_termLength = std::forward<TermLengthT>(value); }
    template<typename TermLengthT = Aws::String>
    BillEstimateCommitmentSummary& WithTermLength(TermLengthT&& value) { SetTermLength(std::forward<TermLengthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The payment option chosen for this commitment (e.g., All Upfront, Partial
     * Upfront, No Upfront). </p>
     */
    inline const Aws::String& GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    template<typename PaymentOptionT = Aws::String>
    void SetPaymentOption(PaymentOptionT&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::forward<PaymentOptionT>(value); }
    template<typename PaymentOptionT = Aws::String>
    BillEstimateCommitmentSummary& WithPaymentOption(PaymentOptionT&& value) { SetPaymentOption(std::forward<PaymentOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The upfront payment amount for this commitment, if applicable. </p>
     */
    inline const CostAmount& GetUpfrontPayment() const { return m_upfrontPayment; }
    inline bool UpfrontPaymentHasBeenSet() const { return m_upfrontPaymentHasBeenSet; }
    template<typename UpfrontPaymentT = CostAmount>
    void SetUpfrontPayment(UpfrontPaymentT&& value) { m_upfrontPaymentHasBeenSet = true; m_upfrontPayment = std::forward<UpfrontPaymentT>(value); }
    template<typename UpfrontPaymentT = CostAmount>
    BillEstimateCommitmentSummary& WithUpfrontPayment(UpfrontPaymentT&& value) { SetUpfrontPayment(std::forward<UpfrontPaymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The monthly payment amount for this commitment, if applicable. </p>
     */
    inline const CostAmount& GetMonthlyPayment() const { return m_monthlyPayment; }
    inline bool MonthlyPaymentHasBeenSet() const { return m_monthlyPaymentHasBeenSet; }
    template<typename MonthlyPaymentT = CostAmount>
    void SetMonthlyPayment(MonthlyPaymentT&& value) { m_monthlyPaymentHasBeenSet = true; m_monthlyPayment = std::forward<MonthlyPaymentT>(value); }
    template<typename MonthlyPaymentT = CostAmount>
    BillEstimateCommitmentSummary& WithMonthlyPayment(MonthlyPaymentT&& value) { SetMonthlyPayment(std::forward<MonthlyPaymentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    PurchaseAgreementType m_purchaseAgreementType{PurchaseAgreementType::NOT_SET};
    bool m_purchaseAgreementTypeHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_termLength;
    bool m_termLengthHasBeenSet = false;

    Aws::String m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    CostAmount m_upfrontPayment;
    bool m_upfrontPaymentHasBeenSet = false;

    CostAmount m_monthlyPayment;
    bool m_monthlyPaymentHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
