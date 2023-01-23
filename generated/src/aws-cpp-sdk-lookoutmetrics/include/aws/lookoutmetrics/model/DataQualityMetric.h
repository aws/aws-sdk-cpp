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
    AWS_LOOKOUTMETRICS_API DataQualityMetric();
    AWS_LOOKOUTMETRICS_API DataQualityMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DataQualityMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data quality metric.</p>
     */
    inline const DataQualityMetricType& GetMetricType() const{ return m_metricType; }

    /**
     * <p>The name of the data quality metric.</p>
     */
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }

    /**
     * <p>The name of the data quality metric.</p>
     */
    inline void SetMetricType(const DataQualityMetricType& value) { m_metricTypeHasBeenSet = true; m_metricType = value; }

    /**
     * <p>The name of the data quality metric.</p>
     */
    inline void SetMetricType(DataQualityMetricType&& value) { m_metricTypeHasBeenSet = true; m_metricType = std::move(value); }

    /**
     * <p>The name of the data quality metric.</p>
     */
    inline DataQualityMetric& WithMetricType(const DataQualityMetricType& value) { SetMetricType(value); return *this;}

    /**
     * <p>The name of the data quality metric.</p>
     */
    inline DataQualityMetric& WithMetricType(DataQualityMetricType&& value) { SetMetricType(std::move(value)); return *this;}


    /**
     * <p>A description of the data quality metric.</p>
     */
    inline const Aws::String& GetMetricDescription() const{ return m_metricDescription; }

    /**
     * <p>A description of the data quality metric.</p>
     */
    inline bool MetricDescriptionHasBeenSet() const { return m_metricDescriptionHasBeenSet; }

    /**
     * <p>A description of the data quality metric.</p>
     */
    inline void SetMetricDescription(const Aws::String& value) { m_metricDescriptionHasBeenSet = true; m_metricDescription = value; }

    /**
     * <p>A description of the data quality metric.</p>
     */
    inline void SetMetricDescription(Aws::String&& value) { m_metricDescriptionHasBeenSet = true; m_metricDescription = std::move(value); }

    /**
     * <p>A description of the data quality metric.</p>
     */
    inline void SetMetricDescription(const char* value) { m_metricDescriptionHasBeenSet = true; m_metricDescription.assign(value); }

    /**
     * <p>A description of the data quality metric.</p>
     */
    inline DataQualityMetric& WithMetricDescription(const Aws::String& value) { SetMetricDescription(value); return *this;}

    /**
     * <p>A description of the data quality metric.</p>
     */
    inline DataQualityMetric& WithMetricDescription(Aws::String&& value) { SetMetricDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the data quality metric.</p>
     */
    inline DataQualityMetric& WithMetricDescription(const char* value) { SetMetricDescription(value); return *this;}


    /**
     * <p>The column that is being monitored.</p>
     */
    inline const Aws::String& GetRelatedColumnName() const{ return m_relatedColumnName; }

    /**
     * <p>The column that is being monitored.</p>
     */
    inline bool RelatedColumnNameHasBeenSet() const { return m_relatedColumnNameHasBeenSet; }

    /**
     * <p>The column that is being monitored.</p>
     */
    inline void SetRelatedColumnName(const Aws::String& value) { m_relatedColumnNameHasBeenSet = true; m_relatedColumnName = value; }

    /**
     * <p>The column that is being monitored.</p>
     */
    inline void SetRelatedColumnName(Aws::String&& value) { m_relatedColumnNameHasBeenSet = true; m_relatedColumnName = std::move(value); }

    /**
     * <p>The column that is being monitored.</p>
     */
    inline void SetRelatedColumnName(const char* value) { m_relatedColumnNameHasBeenSet = true; m_relatedColumnName.assign(value); }

    /**
     * <p>The column that is being monitored.</p>
     */
    inline DataQualityMetric& WithRelatedColumnName(const Aws::String& value) { SetRelatedColumnName(value); return *this;}

    /**
     * <p>The column that is being monitored.</p>
     */
    inline DataQualityMetric& WithRelatedColumnName(Aws::String&& value) { SetRelatedColumnName(std::move(value)); return *this;}

    /**
     * <p>The column that is being monitored.</p>
     */
    inline DataQualityMetric& WithRelatedColumnName(const char* value) { SetRelatedColumnName(value); return *this;}


    /**
     * <p>The value of the data quality metric.</p>
     */
    inline double GetMetricValue() const{ return m_metricValue; }

    /**
     * <p>The value of the data quality metric.</p>
     */
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }

    /**
     * <p>The value of the data quality metric.</p>
     */
    inline void SetMetricValue(double value) { m_metricValueHasBeenSet = true; m_metricValue = value; }

    /**
     * <p>The value of the data quality metric.</p>
     */
    inline DataQualityMetric& WithMetricValue(double value) { SetMetricValue(value); return *this;}

  private:

    DataQualityMetricType m_metricType;
    bool m_metricTypeHasBeenSet = false;

    Aws::String m_metricDescription;
    bool m_metricDescriptionHasBeenSet = false;

    Aws::String m_relatedColumnName;
    bool m_relatedColumnNameHasBeenSet = false;

    double m_metricValue;
    bool m_metricValueHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
