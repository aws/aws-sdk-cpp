/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Contains cost or usage metric values for comparing two time periods. Each
   * value includes amounts for the baseline and comparison time periods, their
   * difference, and the unit of measurement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ComparisonMetricValue">AWS
   * API Reference</a></p>
   */
  class ComparisonMetricValue
  {
  public:
    AWS_COSTEXPLORER_API ComparisonMetricValue() = default;
    AWS_COSTEXPLORER_API ComparisonMetricValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ComparisonMetricValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The numeric value for the baseline time period measurement.</p>
     */
    inline const Aws::String& GetBaselineTimePeriodAmount() const { return m_baselineTimePeriodAmount; }
    inline bool BaselineTimePeriodAmountHasBeenSet() const { return m_baselineTimePeriodAmountHasBeenSet; }
    template<typename BaselineTimePeriodAmountT = Aws::String>
    void SetBaselineTimePeriodAmount(BaselineTimePeriodAmountT&& value) { m_baselineTimePeriodAmountHasBeenSet = true; m_baselineTimePeriodAmount = std::forward<BaselineTimePeriodAmountT>(value); }
    template<typename BaselineTimePeriodAmountT = Aws::String>
    ComparisonMetricValue& WithBaselineTimePeriodAmount(BaselineTimePeriodAmountT&& value) { SetBaselineTimePeriodAmount(std::forward<BaselineTimePeriodAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric value for the comparison time period measurement.</p>
     */
    inline const Aws::String& GetComparisonTimePeriodAmount() const { return m_comparisonTimePeriodAmount; }
    inline bool ComparisonTimePeriodAmountHasBeenSet() const { return m_comparisonTimePeriodAmountHasBeenSet; }
    template<typename ComparisonTimePeriodAmountT = Aws::String>
    void SetComparisonTimePeriodAmount(ComparisonTimePeriodAmountT&& value) { m_comparisonTimePeriodAmountHasBeenSet = true; m_comparisonTimePeriodAmount = std::forward<ComparisonTimePeriodAmountT>(value); }
    template<typename ComparisonTimePeriodAmountT = Aws::String>
    ComparisonMetricValue& WithComparisonTimePeriodAmount(ComparisonTimePeriodAmountT&& value) { SetComparisonTimePeriodAmount(std::forward<ComparisonTimePeriodAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated difference between <code>ComparisonTimePeriodAmount</code> and
     * <code>BaselineTimePeriodAmount</code>.</p>
     */
    inline const Aws::String& GetDifference() const { return m_difference; }
    inline bool DifferenceHasBeenSet() const { return m_differenceHasBeenSet; }
    template<typename DifferenceT = Aws::String>
    void SetDifference(DifferenceT&& value) { m_differenceHasBeenSet = true; m_difference = std::forward<DifferenceT>(value); }
    template<typename DifferenceT = Aws::String>
    ComparisonMetricValue& WithDifference(DifferenceT&& value) { SetDifference(std::forward<DifferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measurement applicable to all numeric values in this
     * comparison.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    ComparisonMetricValue& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baselineTimePeriodAmount;
    bool m_baselineTimePeriodAmountHasBeenSet = false;

    Aws::String m_comparisonTimePeriodAmount;
    bool m_comparisonTimePeriodAmountHasBeenSet = false;

    Aws::String m_difference;
    bool m_differenceHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
