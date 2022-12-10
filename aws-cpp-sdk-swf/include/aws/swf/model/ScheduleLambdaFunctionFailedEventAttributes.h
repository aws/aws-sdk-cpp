/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ScheduleLambdaFunctionFailedCause.h>
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
   * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
   * It isn't set for other event types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ScheduleLambdaFunctionFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class ScheduleLambdaFunctionFailedEventAttributes
  {
  public:
    AWS_SWF_API ScheduleLambdaFunctionFailedEventAttributes();
    AWS_SWF_API ScheduleLambdaFunctionFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ScheduleLambdaFunctionFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithId(const char* value) { SetId(value); return *this;}


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
    inline ScheduleLambdaFunctionFailedEventAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lambda function.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because it lacked sufficient permissions. For details and example IAM
     * policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline const ScheduleLambdaFunctionFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because it lacked sufficient permissions. For details and example IAM
     * policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because it lacked sufficient permissions. For details and example IAM
     * policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline void SetCause(const ScheduleLambdaFunctionFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because it lacked sufficient permissions. For details and example IAM
     * policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline void SetCause(ScheduleLambdaFunctionFailedCause&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because it lacked sufficient permissions. For details and example IAM
     * policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithCause(const ScheduleLambdaFunctionFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because it lacked sufficient permissions. For details and example IAM
     * policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithCause(ScheduleLambdaFunctionFailedCause&& value) { SetCause(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this Lambda task. To help diagnose issues,
     * use this information to trace back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this Lambda task. To help diagnose issues,
     * use this information to trace back the chain of events leading up to this
     * event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this Lambda task. To help diagnose issues,
     * use this information to trace back the chain of events leading up to this
     * event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this Lambda task. To help diagnose issues,
     * use this information to trace back the chain of events leading up to this
     * event.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleLambdaFunctionFailedCause m_cause;
    bool m_causeHasBeenSet = false;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
