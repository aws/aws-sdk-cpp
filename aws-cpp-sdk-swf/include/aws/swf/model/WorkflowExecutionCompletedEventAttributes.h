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
   * <p>Provides details of the <code>WorkflowExecutionCompleted</code> event.</p>
   */
  class AWS_SWF_API WorkflowExecutionCompletedEventAttributes
  {
  public:
    WorkflowExecutionCompletedEventAttributes();
    WorkflowExecutionCompletedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowExecutionCompletedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The result produced by the workflow execution upon successful completion.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>The result produced by the workflow execution upon successful completion.</p>
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The result produced by the workflow execution upon successful completion.</p>
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The result produced by the workflow execution upon successful completion.</p>
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * <p>The result produced by the workflow execution upon successful completion.</p>
     */
    inline WorkflowExecutionCompletedEventAttributes& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>The result produced by the workflow execution upon successful completion.</p>
     */
    inline WorkflowExecutionCompletedEventAttributes& WithResult(Aws::String&& value) { SetResult(value); return *this;}

    /**
     * <p>The result produced by the workflow execution upon successful completion.</p>
     */
    inline WorkflowExecutionCompletedEventAttributes& WithResult(const char* value) { SetResult(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>CompleteWorkflowExecution</code>
     * decision to complete this execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>CompleteWorkflowExecution</code>
     * decision to complete this execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>CompleteWorkflowExecution</code>
     * decision to complete this execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline WorkflowExecutionCompletedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:
    Aws::String m_result;
    bool m_resultHasBeenSet;
    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
