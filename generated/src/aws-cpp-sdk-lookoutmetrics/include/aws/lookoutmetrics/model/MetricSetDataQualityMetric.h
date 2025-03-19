/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/DataQualityMetric.h>
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
   * <p>An array of <code>DataQualityMetric</code> objects that describes one or more
   * data quality metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/MetricSetDataQualityMetric">AWS
   * API Reference</a></p>
   */
  class MetricSetDataQualityMetric
  {
  public:
    AWS_LOOKOUTMETRICS_API MetricSetDataQualityMetric() = default;
    AWS_LOOKOUTMETRICS_API MetricSetDataQualityMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API MetricSetDataQualityMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline const Aws::String& GetMetricSetArn() const { return m_metricSetArn; }
    inline bool MetricSetArnHasBeenSet() const { return m_metricSetArnHasBeenSet; }
    template<typename MetricSetArnT = Aws::String>
    void SetMetricSetArn(MetricSetArnT&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::forward<MetricSetArnT>(value); }
    template<typename MetricSetArnT = Aws::String>
    MetricSetDataQualityMetric& WithMetricSetArn(MetricSetArnT&& value) { SetMetricSetArn(std::forward<MetricSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline const Aws::Vector<DataQualityMetric>& GetDataQualityMetricList() const { return m_dataQualityMetricList; }
    inline bool DataQualityMetricListHasBeenSet() const { return m_dataQualityMetricListHasBeenSet; }
    template<typename DataQualityMetricListT = Aws::Vector<DataQualityMetric>>
    void SetDataQualityMetricList(DataQualityMetricListT&& value) { m_dataQualityMetricListHasBeenSet = true; m_dataQualityMetricList = std::forward<DataQualityMetricListT>(value); }
    template<typename DataQualityMetricListT = Aws::Vector<DataQualityMetric>>
    MetricSetDataQualityMetric& WithDataQualityMetricList(DataQualityMetricListT&& value) { SetDataQualityMetricList(std::forward<DataQualityMetricListT>(value)); return *this;}
    template<typename DataQualityMetricListT = DataQualityMetric>
    MetricSetDataQualityMetric& AddDataQualityMetricList(DataQualityMetricListT&& value) { m_dataQualityMetricListHasBeenSet = true; m_dataQualityMetricList.emplace_back(std::forward<DataQualityMetricListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;

    Aws::Vector<DataQualityMetric> m_dataQualityMetricList;
    bool m_dataQualityMetricListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
