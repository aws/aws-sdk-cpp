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
#include <aws/swf/model/LambdaFunctionTimeoutType.h>

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
   * <p>Provides details for the <code>LambdaFunctionTimedOut</code> event.</p>
   */
  class AWS_SWF_API LambdaFunctionTimedOutEventAttributes
  {
  public:
    LambdaFunctionTimedOutEventAttributes();
    LambdaFunctionTimedOutEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    LambdaFunctionTimedOutEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this AWS Lambda function was scheduled. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }

    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this AWS Lambda function was scheduled. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }

    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this AWS Lambda function was scheduled. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline LambdaFunctionTimedOutEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}

    /**
     * <p>The ID of the <code>LambdaFunctionStarted</code> event recorded in the
     * history.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>LambdaFunctionStarted</code> event recorded in the
     * history.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }

    /**
     * <p>The ID of the <code>LambdaFunctionStarted</code> event recorded in the
     * history.</p>
     */
    inline LambdaFunctionTimedOutEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}

    /**
     * <p>The type of the timeout that caused this event.</p>
     */
    inline const LambdaFunctionTimeoutType& GetTimeoutType() const{ return m_timeoutType; }

    /**
     * <p>The type of the timeout that caused this event.</p>
     */
    inline void SetTimeoutType(const LambdaFunctionTimeoutType& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }

    /**
     * <p>The type of the timeout that caused this event.</p>
     */
    inline void SetTimeoutType(LambdaFunctionTimeoutType&& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }

    /**
     * <p>The type of the timeout that caused this event.</p>
     */
    inline LambdaFunctionTimedOutEventAttributes& WithTimeoutType(const LambdaFunctionTimeoutType& value) { SetTimeoutType(value); return *this;}

    /**
     * <p>The type of the timeout that caused this event.</p>
     */
    inline LambdaFunctionTimedOutEventAttributes& WithTimeoutType(LambdaFunctionTimeoutType&& value) { SetTimeoutType(value); return *this;}

  private:
    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet;
    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet;
    LambdaFunctionTimeoutType m_timeoutType;
    bool m_timeoutTypeHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
