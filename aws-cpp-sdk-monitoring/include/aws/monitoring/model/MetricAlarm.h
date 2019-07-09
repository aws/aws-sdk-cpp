/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/StateValue.h>
#include <aws/monitoring/model/Statistic.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/ComparisonOperator.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/MetricDataQuery.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Represents an alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricAlarm">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API MetricAlarm
  {
  public:
    MetricAlarm();
    MetricAlarm(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricAlarm& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetAlarmArn() const{ return m_alarmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmArn(const Aws::String& value) { m_alarmArnHasBeenSet = true; m_alarmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmArn(Aws::String&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmArn(const char* value) { m_alarmArnHasBeenSet = true; m_alarmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmArn(const Aws::String& value) { SetAlarmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmArn(Aws::String&& value) { SetAlarmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmArn(const char* value) { SetAlarmArn(value); return *this;}


    /**
     * <p>The description of the alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const{ return m_alarmDescription; }

    /**
     * <p>The description of the alarm.</p>
     */
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }

    /**
     * <p>The description of the alarm.</p>
     */
    inline void SetAlarmDescription(const Aws::String& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = value; }

    /**
     * <p>The description of the alarm.</p>
     */
    inline void SetAlarmDescription(Aws::String&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::move(value); }

    /**
     * <p>The description of the alarm.</p>
     */
    inline void SetAlarmDescription(const char* value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription.assign(value); }

    /**
     * <p>The description of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmDescription(const Aws::String& value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>The description of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmDescription(Aws::String&& value) { SetAlarmDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmDescription(const char* value) { SetAlarmDescription(value); return *this;}


    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetAlarmConfigurationUpdatedTimestamp() const{ return m_alarmConfigurationUpdatedTimestamp; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline bool AlarmConfigurationUpdatedTimestampHasBeenSet() const { return m_alarmConfigurationUpdatedTimestampHasBeenSet; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline void SetAlarmConfigurationUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = value; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline void SetAlarmConfigurationUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = std::move(value); }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline MetricAlarm& WithAlarmConfigurationUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetAlarmConfigurationUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline MetricAlarm& WithAlarmConfigurationUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetAlarmConfigurationUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline bool GetActionsEnabled() const{ return m_actionsEnabled; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline MetricAlarm& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}


    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const{ return m_oKActions; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetOKActions(const Aws::Vector<Aws::String>& value) { m_oKActionsHasBeenSet = true; m_oKActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetOKActions(Aws::Vector<Aws::String>&& value) { m_oKActionsHasBeenSet = true; m_oKActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& WithOKActions(const Aws::Vector<Aws::String>& value) { SetOKActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& WithOKActions(Aws::Vector<Aws::String>&& value) { SetOKActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& AddOKActions(const Aws::String& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& AddOKActions(Aws::String&& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& AddOKActions(const char* value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }


    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const{ return m_alarmActions; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetAlarmActions(const Aws::Vector<Aws::String>& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetAlarmActions(Aws::Vector<Aws::String>&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& WithAlarmActions(const Aws::Vector<Aws::String>& value) { SetAlarmActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& WithAlarmActions(Aws::Vector<Aws::String>&& value) { SetAlarmActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& AddAlarmActions(const Aws::String& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& AddAlarmActions(Aws::String&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline MetricAlarm& AddAlarmActions(const char* value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }


    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const{ return m_insufficientDataActions; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline void SetInsufficientDataActions(const Aws::Vector<Aws::String>& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline void SetInsufficientDataActions(Aws::Vector<Aws::String>&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline MetricAlarm& WithInsufficientDataActions(const Aws::Vector<Aws::String>& value) { SetInsufficientDataActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline MetricAlarm& WithInsufficientDataActions(Aws::Vector<Aws::String>&& value) { SetInsufficientDataActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline MetricAlarm& AddInsufficientDataActions(const Aws::String& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline MetricAlarm& AddInsufficientDataActions(Aws::String&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline MetricAlarm& AddInsufficientDataActions(const char* value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }


    /**
     * <p>The state value for the alarm.</p>
     */
    inline const StateValue& GetStateValue() const{ return m_stateValue; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline void SetStateValue(const StateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline void SetStateValue(StateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline MetricAlarm& WithStateValue(const StateValue& value) { SetStateValue(value); return *this;}

    /**
     * <p>The state value for the alarm.</p>
     */
    inline MetricAlarm& WithStateValue(StateValue&& value) { SetStateValue(std::move(value)); return *this;}


    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline MetricAlarm& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline MetricAlarm& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline MetricAlarm& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline const Aws::String& GetStateReasonData() const{ return m_stateReasonData; }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline void SetStateReasonData(const Aws::String& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = value; }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline void SetStateReasonData(Aws::String&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = std::move(value); }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline void SetStateReasonData(const char* value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData.assign(value); }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline MetricAlarm& WithStateReasonData(const Aws::String& value) { SetStateReasonData(value); return *this;}

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline MetricAlarm& WithStateReasonData(Aws::String&& value) { SetStateReasonData(std::move(value)); return *this;}

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline MetricAlarm& WithStateReasonData(const char* value) { SetStateReasonData(value); return *this;}


    /**
     * <p>The time stamp of the last update to the alarm state.</p>
     */
    inline const Aws::Utils::DateTime& GetStateUpdatedTimestamp() const{ return m_stateUpdatedTimestamp; }

    /**
     * <p>The time stamp of the last update to the alarm state.</p>
     */
    inline bool StateUpdatedTimestampHasBeenSet() const { return m_stateUpdatedTimestampHasBeenSet; }

    /**
     * <p>The time stamp of the last update to the alarm state.</p>
     */
    inline void SetStateUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = value; }

    /**
     * <p>The time stamp of the last update to the alarm state.</p>
     */
    inline void SetStateUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = std::move(value); }

    /**
     * <p>The time stamp of the last update to the alarm state.</p>
     */
    inline MetricAlarm& WithStateUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetStateUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time stamp of the last update to the alarm state.</p>
     */
    inline MetricAlarm& WithStateUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetStateUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline MetricAlarm& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline MetricAlarm& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline MetricAlarm& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline MetricAlarm& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline MetricAlarm& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline MetricAlarm& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     */
    inline MetricAlarm& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     */
    inline MetricAlarm& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline const Aws::String& GetExtendedStatistic() const{ return m_extendedStatistic; }

    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }

    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline void SetExtendedStatistic(const Aws::String& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = value; }

    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline void SetExtendedStatistic(Aws::String&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::move(value); }

    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline void SetExtendedStatistic(const char* value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic.assign(value); }

    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline MetricAlarm& WithExtendedStatistic(const Aws::String& value) { SetExtendedStatistic(value); return *this;}

    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline MetricAlarm& WithExtendedStatistic(Aws::String&& value) { SetExtendedStatistic(std::move(value)); return *this;}

    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline MetricAlarm& WithExtendedStatistic(const char* value) { SetExtendedStatistic(value); return *this;}


    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline MetricAlarm& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline MetricAlarm& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline MetricAlarm& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline MetricAlarm& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline MetricAlarm& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline MetricAlarm& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline MetricAlarm& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline MetricAlarm& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}


    /**
     * <p>The number of datapoints that must be breaching to trigger the alarm.</p>
     */
    inline int GetDatapointsToAlarm() const{ return m_datapointsToAlarm; }

    /**
     * <p>The number of datapoints that must be breaching to trigger the alarm.</p>
     */
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }

    /**
     * <p>The number of datapoints that must be breaching to trigger the alarm.</p>
     */
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }

    /**
     * <p>The number of datapoints that must be breaching to trigger the alarm.</p>
     */
    inline MetricAlarm& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}


    /**
     * <p>The value to compare with the specified statistic.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>The value to compare with the specified statistic.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The value to compare with the specified statistic.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The value to compare with the specified statistic.</p>
     */
    inline MetricAlarm& WithThreshold(double value) { SetThreshold(value); return *this;}


    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline MetricAlarm& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline MetricAlarm& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>Sets how this alarm is to handle missing data points. If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline const Aws::String& GetTreatMissingData() const{ return m_treatMissingData; }

    /**
     * <p>Sets how this alarm is to handle missing data points. If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }

    /**
     * <p>Sets how this alarm is to handle missing data points. If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline void SetTreatMissingData(const Aws::String& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }

    /**
     * <p>Sets how this alarm is to handle missing data points. If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline void SetTreatMissingData(Aws::String&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::move(value); }

    /**
     * <p>Sets how this alarm is to handle missing data points. If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline void SetTreatMissingData(const char* value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData.assign(value); }

    /**
     * <p>Sets how this alarm is to handle missing data points. If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline MetricAlarm& WithTreatMissingData(const Aws::String& value) { SetTreatMissingData(value); return *this;}

    /**
     * <p>Sets how this alarm is to handle missing data points. If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline MetricAlarm& WithTreatMissingData(Aws::String&& value) { SetTreatMissingData(std::move(value)); return *this;}

    /**
     * <p>Sets how this alarm is to handle missing data points. If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline MetricAlarm& WithTreatMissingData(const char* value) { SetTreatMissingData(value); return *this;}


    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline const Aws::String& GetEvaluateLowSampleCountPercentile() const{ return m_evaluateLowSampleCountPercentile; }

    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline bool EvaluateLowSampleCountPercentileHasBeenSet() const { return m_evaluateLowSampleCountPercentileHasBeenSet; }

    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline void SetEvaluateLowSampleCountPercentile(const Aws::String& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = value; }

    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline void SetEvaluateLowSampleCountPercentile(Aws::String&& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = std::move(value); }

    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline void SetEvaluateLowSampleCountPercentile(const char* value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile.assign(value); }

    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline MetricAlarm& WithEvaluateLowSampleCountPercentile(const Aws::String& value) { SetEvaluateLowSampleCountPercentile(value); return *this;}

    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline MetricAlarm& WithEvaluateLowSampleCountPercentile(Aws::String&& value) { SetEvaluateLowSampleCountPercentile(std::move(value)); return *this;}

    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline MetricAlarm& WithEvaluateLowSampleCountPercentile(const char* value) { SetEvaluateLowSampleCountPercentile(value); return *this;}


    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnValue</code> set to
     * true.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnValue</code> set to
     * true.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnValue</code> set to
     * true.</p>
     */
    inline void SetMetrics(const Aws::Vector<MetricDataQuery>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnValue</code> set to
     * true.</p>
     */
    inline void SetMetrics(Aws::Vector<MetricDataQuery>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnValue</code> set to
     * true.</p>
     */
    inline MetricAlarm& WithMetrics(const Aws::Vector<MetricDataQuery>& value) { SetMetrics(value); return *this;}

    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnValue</code> set to
     * true.</p>
     */
    inline MetricAlarm& WithMetrics(Aws::Vector<MetricDataQuery>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnValue</code> set to
     * true.</p>
     */
    inline MetricAlarm& AddMetrics(const MetricDataQuery& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnValue</code> set to
     * true.</p>
     */
    inline MetricAlarm& AddMetrics(MetricDataQuery&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }


    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline const Aws::String& GetThresholdMetricId() const{ return m_thresholdMetricId; }

    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline bool ThresholdMetricIdHasBeenSet() const { return m_thresholdMetricIdHasBeenSet; }

    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline void SetThresholdMetricId(const Aws::String& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = value; }

    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline void SetThresholdMetricId(Aws::String&& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = std::move(value); }

    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline void SetThresholdMetricId(const char* value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId.assign(value); }

    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline MetricAlarm& WithThresholdMetricId(const Aws::String& value) { SetThresholdMetricId(value); return *this;}

    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline MetricAlarm& WithThresholdMetricId(Aws::String&& value) { SetThresholdMetricId(std::move(value)); return *this;}

    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline MetricAlarm& WithThresholdMetricId(const char* value) { SetThresholdMetricId(value); return *this;}

  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet;

    Aws::String m_alarmArn;
    bool m_alarmArnHasBeenSet;

    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet;

    Aws::Utils::DateTime m_alarmConfigurationUpdatedTimestamp;
    bool m_alarmConfigurationUpdatedTimestampHasBeenSet;

    bool m_actionsEnabled;
    bool m_actionsEnabledHasBeenSet;

    Aws::Vector<Aws::String> m_oKActions;
    bool m_oKActionsHasBeenSet;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet;

    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet;

    StateValue m_stateValue;
    bool m_stateValueHasBeenSet;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet;

    Aws::String m_stateReasonData;
    bool m_stateReasonDataHasBeenSet;

    Aws::Utils::DateTime m_stateUpdatedTimestamp;
    bool m_stateUpdatedTimestampHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Statistic m_statistic;
    bool m_statisticHasBeenSet;

    Aws::String m_extendedStatistic;
    bool m_extendedStatisticHasBeenSet;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    StandardUnit m_unit;
    bool m_unitHasBeenSet;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet;

    int m_datapointsToAlarm;
    bool m_datapointsToAlarmHasBeenSet;

    double m_threshold;
    bool m_thresholdHasBeenSet;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;

    Aws::String m_treatMissingData;
    bool m_treatMissingDataHasBeenSet;

    Aws::String m_evaluateLowSampleCountPercentile;
    bool m_evaluateLowSampleCountPercentileHasBeenSet;

    Aws::Vector<MetricDataQuery> m_metrics;
    bool m_metricsHasBeenSet;

    Aws::String m_thresholdMetricId;
    bool m_thresholdMetricIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
