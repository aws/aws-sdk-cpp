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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides the details of the <code>DecisionTaskCompleted</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTaskCompletedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API DecisionTaskCompletedEventAttributes
  {
  public:
    DecisionTaskCompletedEventAttributes();
    DecisionTaskCompletedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    DecisionTaskCompletedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline const Aws::String& GetExecutionContext() const{ return m_executionContext; }

    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline bool ExecutionContextHasBeenSet() const { return m_executionContextHasBeenSet; }

    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline void SetExecutionContext(const Aws::String& value) { m_executionContextHasBeenSet = true; m_executionContext = value; }

    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline void SetExecutionContext(Aws::String&& value) { m_executionContextHasBeenSet = true; m_executionContext = std::move(value); }

    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline void SetExecutionContext(const char* value) { m_executionContextHasBeenSet = true; m_executionContext.assign(value); }

    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline DecisionTaskCompletedEventAttributes& WithExecutionContext(const Aws::String& value) { SetExecutionContext(value); return *this;}

    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline DecisionTaskCompletedEventAttributes& WithExecutionContext(Aws::String&& value) { SetExecutionContext(std::move(value)); return *this;}

    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline DecisionTaskCompletedEventAttributes& WithExecutionContext(const char* value) { SetExecutionContext(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline DecisionTaskCompletedEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline DecisionTaskCompletedEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}

  private:

    Aws::String m_executionContext;
    bool m_executionContextHasBeenSet;

    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
