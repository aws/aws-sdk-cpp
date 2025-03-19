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
    AWS_BCMPRICINGCALCULATOR_API CostDifference() = default;
    AWS_BCMPRICINGCALCULATOR_API CostDifference(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API CostDifference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The historical cost amount. </p>
     */
    inline const CostAmount& GetHistoricalCost() const { return m_historicalCost; }
    inline bool HistoricalCostHasBeenSet() const { return m_historicalCostHasBeenSet; }
    template<typename HistoricalCostT = CostAmount>
    void SetHistoricalCost(HistoricalCostT&& value) { m_historicalCostHasBeenSet = true; m_historicalCost = std::forward<HistoricalCostT>(value); }
    template<typename HistoricalCostT = CostAmount>
    CostDifference& WithHistoricalCost(HistoricalCostT&& value) { SetHistoricalCost(std::forward<HistoricalCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated cost amount. </p>
     */
    inline const CostAmount& GetEstimatedCost() const { return m_estimatedCost; }
    inline bool EstimatedCostHasBeenSet() const { return m_estimatedCostHasBeenSet; }
    template<typename EstimatedCostT = CostAmount>
    void SetEstimatedCost(EstimatedCostT&& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = std::forward<EstimatedCostT>(value); }
    template<typename EstimatedCostT = CostAmount>
    CostDifference& WithEstimatedCost(EstimatedCostT&& value) { SetEstimatedCost(std::forward<EstimatedCostT>(value)); return *this;}
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
