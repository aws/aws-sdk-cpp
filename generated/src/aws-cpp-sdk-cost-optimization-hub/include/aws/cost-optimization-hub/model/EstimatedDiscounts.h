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
    AWS_COSTOPTIMIZATIONHUB_API EstimatedDiscounts();
    AWS_COSTOPTIMIZATIONHUB_API EstimatedDiscounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API EstimatedDiscounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Estimated other discounts include all discounts that are not itemized.
     * Itemized discounts include <code>reservedInstanceDiscount</code> and
     * <code>savingsPlansDiscount</code>.</p>
     */
    inline double GetOtherDiscount() const{ return m_otherDiscount; }

    /**
     * <p>Estimated other discounts include all discounts that are not itemized.
     * Itemized discounts include <code>reservedInstanceDiscount</code> and
     * <code>savingsPlansDiscount</code>.</p>
     */
    inline bool OtherDiscountHasBeenSet() const { return m_otherDiscountHasBeenSet; }

    /**
     * <p>Estimated other discounts include all discounts that are not itemized.
     * Itemized discounts include <code>reservedInstanceDiscount</code> and
     * <code>savingsPlansDiscount</code>.</p>
     */
    inline void SetOtherDiscount(double value) { m_otherDiscountHasBeenSet = true; m_otherDiscount = value; }

    /**
     * <p>Estimated other discounts include all discounts that are not itemized.
     * Itemized discounts include <code>reservedInstanceDiscount</code> and
     * <code>savingsPlansDiscount</code>.</p>
     */
    inline EstimatedDiscounts& WithOtherDiscount(double value) { SetOtherDiscount(value); return *this;}


    /**
     * <p>Estimated reserved instance discounts.</p>
     */
    inline double GetReservedInstancesDiscount() const{ return m_reservedInstancesDiscount; }

    /**
     * <p>Estimated reserved instance discounts.</p>
     */
    inline bool ReservedInstancesDiscountHasBeenSet() const { return m_reservedInstancesDiscountHasBeenSet; }

    /**
     * <p>Estimated reserved instance discounts.</p>
     */
    inline void SetReservedInstancesDiscount(double value) { m_reservedInstancesDiscountHasBeenSet = true; m_reservedInstancesDiscount = value; }

    /**
     * <p>Estimated reserved instance discounts.</p>
     */
    inline EstimatedDiscounts& WithReservedInstancesDiscount(double value) { SetReservedInstancesDiscount(value); return *this;}


    /**
     * <p>Estimated Savings Plans discounts.</p>
     */
    inline double GetSavingsPlansDiscount() const{ return m_savingsPlansDiscount; }

    /**
     * <p>Estimated Savings Plans discounts.</p>
     */
    inline bool SavingsPlansDiscountHasBeenSet() const { return m_savingsPlansDiscountHasBeenSet; }

    /**
     * <p>Estimated Savings Plans discounts.</p>
     */
    inline void SetSavingsPlansDiscount(double value) { m_savingsPlansDiscountHasBeenSet = true; m_savingsPlansDiscount = value; }

    /**
     * <p>Estimated Savings Plans discounts.</p>
     */
    inline EstimatedDiscounts& WithSavingsPlansDiscount(double value) { SetSavingsPlansDiscount(value); return *this;}

  private:

    double m_otherDiscount;
    bool m_otherDiscountHasBeenSet = false;

    double m_reservedInstancesDiscount;
    bool m_reservedInstancesDiscountHasBeenSet = false;

    double m_savingsPlansDiscount;
    bool m_savingsPlansDiscountHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
