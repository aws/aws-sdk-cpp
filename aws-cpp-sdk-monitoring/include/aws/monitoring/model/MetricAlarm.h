/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p> The <a>MetricAlarm</a> data type represents an alarm. You can use
   * <a>PutMetricAlarm</a> to create or update an alarm. </p>
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
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

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
    inline MetricAlarm& WithAlarmName(Aws::String&& value) { SetAlarmName(value); return *this;}

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
    inline void SetAlarmArn(const Aws::String& value) { m_alarmArnHasBeenSet = true; m_alarmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmArn(Aws::String&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = value; }

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
    inline MetricAlarm& WithAlarmArn(Aws::String&& value) { SetAlarmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline MetricAlarm& WithAlarmArn(const char* value) { SetAlarmArn(value); return *this;}

    /**
     * <p>The description for the alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const{ return m_alarmDescription; }

    /**
     * <p>The description for the alarm.</p>
     */
    inline void SetAlarmDescription(const Aws::String& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = value; }

    /**
     * <p>The description for the alarm.</p>
     */
    inline void SetAlarmDescription(Aws::String&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = value; }

    /**
     * <p>The description for the alarm.</p>
     */
    inline void SetAlarmDescription(const char* value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription.assign(value); }

    /**
     * <p>The description for the alarm.</p>
     */
    inline MetricAlarm& WithAlarmDescription(const Aws::String& value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>The description for the alarm.</p>
     */
    inline MetricAlarm& WithAlarmDescription(Aws::String&& value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>The description for the alarm.</p>
     */
    inline MetricAlarm& WithAlarmDescription(const char* value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetAlarmConfigurationUpdatedTimestamp() const{ return m_alarmConfigurationUpdatedTimestamp; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline void SetAlarmConfigurationUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = value; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline void SetAlarmConfigurationUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = value; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline MetricAlarm& WithAlarmConfigurationUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetAlarmConfigurationUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline MetricAlarm& WithAlarmConfigurationUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetAlarmConfigurationUpdatedTimestamp(value); return *this;}

    /**
     * <p>Indicates whether actions should be executed during any changes to the
     * alarm's state.</p>
     */
    inline bool GetActionsEnabled() const{ return m_actionsEnabled; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the
     * alarm's state.</p>
     */
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the
     * alarm's state.</p>
     */
    inline MetricAlarm& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const{ return m_oKActions; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline void SetOKActions(const Aws::Vector<Aws::String>& value) { m_oKActionsHasBeenSet = true; m_oKActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline void SetOKActions(Aws::Vector<Aws::String>&& value) { m_oKActionsHasBeenSet = true; m_oKActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& WithOKActions(const Aws::Vector<Aws::String>& value) { SetOKActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& WithOKActions(Aws::Vector<Aws::String>&& value) { SetOKActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& AddOKActions(const Aws::String& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& AddOKActions(Aws::String&& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& AddOKActions(const char* value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const{ return m_alarmActions; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline void SetAlarmActions(const Aws::Vector<Aws::String>& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline void SetAlarmActions(Aws::Vector<Aws::String>&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& WithAlarmActions(const Aws::Vector<Aws::String>& value) { SetAlarmActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& WithAlarmActions(Aws::Vector<Aws::String>&& value) { SetAlarmActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& AddAlarmActions(const Aws::String& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& AddAlarmActions(Aws::String&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p>
     */
    inline MetricAlarm& AddAlarmActions(const char* value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <important> <p>The current WSDL
     * lists this attribute as <code>UnknownActions</code>.</p> </important>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const{ return m_insufficientDataActions; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <important> <p>The current WSDL
     * lists this attribute as <code>UnknownActions</code>.</p> </important>
     */
    inline void SetInsufficientDataActions(const Aws::Vector<Aws::String>& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <important> <p>The current WSDL
     * lists this attribute as <code>UnknownActions</code>.</p> </important>
     */
    inline void SetInsufficientDataActions(Aws::Vector<Aws::String>&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <important> <p>The current WSDL
     * lists this attribute as <code>UnknownActions</code>.</p> </important>
     */
    inline MetricAlarm& WithInsufficientDataActions(const Aws::Vector<Aws::String>& value) { SetInsufficientDataActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <important> <p>The current WSDL
     * lists this attribute as <code>UnknownActions</code>.</p> </important>
     */
    inline MetricAlarm& WithInsufficientDataActions(Aws::Vector<Aws::String>&& value) { SetInsufficientDataActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <important> <p>The current WSDL
     * lists this attribute as <code>UnknownActions</code>.</p> </important>
     */
    inline MetricAlarm& AddInsufficientDataActions(const Aws::String& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <important> <p>The current WSDL
     * lists this attribute as <code>UnknownActions</code>.</p> </important>
     */
    inline MetricAlarm& AddInsufficientDataActions(Aws::String&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <important> <p>The current WSDL
     * lists this attribute as <code>UnknownActions</code>.</p> </important>
     */
    inline MetricAlarm& AddInsufficientDataActions(const char* value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline const StateValue& GetStateValue() const{ return m_stateValue; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline void SetStateValue(const StateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline void SetStateValue(StateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline MetricAlarm& WithStateValue(const StateValue& value) { SetStateValue(value); return *this;}

    /**
     * <p>The state value for the alarm.</p>
     */
    inline MetricAlarm& WithStateValue(StateValue&& value) { SetStateValue(value); return *this;}

    /**
     * <p>A human-readable explanation for the alarm's state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>A human-readable explanation for the alarm's state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>A human-readable explanation for the alarm's state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>A human-readable explanation for the alarm's state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>A human-readable explanation for the alarm's state.</p>
     */
    inline MetricAlarm& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>A human-readable explanation for the alarm's state.</p>
     */
    inline MetricAlarm& WithStateReason(Aws::String&& value) { SetStateReason(value); return *this;}

    /**
     * <p>A human-readable explanation for the alarm's state.</p>
     */
    inline MetricAlarm& WithStateReason(const char* value) { SetStateReason(value); return *this;}

    /**
     * <p>An explanation for the alarm's state in machine-readable JSON format</p>
     */
    inline const Aws::String& GetStateReasonData() const{ return m_stateReasonData; }

    /**
     * <p>An explanation for the alarm's state in machine-readable JSON format</p>
     */
    inline void SetStateReasonData(const Aws::String& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = value; }

    /**
     * <p>An explanation for the alarm's state in machine-readable JSON format</p>
     */
    inline void SetStateReasonData(Aws::String&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = value; }

    /**
     * <p>An explanation for the alarm's state in machine-readable JSON format</p>
     */
    inline void SetStateReasonData(const char* value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData.assign(value); }

    /**
     * <p>An explanation for the alarm's state in machine-readable JSON format</p>
     */
    inline MetricAlarm& WithStateReasonData(const Aws::String& value) { SetStateReasonData(value); return *this;}

    /**
     * <p>An explanation for the alarm's state in machine-readable JSON format</p>
     */
    inline MetricAlarm& WithStateReasonData(Aws::String&& value) { SetStateReasonData(value); return *this;}

    /**
     * <p>An explanation for the alarm's state in machine-readable JSON format</p>
     */
    inline MetricAlarm& WithStateReasonData(const char* value) { SetStateReasonData(value); return *this;}

    /**
     * <p>The time stamp of the last update to the alarm's state.</p>
     */
    inline const Aws::Utils::DateTime& GetStateUpdatedTimestamp() const{ return m_stateUpdatedTimestamp; }

    /**
     * <p>The time stamp of the last update to the alarm's state.</p>
     */
    inline void SetStateUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = value; }

    /**
     * <p>The time stamp of the last update to the alarm's state.</p>
     */
    inline void SetStateUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = value; }

    /**
     * <p>The time stamp of the last update to the alarm's state.</p>
     */
    inline MetricAlarm& WithStateUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetStateUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time stamp of the last update to the alarm's state.</p>
     */
    inline MetricAlarm& WithStateUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetStateUpdatedTimestamp(value); return *this;}

    /**
     * <p>The name of the alarm's metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the alarm's metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the alarm's metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the alarm's metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the alarm's metric.</p>
     */
    inline MetricAlarm& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the alarm's metric.</p>
     */
    inline MetricAlarm& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the alarm's metric.</p>
     */
    inline MetricAlarm& WithMetricName(const char* value) { SetMetricName(value); return *this;}

    /**
     * <p>The namespace of alarm's associated metric.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of alarm's associated metric.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of alarm's associated metric.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of alarm's associated metric.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of alarm's associated metric.</p>
     */
    inline MetricAlarm& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of alarm's associated metric.</p>
     */
    inline MetricAlarm& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of alarm's associated metric.</p>
     */
    inline MetricAlarm& WithNamespace(const char* value) { SetNamespace(value); return *this;}

    /**
     * <p>The statistic to apply to the alarm's associated metric.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic to apply to the alarm's associated metric.</p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic to apply to the alarm's associated metric.</p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic to apply to the alarm's associated metric.</p>
     */
    inline MetricAlarm& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic to apply to the alarm's associated metric.</p>
     */
    inline MetricAlarm& WithStatistic(Statistic&& value) { SetStatistic(value); return *this;}

    /**
     * <p>The list of dimensions associated with the alarm's associated metric.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The list of dimensions associated with the alarm's associated metric.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The list of dimensions associated with the alarm's associated metric.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The list of dimensions associated with the alarm's associated metric.</p>
     */
    inline MetricAlarm& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The list of dimensions associated with the alarm's associated metric.</p>
     */
    inline MetricAlarm& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(value); return *this;}

    /**
     * <p>The list of dimensions associated with the alarm's associated metric.</p>
     */
    inline MetricAlarm& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The list of dimensions associated with the alarm's associated metric.</p>
     */
    inline MetricAlarm& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The period in seconds over which the statistic is applied.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period in seconds over which the statistic is applied.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period in seconds over which the statistic is applied.</p>
     */
    inline MetricAlarm& WithPeriod(int value) { SetPeriod(value); return *this;}

    /**
     * <p>The unit of the alarm's associated metric.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the alarm's associated metric.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the alarm's associated metric.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the alarm's associated metric.</p>
     */
    inline MetricAlarm& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the alarm's associated metric.</p>
     */
    inline MetricAlarm& WithUnit(StandardUnit&& value) { SetUnit(value); return *this;}

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

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
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline MetricAlarm& WithThreshold(double value) { SetThreshold(value); return *this;}

    /**
     * <p> The arithmetic operation to use when comparing the specified
     * <code>Statistic</code> and <code>Threshold</code>. The specified
     * <code>Statistic</code> value is used as the first operand. </p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p> The arithmetic operation to use when comparing the specified
     * <code>Statistic</code> and <code>Threshold</code>. The specified
     * <code>Statistic</code> value is used as the first operand. </p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p> The arithmetic operation to use when comparing the specified
     * <code>Statistic</code> and <code>Threshold</code>. The specified
     * <code>Statistic</code> value is used as the first operand. </p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p> The arithmetic operation to use when comparing the specified
     * <code>Statistic</code> and <code>Threshold</code>. The specified
     * <code>Statistic</code> value is used as the first operand. </p>
     */
    inline MetricAlarm& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p> The arithmetic operation to use when comparing the specified
     * <code>Statistic</code> and <code>Threshold</code>. The specified
     * <code>Statistic</code> value is used as the first operand. </p>
     */
    inline MetricAlarm& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(value); return *this;}

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
    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;
    int m_period;
    bool m_periodHasBeenSet;
    StandardUnit m_unit;
    bool m_unitHasBeenSet;
    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet;
    double m_threshold;
    bool m_thresholdHasBeenSet;
    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
