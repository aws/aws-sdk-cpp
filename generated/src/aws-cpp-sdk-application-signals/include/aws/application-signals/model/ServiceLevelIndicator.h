/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ServiceLevelIndicatorMetric.h>
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
   * period-based SLO monitors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelIndicator">AWS
   * API Reference</a></p>
   */
  class ServiceLevelIndicator
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicator();
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicator(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains information about the metric that the SLO monitors.
     * </p>
     */
    inline const ServiceLevelIndicatorMetric& GetSliMetric() const{ return m_sliMetric; }
    inline bool SliMetricHasBeenSet() const { return m_sliMetricHasBeenSet; }
    inline void SetSliMetric(const ServiceLevelIndicatorMetric& value) { m_sliMetricHasBeenSet = true; m_sliMetric = value; }
    inline void SetSliMetric(ServiceLevelIndicatorMetric&& value) { m_sliMetricHasBeenSet = true; m_sliMetric = std::move(value); }
    inline ServiceLevelIndicator& WithSliMetric(const ServiceLevelIndicatorMetric& value) { SetSliMetric(value); return *this;}
    inline ServiceLevelIndicator& WithSliMetric(ServiceLevelIndicatorMetric&& value) { SetSliMetric(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that the SLI metric is compared to.</p>
     */
    inline double GetMetricThreshold() const{ return m_metricThreshold; }
    inline bool MetricThresholdHasBeenSet() const { return m_metricThresholdHasBeenSet; }
    inline void SetMetricThreshold(double value) { m_metricThresholdHasBeenSet = true; m_metricThreshold = value; }
    inline ServiceLevelIndicator& WithMetricThreshold(double value) { SetMetricThreshold(value); return *this;}
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
    inline ServiceLevelIndicator& WithComparisonOperator(const ServiceLevelIndicatorComparisonOperator& value) { SetComparisonOperator(value); return *this;}
    inline ServiceLevelIndicator& WithComparisonOperator(ServiceLevelIndicatorComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}
    ///@}
  private:

    ServiceLevelIndicatorMetric m_sliMetric;
    bool m_sliMetricHasBeenSet = false;

    double m_metricThreshold;
    bool m_metricThresholdHasBeenSet = false;

    ServiceLevelIndicatorComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
