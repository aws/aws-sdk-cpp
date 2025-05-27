/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/ComparisonMetricValue.h>
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
   * <p>Represents a comparison of cost and usage metrics between two time
   * periods.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostAndUsageComparison">AWS
   * API Reference</a></p>
   */
  class CostAndUsageComparison
  {
  public:
    AWS_COSTEXPLORER_API CostAndUsageComparison() = default;
    AWS_COSTEXPLORER_API CostAndUsageComparison(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostAndUsageComparison& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Expression& GetCostAndUsageSelector() const { return m_costAndUsageSelector; }
    inline bool CostAndUsageSelectorHasBeenSet() const { return m_costAndUsageSelectorHasBeenSet; }
    template<typename CostAndUsageSelectorT = Expression>
    void SetCostAndUsageSelector(CostAndUsageSelectorT&& value) { m_costAndUsageSelectorHasBeenSet = true; m_costAndUsageSelector = std::forward<CostAndUsageSelectorT>(value); }
    template<typename CostAndUsageSelectorT = Expression>
    CostAndUsageComparison& WithCostAndUsageSelector(CostAndUsageSelectorT&& value) { SetCostAndUsageSelector(std::forward<CostAndUsageSelectorT>(value)); return *this;}
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
    CostAndUsageComparison& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsKeyT = Aws::String, typename MetricsValueT = ComparisonMetricValue>
    CostAndUsageComparison& AddMetrics(MetricsKeyT&& key, MetricsValueT&& value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(std::forward<MetricsKeyT>(key), std::forward<MetricsValueT>(value)); return *this;
    }
    ///@}
  private:

    Expression m_costAndUsageSelector;
    bool m_costAndUsageSelectorHasBeenSet = false;

    Aws::Map<Aws::String, ComparisonMetricValue> m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
