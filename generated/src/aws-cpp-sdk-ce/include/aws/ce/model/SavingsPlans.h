/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/PaymentOption.h>
#include <aws/ce/model/SupportedSavingsPlansType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/TermInYears.h>
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
   * <p>The Savings Plans commitment details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlans">AWS API
   * Reference</a></p>
   */
  class SavingsPlans
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlans();
    AWS_COSTEXPLORER_API SavingsPlans(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlans& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The payment option for the Savings Plans commitment.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline SavingsPlans& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline SavingsPlans& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Savings Plans type.</p>
     */
    inline const SupportedSavingsPlansType& GetSavingsPlansType() const{ return m_savingsPlansType; }
    inline bool SavingsPlansTypeHasBeenSet() const { return m_savingsPlansTypeHasBeenSet; }
    inline void SetSavingsPlansType(const SupportedSavingsPlansType& value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = value; }
    inline void SetSavingsPlansType(SupportedSavingsPlansType&& value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = std::move(value); }
    inline SavingsPlans& WithSavingsPlansType(const SupportedSavingsPlansType& value) { SetSavingsPlansType(value); return *this;}
    inline SavingsPlans& WithSavingsPlansType(SupportedSavingsPlansType&& value) { SetSavingsPlansType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region associated with the Savings Plans commitment.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline SavingsPlans& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline SavingsPlans& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline SavingsPlans& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the Savings Plans commitment.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }
    inline SavingsPlans& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}
    inline SavingsPlans& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}
    inline SavingsPlans& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term that you want the Savings Plans commitment for.</p>
     */
    inline const TermInYears& GetTermInYears() const{ return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(const TermInYears& value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline void SetTermInYears(TermInYears&& value) { m_termInYearsHasBeenSet = true; m_termInYears = std::move(value); }
    inline SavingsPlans& WithTermInYears(const TermInYears& value) { SetTermInYears(value); return *this;}
    inline SavingsPlans& WithTermInYears(TermInYears&& value) { SetTermInYears(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Savings Plans commitment.</p>
     */
    inline double GetSavingsPlansCommitment() const{ return m_savingsPlansCommitment; }
    inline bool SavingsPlansCommitmentHasBeenSet() const { return m_savingsPlansCommitmentHasBeenSet; }
    inline void SetSavingsPlansCommitment(double value) { m_savingsPlansCommitmentHasBeenSet = true; m_savingsPlansCommitment = value; }
    inline SavingsPlans& WithSavingsPlansCommitment(double value) { SetSavingsPlansCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that's used to distinguish Savings Plans commitments from one
     * another.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline SavingsPlans& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline SavingsPlans& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline SavingsPlans& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}
  private:

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    SupportedSavingsPlansType m_savingsPlansType;
    bool m_savingsPlansTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    TermInYears m_termInYears;
    bool m_termInYearsHasBeenSet = false;

    double m_savingsPlansCommitment;
    bool m_savingsPlansCommitmentHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
