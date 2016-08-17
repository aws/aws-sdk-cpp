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
   * <p>Provides details for the <code>LambdaFunctionFailed</code> event.</p>
   */
  class AWS_SWF_API LambdaFunctionFailedEventAttributes
  {
  public:
    LambdaFunctionFailedEventAttributes();
    LambdaFunctionFailedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    LambdaFunctionFailedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline LambdaFunctionFailedEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}

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
    inline LambdaFunctionFailedEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}

    /**
     * <p>The reason provided for the failure (if any).</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason provided for the failure (if any).</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason provided for the failure (if any).</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason provided for the failure (if any).</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason provided for the failure (if any).</p>
     */
    inline LambdaFunctionFailedEventAttributes& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason provided for the failure (if any).</p>
     */
    inline LambdaFunctionFailedEventAttributes& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>The reason provided for the failure (if any).</p>
     */
    inline LambdaFunctionFailedEventAttributes& WithReason(const char* value) { SetReason(value); return *this;}

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
    inline LambdaFunctionFailedEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline LambdaFunctionFailedEventAttributes& WithDetails(Aws::String&& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the failure (if any).</p>
     */
    inline LambdaFunctionFailedEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:
    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet;
    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet;
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
    Aws::String m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
