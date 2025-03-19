/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/DataQualityMetricType.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>An array that describes a data quality metric. Each
   * <code>DataQualityMetric</code> object contains the data quality metric name, its
   * value, a description of the metric, and the affected column.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DataQualityMetric">AWS
   * API Reference</a></p>
   */
  class DataQualityMetric
  {
  public:
    AWS_LOOKOUTMETRICS_API DataQualityMetric() = default;
    AWS_LOOKOUTMETRICS_API DataQualityMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DataQualityMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality metric.</p>
     */
    inline DataQualityMetricType GetMetricType() const { return m_metricType; }
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }
    inline void SetMetricType(DataQualityMetricType value) { m_metricTypeHasBeenSet = true; m_metricType = value; }
    inline DataQualityMetric& WithMetricType(DataQualityMetricType value) { SetMetricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data quality metric.</p>
     */
    inline const Aws::String& GetMetricDescription() const { return m_metricDescription; }
    inline bool MetricDescriptionHasBeenSet() const { return m_metricDescriptionHasBeenSet; }
    template<typename MetricDescriptionT = Aws::String>
    void SetMetricDescription(MetricDescriptionT&& value) { m_metricDescriptionHasBeenSet = true; m_metricDescription = std::forward<MetricDescriptionT>(value); }
    template<typename MetricDescriptionT = Aws::String>
    DataQualityMetric& WithMetricDescription(MetricDescriptionT&& value) { SetMetricDescription(std::forward<MetricDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that is being monitored.</p>
     */
    inline const Aws::String& GetRelatedColumnName() const { return m_relatedColumnName; }
    inline bool RelatedColumnNameHasBeenSet() const { return m_relatedColumnNameHasBeenSet; }
    template<typename RelatedColumnNameT = Aws::String>
    void SetRelatedColumnName(RelatedColumnNameT&& value) { m_relatedColumnNameHasBeenSet = true; m_relatedColumnName = std::forward<RelatedColumnNameT>(value); }
    template<typename RelatedColumnNameT = Aws::String>
    DataQualityMetric& WithRelatedColumnName(RelatedColumnNameT&& value) { SetRelatedColumnName(std::forward<RelatedColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the data quality metric.</p>
     */
    inline double GetMetricValue() const { return m_metricValue; }
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }
    inline void SetMetricValue(double value) { m_metricValueHasBeenSet = true; m_metricValue = value; }
    inline DataQualityMetric& WithMetricValue(double value) { SetMetricValue(value); return *this;}
    ///@}
  private:

    DataQualityMetricType m_metricType{DataQualityMetricType::NOT_SET};
    bool m_metricTypeHasBeenSet = false;

    Aws::String m_metricDescription;
    bool m_metricDescriptionHasBeenSet = false;

    Aws::String m_relatedColumnName;
    bool m_relatedColumnNameHasBeenSet = false;

    double m_metricValue{0.0};
    bool m_metricValueHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
