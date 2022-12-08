/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/StartLambdaFunctionFailedCause.h>
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
   * <p>Provides the details of the <code>StartLambdaFunctionFailed</code> event. It
   * isn't set for other event types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartLambdaFunctionFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class StartLambdaFunctionFailedEventAttributes
  {
  public:
    AWS_SWF_API StartLambdaFunctionFailedEventAttributes();
    AWS_SWF_API StartLambdaFunctionFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API StartLambdaFunctionFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. To help diagnose issues, use this information
     * to trace back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }

    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. To help diagnose issues, use this information
     * to trace back the chain of events leading up to this event.</p>
     */
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. To help diagnose issues, use this information
     * to trace back the chain of events leading up to this event.</p>
     */
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }

    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. To help diagnose issues, use this information
     * to trace back the chain of events leading up to this event.</p>
     */
    inline StartLambdaFunctionFailedEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}


    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because the IAM role attached to the execution lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">Lambda
     * Tasks</a> in the <i>Amazon SWF Developer Guide</i>.</p> 
     */
    inline const StartLambdaFunctionFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because the IAM role attached to the execution lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">Lambda
     * Tasks</a> in the <i>Amazon SWF Developer Guide</i>.</p> 
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because the IAM role attached to the execution lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">Lambda
     * Tasks</a> in the <i>Amazon SWF Developer Guide</i>.</p> 
     */
    inline void SetCause(const StartLambdaFunctionFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because the IAM role attached to the execution lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">Lambda
     * Tasks</a> in the <i>Amazon SWF Developer Guide</i>.</p> 
     */
    inline void SetCause(StartLambdaFunctionFailedCause&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because the IAM role attached to the execution lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">Lambda
     * Tasks</a> in the <i>Amazon SWF Developer Guide</i>.</p> 
     */
    inline StartLambdaFunctionFailedEventAttributes& WithCause(const StartLambdaFunctionFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because the IAM role attached to the execution lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">Lambda
     * Tasks</a> in the <i>Amazon SWF Developer Guide</i>.</p> 
     */
    inline StartLambdaFunctionFailedEventAttributes& WithCause(StartLambdaFunctionFailedCause&& value) { SetCause(std::move(value)); return *this;}


    /**
     * <p>A description that can help diagnose the cause of the fault.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description that can help diagnose the cause of the fault.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description that can help diagnose the cause of the fault.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description that can help diagnose the cause of the fault.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description that can help diagnose the cause of the fault.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description that can help diagnose the cause of the fault.</p>
     */
    inline StartLambdaFunctionFailedEventAttributes& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description that can help diagnose the cause of the fault.</p>
     */
    inline StartLambdaFunctionFailedEventAttributes& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description that can help diagnose the cause of the fault.</p>
     */
    inline StartLambdaFunctionFailedEventAttributes& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet = false;

    StartLambdaFunctionFailedCause m_cause;
    bool m_causeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
