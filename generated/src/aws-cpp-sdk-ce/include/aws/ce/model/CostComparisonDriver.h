/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/ComparisonMetricValue.h>
#include <aws/ce/model/CostDriver.h>
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
   * <p>Represents a collection of cost drivers and their associated metrics for cost
   * comparison analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostComparisonDriver">AWS
   * API Reference</a></p>
   */
  class CostComparisonDriver
  {
  public:
    AWS_COSTEXPLORER_API CostComparisonDriver() = default;
    AWS_COSTEXPLORER_API CostComparisonDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostComparisonDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Expression& GetCostSelector() const { return m_costSelector; }
    inline bool CostSelectorHasBeenSet() const { return m_costSelectorHasBeenSet; }
    template<typename CostSelectorT = Expression>
    void SetCostSelector(CostSelectorT&& value) { m_costSelectorHasBeenSet = true; m_costSelector = std::forward<CostSelectorT>(value); }
    template<typename CostSelectorT = Expression>
    CostComparisonDriver& WithCostSelector(CostSelectorT&& value) { SetCostSelector(std::forward<CostSelectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping of metric names to their comparison values.</p>
     */
    inline const Aws::Map<Aws::String, ComparisonMetricValue>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Map<Aws::String, ComparisonMetricValue>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Map<Aws::String, ComparisonMetricValue>>
    CostComparisonDriver& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsKeyT = Aws::String, typename MetricsValueT = ComparisonMetricValue>
    CostComparisonDriver& AddMetrics(MetricsKeyT&& key, MetricsValueT&& value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(std::forward<MetricsKeyT>(key), std::forward<MetricsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of cost drivers, each representing a cost difference between the
     * baseline and comparison time periods. Each entry also includes a metric delta
     * (for example, usage change) that contributed to the cost variance, along with
     * the identifier and type of change.</p>
     */
    inline const Aws::Vector<CostDriver>& GetCostDrivers() const { return m_costDrivers; }
    inline bool CostDriversHasBeenSet() const { return m_costDriversHasBeenSet; }
    template<typename CostDriversT = Aws::Vector<CostDriver>>
    void SetCostDrivers(CostDriversT&& value) { m_costDriversHasBeenSet = true; m_costDrivers = std::forward<CostDriversT>(value); }
    template<typename CostDriversT = Aws::Vector<CostDriver>>
    CostComparisonDriver& WithCostDrivers(CostDriversT&& value) { SetCostDrivers(std::forward<CostDriversT>(value)); return *this;}
    template<typename CostDriversT = CostDriver>
    CostComparisonDriver& AddCostDrivers(CostDriversT&& value) { m_costDriversHasBeenSet = true; m_costDrivers.emplace_back(std::forward<CostDriversT>(value)); return *this; }
    ///@}
  private:

    Expression m_costSelector;
    bool m_costSelectorHasBeenSet = false;

    Aws::Map<Aws::String, ComparisonMetricValue> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Vector<CostDriver> m_costDrivers;
    bool m_costDriversHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
