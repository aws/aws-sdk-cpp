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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides details of the <code>WorkflowExecutionFailed</code> event.</p>
   */
  class AWS_SWF_API WorkflowExecutionFailedEventAttributes
  {
  public:
    WorkflowExecutionFailedEventAttributes();
    WorkflowExecutionFailedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowExecutionFailedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The descriptive reason provided for the failure (if any).</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The descriptive reason provided for the failure (if any).</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The descriptive reason provided for the failure (if any).</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The descriptive reason provided for the failure (if any).</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The descriptive reason provided for the failure (if any).</p>
     */
    inline WorkflowExecutionFailedEventAttributes& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The descriptive reason provided for the failure (if any).</p>
     */
    inline WorkflowExecutionFailedEventAttributes& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>The descriptive reason provided for the failure (if any).</p>
     */
    inline WorkflowExecutionFailedEventAttributes& WithReason(const char* value) { SetReason(value); return *this;}

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline WorkflowExecutionFailedEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline WorkflowExecutionFailedEventAttributes& WithDetails(Aws::String&& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline WorkflowExecutionFailedEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>FailWorkflowExecution</code> decision
     * to fail this execution. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>FailWorkflowExecution</code> decision
     * to fail this execution. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>FailWorkflowExecution</code> decision
     * to fail this execution. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline WorkflowExecutionFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
    Aws::String m_details;
    bool m_detailsHasBeenSet;
    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
