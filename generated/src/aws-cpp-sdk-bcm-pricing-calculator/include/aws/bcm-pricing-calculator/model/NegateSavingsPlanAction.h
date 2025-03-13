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
   * <p> Represents an action to remove a Savings Plan from a bill scenario. </p> <p>
   * This is the ID of an existing Savings Plan in your account. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/NegateSavingsPlanAction">AWS
   * API Reference</a></p>
   */
  class NegateSavingsPlanAction
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API NegateSavingsPlanAction() = default;
    AWS_BCMPRICINGCALCULATOR_API NegateSavingsPlanAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API NegateSavingsPlanAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Savings Plan to remove. </p>
     */
    inline const Aws::String& GetSavingsPlanId() const { return m_savingsPlanId; }
    inline bool SavingsPlanIdHasBeenSet() const { return m_savingsPlanIdHasBeenSet; }
    template<typename SavingsPlanIdT = Aws::String>
    void SetSavingsPlanId(SavingsPlanIdT&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::forward<SavingsPlanIdT>(value); }
    template<typename SavingsPlanIdT = Aws::String>
    NegateSavingsPlanAction& WithSavingsPlanId(SavingsPlanIdT&& value) { SetSavingsPlanId(std::forward<SavingsPlanIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_savingsPlanId;
    bool m_savingsPlanIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
