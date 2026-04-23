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
   * <p>Decision attributes specified in
   * <code>scheduleLambdaFunctionDecisionAttributes</code> within the list of
   * decisions <code>decisions</code> passed to
   * <a>RespondDecisionTaskCompleted</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ScheduleLambdaFunctionDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ScheduleLambdaFunctionDecisionAttributes
  {
  public:
    ScheduleLambdaFunctionDecisionAttributes();
    ScheduleLambdaFunctionDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    ScheduleLambdaFunctionDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithControl(const char* value) { SetControl(value); return *this;}


    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-300 (1s-5m). If
     * no value is supplied, than a default value of 300s is assumed.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }

    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-300 (1s-5m). If
     * no value is supplied, than a default value of 300s is assumed.</p>
     */
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }

    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-300 (1s-5m). If
     * no value is supplied, than a default value of 300s is assumed.</p>
     */
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-300 (1s-5m). If
     * no value is supplied, than a default value of 300s is assumed.</p>
     */
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::move(value); }

    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-300 (1s-5m). If
     * no value is supplied, than a default value of 300s is assumed.</p>
     */
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }

    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-300 (1s-5m). If
     * no value is supplied, than a default value of 300s is assumed.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-300 (1s-5m). If
     * no value is supplied, than a default value of 300s is assumed.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-300 (1s-5m). If
     * no value is supplied, than a default value of 300s is assumed.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}

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
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
