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
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Statistic.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/ComparisonOperator.h>
#include <aws/monitoring/model/Dimension.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Describes the inputs for PutMetricAlarm.</p>
   */
  class AWS_CLOUDWATCH_API PutMetricAlarmRequest : public CloudWatchRequest
  {
  public:
    PutMetricAlarmRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The descriptive name for the alarm. This name must be unique within the
     * user's AWS account</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The descriptive name for the alarm. This name must be unique within the
     * user's AWS account</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The descriptive name for the alarm. This name must be unique within the
     * user's AWS account</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The descriptive name for the alarm. This name must be unique within the
     * user's AWS account</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The descriptive name for the alarm. This name must be unique within the
     * user's AWS account</p>
     */
    inline PutMetricAlarmRequest& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The descriptive name for the alarm. This name must be unique within the
     * user's AWS account</p>
     */
    inline PutMetricAlarmRequest& WithAlarmName(Aws::String&& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The descriptive name for the alarm. This name must be unique within the
     * user's AWS account</p>
     */
    inline PutMetricAlarmRequest& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}

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
    inline PutMetricAlarmRequest& WithAlarmDescription(const Aws::String& value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>The description for the alarm.</p>
     */
    inline PutMetricAlarmRequest& WithAlarmDescription(Aws::String&& value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>The description for the alarm.</p>
     */
    inline PutMetricAlarmRequest& WithAlarmDescription(const char* value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>Indicates whether or not actions should be executed during any changes to the
     * alarm's state.</p>
     */
    inline bool GetActionsEnabled() const{ return m_actionsEnabled; }

    /**
     * <p>Indicates whether or not actions should be executed during any changes to the
     * alarm's state.</p>
     */
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }

    /**
     * <p>Indicates whether or not actions should be executed during any changes to the
     * alarm's state.</p>
     */
    inline PutMetricAlarmRequest& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const{ return m_oKActions; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline void SetOKActions(const Aws::Vector<Aws::String>& value) { m_oKActionsHasBeenSet = true; m_oKActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline void SetOKActions(Aws::Vector<Aws::String>&& value) { m_oKActionsHasBeenSet = true; m_oKActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& WithOKActions(const Aws::Vector<Aws::String>& value) { SetOKActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& WithOKActions(Aws::Vector<Aws::String>&& value) { SetOKActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddOKActions(const Aws::String& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddOKActions(Aws::String&& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>OK</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddOKActions(const char* value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const{ return m_alarmActions; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline void SetAlarmActions(const Aws::Vector<Aws::String>& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline void SetAlarmActions(Aws::Vector<Aws::String>&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& WithAlarmActions(const Aws::Vector<Aws::String>& value) { SetAlarmActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& WithAlarmActions(Aws::Vector<Aws::String>&& value) { SetAlarmActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddAlarmActions(const Aws::String& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddAlarmActions(Aws::String&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>ALARM</code> state from any other state. Each action is specified as an
     * Amazon Resource Name (ARN). </p> <p>Valid Values: arn:aws:automate:<i>region
     * (e.g., us-east-1)</i>:ec2:stop | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:terminate | arn:aws:automate:<i>region (e.g.,
     * us-east-1)</i>:ec2:recover</p> <p>Valid Values (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddAlarmActions(const char* value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <p>Valid Values:
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:stop |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:terminate |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:recover</p> <p>Valid Values
     * (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const{ return m_insufficientDataActions; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <p>Valid Values:
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:stop |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:terminate |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:recover</p> <p>Valid Values
     * (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline void SetInsufficientDataActions(const Aws::Vector<Aws::String>& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <p>Valid Values:
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:stop |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:terminate |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:recover</p> <p>Valid Values
     * (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline void SetInsufficientDataActions(Aws::Vector<Aws::String>&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <p>Valid Values:
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:stop |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:terminate |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:recover</p> <p>Valid Values
     * (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& WithInsufficientDataActions(const Aws::Vector<Aws::String>& value) { SetInsufficientDataActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <p>Valid Values:
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:stop |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:terminate |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:recover</p> <p>Valid Values
     * (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& WithInsufficientDataActions(Aws::Vector<Aws::String>&& value) { SetInsufficientDataActions(value); return *this;}

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <p>Valid Values:
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:stop |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:terminate |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:recover</p> <p>Valid Values
     * (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddInsufficientDataActions(const Aws::String& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <p>Valid Values:
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:stop |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:terminate |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:recover</p> <p>Valid Values
     * (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddInsufficientDataActions(Aws::String&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p> The list of actions to execute when this alarm transitions into an
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). </p> <p>Valid Values:
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:stop |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:terminate |
     * arn:aws:automate:<i>region (e.g., us-east-1)</i>:ec2:recover</p> <p>Valid Values
     * (for use with IAM roles):
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Stop/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Terminate/1.0
     * |
     * arn:aws:swf:us-east-1:{<i>customer-account</i>}:action/actions/AWS_EC2.InstanceId.Reboot/1.0</p>
     * <p> <b>Note:</b> You must create at least one stop, terminate, or reboot alarm
     * using the Amazon EC2 or CloudWatch console to create the <b>EC2ActionsAccess</b>
     * IAM role for the first time. After this IAM role is created, you can create
     * stop, terminate, or reboot alarms using the CLI.</p>
     */
    inline PutMetricAlarmRequest& AddInsufficientDataActions(const char* value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p>The name for the alarm's associated metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name for the alarm's associated metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name for the alarm's associated metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name for the alarm's associated metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}

    /**
     * <p>The namespace for the alarm's associated metric.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace for the alarm's associated metric.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace for the alarm's associated metric.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace for the alarm's associated metric.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

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
    inline PutMetricAlarmRequest& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic to apply to the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithStatistic(Statistic&& value) { SetStatistic(value); return *this;}

    /**
     * <p>The dimensions for the alarm's associated metric.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions for the alarm's associated metric.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions for the alarm's associated metric.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions for the alarm's associated metric.</p>
     */
    inline PutMetricAlarmRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The period in seconds over which the specified statistic is applied.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period in seconds over which the specified statistic is applied.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period in seconds over which the specified statistic is applied.</p>
     */
    inline PutMetricAlarmRequest& WithPeriod(int value) { SetPeriod(value); return *this;}

    /**
     * <p>The statistic's unit of measure. For example, the units for the Amazon EC2
     * NetworkIn metric are Bytes because NetworkIn tracks the number of bytes that an
     * instance receives on all network interfaces. You can also specify a unit when
     * you create a custom metric. Units help provide conceptual meaning to your data.
     * Metric data points that specify a unit of measure, such as Percent, are
     * aggregated separately.</p> <p> <b>Note:</b> If you specify a unit, you must use
     * a unit that is appropriate for the metric. Otherwise, this can cause an Amazon
     * CloudWatch alarm to get stuck in the INSUFFICIENT DATA state. </p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The statistic's unit of measure. For example, the units for the Amazon EC2
     * NetworkIn metric are Bytes because NetworkIn tracks the number of bytes that an
     * instance receives on all network interfaces. You can also specify a unit when
     * you create a custom metric. Units help provide conceptual meaning to your data.
     * Metric data points that specify a unit of measure, such as Percent, are
     * aggregated separately.</p> <p> <b>Note:</b> If you specify a unit, you must use
     * a unit that is appropriate for the metric. Otherwise, this can cause an Amazon
     * CloudWatch alarm to get stuck in the INSUFFICIENT DATA state. </p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The statistic's unit of measure. For example, the units for the Amazon EC2
     * NetworkIn metric are Bytes because NetworkIn tracks the number of bytes that an
     * instance receives on all network interfaces. You can also specify a unit when
     * you create a custom metric. Units help provide conceptual meaning to your data.
     * Metric data points that specify a unit of measure, such as Percent, are
     * aggregated separately.</p> <p> <b>Note:</b> If you specify a unit, you must use
     * a unit that is appropriate for the metric. Otherwise, this can cause an Amazon
     * CloudWatch alarm to get stuck in the INSUFFICIENT DATA state. </p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The statistic's unit of measure. For example, the units for the Amazon EC2
     * NetworkIn metric are Bytes because NetworkIn tracks the number of bytes that an
     * instance receives on all network interfaces. You can also specify a unit when
     * you create a custom metric. Units help provide conceptual meaning to your data.
     * Metric data points that specify a unit of measure, such as Percent, are
     * aggregated separately.</p> <p> <b>Note:</b> If you specify a unit, you must use
     * a unit that is appropriate for the metric. Otherwise, this can cause an Amazon
     * CloudWatch alarm to get stuck in the INSUFFICIENT DATA state. </p>
     */
    inline PutMetricAlarmRequest& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The statistic's unit of measure. For example, the units for the Amazon EC2
     * NetworkIn metric are Bytes because NetworkIn tracks the number of bytes that an
     * instance receives on all network interfaces. You can also specify a unit when
     * you create a custom metric. Units help provide conceptual meaning to your data.
     * Metric data points that specify a unit of measure, such as Percent, are
     * aggregated separately.</p> <p> <b>Note:</b> If you specify a unit, you must use
     * a unit that is appropriate for the metric. Otherwise, this can cause an Amazon
     * CloudWatch alarm to get stuck in the INSUFFICIENT DATA state. </p>
     */
    inline PutMetricAlarmRequest& WithUnit(StandardUnit&& value) { SetUnit(value); return *this;}

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
    inline PutMetricAlarmRequest& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}

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
    inline PutMetricAlarmRequest& WithThreshold(double value) { SetThreshold(value); return *this;}

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
    inline PutMetricAlarmRequest& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p> The arithmetic operation to use when comparing the specified
     * <code>Statistic</code> and <code>Threshold</code>. The specified
     * <code>Statistic</code> value is used as the first operand. </p>
     */
    inline PutMetricAlarmRequest& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(value); return *this;}

  private:
    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet;
    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet;
    bool m_actionsEnabled;
    bool m_actionsEnabledHasBeenSet;
    Aws::Vector<Aws::String> m_oKActions;
    bool m_oKActionsHasBeenSet;
    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet;
    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet;
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
