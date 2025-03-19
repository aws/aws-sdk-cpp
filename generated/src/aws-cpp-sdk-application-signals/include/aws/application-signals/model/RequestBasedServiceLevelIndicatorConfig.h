/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorMetricConfig.h>
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
   * performance metric that a request-based SLO is to monitor.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/RequestBasedServiceLevelIndicatorConfig">AWS
   * API Reference</a></p>
   */
  class RequestBasedServiceLevelIndicatorConfig
  {
  public:
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicatorConfig() = default;
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicatorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicatorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use this structure to specify the metric to be used for the SLO.</p>
     */
    inline const RequestBasedServiceLevelIndicatorMetricConfig& GetRequestBasedSliMetricConfig() const { return m_requestBasedSliMetricConfig; }
    inline bool RequestBasedSliMetricConfigHasBeenSet() const { return m_requestBasedSliMetricConfigHasBeenSet; }
    template<typename RequestBasedSliMetricConfigT = RequestBasedServiceLevelIndicatorMetricConfig>
    void SetRequestBasedSliMetricConfig(RequestBasedSliMetricConfigT&& value) { m_requestBasedSliMetricConfigHasBeenSet = true; m_requestBasedSliMetricConfig = std::forward<RequestBasedSliMetricConfigT>(value); }
    template<typename RequestBasedSliMetricConfigT = RequestBasedServiceLevelIndicatorMetricConfig>
    RequestBasedServiceLevelIndicatorConfig& WithRequestBasedSliMetricConfig(RequestBasedSliMetricConfigT&& value) { SetRequestBasedSliMetricConfig(std::forward<RequestBasedSliMetricConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that the SLI metric is compared to. This parameter is required if
     * this SLO is tracking the <code>Latency</code> metric.</p>
     */
    inline double GetMetricThreshold() const { return m_metricThreshold; }
    inline bool MetricThresholdHasBeenSet() const { return m_metricThresholdHasBeenSet; }
    inline void SetMetricThreshold(double value) { m_metricThresholdHasBeenSet = true; m_metricThreshold = value; }
    inline RequestBasedServiceLevelIndicatorConfig& WithMetricThreshold(double value) { SetMetricThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation to use when comparing the specified metric to the
     * threshold. This parameter is required if this SLO is tracking the
     * <code>Latency</code> metric.</p>
     */
    inline ServiceLevelIndicatorComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ServiceLevelIndicatorComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline RequestBasedServiceLevelIndicatorConfig& WithComparisonOperator(ServiceLevelIndicatorComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}
  private:

    RequestBasedServiceLevelIndicatorMetricConfig m_requestBasedSliMetricConfig;
    bool m_requestBasedSliMetricConfigHasBeenSet = false;

    double m_metricThreshold{0.0};
    bool m_metricThresholdHasBeenSet = false;

    ServiceLevelIndicatorComparisonOperator m_comparisonOperator{ServiceLevelIndicatorComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
