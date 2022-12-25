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
    AWS_CODEGURUPROFILER_API Anomaly();
    AWS_CODEGURUPROFILER_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline const Aws::Vector<AnomalyInstance>& GetInstances() const{ return m_instances; }

    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline void SetInstances(const Aws::Vector<AnomalyInstance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline void SetInstances(Aws::Vector<AnomalyInstance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline Anomaly& WithInstances(const Aws::Vector<AnomalyInstance>& value) { SetInstances(value); return *this;}

    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline Anomaly& WithInstances(Aws::Vector<AnomalyInstance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline Anomaly& AddInstances(const AnomalyInstance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p> A list of the instances of the detected anomalies during the requested
     * period. </p>
     */
    inline Anomaly& AddInstances(AnomalyInstance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p> Details about the metric that the analysis used when it detected the
     * anomaly. The metric includes the name of the frame that was analyzed with the
     * type and thread states used to derive the metric value for that frame. </p>
     */
    inline const Metric& GetMetric() const{ return m_metric; }

    /**
     * <p> Details about the metric that the analysis used when it detected the
     * anomaly. The metric includes the name of the frame that was analyzed with the
     * type and thread states used to derive the metric value for that frame. </p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p> Details about the metric that the analysis used when it detected the
     * anomaly. The metric includes the name of the frame that was analyzed with the
     * type and thread states used to derive the metric value for that frame. </p>
     */
    inline void SetMetric(const Metric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p> Details about the metric that the analysis used when it detected the
     * anomaly. The metric includes the name of the frame that was analyzed with the
     * type and thread states used to derive the metric value for that frame. </p>
     */
    inline void SetMetric(Metric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p> Details about the metric that the analysis used when it detected the
     * anomaly. The metric includes the name of the frame that was analyzed with the
     * type and thread states used to derive the metric value for that frame. </p>
     */
    inline Anomaly& WithMetric(const Metric& value) { SetMetric(value); return *this;}

    /**
     * <p> Details about the metric that the analysis used when it detected the
     * anomaly. The metric includes the name of the frame that was analyzed with the
     * type and thread states used to derive the metric value for that frame. </p>
     */
    inline Anomaly& WithMetric(Metric&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline Anomaly& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline Anomaly& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for which metric was flagged as anomalous.</p>
     */
    inline Anomaly& WithReason(const char* value) { SetReason(value); return *this;}

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
