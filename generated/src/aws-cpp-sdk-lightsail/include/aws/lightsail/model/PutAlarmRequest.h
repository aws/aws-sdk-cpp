/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/MetricName.h>
#include <aws/lightsail/model/ComparisonOperator.h>
#include <aws/lightsail/model/TreatMissingData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/ContactProtocol.h>
#include <aws/lightsail/model/AlarmState.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class PutAlarmRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API PutAlarmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAlarm"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the alarm. Specify the name of an existing alarm to update, and
     * overwrite the previous configuration of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    PutAlarmRequest& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric to associate with the alarm.</p> <p>You can configure
     * up to two alarms per metric.</p> <p>The following metrics are available for each
     * resource type:</p> <ul> <li> <p> <b>Instances</b>:
     * <code>BurstCapacityPercentage</code>, <code>BurstCapacityTime</code>,
     * <code>CPUUtilization</code>, <code>NetworkIn</code>, <code>NetworkOut</code>,
     * <code>StatusCheckFailed</code>, <code>StatusCheckFailed_Instance</code>, and
     * <code>StatusCheckFailed_System</code>.</p> </li> <li> <p> <b>Load balancers</b>:
     * <code>ClientTLSNegotiationErrorCount</code>, <code>HealthyHostCount</code>,
     * <code>UnhealthyHostCount</code>, <code>HTTPCode_LB_4XX_Count</code>,
     * <code>HTTPCode_LB_5XX_Count</code>, <code>HTTPCode_Instance_2XX_Count</code>,
     * <code>HTTPCode_Instance_3XX_Count</code>,
     * <code>HTTPCode_Instance_4XX_Count</code>,
     * <code>HTTPCode_Instance_5XX_Count</code>, <code>InstanceResponseTime</code>,
     * <code>RejectedConnectionCount</code>, and <code>RequestCount</code>.</p> </li>
     * <li> <p> <b>Relational databases</b>: <code>CPUUtilization</code>,
     * <code>DatabaseConnections</code>, <code>DiskQueueDepth</code>,
     * <code>FreeStorageSpace</code>, <code>NetworkReceiveThroughput</code>, and
     * <code>NetworkTransmitThroughput</code>.</p> </li> </ul> <p>For more information
     * about these metrics, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-resource-health-metrics#available-metrics">Metrics
     * available in Lightsail</a>.</p>
     */
    inline MetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(MetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline PutAlarmRequest& WithMetricName(MetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Lightsail resource that will be monitored.</p> <p>Instances,
     * load balancers, and relational databases are the only Lightsail resources that
     * can currently be monitored by alarms.</p>
     */
    inline const Aws::String& GetMonitoredResourceName() const { return m_monitoredResourceName; }
    inline bool MonitoredResourceNameHasBeenSet() const { return m_monitoredResourceNameHasBeenSet; }
    template<typename MonitoredResourceNameT = Aws::String>
    void SetMonitoredResourceName(MonitoredResourceNameT&& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = std::forward<MonitoredResourceNameT>(value); }
    template<typename MonitoredResourceNameT = Aws::String>
    PutAlarmRequest& WithMonitoredResourceName(MonitoredResourceNameT&& value) { SetMonitoredResourceName(std::forward<MonitoredResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation to use when comparing the specified statistic to the
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline PutAlarmRequest& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline PutAlarmRequest& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of most recent periods over which data is compared to the
     * specified threshold. If you are setting an "M out of N" alarm, this value
     * (<code>evaluationPeriods</code>) is the N.</p> <p>If you are setting an alarm
     * that requires that a number of consecutive data points be breaching to trigger
     * the alarm, this value specifies the rolling period of time in which data points
     * are evaluated.</p> <p>Each evaluation period is five minutes long. For example,
     * specify an evaluation period of 24 to evaluate a metric over a rolling period of
     * two hours.</p> <p>You can specify a minimum valuation period of 1 (5 minutes),
     * and a maximum evaluation period of 288 (24 hours).</p>
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline PutAlarmRequest& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data points that must be not within the specified threshold to
     * trigger the alarm. If you are setting an "M out of N" alarm, this value
     * (<code>datapointsToAlarm</code>) is the M.</p>
     */
    inline int GetDatapointsToAlarm() const { return m_datapointsToAlarm; }
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline PutAlarmRequest& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets how this alarm will handle missing data points.</p> <p>An alarm can
     * treat missing data in the following ways:</p> <ul> <li> <p>
     * <code>breaching</code> - Assume the missing data is not within the threshold.
     * Missing data counts towards the number of times the metric is not within the
     * threshold.</p> </li> <li> <p> <code>notBreaching</code> - Assume the missing
     * data is within the threshold. Missing data does not count towards the number of
     * times the metric is not within the threshold.</p> </li> <li> <p>
     * <code>ignore</code> - Ignore the missing data. Maintains the current alarm
     * state.</p> </li> <li> <p> <code>missing</code> - Missing data is treated as
     * missing.</p> </li> </ul> <p>If <code>treatMissingData</code> is not specified,
     * the default behavior of <code>missing</code> is used.</p>
     */
    inline TreatMissingData GetTreatMissingData() const { return m_treatMissingData; }
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
    inline void SetTreatMissingData(TreatMissingData value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }
    inline PutAlarmRequest& WithTreatMissingData(TreatMissingData value) { SetTreatMissingData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact protocols to use for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p> <p>A notification is sent via
     * the specified contact protocol if notifications are enabled for the alarm, and
     * when the alarm is triggered.</p> <p>A notification is not sent if a contact
     * protocol is not specified, if the specified contact protocol is not configured
     * in the Amazon Web Services Region, or if notifications are not enabled for the
     * alarm using the <code>notificationEnabled</code> paramater.</p> <p>Use the
     * <code>CreateContactMethod</code> action to configure a contact protocol in an
     * Amazon Web Services Region.</p>
     */
    inline const Aws::Vector<ContactProtocol>& GetContactProtocols() const { return m_contactProtocols; }
    inline bool ContactProtocolsHasBeenSet() const { return m_contactProtocolsHasBeenSet; }
    template<typename ContactProtocolsT = Aws::Vector<ContactProtocol>>
    void SetContactProtocols(ContactProtocolsT&& value) { m_contactProtocolsHasBeenSet = true; m_contactProtocols = std::forward<ContactProtocolsT>(value); }
    template<typename ContactProtocolsT = Aws::Vector<ContactProtocol>>
    PutAlarmRequest& WithContactProtocols(ContactProtocolsT&& value) { SetContactProtocols(std::forward<ContactProtocolsT>(value)); return *this;}
    inline PutAlarmRequest& AddContactProtocols(ContactProtocol value) { m_contactProtocolsHasBeenSet = true; m_contactProtocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The alarm states that trigger a notification.</p> <p>An alarm has the
     * following possible states:</p> <ul> <li> <p> <code>ALARM</code> - The metric is
     * outside of the defined threshold.</p> </li> <li> <p>
     * <code>INSUFFICIENT_DATA</code> - The alarm has just started, the metric is not
     * available, or not enough data is available for the metric to determine the alarm
     * state.</p> </li> <li> <p> <code>OK</code> - The metric is within the defined
     * threshold.</p> </li> </ul> <p>When you specify a notification trigger, the
     * <code>ALARM</code> state must be specified. The <code>INSUFFICIENT_DATA</code>
     * and <code>OK</code> states can be specified in addition to the
     * <code>ALARM</code> state.</p> <ul> <li> <p>If you specify <code>OK</code> as an
     * alarm trigger, a notification is sent when the alarm switches from an
     * <code>ALARM</code> or <code>INSUFFICIENT_DATA</code> alarm state to an
     * <code>OK</code> state. This can be thought of as an <i>all clear</i> alarm
     * notification.</p> </li> <li> <p>If you specify <code>INSUFFICIENT_DATA</code> as
     * the alarm trigger, a notification is sent when the alarm switches from an
     * <code>OK</code> or <code>ALARM</code> alarm state to an
     * <code>INSUFFICIENT_DATA</code> state.</p> </li> </ul> <p>The notification
     * trigger defaults to <code>ALARM</code> if you don't specify this parameter.</p>
     */
    inline const Aws::Vector<AlarmState>& GetNotificationTriggers() const { return m_notificationTriggers; }
    inline bool NotificationTriggersHasBeenSet() const { return m_notificationTriggersHasBeenSet; }
    template<typename NotificationTriggersT = Aws::Vector<AlarmState>>
    void SetNotificationTriggers(NotificationTriggersT&& value) { m_notificationTriggersHasBeenSet = true; m_notificationTriggers = std::forward<NotificationTriggersT>(value); }
    template<typename NotificationTriggersT = Aws::Vector<AlarmState>>
    PutAlarmRequest& WithNotificationTriggers(NotificationTriggersT&& value) { SetNotificationTriggers(std::forward<NotificationTriggersT>(value)); return *this;}
    inline PutAlarmRequest& AddNotificationTriggers(AlarmState value) { m_notificationTriggersHasBeenSet = true; m_notificationTriggers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the alarm is enabled.</p> <p>Notifications are enabled by
     * default if you don't specify this parameter.</p>
     */
    inline bool GetNotificationEnabled() const { return m_notificationEnabled; }
    inline bool NotificationEnabledHasBeenSet() const { return m_notificationEnabledHasBeenSet; }
    inline void SetNotificationEnabled(bool value) { m_notificationEnabledHasBeenSet = true; m_notificationEnabled = value; }
    inline PutAlarmRequest& WithNotificationEnabled(bool value) { SetNotificationEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    MetricName m_metricName{MetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    Aws::String m_monitoredResourceName;
    bool m_monitoredResourceNameHasBeenSet = false;

    ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    int m_evaluationPeriods{0};
    bool m_evaluationPeriodsHasBeenSet = false;

    int m_datapointsToAlarm{0};
    bool m_datapointsToAlarmHasBeenSet = false;

    TreatMissingData m_treatMissingData{TreatMissingData::NOT_SET};
    bool m_treatMissingDataHasBeenSet = false;

    Aws::Vector<ContactProtocol> m_contactProtocols;
    bool m_contactProtocolsHasBeenSet = false;

    Aws::Vector<AlarmState> m_notificationTriggers;
    bool m_notificationTriggersHasBeenSet = false;

    bool m_notificationEnabled{false};
    bool m_notificationEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
