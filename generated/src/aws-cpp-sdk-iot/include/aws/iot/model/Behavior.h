/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MetricDimension.h>
#include <aws/iot/model/BehaviorCriteria.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A Device Defender security profile behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Behavior">AWS API
   * Reference</a></p>
   */
  class Behavior
  {
  public:
    AWS_IOT_API Behavior() = default;
    AWS_IOT_API Behavior(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Behavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Behavior& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>What is measured by the behavior.</p>
     */
    inline const Aws::String& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Aws::String>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Aws::String>
    Behavior& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension for a metric in your behavior. For example, using a
     * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
     * to only MQTT topics where the name matches the pattern specified in the
     * dimension. This can't be used with custom metrics.</p>
     */
    inline const MetricDimension& GetMetricDimension() const { return m_metricDimension; }
    inline bool MetricDimensionHasBeenSet() const { return m_metricDimensionHasBeenSet; }
    template<typename MetricDimensionT = MetricDimension>
    void SetMetricDimension(MetricDimensionT&& value) { m_metricDimensionHasBeenSet = true; m_metricDimension = std::forward<MetricDimensionT>(value); }
    template<typename MetricDimensionT = MetricDimension>
    Behavior& WithMetricDimension(MetricDimensionT&& value) { SetMetricDimension(std::forward<MetricDimensionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>  <p>In the IoT console, you can choose to be sent
     * an alert through Amazon SNS when IoT Device Defender detects that a device is
     * behaving anomalously.</p> 
     */
    inline const BehaviorCriteria& GetCriteria() const { return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    template<typename CriteriaT = BehaviorCriteria>
    void SetCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria = std::forward<CriteriaT>(value); }
    template<typename CriteriaT = BehaviorCriteria>
    Behavior& WithCriteria(CriteriaT&& value) { SetCriteria(std::forward<CriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Suppresses alerts. </p>
     */
    inline bool GetSuppressAlerts() const { return m_suppressAlerts; }
    inline bool SuppressAlertsHasBeenSet() const { return m_suppressAlertsHasBeenSet; }
    inline void SetSuppressAlerts(bool value) { m_suppressAlertsHasBeenSet = true; m_suppressAlerts = value; }
    inline Behavior& WithSuppressAlerts(bool value) { SetSuppressAlerts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value indicates exporting metrics related to the behavior when it is
     * true.</p>
     */
    inline bool GetExportMetric() const { return m_exportMetric; }
    inline bool ExportMetricHasBeenSet() const { return m_exportMetricHasBeenSet; }
    inline void SetExportMetric(bool value) { m_exportMetricHasBeenSet = true; m_exportMetric = value; }
    inline Behavior& WithExportMetric(bool value) { SetExportMetric(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    MetricDimension m_metricDimension;
    bool m_metricDimensionHasBeenSet = false;

    BehaviorCriteria m_criteria;
    bool m_criteriaHasBeenSet = false;

    bool m_suppressAlerts{false};
    bool m_suppressAlertsHasBeenSet = false;

    bool m_exportMetric{false};
    bool m_exportMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
