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
    AWS_LOOKOUTMETRICS_API MetricLevelImpact() = default;
    AWS_LOOKOUTMETRICS_API MetricLevelImpact(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API MetricLevelImpact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the measure.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricLevelImpact& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of anomalous metrics for the measure.</p>
     */
    inline int GetNumTimeSeries() const { return m_numTimeSeries; }
    inline bool NumTimeSeriesHasBeenSet() const { return m_numTimeSeriesHasBeenSet; }
    inline void SetNumTimeSeries(int value) { m_numTimeSeriesHasBeenSet = true; m_numTimeSeries = value; }
    inline MetricLevelImpact& WithNumTimeSeries(int value) { SetNumTimeSeries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the dimensions that contributed to the anomaly.</p>
     */
    inline const ContributionMatrix& GetContributionMatrix() const { return m_contributionMatrix; }
    inline bool ContributionMatrixHasBeenSet() const { return m_contributionMatrixHasBeenSet; }
    template<typename ContributionMatrixT = ContributionMatrix>
    void SetContributionMatrix(ContributionMatrixT&& value) { m_contributionMatrixHasBeenSet = true; m_contributionMatrix = std::forward<ContributionMatrixT>(value); }
    template<typename ContributionMatrixT = ContributionMatrix>
    MetricLevelImpact& WithContributionMatrix(ContributionMatrixT&& value) { SetContributionMatrix(std::forward<ContributionMatrixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    int m_numTimeSeries{0};
    bool m_numTimeSeriesHasBeenSet = false;

    ContributionMatrix m_contributionMatrix;
    bool m_contributionMatrixHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
