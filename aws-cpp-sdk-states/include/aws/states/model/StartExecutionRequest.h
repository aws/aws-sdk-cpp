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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class AWS_SFN_API StartExecutionRequest : public SFNRequest
  {
  public:
    StartExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartExecutionRequest& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartExecutionRequest& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartExecutionRequest& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


    /**
     * <p>The name of the execution. This name must be unique for your AWS account,
     * region, and state machine for 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>AWS Step Functions
     * Developer Guide</i>.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>whitespace</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account,
     * region, and state machine for 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>AWS Step Functions
     * Developer Guide</i>.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>whitespace</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account,
     * region, and state machine for 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>AWS Step Functions
     * Developer Guide</i>.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>whitespace</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account,
     * region, and state machine for 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>AWS Step Functions
     * Developer Guide</i>.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>whitespace</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account,
     * region, and state machine for 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>AWS Step Functions
     * Developer Guide</i>.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>whitespace</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account,
     * region, and state machine for 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>AWS Step Functions
     * Developer Guide</i>.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>whitespace</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul>
     */
    inline StartExecutionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the execution. This name must be unique for your AWS account,
     * region, and state machine for 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>AWS Step Functions
     * Developer Guide</i>.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>whitespace</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul>
     */
    inline StartExecutionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the execution. This name must be unique for your AWS account,
     * region, and state machine for 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>AWS Step Functions
     * Developer Guide</i>.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>whitespace</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul>
     */
    inline StartExecutionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> <note>
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p> </note>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> <note>
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p> </note>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> <note>
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p> </note>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> <note>
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p> </note>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> <note>
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p> </note>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> <note>
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p> </note>
     */
    inline StartExecutionRequest& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> <note>
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p> </note>
     */
    inline StartExecutionRequest& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> <note>
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p> </note>
     */
    inline StartExecutionRequest& WithInput(const char* value) { SetInput(value); return *this;}

  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
