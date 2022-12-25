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
    AWS_LOOKOUTMETRICS_API MetricSetDataQualityMetric();
    AWS_LOOKOUTMETRICS_API MetricSetDataQualityMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API MetricSetDataQualityMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline const Aws::String& GetMetricSetArn() const{ return m_metricSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline bool MetricSetArnHasBeenSet() const { return m_metricSetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline void SetMetricSetArn(const Aws::String& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline void SetMetricSetArn(Aws::String&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline void SetMetricSetArn(const char* value) { m_metricSetArnHasBeenSet = true; m_metricSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline MetricSetDataQualityMetric& WithMetricSetArn(const Aws::String& value) { SetMetricSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline MetricSetDataQualityMetric& WithMetricSetArn(Aws::String&& value) { SetMetricSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality metric array.</p>
     */
    inline MetricSetDataQualityMetric& WithMetricSetArn(const char* value) { SetMetricSetArn(value); return *this;}


    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline const Aws::Vector<DataQualityMetric>& GetDataQualityMetricList() const{ return m_dataQualityMetricList; }

    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline bool DataQualityMetricListHasBeenSet() const { return m_dataQualityMetricListHasBeenSet; }

    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline void SetDataQualityMetricList(const Aws::Vector<DataQualityMetric>& value) { m_dataQualityMetricListHasBeenSet = true; m_dataQualityMetricList = value; }

    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline void SetDataQualityMetricList(Aws::Vector<DataQualityMetric>&& value) { m_dataQualityMetricListHasBeenSet = true; m_dataQualityMetricList = std::move(value); }

    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline MetricSetDataQualityMetric& WithDataQualityMetricList(const Aws::Vector<DataQualityMetric>& value) { SetDataQualityMetricList(value); return *this;}

    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline MetricSetDataQualityMetric& WithDataQualityMetricList(Aws::Vector<DataQualityMetric>&& value) { SetDataQualityMetricList(std::move(value)); return *this;}

    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline MetricSetDataQualityMetric& AddDataQualityMetricList(const DataQualityMetric& value) { m_dataQualityMetricListHasBeenSet = true; m_dataQualityMetricList.push_back(value); return *this; }

    /**
     * <p>The array of data quality metrics contained in the data quality metric
     * set.</p>
     */
    inline MetricSetDataQualityMetric& AddDataQualityMetricList(DataQualityMetric&& value) { m_dataQualityMetricListHasBeenSet = true; m_dataQualityMetricList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;

    Aws::Vector<DataQualityMetric> m_dataQualityMetricList;
    bool m_dataQualityMetricListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
