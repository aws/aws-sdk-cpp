/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ComparisonOperator.h>
#include <aws/iot/model/MetricValue.h>
#include <aws/iot/model/StatisticalThreshold.h>
#include <aws/iot/model/MachineLearningDetectionConfig.h>
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
   * <p>The criteria by which the behavior is determined to be normal.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/BehaviorCriteria">AWS
   * API Reference</a></p>
   */
  class BehaviorCriteria
  {
  public:
    AWS_IOT_API BehaviorCriteria();
    AWS_IOT_API BehaviorCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API BehaviorCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (containing a <code>value</code> or <code>statisticalThreshold</code>).
     * Valid operators include:</p> <ul> <li> <p> <code>string-list</code>:
     * <code>in-set</code> and <code>not-in-set</code> </p> </li> <li> <p>
     * <code>number-list</code>: <code>in-set</code> and <code>not-in-set</code> </p>
     * </li> <li> <p> <code>ip-address-list</code>: <code>in-cidr-set</code> and
     * <code>not-in-cidr-set</code> </p> </li> <li> <p> <code>number</code>:
     * <code>less-than</code>, <code>less-than-equals</code>,
     * <code>greater-than</code>, and <code>greater-than-equals</code> </p> </li> </ul>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (containing a <code>value</code> or <code>statisticalThreshold</code>).
     * Valid operators include:</p> <ul> <li> <p> <code>string-list</code>:
     * <code>in-set</code> and <code>not-in-set</code> </p> </li> <li> <p>
     * <code>number-list</code>: <code>in-set</code> and <code>not-in-set</code> </p>
     * </li> <li> <p> <code>ip-address-list</code>: <code>in-cidr-set</code> and
     * <code>not-in-cidr-set</code> </p> </li> <li> <p> <code>number</code>:
     * <code>less-than</code>, <code>less-than-equals</code>,
     * <code>greater-than</code>, and <code>greater-than-equals</code> </p> </li> </ul>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (containing a <code>value</code> or <code>statisticalThreshold</code>).
     * Valid operators include:</p> <ul> <li> <p> <code>string-list</code>:
     * <code>in-set</code> and <code>not-in-set</code> </p> </li> <li> <p>
     * <code>number-list</code>: <code>in-set</code> and <code>not-in-set</code> </p>
     * </li> <li> <p> <code>ip-address-list</code>: <code>in-cidr-set</code> and
     * <code>not-in-cidr-set</code> </p> </li> <li> <p> <code>number</code>:
     * <code>less-than</code>, <code>less-than-equals</code>,
     * <code>greater-than</code>, and <code>greater-than-equals</code> </p> </li> </ul>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (containing a <code>value</code> or <code>statisticalThreshold</code>).
     * Valid operators include:</p> <ul> <li> <p> <code>string-list</code>:
     * <code>in-set</code> and <code>not-in-set</code> </p> </li> <li> <p>
     * <code>number-list</code>: <code>in-set</code> and <code>not-in-set</code> </p>
     * </li> <li> <p> <code>ip-address-list</code>: <code>in-cidr-set</code> and
     * <code>not-in-cidr-set</code> </p> </li> <li> <p> <code>number</code>:
     * <code>less-than</code>, <code>less-than-equals</code>,
     * <code>greater-than</code>, and <code>greater-than-equals</code> </p> </li> </ul>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (containing a <code>value</code> or <code>statisticalThreshold</code>).
     * Valid operators include:</p> <ul> <li> <p> <code>string-list</code>:
     * <code>in-set</code> and <code>not-in-set</code> </p> </li> <li> <p>
     * <code>number-list</code>: <code>in-set</code> and <code>not-in-set</code> </p>
     * </li> <li> <p> <code>ip-address-list</code>: <code>in-cidr-set</code> and
     * <code>not-in-cidr-set</code> </p> </li> <li> <p> <code>number</code>:
     * <code>less-than</code>, <code>less-than-equals</code>,
     * <code>greater-than</code>, and <code>greater-than-equals</code> </p> </li> </ul>
     */
    inline BehaviorCriteria& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (containing a <code>value</code> or <code>statisticalThreshold</code>).
     * Valid operators include:</p> <ul> <li> <p> <code>string-list</code>:
     * <code>in-set</code> and <code>not-in-set</code> </p> </li> <li> <p>
     * <code>number-list</code>: <code>in-set</code> and <code>not-in-set</code> </p>
     * </li> <li> <p> <code>ip-address-list</code>: <code>in-cidr-set</code> and
     * <code>not-in-cidr-set</code> </p> </li> <li> <p> <code>number</code>:
     * <code>less-than</code>, <code>less-than-equals</code>,
     * <code>greater-than</code>, and <code>greater-than-equals</code> </p> </li> </ul>
     */
    inline BehaviorCriteria& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline const MetricValue& GetValue() const{ return m_value; }

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline void SetValue(const MetricValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline void SetValue(MetricValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline BehaviorCriteria& WithValue(const MetricValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline BehaviorCriteria& WithValue(MetricValue&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>Use this to specify the time duration over which the behavior is evaluated,
     * for those criteria that have a time dimension (for example,
     * <code>NUM_MESSAGES_SENT</code>). For a <code>statisticalThreshhold</code> metric
     * comparison, measurements from all devices are accumulated over this time
     * duration before being used to calculate percentiles, and later, measurements
     * from an individual device are also accumulated over this time duration before
     * being given a percentile rank. Cannot be used with list-based metric
     * datatypes.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>Use this to specify the time duration over which the behavior is evaluated,
     * for those criteria that have a time dimension (for example,
     * <code>NUM_MESSAGES_SENT</code>). For a <code>statisticalThreshhold</code> metric
     * comparison, measurements from all devices are accumulated over this time
     * duration before being used to calculate percentiles, and later, measurements
     * from an individual device are also accumulated over this time duration before
     * being given a percentile rank. Cannot be used with list-based metric
     * datatypes.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>Use this to specify the time duration over which the behavior is evaluated,
     * for those criteria that have a time dimension (for example,
     * <code>NUM_MESSAGES_SENT</code>). For a <code>statisticalThreshhold</code> metric
     * comparison, measurements from all devices are accumulated over this time
     * duration before being used to calculate percentiles, and later, measurements
     * from an individual device are also accumulated over this time duration before
     * being given a percentile rank. Cannot be used with list-based metric
     * datatypes.</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>Use this to specify the time duration over which the behavior is evaluated,
     * for those criteria that have a time dimension (for example,
     * <code>NUM_MESSAGES_SENT</code>). For a <code>statisticalThreshhold</code> metric
     * comparison, measurements from all devices are accumulated over this time
     * duration before being used to calculate percentiles, and later, measurements
     * from an individual device are also accumulated over this time duration before
     * being given a percentile rank. Cannot be used with list-based metric
     * datatypes.</p>
     */
    inline BehaviorCriteria& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>If a device is in violation of the behavior for the specified number of
     * consecutive datapoints, an alarm occurs. If not specified, the default is 1.</p>
     */
    inline int GetConsecutiveDatapointsToAlarm() const{ return m_consecutiveDatapointsToAlarm; }

    /**
     * <p>If a device is in violation of the behavior for the specified number of
     * consecutive datapoints, an alarm occurs. If not specified, the default is 1.</p>
     */
    inline bool ConsecutiveDatapointsToAlarmHasBeenSet() const { return m_consecutiveDatapointsToAlarmHasBeenSet; }

    /**
     * <p>If a device is in violation of the behavior for the specified number of
     * consecutive datapoints, an alarm occurs. If not specified, the default is 1.</p>
     */
    inline void SetConsecutiveDatapointsToAlarm(int value) { m_consecutiveDatapointsToAlarmHasBeenSet = true; m_consecutiveDatapointsToAlarm = value; }

    /**
     * <p>If a device is in violation of the behavior for the specified number of
     * consecutive datapoints, an alarm occurs. If not specified, the default is 1.</p>
     */
    inline BehaviorCriteria& WithConsecutiveDatapointsToAlarm(int value) { SetConsecutiveDatapointsToAlarm(value); return *this;}


    /**
     * <p>If an alarm has occurred and the offending device is no longer in violation
     * of the behavior for the specified number of consecutive datapoints, the alarm is
     * cleared. If not specified, the default is 1.</p>
     */
    inline int GetConsecutiveDatapointsToClear() const{ return m_consecutiveDatapointsToClear; }

    /**
     * <p>If an alarm has occurred and the offending device is no longer in violation
     * of the behavior for the specified number of consecutive datapoints, the alarm is
     * cleared. If not specified, the default is 1.</p>
     */
    inline bool ConsecutiveDatapointsToClearHasBeenSet() const { return m_consecutiveDatapointsToClearHasBeenSet; }

    /**
     * <p>If an alarm has occurred and the offending device is no longer in violation
     * of the behavior for the specified number of consecutive datapoints, the alarm is
     * cleared. If not specified, the default is 1.</p>
     */
    inline void SetConsecutiveDatapointsToClear(int value) { m_consecutiveDatapointsToClearHasBeenSet = true; m_consecutiveDatapointsToClear = value; }

    /**
     * <p>If an alarm has occurred and the offending device is no longer in violation
     * of the behavior for the specified number of consecutive datapoints, the alarm is
     * cleared. If not specified, the default is 1.</p>
     */
    inline BehaviorCriteria& WithConsecutiveDatapointsToClear(int value) { SetConsecutiveDatapointsToClear(value); return *this;}


    /**
     * <p>A statistical ranking (percentile)that indicates a threshold value by which a
     * behavior is determined to be in compliance or in violation of the behavior.</p>
     */
    inline const StatisticalThreshold& GetStatisticalThreshold() const{ return m_statisticalThreshold; }

    /**
     * <p>A statistical ranking (percentile)that indicates a threshold value by which a
     * behavior is determined to be in compliance or in violation of the behavior.</p>
     */
    inline bool StatisticalThresholdHasBeenSet() const { return m_statisticalThresholdHasBeenSet; }

    /**
     * <p>A statistical ranking (percentile)that indicates a threshold value by which a
     * behavior is determined to be in compliance or in violation of the behavior.</p>
     */
    inline void SetStatisticalThreshold(const StatisticalThreshold& value) { m_statisticalThresholdHasBeenSet = true; m_statisticalThreshold = value; }

    /**
     * <p>A statistical ranking (percentile)that indicates a threshold value by which a
     * behavior is determined to be in compliance or in violation of the behavior.</p>
     */
    inline void SetStatisticalThreshold(StatisticalThreshold&& value) { m_statisticalThresholdHasBeenSet = true; m_statisticalThreshold = std::move(value); }

    /**
     * <p>A statistical ranking (percentile)that indicates a threshold value by which a
     * behavior is determined to be in compliance or in violation of the behavior.</p>
     */
    inline BehaviorCriteria& WithStatisticalThreshold(const StatisticalThreshold& value) { SetStatisticalThreshold(value); return *this;}

    /**
     * <p>A statistical ranking (percentile)that indicates a threshold value by which a
     * behavior is determined to be in compliance or in violation of the behavior.</p>
     */
    inline BehaviorCriteria& WithStatisticalThreshold(StatisticalThreshold&& value) { SetStatisticalThreshold(std::move(value)); return *this;}


    /**
     * <p> The configuration of an ML Detect </p>
     */
    inline const MachineLearningDetectionConfig& GetMlDetectionConfig() const{ return m_mlDetectionConfig; }

    /**
     * <p> The configuration of an ML Detect </p>
     */
    inline bool MlDetectionConfigHasBeenSet() const { return m_mlDetectionConfigHasBeenSet; }

    /**
     * <p> The configuration of an ML Detect </p>
     */
    inline void SetMlDetectionConfig(const MachineLearningDetectionConfig& value) { m_mlDetectionConfigHasBeenSet = true; m_mlDetectionConfig = value; }

    /**
     * <p> The configuration of an ML Detect </p>
     */
    inline void SetMlDetectionConfig(MachineLearningDetectionConfig&& value) { m_mlDetectionConfigHasBeenSet = true; m_mlDetectionConfig = std::move(value); }

    /**
     * <p> The configuration of an ML Detect </p>
     */
    inline BehaviorCriteria& WithMlDetectionConfig(const MachineLearningDetectionConfig& value) { SetMlDetectionConfig(value); return *this;}

    /**
     * <p> The configuration of an ML Detect </p>
     */
    inline BehaviorCriteria& WithMlDetectionConfig(MachineLearningDetectionConfig&& value) { SetMlDetectionConfig(std::move(value)); return *this;}

  private:

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    MetricValue m_value;
    bool m_valueHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    int m_consecutiveDatapointsToAlarm;
    bool m_consecutiveDatapointsToAlarmHasBeenSet = false;

    int m_consecutiveDatapointsToClear;
    bool m_consecutiveDatapointsToClearHasBeenSet = false;

    StatisticalThreshold m_statisticalThreshold;
    bool m_statisticalThresholdHasBeenSet = false;

    MachineLearningDetectionConfig m_mlDetectionConfig;
    bool m_mlDetectionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
