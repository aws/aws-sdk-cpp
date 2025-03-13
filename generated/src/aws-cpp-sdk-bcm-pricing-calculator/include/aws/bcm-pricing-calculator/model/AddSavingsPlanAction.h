/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Represents an action to add a Savings Plan to a bill scenario.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/AddSavingsPlanAction">AWS
   * API Reference</a></p>
   */
  class AddSavingsPlanAction
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API AddSavingsPlanAction() = default;
    AWS_BCMPRICINGCALCULATOR_API AddSavingsPlanAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API AddSavingsPlanAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Savings Plan offering to add. For more information, see <a
     * href="https://docs.aws.amazon.com/savingsplans/latest/APIReference/API_DescribeSavingsPlansOfferings.html">
     * DescribeSavingsPlansOfferings</a>. </p>
     */
    inline const Aws::String& GetSavingsPlanOfferingId() const { return m_savingsPlanOfferingId; }
    inline bool SavingsPlanOfferingIdHasBeenSet() const { return m_savingsPlanOfferingIdHasBeenSet; }
    template<typename SavingsPlanOfferingIdT = Aws::String>
    void SetSavingsPlanOfferingId(SavingsPlanOfferingIdT&& value) { m_savingsPlanOfferingIdHasBeenSet = true; m_savingsPlanOfferingId = std::forward<SavingsPlanOfferingIdT>(value); }
    template<typename SavingsPlanOfferingIdT = Aws::String>
    AddSavingsPlanAction& WithSavingsPlanOfferingId(SavingsPlanOfferingIdT&& value) { SetSavingsPlanOfferingId(std::forward<SavingsPlanOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The hourly commitment, in the same currency of the
     * <code>savingsPlanOfferingId</code>. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point. </p>
     */
    inline double GetCommitment() const { return m_commitment; }
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }
    inline void SetCommitment(double value) { m_commitmentHasBeenSet = true; m_commitment = value; }
    inline AddSavingsPlanAction& WithCommitment(double value) { SetCommitment(value); return *this;}
    ///@}
  private:

    Aws::String m_savingsPlanOfferingId;
    bool m_savingsPlanOfferingIdHasBeenSet = false;

    double m_commitment{0.0};
    bool m_commitmentHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
