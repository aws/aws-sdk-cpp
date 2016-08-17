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
   * <p>Provides details for the <code>LambdaFunctionScheduled</code> event.</p>
   */
  class AWS_SWF_API LambdaFunctionScheduledEventAttributes
  {
  public:
    LambdaFunctionScheduledEventAttributes();
    LambdaFunctionScheduledEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    LambdaFunctionScheduledEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique Amazon SWF ID for the AWS Lambda task.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique Amazon SWF ID for the AWS Lambda task.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique Amazon SWF ID for the AWS Lambda task.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique Amazon SWF ID for the AWS Lambda task.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique Amazon SWF ID for the AWS Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique Amazon SWF ID for the AWS Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The unique Amazon SWF ID for the AWS Lambda task.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Input provided to the AWS Lambda function.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>Input provided to the AWS Lambda function.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Input provided to the AWS Lambda function.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Input provided to the AWS Lambda function.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>Input provided to the AWS Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>Input provided to the AWS Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p>Input provided to the AWS Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <p>The maximum time, in seconds, that the AWS Lambda function can take to
     * execute from start to close before it is marked as failed.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }

    /**
     * <p>The maximum time, in seconds, that the AWS Lambda function can take to
     * execute from start to close before it is marked as failed.</p>
     */
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that the AWS Lambda function can take to
     * execute from start to close before it is marked as failed.</p>
     */
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that the AWS Lambda function can take to
     * execute from start to close before it is marked as failed.</p>
     */
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }

    /**
     * <p>The maximum time, in seconds, that the AWS Lambda function can take to
     * execute from start to close before it is marked as failed.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum time, in seconds, that the AWS Lambda function can take to
     * execute from start to close before it is marked as failed.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum time, in seconds, that the AWS Lambda function can take to
     * execute from start to close before it is marked as failed.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event for the decision that
     * resulted in the scheduling of this AWS Lambda function. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event for the decision that
     * resulted in the scheduling of this AWS Lambda function. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event for the decision that
     * resulted in the scheduling of this AWS Lambda function. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline LambdaFunctionScheduledEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
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
