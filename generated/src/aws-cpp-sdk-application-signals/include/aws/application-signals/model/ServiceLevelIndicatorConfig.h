/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ServiceLevelIndicatorMetricConfig.h>
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
   * <p>This structure specifies the information about the service and the
   * performance metric that a period-based SLO is to monitor.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelIndicatorConfig">AWS
   * API Reference</a></p>
   */
  class ServiceLevelIndicatorConfig
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorConfig() = default;
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use this structure to specify the metric to be used for the SLO.</p>
     */
    inline const ServiceLevelIndicatorMetricConfig& GetSliMetricConfig() const { return m_sliMetricConfig; }
    inline bool SliMetricConfigHasBeenSet() const { return m_sliMetricConfigHasBeenSet; }
    template<typename SliMetricConfigT = ServiceLevelIndicatorMetricConfig>
    void SetSliMetricConfig(SliMetricConfigT&& value) { m_sliMetricConfigHasBeenSet = true; m_sliMetricConfig = std::forward<SliMetricConfigT>(value); }
    template<typename SliMetricConfigT = ServiceLevelIndicatorMetricConfig>
    ServiceLevelIndicatorConfig& WithSliMetricConfig(SliMetricConfigT&& value) { SetSliMetricConfig(std::forward<SliMetricConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used only when a request-based SLO tracks the
     * <code>Latency</code> metric. Specify the threshold value that the observed
     * <code>Latency</code> metric values are to be compared to.</p>
     */
    inline double GetMetricThreshold() const { return m_metricThreshold; }
    inline bool MetricThresholdHasBeenSet() const { return m_metricThresholdHasBeenSet; }
    inline void SetMetricThreshold(double value) { m_metricThresholdHasBeenSet = true; m_metricThreshold = value; }
    inline ServiceLevelIndicatorConfig& WithMetricThreshold(double value) { SetMetricThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation to use when comparing the specified metric to the
     * threshold.</p>
     */
    inline ServiceLevelIndicatorComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ServiceLevelIndicatorComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline ServiceLevelIndicatorConfig& WithComparisonOperator(ServiceLevelIndicatorComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}
  private:

    ServiceLevelIndicatorMetricConfig m_sliMetricConfig;
    bool m_sliMetricConfigHasBeenSet = false;

    double m_metricThreshold{0.0};
    bool m_metricThresholdHasBeenSet = false;

    ServiceLevelIndicatorComparisonOperator m_comparisonOperator{ServiceLevelIndicatorComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
