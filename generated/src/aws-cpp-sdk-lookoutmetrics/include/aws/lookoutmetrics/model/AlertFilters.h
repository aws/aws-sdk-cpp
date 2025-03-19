/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/DimensionFilter.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>The configuration of the alert filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AlertFilters">AWS
   * API Reference</a></p>
   */
  class AlertFilters
  {
  public:
    AWS_LOOKOUTMETRICS_API AlertFilters() = default;
    AWS_LOOKOUTMETRICS_API AlertFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AlertFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricList() const { return m_metricList; }
    inline bool MetricListHasBeenSet() const { return m_metricListHasBeenSet; }
    template<typename MetricListT = Aws::Vector<Aws::String>>
    void SetMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList = std::forward<MetricListT>(value); }
    template<typename MetricListT = Aws::Vector<Aws::String>>
    AlertFilters& WithMetricList(MetricListT&& value) { SetMetricList(std::forward<MetricListT>(value)); return *this;}
    template<typename MetricListT = Aws::String>
    AlertFilters& AddMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList.emplace_back(std::forward<MetricListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline const Aws::Vector<DimensionFilter>& GetDimensionFilterList() const { return m_dimensionFilterList; }
    inline bool DimensionFilterListHasBeenSet() const { return m_dimensionFilterListHasBeenSet; }
    template<typename DimensionFilterListT = Aws::Vector<DimensionFilter>>
    void SetDimensionFilterList(DimensionFilterListT&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = std::forward<DimensionFilterListT>(value); }
    template<typename DimensionFilterListT = Aws::Vector<DimensionFilter>>
    AlertFilters& WithDimensionFilterList(DimensionFilterListT&& value) { SetDimensionFilterList(std::forward<DimensionFilterListT>(value)); return *this;}
    template<typename DimensionFilterListT = DimensionFilter>
    AlertFilters& AddDimensionFilterList(DimensionFilterListT&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.emplace_back(std::forward<DimensionFilterListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_metricList;
    bool m_metricListHasBeenSet = false;

    Aws::Vector<DimensionFilter> m_dimensionFilterList;
    bool m_dimensionFilterListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
