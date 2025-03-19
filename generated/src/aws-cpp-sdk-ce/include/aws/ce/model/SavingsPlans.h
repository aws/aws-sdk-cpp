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
    AWS_COSTEXPLORER_API SavingsPlans() = default;
    AWS_COSTEXPLORER_API SavingsPlans(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlans& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The payment option for the Savings Plans commitment.</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline SavingsPlans& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Savings Plans type.</p>
     */
    inline SupportedSavingsPlansType GetSavingsPlansType() const { return m_savingsPlansType; }
    inline bool SavingsPlansTypeHasBeenSet() const { return m_savingsPlansTypeHasBeenSet; }
    inline void SetSavingsPlansType(SupportedSavingsPlansType value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = value; }
    inline SavingsPlans& WithSavingsPlansType(SupportedSavingsPlansType value) { SetSavingsPlansType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region associated with the Savings Plans commitment.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    SavingsPlans& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the Savings Plans commitment.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    SavingsPlans& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term that you want the Savings Plans commitment for.</p>
     */
    inline TermInYears GetTermInYears() const { return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(TermInYears value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline SavingsPlans& WithTermInYears(TermInYears value) { SetTermInYears(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Savings Plans commitment.</p>
     */
    inline double GetSavingsPlansCommitment() const { return m_savingsPlansCommitment; }
    inline bool SavingsPlansCommitmentHasBeenSet() const { return m_savingsPlansCommitmentHasBeenSet; }
    inline void SetSavingsPlansCommitment(double value) { m_savingsPlansCommitmentHasBeenSet = true; m_savingsPlansCommitment = value; }
    inline SavingsPlans& WithSavingsPlansCommitment(double value) { SetSavingsPlansCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that's used to distinguish Savings Plans commitments from one
     * another.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    SavingsPlans& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}
  private:

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    SupportedSavingsPlansType m_savingsPlansType{SupportedSavingsPlansType::NOT_SET};
    bool m_savingsPlansTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    TermInYears m_termInYears{TermInYears::NOT_SET};
    bool m_termInYearsHasBeenSet = false;

    double m_savingsPlansCommitment{0.0};
    bool m_savingsPlansCommitmentHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
