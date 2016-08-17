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
   * <p>Provides details of the <code>ScheduleLambdaFunction</code> decision.</p>
   * <p><b>Access Control</b></p> <p>You can use IAM policies to control this
   * decision's access to Amazon SWF resources as follows:</p> <ul> <li>Use a
   * <code>Resource</code> element with the domain name to limit the action to only
   * specified domains.</li> <li>Use an <code>Action</code> element to allow or deny
   * permission to call this action.</li> <li>Constrain the following parameters by
   * using a <code>Condition</code> element with the appropriate keys. <ul>
   * <li><code>activityType.name</code>: String constraint. The key is
   * <code>swf:activityType.name</code>.</li> <li><code>activityType.version</code>:
   * String constraint. The key is <code>swf:activityType.version</code>.</li>
   * <li><code>taskList</code>: String constraint. The key is
   * <code>swf:taskList.name</code>.</li> </ul> </li> </ul> <p>If the caller does not
   * have sufficient permissions to invoke the action, or the parameter values fall
   * outside the specified constraints, the action fails. The associated event
   * attribute's <b>cause</b> parameter will be set to OPERATION_NOT_PERMITTED. For
   * details and example IAM policies, see <a
   * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a>.</p>
   */
  class AWS_SWF_API ScheduleLambdaFunctionDecisionAttributes
  {
  public:
    ScheduleLambdaFunctionDecisionAttributes();
    ScheduleLambdaFunctionDecisionAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    ScheduleLambdaFunctionDecisionAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p><b>Required.</b> The SWF <code>id</code> of the AWS Lambda task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p><b>Required.</b> The SWF <code>id</code> of the AWS Lambda task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p><b>Required.</b> The SWF <code>id</code> of the AWS Lambda task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p><b>Required.</b> The SWF <code>id</code> of the AWS Lambda task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p><b>Required.</b> The SWF <code>id</code> of the AWS Lambda task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p><b>Required.</b> The SWF <code>id</code> of the AWS Lambda task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p><b>Required.</b> The SWF <code>id</code> of the AWS Lambda task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p><b>Required.</b> The name of the AWS Lambda function to invoke.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p><b>Required.</b> The name of the AWS Lambda function to invoke.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p><b>Required.</b> The name of the AWS Lambda function to invoke.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p><b>Required.</b> The name of the AWS Lambda function to invoke.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p><b>Required.</b> The name of the AWS Lambda function to invoke.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p><b>Required.</b> The name of the AWS Lambda function to invoke.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p><b>Required.</b> The name of the AWS Lambda function to invoke.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The input provided to the AWS Lambda function.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input provided to the AWS Lambda function.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the AWS Lambda function.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the AWS Lambda function.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input provided to the AWS Lambda function.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the AWS Lambda function.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the AWS Lambda function.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <p>If set, specifies the maximum duration the function may take to execute.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }

    /**
     * <p>If set, specifies the maximum duration the function may take to execute.</p>
     */
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>If set, specifies the maximum duration the function may take to execute.</p>
     */
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>If set, specifies the maximum duration the function may take to execute.</p>
     */
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }

    /**
     * <p>If set, specifies the maximum duration the function may take to execute.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the maximum duration the function may take to execute.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the maximum duration the function may take to execute.</p>
     */
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_input;
    bool m_inputHasBeenSet;
    Aws::String m_startToCloseTimeout;
    bool m_startToCloseTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
