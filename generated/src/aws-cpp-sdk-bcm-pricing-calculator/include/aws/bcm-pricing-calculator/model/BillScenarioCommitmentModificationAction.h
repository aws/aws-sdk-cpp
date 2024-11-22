/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/AddReservedInstanceAction.h>
#include <aws/bcm-pricing-calculator/model/AddSavingsPlanAction.h>
#include <aws/bcm-pricing-calculator/model/NegateReservedInstanceAction.h>
#include <aws/bcm-pricing-calculator/model/NegateSavingsPlanAction.h>
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
   * <p> Represents an action to modify commitments in a bill scenario.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BillScenarioCommitmentModificationAction">AWS
   * API Reference</a></p>
   */
  class BillScenarioCommitmentModificationAction
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BillScenarioCommitmentModificationAction();
    AWS_BCMPRICINGCALCULATOR_API BillScenarioCommitmentModificationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillScenarioCommitmentModificationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Action to add a Reserved Instance to the scenario. </p>
     */
    inline const AddReservedInstanceAction& GetAddReservedInstanceAction() const{ return m_addReservedInstanceAction; }
    inline bool AddReservedInstanceActionHasBeenSet() const { return m_addReservedInstanceActionHasBeenSet; }
    inline void SetAddReservedInstanceAction(const AddReservedInstanceAction& value) { m_addReservedInstanceActionHasBeenSet = true; m_addReservedInstanceAction = value; }
    inline void SetAddReservedInstanceAction(AddReservedInstanceAction&& value) { m_addReservedInstanceActionHasBeenSet = true; m_addReservedInstanceAction = std::move(value); }
    inline BillScenarioCommitmentModificationAction& WithAddReservedInstanceAction(const AddReservedInstanceAction& value) { SetAddReservedInstanceAction(value); return *this;}
    inline BillScenarioCommitmentModificationAction& WithAddReservedInstanceAction(AddReservedInstanceAction&& value) { SetAddReservedInstanceAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Action to add a Savings Plan to the scenario. </p>
     */
    inline const AddSavingsPlanAction& GetAddSavingsPlanAction() const{ return m_addSavingsPlanAction; }
    inline bool AddSavingsPlanActionHasBeenSet() const { return m_addSavingsPlanActionHasBeenSet; }
    inline void SetAddSavingsPlanAction(const AddSavingsPlanAction& value) { m_addSavingsPlanActionHasBeenSet = true; m_addSavingsPlanAction = value; }
    inline void SetAddSavingsPlanAction(AddSavingsPlanAction&& value) { m_addSavingsPlanActionHasBeenSet = true; m_addSavingsPlanAction = std::move(value); }
    inline BillScenarioCommitmentModificationAction& WithAddSavingsPlanAction(const AddSavingsPlanAction& value) { SetAddSavingsPlanAction(value); return *this;}
    inline BillScenarioCommitmentModificationAction& WithAddSavingsPlanAction(AddSavingsPlanAction&& value) { SetAddSavingsPlanAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Action to remove a Reserved Instance from the scenario. </p>
     */
    inline const NegateReservedInstanceAction& GetNegateReservedInstanceAction() const{ return m_negateReservedInstanceAction; }
    inline bool NegateReservedInstanceActionHasBeenSet() const { return m_negateReservedInstanceActionHasBeenSet; }
    inline void SetNegateReservedInstanceAction(const NegateReservedInstanceAction& value) { m_negateReservedInstanceActionHasBeenSet = true; m_negateReservedInstanceAction = value; }
    inline void SetNegateReservedInstanceAction(NegateReservedInstanceAction&& value) { m_negateReservedInstanceActionHasBeenSet = true; m_negateReservedInstanceAction = std::move(value); }
    inline BillScenarioCommitmentModificationAction& WithNegateReservedInstanceAction(const NegateReservedInstanceAction& value) { SetNegateReservedInstanceAction(value); return *this;}
    inline BillScenarioCommitmentModificationAction& WithNegateReservedInstanceAction(NegateReservedInstanceAction&& value) { SetNegateReservedInstanceAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Action to remove a Savings Plan from the scenario. </p>
     */
    inline const NegateSavingsPlanAction& GetNegateSavingsPlanAction() const{ return m_negateSavingsPlanAction; }
    inline bool NegateSavingsPlanActionHasBeenSet() const { return m_negateSavingsPlanActionHasBeenSet; }
    inline void SetNegateSavingsPlanAction(const NegateSavingsPlanAction& value) { m_negateSavingsPlanActionHasBeenSet = true; m_negateSavingsPlanAction = value; }
    inline void SetNegateSavingsPlanAction(NegateSavingsPlanAction&& value) { m_negateSavingsPlanActionHasBeenSet = true; m_negateSavingsPlanAction = std::move(value); }
    inline BillScenarioCommitmentModificationAction& WithNegateSavingsPlanAction(const NegateSavingsPlanAction& value) { SetNegateSavingsPlanAction(value); return *this;}
    inline BillScenarioCommitmentModificationAction& WithNegateSavingsPlanAction(NegateSavingsPlanAction&& value) { SetNegateSavingsPlanAction(std::move(value)); return *this;}
    ///@}
  private:

    AddReservedInstanceAction m_addReservedInstanceAction;
    bool m_addReservedInstanceActionHasBeenSet = false;

    AddSavingsPlanAction m_addSavingsPlanAction;
    bool m_addSavingsPlanActionHasBeenSet = false;

    NegateReservedInstanceAction m_negateReservedInstanceAction;
    bool m_negateReservedInstanceActionHasBeenSet = false;

    NegateSavingsPlanAction m_negateSavingsPlanAction;
    bool m_negateSavingsPlanActionHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
