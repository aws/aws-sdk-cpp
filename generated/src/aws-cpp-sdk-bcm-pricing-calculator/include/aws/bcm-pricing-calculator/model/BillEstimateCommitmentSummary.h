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
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCommitmentSummary();
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCommitmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCommitmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the commitment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BillEstimateCommitmentSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BillEstimateCommitmentSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BillEstimateCommitmentSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of purchase agreement (e.g., Reserved Instance, Savings Plan). </p>
     */
    inline const PurchaseAgreementType& GetPurchaseAgreementType() const{ return m_purchaseAgreementType; }
    inline bool PurchaseAgreementTypeHasBeenSet() const { return m_purchaseAgreementTypeHasBeenSet; }
    inline void SetPurchaseAgreementType(const PurchaseAgreementType& value) { m_purchaseAgreementTypeHasBeenSet = true; m_purchaseAgreementType = value; }
    inline void SetPurchaseAgreementType(PurchaseAgreementType&& value) { m_purchaseAgreementTypeHasBeenSet = true; m_purchaseAgreementType = std::move(value); }
    inline BillEstimateCommitmentSummary& WithPurchaseAgreementType(const PurchaseAgreementType& value) { SetPurchaseAgreementType(value); return *this;}
    inline BillEstimateCommitmentSummary& WithPurchaseAgreementType(PurchaseAgreementType&& value) { SetPurchaseAgreementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the specific offering associated with this commitment.
     * </p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline BillEstimateCommitmentSummary& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline BillEstimateCommitmentSummary& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline BillEstimateCommitmentSummary& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with this commitment. </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline BillEstimateCommitmentSummary& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline BillEstimateCommitmentSummary& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline BillEstimateCommitmentSummary& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services region associated with this commitment. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline BillEstimateCommitmentSummary& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline BillEstimateCommitmentSummary& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline BillEstimateCommitmentSummary& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of the commitment term. </p>
     */
    inline const Aws::String& GetTermLength() const{ return m_termLength; }
    inline bool TermLengthHasBeenSet() const { return m_termLengthHasBeenSet; }
    inline void SetTermLength(const Aws::String& value) { m_termLengthHasBeenSet = true; m_termLength = value; }
    inline void SetTermLength(Aws::String&& value) { m_termLengthHasBeenSet = true; m_termLength = std::move(value); }
    inline void SetTermLength(const char* value) { m_termLengthHasBeenSet = true; m_termLength.assign(value); }
    inline BillEstimateCommitmentSummary& WithTermLength(const Aws::String& value) { SetTermLength(value); return *this;}
    inline BillEstimateCommitmentSummary& WithTermLength(Aws::String&& value) { SetTermLength(std::move(value)); return *this;}
    inline BillEstimateCommitmentSummary& WithTermLength(const char* value) { SetTermLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The payment option chosen for this commitment (e.g., All Upfront, Partial
     * Upfront, No Upfront). </p>
     */
    inline const Aws::String& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const Aws::String& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(Aws::String&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline void SetPaymentOption(const char* value) { m_paymentOptionHasBeenSet = true; m_paymentOption.assign(value); }
    inline BillEstimateCommitmentSummary& WithPaymentOption(const Aws::String& value) { SetPaymentOption(value); return *this;}
    inline BillEstimateCommitmentSummary& WithPaymentOption(Aws::String&& value) { SetPaymentOption(std::move(value)); return *this;}
    inline BillEstimateCommitmentSummary& WithPaymentOption(const char* value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The upfront payment amount for this commitment, if applicable. </p>
     */
    inline const CostAmount& GetUpfrontPayment() const{ return m_upfrontPayment; }
    inline bool UpfrontPaymentHasBeenSet() const { return m_upfrontPaymentHasBeenSet; }
    inline void SetUpfrontPayment(const CostAmount& value) { m_upfrontPaymentHasBeenSet = true; m_upfrontPayment = value; }
    inline void SetUpfrontPayment(CostAmount&& value) { m_upfrontPaymentHasBeenSet = true; m_upfrontPayment = std::move(value); }
    inline BillEstimateCommitmentSummary& WithUpfrontPayment(const CostAmount& value) { SetUpfrontPayment(value); return *this;}
    inline BillEstimateCommitmentSummary& WithUpfrontPayment(CostAmount&& value) { SetUpfrontPayment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The monthly payment amount for this commitment, if applicable. </p>
     */
    inline const CostAmount& GetMonthlyPayment() const{ return m_monthlyPayment; }
    inline bool MonthlyPaymentHasBeenSet() const { return m_monthlyPaymentHasBeenSet; }
    inline void SetMonthlyPayment(const CostAmount& value) { m_monthlyPaymentHasBeenSet = true; m_monthlyPayment = value; }
    inline void SetMonthlyPayment(CostAmount&& value) { m_monthlyPaymentHasBeenSet = true; m_monthlyPayment = std::move(value); }
    inline BillEstimateCommitmentSummary& WithMonthlyPayment(const CostAmount& value) { SetMonthlyPayment(value); return *this;}
    inline BillEstimateCommitmentSummary& WithMonthlyPayment(CostAmount&& value) { SetMonthlyPayment(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    PurchaseAgreementType m_purchaseAgreementType;
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
