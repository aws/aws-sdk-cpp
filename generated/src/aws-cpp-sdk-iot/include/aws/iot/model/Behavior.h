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
    AWS_IOT_API Behavior();
    AWS_IOT_API Behavior(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Behavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline Behavior& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline Behavior& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name you've given to the behavior.</p>
     */
    inline Behavior& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>What is measured by the behavior.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline Behavior& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline Behavior& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline Behavior& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The dimension for a metric in your behavior. For example, using a
     * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
     * to only MQTT topics where the name matches the pattern specified in the
     * dimension. This can't be used with custom metrics.</p>
     */
    inline const MetricDimension& GetMetricDimension() const{ return m_metricDimension; }

    /**
     * <p>The dimension for a metric in your behavior. For example, using a
     * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
     * to only MQTT topics where the name matches the pattern specified in the
     * dimension. This can't be used with custom metrics.</p>
     */
    inline bool MetricDimensionHasBeenSet() const { return m_metricDimensionHasBeenSet; }

    /**
     * <p>The dimension for a metric in your behavior. For example, using a
     * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
     * to only MQTT topics where the name matches the pattern specified in the
     * dimension. This can't be used with custom metrics.</p>
     */
    inline void SetMetricDimension(const MetricDimension& value) { m_metricDimensionHasBeenSet = true; m_metricDimension = value; }

    /**
     * <p>The dimension for a metric in your behavior. For example, using a
     * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
     * to only MQTT topics where the name matches the pattern specified in the
     * dimension. This can't be used with custom metrics.</p>
     */
    inline void SetMetricDimension(MetricDimension&& value) { m_metricDimensionHasBeenSet = true; m_metricDimension = std::move(value); }

    /**
     * <p>The dimension for a metric in your behavior. For example, using a
     * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
     * to only MQTT topics where the name matches the pattern specified in the
     * dimension. This can't be used with custom metrics.</p>
     */
    inline Behavior& WithMetricDimension(const MetricDimension& value) { SetMetricDimension(value); return *this;}

    /**
     * <p>The dimension for a metric in your behavior. For example, using a
     * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
     * to only MQTT topics where the name matches the pattern specified in the
     * dimension. This can't be used with custom metrics.</p>
     */
    inline Behavior& WithMetricDimension(MetricDimension&& value) { SetMetricDimension(std::move(value)); return *this;}


    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline const BehaviorCriteria& GetCriteria() const{ return m_criteria; }

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline void SetCriteria(const BehaviorCriteria& value) { m_criteriaHasBeenSet = true; m_criteria = value; }

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline void SetCriteria(BehaviorCriteria&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline Behavior& WithCriteria(const BehaviorCriteria& value) { SetCriteria(value); return *this;}

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline Behavior& WithCriteria(BehaviorCriteria&& value) { SetCriteria(std::move(value)); return *this;}


    /**
     * <p> Suppresses alerts. </p>
     */
    inline bool GetSuppressAlerts() const{ return m_suppressAlerts; }

    /**
     * <p> Suppresses alerts. </p>
     */
    inline bool SuppressAlertsHasBeenSet() const { return m_suppressAlertsHasBeenSet; }

    /**
     * <p> Suppresses alerts. </p>
     */
    inline void SetSuppressAlerts(bool value) { m_suppressAlertsHasBeenSet = true; m_suppressAlerts = value; }

    /**
     * <p> Suppresses alerts. </p>
     */
    inline Behavior& WithSuppressAlerts(bool value) { SetSuppressAlerts(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    MetricDimension m_metricDimension;
    bool m_metricDimensionHasBeenSet = false;

    BehaviorCriteria m_criteria;
    bool m_criteriaHasBeenSet = false;

    bool m_suppressAlerts;
    bool m_suppressAlertsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
