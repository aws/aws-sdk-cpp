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
   * <p>Provides the details of the <code>LambdaFunctionCompleted</code> event. It
   * isn't set for other event types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/LambdaFunctionCompletedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API LambdaFunctionCompletedEventAttributes
  {
  public:
    LambdaFunctionCompletedEventAttributes();
    LambdaFunctionCompletedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    LambdaFunctionCompletedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this Lambda task was scheduled. To help diagnose issues, use this
     * information to trace back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }

    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this Lambda task was scheduled. To help diagnose issues, use this
     * information to trace back the chain of events leading up to this event.</p>
     */
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this Lambda task was scheduled. To help diagnose issues, use this
     * information to trace back the chain of events leading up to this event.</p>
     */
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }

    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this Lambda task was scheduled. To help diagnose issues, use this
     * information to trace back the chain of events leading up to this event.</p>
     */
    inline LambdaFunctionCompletedEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}


    /**
     * <p>The ID of the <code>LambdaFunctionStarted</code> event recorded when this
     * activity task started. To help diagnose issues, use this information to trace
     * back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>LambdaFunctionStarted</code> event recorded when this
     * activity task started. To help diagnose issues, use this information to trace
     * back the chain of events leading up to this event.</p>
     */
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>LambdaFunctionStarted</code> event recorded when this
     * activity task started. To help diagnose issues, use this information to trace
     * back the chain of events leading up to this event.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }

    /**
     * <p>The ID of the <code>LambdaFunctionStarted</code> event recorded when this
     * activity task started. To help diagnose issues, use this information to trace
     * back the chain of events leading up to this event.</p>
     */
    inline LambdaFunctionCompletedEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}


    /**
     * <p>The results of the Lambda task.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>The results of the Lambda task.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The results of the Lambda task.</p>
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The results of the Lambda task.</p>
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The results of the Lambda task.</p>
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * <p>The results of the Lambda task.</p>
     */
    inline LambdaFunctionCompletedEventAttributes& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>The results of the Lambda task.</p>
     */
    inline LambdaFunctionCompletedEventAttributes& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>The results of the Lambda task.</p>
     */
    inline LambdaFunctionCompletedEventAttributes& WithResult(const char* value) { SetResult(value); return *this;}

  private:

    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet;

    Aws::String m_result;
    bool m_resultHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
