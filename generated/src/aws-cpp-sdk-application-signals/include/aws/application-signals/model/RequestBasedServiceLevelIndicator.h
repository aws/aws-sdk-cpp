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
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicator();
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicator(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains information about the metric that the SLO monitors.
     * </p>
     */
    inline const RequestBasedServiceLevelIndicatorMetric& GetRequestBasedSliMetric() const{ return m_requestBasedSliMetric; }
    inline bool RequestBasedSliMetricHasBeenSet() const { return m_requestBasedSliMetricHasBeenSet; }
    inline void SetRequestBasedSliMetric(const RequestBasedServiceLevelIndicatorMetric& value) { m_requestBasedSliMetricHasBeenSet = true; m_requestBasedSliMetric = value; }
    inline void SetRequestBasedSliMetric(RequestBasedServiceLevelIndicatorMetric&& value) { m_requestBasedSliMetricHasBeenSet = true; m_requestBasedSliMetric = std::move(value); }
    inline RequestBasedServiceLevelIndicator& WithRequestBasedSliMetric(const RequestBasedServiceLevelIndicatorMetric& value) { SetRequestBasedSliMetric(value); return *this;}
    inline RequestBasedServiceLevelIndicator& WithRequestBasedSliMetric(RequestBasedServiceLevelIndicatorMetric&& value) { SetRequestBasedSliMetric(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is the threshold that the observed metric values of the SLI metric
     * are compared to.</p>
     */
    inline double GetMetricThreshold() const{ return m_metricThreshold; }
    inline bool MetricThresholdHasBeenSet() const { return m_metricThresholdHasBeenSet; }
    inline void SetMetricThreshold(double value) { m_metricThresholdHasBeenSet = true; m_metricThreshold = value; }
    inline RequestBasedServiceLevelIndicator& WithMetricThreshold(double value) { SetMetricThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation used when comparing the specified metric to the
     * threshold.</p>
     */
    inline const ServiceLevelIndicatorComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(const ServiceLevelIndicatorComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline void SetComparisonOperator(ServiceLevelIndicatorComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }
    inline RequestBasedServiceLevelIndicator& WithComparisonOperator(const ServiceLevelIndicatorComparisonOperator& value) { SetComparisonOperator(value); return *this;}
    inline RequestBasedServiceLevelIndicator& WithComparisonOperator(ServiceLevelIndicatorComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}
    ///@}
  private:

    RequestBasedServiceLevelIndicatorMetric m_requestBasedSliMetric;
    bool m_requestBasedSliMetricHasBeenSet = false;

    double m_metricThreshold;
    bool m_metricThresholdHasBeenSet = false;

    ServiceLevelIndicatorComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
