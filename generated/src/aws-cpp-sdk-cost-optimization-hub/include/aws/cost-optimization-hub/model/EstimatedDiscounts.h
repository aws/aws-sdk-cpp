/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Estimated discount details of the current and recommended resource
   * configuration for a recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/EstimatedDiscounts">AWS
   * API Reference</a></p>
   */
  class EstimatedDiscounts
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API EstimatedDiscounts() = default;
    AWS_COSTOPTIMIZATIONHUB_API EstimatedDiscounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API EstimatedDiscounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Estimated Savings Plans discounts.</p>
     */
    inline double GetSavingsPlansDiscount() const { return m_savingsPlansDiscount; }
    inline bool SavingsPlansDiscountHasBeenSet() const { return m_savingsPlansDiscountHasBeenSet; }
    inline void SetSavingsPlansDiscount(double value) { m_savingsPlansDiscountHasBeenSet = true; m_savingsPlansDiscount = value; }
    inline EstimatedDiscounts& WithSavingsPlansDiscount(double value) { SetSavingsPlansDiscount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated reserved instance discounts.</p>
     */
    inline double GetReservedInstancesDiscount() const { return m_reservedInstancesDiscount; }
    inline bool ReservedInstancesDiscountHasBeenSet() const { return m_reservedInstancesDiscountHasBeenSet; }
    inline void SetReservedInstancesDiscount(double value) { m_reservedInstancesDiscountHasBeenSet = true; m_reservedInstancesDiscount = value; }
    inline EstimatedDiscounts& WithReservedInstancesDiscount(double value) { SetReservedInstancesDiscount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated other discounts include all discounts that are not itemized.
     * Itemized discounts include <code>reservedInstanceDiscount</code> and
     * <code>savingsPlansDiscount</code>.</p>
     */
    inline double GetOtherDiscount() const { return m_otherDiscount; }
    inline bool OtherDiscountHasBeenSet() const { return m_otherDiscountHasBeenSet; }
    inline void SetOtherDiscount(double value) { m_otherDiscountHasBeenSet = true; m_otherDiscount = value; }
    inline EstimatedDiscounts& WithOtherDiscount(double value) { SetOtherDiscount(value); return *this;}
    ///@}
  private:

    double m_savingsPlansDiscount{0.0};
    bool m_savingsPlansDiscountHasBeenSet = false;

    double m_reservedInstancesDiscount{0.0};
    bool m_reservedInstancesDiscountHasBeenSet = false;

    double m_otherDiscount{0.0};
    bool m_otherDiscountHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
