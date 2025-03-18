/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/PerformanceInsightsReferenceScalar.h>
#include <aws/devops-guru/model/PerformanceInsightsReferenceMetric.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Reference scalar values and other metrics that DevOps Guru displays on a
   * graph in its console along with the actual metrics it analyzed. Compare these
   * reference values to your actual metrics to help you understand anomalous
   * behavior that DevOps Guru detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PerformanceInsightsReferenceComparisonValues">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsReferenceComparisonValues
  {
  public:
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceComparisonValues() = default;
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceComparisonValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceComparisonValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A scalar value DevOps Guru for a metric that DevOps Guru compares to actual
     * metric values. This reference value is used to determine if an actual metric
     * value should be considered anomalous.</p>
     */
    inline const PerformanceInsightsReferenceScalar& GetReferenceScalar() const { return m_referenceScalar; }
    inline bool ReferenceScalarHasBeenSet() const { return m_referenceScalarHasBeenSet; }
    template<typename ReferenceScalarT = PerformanceInsightsReferenceScalar>
    void SetReferenceScalar(ReferenceScalarT&& value) { m_referenceScalarHasBeenSet = true; m_referenceScalar = std::forward<ReferenceScalarT>(value); }
    template<typename ReferenceScalarT = PerformanceInsightsReferenceScalar>
    PerformanceInsightsReferenceComparisonValues& WithReferenceScalar(ReferenceScalarT&& value) { SetReferenceScalar(std::forward<ReferenceScalarT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A metric that DevOps Guru compares to actual metric values. This reference
     * metric is used to determine if an actual metric should be considered
     * anomalous.</p>
     */
    inline const PerformanceInsightsReferenceMetric& GetReferenceMetric() const { return m_referenceMetric; }
    inline bool ReferenceMetricHasBeenSet() const { return m_referenceMetricHasBeenSet; }
    template<typename ReferenceMetricT = PerformanceInsightsReferenceMetric>
    void SetReferenceMetric(ReferenceMetricT&& value) { m_referenceMetricHasBeenSet = true; m_referenceMetric = std::forward<ReferenceMetricT>(value); }
    template<typename ReferenceMetricT = PerformanceInsightsReferenceMetric>
    PerformanceInsightsReferenceComparisonValues& WithReferenceMetric(ReferenceMetricT&& value) { SetReferenceMetric(std::forward<ReferenceMetricT>(value)); return *this;}
    ///@}
  private:

    PerformanceInsightsReferenceScalar m_referenceScalar;
    bool m_referenceScalarHasBeenSet = false;

    PerformanceInsightsReferenceMetric m_referenceMetric;
    bool m_referenceMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
