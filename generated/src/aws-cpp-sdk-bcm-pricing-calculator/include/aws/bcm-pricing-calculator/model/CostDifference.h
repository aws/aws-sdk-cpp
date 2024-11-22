/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
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
   * <p> Represents the difference between historical and estimated costs.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/CostDifference">AWS
   * API Reference</a></p>
   */
  class CostDifference
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API CostDifference();
    AWS_BCMPRICINGCALCULATOR_API CostDifference(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API CostDifference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The historical cost amount. </p>
     */
    inline const CostAmount& GetHistoricalCost() const{ return m_historicalCost; }
    inline bool HistoricalCostHasBeenSet() const { return m_historicalCostHasBeenSet; }
    inline void SetHistoricalCost(const CostAmount& value) { m_historicalCostHasBeenSet = true; m_historicalCost = value; }
    inline void SetHistoricalCost(CostAmount&& value) { m_historicalCostHasBeenSet = true; m_historicalCost = std::move(value); }
    inline CostDifference& WithHistoricalCost(const CostAmount& value) { SetHistoricalCost(value); return *this;}
    inline CostDifference& WithHistoricalCost(CostAmount&& value) { SetHistoricalCost(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated cost amount. </p>
     */
    inline const CostAmount& GetEstimatedCost() const{ return m_estimatedCost; }
    inline bool EstimatedCostHasBeenSet() const { return m_estimatedCostHasBeenSet; }
    inline void SetEstimatedCost(const CostAmount& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = value; }
    inline void SetEstimatedCost(CostAmount&& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = std::move(value); }
    inline CostDifference& WithEstimatedCost(const CostAmount& value) { SetEstimatedCost(value); return *this;}
    inline CostDifference& WithEstimatedCost(CostAmount&& value) { SetEstimatedCost(std::move(value)); return *this;}
    ///@}
  private:

    CostAmount m_historicalCost;
    bool m_historicalCostHasBeenSet = false;

    CostAmount m_estimatedCost;
    bool m_estimatedCostHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
