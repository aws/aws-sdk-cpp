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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ActivityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ScheduleActivityTaskFailedCause.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>ScheduleActivityTaskFailed</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ScheduleActivityTaskFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ScheduleActivityTaskFailedEventAttributes
  {
  public:
    ScheduleActivityTaskFailedEventAttributes();
    ScheduleActivityTaskFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    ScheduleActivityTaskFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The activity type provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }

    /**
     * <p>The activity type provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }

    /**
     * <p>The activity type provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }

    /**
     * <p>The activity type provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }

    /**
     * <p>The activity type provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline ScheduleActivityTaskFailedEventAttributes& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}

    /**
     * <p>The activity type provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline ScheduleActivityTaskFailedEventAttributes& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}


    /**
     * <p>The activityId provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }

    /**
     * <p>The activityId provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }

    /**
     * <p>The activityId provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p>The activityId provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = std::move(value); }

    /**
     * <p>The activityId provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }

    /**
     * <p>The activityId provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline ScheduleActivityTaskFailedEventAttributes& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}

    /**
     * <p>The activityId provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline ScheduleActivityTaskFailedEventAttributes& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}

    /**
     * <p>The activityId provided in the <code>ScheduleActivityTask</code> decision
     * that failed.</p>
     */
    inline ScheduleActivityTaskFailedEventAttributes& WithActivityId(const char* value) { SetActivityId(value); return *this;}


    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline const ScheduleActivityTaskFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline void SetCause(const ScheduleActivityTaskFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline void SetCause(ScheduleActivityTaskFailedCause&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline ScheduleActivityTaskFailedEventAttributes& WithCause(const ScheduleActivityTaskFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline ScheduleActivityTaskFailedEventAttributes& WithCause(ScheduleActivityTaskFailedCause&& value) { SetCause(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline ScheduleActivityTaskFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet;

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet;

    ScheduleActivityTaskFailedCause m_cause;
    bool m_causeHasBeenSet;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
