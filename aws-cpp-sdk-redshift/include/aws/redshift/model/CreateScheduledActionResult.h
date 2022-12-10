/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ScheduledActionType.h>
#include <aws/redshift/model/ScheduledActionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
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
  class CreateScheduledActionResult
  {
  public:
    AWS_REDSHIFT_API CreateScheduledActionResult();
    AWS_REDSHIFT_API CreateScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionName = value; }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionName.assign(value); }

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline CreateScheduledActionResult& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline CreateScheduledActionResult& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled action. </p>
     */
    inline CreateScheduledActionResult& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}


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
    inline void SetTargetAction(const ScheduledActionType& value) { m_targetAction = value; }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline void SetTargetAction(ScheduledActionType&& value) { m_targetAction = std::move(value); }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline CreateScheduledActionResult& WithTargetAction(const ScheduledActionType& value) { SetTargetAction(value); return *this;}

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ds2.8xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline CreateScheduledActionResult& WithTargetAction(ScheduledActionType&& value) { SetTargetAction(std::move(value)); return *this;}


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
    inline void SetSchedule(const Aws::String& value) { m_schedule = value; }

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
    inline void SetSchedule(Aws::String&& value) { m_schedule = std::move(value); }

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
    inline void SetSchedule(const char* value) { m_schedule.assign(value); }

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
    inline CreateScheduledActionResult& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

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
    inline CreateScheduledActionResult& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

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
    inline CreateScheduledActionResult& WithSchedule(const char* value) { SetSchedule(value); return *this;}


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
    inline void SetIamRole(const Aws::String& value) { m_iamRole = value; }

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
    inline void SetIamRole(Aws::String&& value) { m_iamRole = std::move(value); }

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
    inline void SetIamRole(const char* value) { m_iamRole.assign(value); }

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
    inline CreateScheduledActionResult& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

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
    inline CreateScheduledActionResult& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

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
    inline CreateScheduledActionResult& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>The description of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionDescription() const{ return m_scheduledActionDescription; }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(const Aws::String& value) { m_scheduledActionDescription = value; }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(Aws::String&& value) { m_scheduledActionDescription = std::move(value); }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(const char* value) { m_scheduledActionDescription.assign(value); }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline CreateScheduledActionResult& WithScheduledActionDescription(const Aws::String& value) { SetScheduledActionDescription(value); return *this;}

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline CreateScheduledActionResult& WithScheduledActionDescription(Aws::String&& value) { SetScheduledActionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline CreateScheduledActionResult& WithScheduledActionDescription(const char* value) { SetScheduledActionDescription(value); return *this;}


    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline const ScheduledActionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline void SetState(const ScheduledActionState& value) { m_state = value; }

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline void SetState(ScheduledActionState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline CreateScheduledActionResult& WithState(const ScheduledActionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline CreateScheduledActionResult& WithState(ScheduledActionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetNextInvocations() const{ return m_nextInvocations; }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline void SetNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { m_nextInvocations = value; }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline void SetNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { m_nextInvocations = std::move(value); }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline CreateScheduledActionResult& WithNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { SetNextInvocations(value); return *this;}

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline CreateScheduledActionResult& WithNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { SetNextInvocations(std::move(value)); return *this;}

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline CreateScheduledActionResult& AddNextInvocations(const Aws::Utils::DateTime& value) { m_nextInvocations.push_back(value); return *this; }

    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline CreateScheduledActionResult& AddNextInvocations(Aws::Utils::DateTime&& value) { m_nextInvocations.push_back(std::move(value)); return *this; }


    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline CreateScheduledActionResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline CreateScheduledActionResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline CreateScheduledActionResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline CreateScheduledActionResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateScheduledActionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateScheduledActionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_scheduledActionName;

    ScheduledActionType m_targetAction;

    Aws::String m_schedule;

    Aws::String m_iamRole;

    Aws::String m_scheduledActionDescription;

    ScheduledActionState m_state;

    Aws::Vector<Aws::Utils::DateTime> m_nextInvocations;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
