/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorMetric.h>
#include <aws/application-signals/model/ServiceLevelIndicatorComparisonOperator.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>This structure contains information about the performance metric that a
   * request-based SLO monitors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/RequestBasedServiceLevelIndicator">AWS
   * API Reference</a></p>
   */
  class RequestBasedServiceLevelIndicator
  {
  public:
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicator() = default;
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicator(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains information about the metric that the SLO monitors.
     * </p>
     */
    inline const RequestBasedServiceLevelIndicatorMetric& GetRequestBasedSliMetric() const { return m_requestBasedSliMetric; }
    inline bool RequestBasedSliMetricHasBeenSet() const { return m_requestBasedSliMetricHasBeenSet; }
    template<typename RequestBasedSliMetricT = RequestBasedServiceLevelIndicatorMetric>
    void SetRequestBasedSliMetric(RequestBasedSliMetricT&& value) { m_requestBasedSliMetricHasBeenSet = true; m_requestBasedSliMetric = std::forward<RequestBasedSliMetricT>(value); }
    template<typename RequestBasedSliMetricT = RequestBasedServiceLevelIndicatorMetric>
    RequestBasedServiceLevelIndicator& WithRequestBasedSliMetric(RequestBasedSliMetricT&& value) { SetRequestBasedSliMetric(std::forward<RequestBasedSliMetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is the threshold that the observed metric values of the SLI metric
     * are compared to.</p>
     */
    inline double GetMetricThreshold() const { return m_metricThreshold; }
    inline bool MetricThresholdHasBeenSet() const { return m_metricThresholdHasBeenSet; }
    inline void SetMetricThreshold(double value) { m_metricThresholdHasBeenSet = true; m_metricThreshold = value; }
    inline RequestBasedServiceLevelIndicator& WithMetricThreshold(double value) { SetMetricThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation used when comparing the specified metric to the
     * threshold.</p>
     */
    inline ServiceLevelIndicatorComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ServiceLevelIndicatorComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline RequestBasedServiceLevelIndicator& WithComparisonOperator(ServiceLevelIndicatorComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}
  private:

    RequestBasedServiceLevelIndicatorMetric m_requestBasedSliMetric;
    bool m_requestBasedSliMetricHasBeenSet = false;

    double m_metricThreshold{0.0};
    bool m_metricThresholdHasBeenSet = false;

    ServiceLevelIndicatorComparisonOperator m_comparisonOperator{ServiceLevelIndicatorComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
