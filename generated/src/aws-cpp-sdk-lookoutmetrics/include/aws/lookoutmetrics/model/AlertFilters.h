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
    AWS_LOOKOUTMETRICS_API AlertFilters();
    AWS_LOOKOUTMETRICS_API AlertFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AlertFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricList() const{ return m_metricList; }

    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline bool MetricListHasBeenSet() const { return m_metricListHasBeenSet; }

    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline void SetMetricList(const Aws::Vector<Aws::String>& value) { m_metricListHasBeenSet = true; m_metricList = value; }

    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline void SetMetricList(Aws::Vector<Aws::String>&& value) { m_metricListHasBeenSet = true; m_metricList = std::move(value); }

    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline AlertFilters& WithMetricList(const Aws::Vector<Aws::String>& value) { SetMetricList(value); return *this;}

    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline AlertFilters& WithMetricList(Aws::Vector<Aws::String>&& value) { SetMetricList(std::move(value)); return *this;}

    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline AlertFilters& AddMetricList(const Aws::String& value) { m_metricListHasBeenSet = true; m_metricList.push_back(value); return *this; }

    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline AlertFilters& AddMetricList(Aws::String&& value) { m_metricListHasBeenSet = true; m_metricList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of measures that you want to get alerts for.</p>
     */
    inline AlertFilters& AddMetricList(const char* value) { m_metricListHasBeenSet = true; m_metricList.push_back(value); return *this; }


    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline const Aws::Vector<DimensionFilter>& GetDimensionFilterList() const{ return m_dimensionFilterList; }

    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline bool DimensionFilterListHasBeenSet() const { return m_dimensionFilterListHasBeenSet; }

    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline void SetDimensionFilterList(const Aws::Vector<DimensionFilter>& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = value; }

    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline void SetDimensionFilterList(Aws::Vector<DimensionFilter>&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = std::move(value); }

    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline AlertFilters& WithDimensionFilterList(const Aws::Vector<DimensionFilter>& value) { SetDimensionFilterList(value); return *this;}

    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline AlertFilters& WithDimensionFilterList(Aws::Vector<DimensionFilter>&& value) { SetDimensionFilterList(std::move(value)); return *this;}

    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline AlertFilters& AddDimensionFilterList(const DimensionFilter& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.push_back(value); return *this; }

    /**
     * <p>The list of DimensionFilter objects that are used for dimension-based
     * filtering.</p>
     */
    inline AlertFilters& AddDimensionFilterList(DimensionFilter&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_metricList;
    bool m_metricListHasBeenSet = false;

    Aws::Vector<DimensionFilter> m_dimensionFilterList;
    bool m_dimensionFilterListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
