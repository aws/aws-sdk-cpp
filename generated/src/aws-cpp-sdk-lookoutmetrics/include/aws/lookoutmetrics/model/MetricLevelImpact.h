/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/ContributionMatrix.h>
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
   * <p>Details about a measure affected by an anomaly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/MetricLevelImpact">AWS
   * API Reference</a></p>
   */
  class MetricLevelImpact
  {
  public:
    AWS_LOOKOUTMETRICS_API MetricLevelImpact();
    AWS_LOOKOUTMETRICS_API MetricLevelImpact(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API MetricLevelImpact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the measure.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the measure.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the measure.</p>
     */
    inline MetricLevelImpact& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the measure.</p>
     */
    inline MetricLevelImpact& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the measure.</p>
     */
    inline MetricLevelImpact& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The number of anomalous metrics for the measure.</p>
     */
    inline int GetNumTimeSeries() const{ return m_numTimeSeries; }

    /**
     * <p>The number of anomalous metrics for the measure.</p>
     */
    inline bool NumTimeSeriesHasBeenSet() const { return m_numTimeSeriesHasBeenSet; }

    /**
     * <p>The number of anomalous metrics for the measure.</p>
     */
    inline void SetNumTimeSeries(int value) { m_numTimeSeriesHasBeenSet = true; m_numTimeSeries = value; }

    /**
     * <p>The number of anomalous metrics for the measure.</p>
     */
    inline MetricLevelImpact& WithNumTimeSeries(int value) { SetNumTimeSeries(value); return *this;}


    /**
     * <p>Details about the dimensions that contributed to the anomaly.</p>
     */
    inline const ContributionMatrix& GetContributionMatrix() const{ return m_contributionMatrix; }

    /**
     * <p>Details about the dimensions that contributed to the anomaly.</p>
     */
    inline bool ContributionMatrixHasBeenSet() const { return m_contributionMatrixHasBeenSet; }

    /**
     * <p>Details about the dimensions that contributed to the anomaly.</p>
     */
    inline void SetContributionMatrix(const ContributionMatrix& value) { m_contributionMatrixHasBeenSet = true; m_contributionMatrix = value; }

    /**
     * <p>Details about the dimensions that contributed to the anomaly.</p>
     */
    inline void SetContributionMatrix(ContributionMatrix&& value) { m_contributionMatrixHasBeenSet = true; m_contributionMatrix = std::move(value); }

    /**
     * <p>Details about the dimensions that contributed to the anomaly.</p>
     */
    inline MetricLevelImpact& WithContributionMatrix(const ContributionMatrix& value) { SetContributionMatrix(value); return *this;}

    /**
     * <p>Details about the dimensions that contributed to the anomaly.</p>
     */
    inline MetricLevelImpact& WithContributionMatrix(ContributionMatrix&& value) { SetContributionMatrix(std::move(value)); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    int m_numTimeSeries;
    bool m_numTimeSeriesHasBeenSet = false;

    ContributionMatrix m_contributionMatrix;
    bool m_contributionMatrixHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
