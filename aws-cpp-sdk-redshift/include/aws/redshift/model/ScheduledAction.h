/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ScheduledActionType.h>
#include <aws/redshift/model/ScheduledActionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a scheduled action. You can use a scheduled action to trigger some
   * Amazon Redshift API operations on a schedule. For information about which API
   * operations can be scheduled, see <a>ScheduledActionType</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ScheduledAction">AWS
   * API Reference</a></p>
   */
  class ScheduledAction
  {
  public:
    AWS_REDSHIFT_API ScheduledAction();
    AWS_REDSHIFT_API ScheduledAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ScheduledAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline ScheduledAction& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline ScheduledAction& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline ScheduledAction& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}


    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline const ScheduledActionType& GetTargetAction() const{ return m_targetAction; }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline void SetTargetAction(const ScheduledActionType& value) { m_targetActionHasBeenSet = true; m_targetAction = value; }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline void SetTargetAction(ScheduledActionType&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::move(value); }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline ScheduledAction& WithTargetAction(const ScheduledActionType& value) { SetTargetAction(value); return *this;}

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline ScheduledAction& WithTargetAction(ScheduledActionType&& value) { SetTargetAction(std::move(value)); return *this;}


    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline ScheduledAction& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline ScheduledAction& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline ScheduledAction& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline ScheduledAction& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline ScheduledAction& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline ScheduledAction& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>The description of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionDescription() const{ return m_scheduledActionDescription; }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline bool ScheduledActionDescriptionHasBeenSet() const { return m_scheduledActionDescriptionHasBeenSet; }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(const Aws::String& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = value; }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(Aws::String&& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = std::move(value); }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(const char* value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription.assign(value); }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline ScheduledAction& WithScheduledActionDescription(const Aws::String& value) { SetScheduledActionDescription(value); return *this;}

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline ScheduledAction& WithScheduledActionDescription(Aws::String&& value) { SetScheduledActionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline ScheduledAction& WithScheduledActionDescription(const char* value) { SetScheduledActionDescription(value); return *this;}


    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline const ScheduledActionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline void SetState(const ScheduledActionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline void SetState(ScheduledActionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline ScheduledAction& WithState(const ScheduledActionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline ScheduledAction& WithState(ScheduledActionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetNextInvocations() const{ return m_nextInvocations; }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline bool NextInvocationsHasBeenSet() const { return m_nextInvocationsHasBeenSet; }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline void SetNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = value; }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline void SetNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = std::move(value); }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline ScheduledAction& WithNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { SetNextInvocations(value); return *this;}

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline ScheduledAction& WithNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { SetNextInvocations(std::move(value)); return *this;}

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline ScheduledAction& AddNextInvocations(const Aws::Utils::DateTime& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.push_back(value); return *this; }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline ScheduledAction& AddNextInvocations(Aws::Utils::DateTime&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.push_back(std::move(value)); return *this; }


    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline ScheduledAction& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline ScheduledAction& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline ScheduledAction& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline ScheduledAction& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline ScheduledAction& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ScheduledAction& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    ScheduledActionType m_targetAction;
    bool m_targetActionHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::String m_scheduledActionDescription;
    bool m_scheduledActionDescriptionHasBeenSet = false;

    ScheduledActionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_nextInvocations;
    bool m_nextInvocationsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
