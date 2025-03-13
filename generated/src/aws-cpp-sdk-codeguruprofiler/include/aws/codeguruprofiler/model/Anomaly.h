/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguruprofiler/model/Metric.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/AnomalyInstance.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> Details about an anomaly in a specific metric of application profile. The
   * anomaly is detected using analysis of the metric data over a period of time.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/Anomaly">AWS
   * API Reference</a></p>
   */
  class Anomaly
  {
  public:
    AWS_CODEGURUPROFILER_API Anomaly() = default;
    AWS_CODEGURUPROFILER_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline const Aws::Vector<AnomalyInstance>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<AnomalyInstance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<AnomalyInstance>>
    Anomaly& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = AnomalyInstance>
    Anomaly& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Details about the metric that the analysis used when it detected the
     * anomaly. The metric includes the name of the frame that was analyzed with the
     * type and thread states used to derive the metric value for that frame. </p>
     */
    inline const Metric& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Metric>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Metric>
    Anomaly& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    Anomaly& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalyInstance> m_instances;
    bool m_instancesHasBeenSet = false;

    Metric m_metric;
    bool m_metricHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
