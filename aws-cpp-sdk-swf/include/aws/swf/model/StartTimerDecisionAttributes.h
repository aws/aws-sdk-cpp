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
   * <p>Provides the details of the <code>StartTimer</code> decision.</p> <p>
   * <b>Access Control</b> </p> <p>You can use IAM policies to control this
   * decision's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
   * <code>Resource</code> element with the domain name to limit the action to only
   * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
   * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
   * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
   * doesn't have sufficient permissions to invoke the action, or the parameter
   * values fall outside the specified constraints, the action fails. The associated
   * event attribute's <code>cause</code> parameter is set to
   * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
   * <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartTimerDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API StartTimerDecisionAttributes
  {
  public:
    StartTimerDecisionAttributes();
    StartTimerDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    StartTimerDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * contain the literal string <code>arn</code>.</p>
     */
    inline const Aws::String& GetTimerId() const{ return m_timerId; }

    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * contain the literal string <code>arn</code>.</p>
     */
    inline bool TimerIdHasBeenSet() const { return m_timerIdHasBeenSet; }

    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * contain the literal string <code>arn</code>.</p>
     */
    inline void SetTimerId(const Aws::String& value) { m_timerIdHasBeenSet = true; m_timerId = value; }

    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * contain the literal string <code>arn</code>.</p>
     */
    inline void SetTimerId(Aws::String&& value) { m_timerIdHasBeenSet = true; m_timerId = std::move(value); }

    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * contain the literal string <code>arn</code>.</p>
     */
    inline void SetTimerId(const char* value) { m_timerIdHasBeenSet = true; m_timerId.assign(value); }

    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * contain the literal string <code>arn</code>.</p>
     */
    inline StartTimerDecisionAttributes& WithTimerId(const Aws::String& value) { SetTimerId(value); return *this;}

    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * contain the literal string <code>arn</code>.</p>
     */
    inline StartTimerDecisionAttributes& WithTimerId(Aws::String&& value) { SetTimerId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * contain the literal string <code>arn</code>.</p>
     */
    inline StartTimerDecisionAttributes& WithTimerId(const char* value) { SetTimerId(value); return *this;}


    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline StartTimerDecisionAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline StartTimerDecisionAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline StartTimerDecisionAttributes& WithControl(const char* value) { SetControl(value); return *this;}


    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline const Aws::String& GetStartToFireTimeout() const{ return m_startToFireTimeout; }

    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline bool StartToFireTimeoutHasBeenSet() const { return m_startToFireTimeoutHasBeenSet; }

    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline void SetStartToFireTimeout(const Aws::String& value) { m_startToFireTimeoutHasBeenSet = true; m_startToFireTimeout = value; }

    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline void SetStartToFireTimeout(Aws::String&& value) { m_startToFireTimeoutHasBeenSet = true; m_startToFireTimeout = std::move(value); }

    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline void SetStartToFireTimeout(const char* value) { m_startToFireTimeoutHasBeenSet = true; m_startToFireTimeout.assign(value); }

    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline StartTimerDecisionAttributes& WithStartToFireTimeout(const Aws::String& value) { SetStartToFireTimeout(value); return *this;}

    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline StartTimerDecisionAttributes& WithStartToFireTimeout(Aws::String&& value) { SetStartToFireTimeout(std::move(value)); return *this;}

    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline StartTimerDecisionAttributes& WithStartToFireTimeout(const char* value) { SetStartToFireTimeout(value); return *this;}

  private:

    Aws::String m_timerId;
    bool m_timerIdHasBeenSet;

    Aws::String m_control;
    bool m_controlHasBeenSet;

    Aws::String m_startToFireTimeout;
    bool m_startToFireTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
