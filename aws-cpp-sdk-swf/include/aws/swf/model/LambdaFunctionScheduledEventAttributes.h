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
   * <p>Provides the details of the <code>LambdaFunctionScheduled</code> event. It
   * isn't set for other event types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/LambdaFunctionScheduledEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API LambdaFunctionScheduledEventAttributes
  {
  public:
    LambdaFunctionScheduledEventAttributes();
    LambdaFunctionScheduledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    LambdaFunctionScheduledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the Lambda task.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the Lambda task.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the Lambda task.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the Lambda task.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the Lambda task.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the Lambda function.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Data attached to the event that the decider can use in subsequent workflow
     * tasks. This data isn't sent to the Lambda task.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p>Data attached to the event that the decider can use in subsequent workflow
     * tasks. This data isn't sent to the Lambda task.</p>
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * <p>Data attached to the event that the decider can use in subsequent workflow
     * tasks. This data isn't sent to the Lambda task.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p>Data attached to the event that the decider can use in subsequent workflow
     * tasks. This data isn't sent to the Lambda task.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * <p>Data attached to the event that the decider can use in subsequent workflow
     * tasks. This data isn't sent to the Lambda task.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p>Data attached to the event that the decider can use in subsequent workflow
     * tasks. This data isn't sent to the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p>Data attached to the event that the decider can use in subsequent workflow
     * tasks. This data isn't sent to the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    /**
     * <p>Data attached to the event that the decider can use in subsequent workflow
     * tasks. This data isn't sent to the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}


    /**
     * <p>The input provided to the Lambda task.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input provided to the Lambda task.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The input provided to the Lambda task.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the Lambda task.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The input provided to the Lambda task.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input provided to the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The input provided to the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The maximum amount of time a worker can take to process the Lambda task.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }

    /**
     * <p>The maximum amount of time a worker can take to process the Lambda task.</p>
     */
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }

    /**
     * <p>The maximum amount of time a worker can take to process the Lambda task.</p>
     */
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>The maximum amount of time a worker can take to process the Lambda task.</p>
     */
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::move(value); }

    /**
     * <p>The maximum amount of time a worker can take to process the Lambda task.</p>
     */
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }

    /**
     * <p>The maximum amount of time a worker can take to process the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum amount of time a worker can take to process the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>The maximum amount of time a worker can take to process the Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}


    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this activity task. To help diagnose
     * issues, use this information to trace back the chain of events leading up to
     * this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this activity task. To help diagnose
     * issues, use this information to trace back the chain of events leading up to
     * this event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this activity task. To help diagnose
     * issues, use this information to trace back the chain of events leading up to
     * this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this activity task. To help diagnose
     * issues, use this information to trace back the chain of events leading up to
     * this event.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_control;
    bool m_controlHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    Aws::String m_startToCloseTimeout;
    bool m_startToCloseTimeoutHasBeenSet;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
