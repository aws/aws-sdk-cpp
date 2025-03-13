/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/MetricDataQuery.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a customized capacity metric for a predictive scaling
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PredictiveScalingCustomizedCapacityMetric">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingCustomizedCapacityMetric
  {
  public:
    AWS_AUTOSCALING_API PredictiveScalingCustomizedCapacityMetric() = default;
    AWS_AUTOSCALING_API PredictiveScalingCustomizedCapacityMetric(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API PredictiveScalingCustomizedCapacityMetric& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>One or more metric data queries to provide the data points for a capacity
     * metric. Use multiple metric data queries only if you are performing a math
     * expression on returned data. </p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetricDataQueries() const { return m_metricDataQueries; }
    inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }
    template<typename MetricDataQueriesT = Aws::Vector<MetricDataQuery>>
    void SetMetricDataQueries(MetricDataQueriesT&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = std::forward<MetricDataQueriesT>(value); }
    template<typename MetricDataQueriesT = Aws::Vector<MetricDataQuery>>
    PredictiveScalingCustomizedCapacityMetric& WithMetricDataQueries(MetricDataQueriesT&& value) { SetMetricDataQueries(std::forward<MetricDataQueriesT>(value)); return *this;}
    template<typename MetricDataQueriesT = MetricDataQuery>
    PredictiveScalingCustomizedCapacityMetric& AddMetricDataQueries(MetricDataQueriesT&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.emplace_back(std::forward<MetricDataQueriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MetricDataQuery> m_metricDataQueries;
    bool m_metricDataQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
