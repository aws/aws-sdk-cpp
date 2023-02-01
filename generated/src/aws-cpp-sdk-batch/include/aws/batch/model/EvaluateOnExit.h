/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/RetryAction.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Specifies an array of up to 5 conditions to be met, and an action to take
   * (<code>RETRY</code> or <code>EXIT</code>) if all conditions are met. If none of
   * the <code>EvaluateOnExit</code> conditions in a <code>RetryStrategy</code>
   * match, then the job is retried.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EvaluateOnExit">AWS
   * API Reference</a></p>
   */
  class EvaluateOnExit
  {
  public:
    AWS_BATCH_API EvaluateOnExit();
    AWS_BATCH_API EvaluateOnExit(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EvaluateOnExit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline const Aws::String& GetOnStatusReason() const{ return m_onStatusReason; }

    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline bool OnStatusReasonHasBeenSet() const { return m_onStatusReasonHasBeenSet; }

    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline void SetOnStatusReason(const Aws::String& value) { m_onStatusReasonHasBeenSet = true; m_onStatusReason = value; }

    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline void SetOnStatusReason(Aws::String&& value) { m_onStatusReasonHasBeenSet = true; m_onStatusReason = std::move(value); }

    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline void SetOnStatusReason(const char* value) { m_onStatusReasonHasBeenSet = true; m_onStatusReason.assign(value); }

    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline EvaluateOnExit& WithOnStatusReason(const Aws::String& value) { SetOnStatusReason(value); return *this;}

    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline EvaluateOnExit& WithOnStatusReason(Aws::String&& value) { SetOnStatusReason(std::move(value)); return *this;}

    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline EvaluateOnExit& WithOnStatusReason(const char* value) { SetOnStatusReason(value); return *this;}


    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline const Aws::String& GetOnReason() const{ return m_onReason; }

    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline bool OnReasonHasBeenSet() const { return m_onReasonHasBeenSet; }

    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline void SetOnReason(const Aws::String& value) { m_onReasonHasBeenSet = true; m_onReason = value; }

    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline void SetOnReason(Aws::String&& value) { m_onReasonHasBeenSet = true; m_onReason = std::move(value); }

    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline void SetOnReason(const char* value) { m_onReasonHasBeenSet = true; m_onReason.assign(value); }

    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline EvaluateOnExit& WithOnReason(const Aws::String& value) { SetOnReason(value); return *this;}

    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline EvaluateOnExit& WithOnReason(Aws::String&& value) { SetOnReason(std::move(value)); return *this;}

    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline EvaluateOnExit& WithOnReason(const char* value) { SetOnReason(value); return *this;}


    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline const Aws::String& GetOnExitCode() const{ return m_onExitCode; }

    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline bool OnExitCodeHasBeenSet() const { return m_onExitCodeHasBeenSet; }

    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline void SetOnExitCode(const Aws::String& value) { m_onExitCodeHasBeenSet = true; m_onExitCode = value; }

    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline void SetOnExitCode(Aws::String&& value) { m_onExitCodeHasBeenSet = true; m_onExitCode = std::move(value); }

    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline void SetOnExitCode(const char* value) { m_onExitCodeHasBeenSet = true; m_onExitCode.assign(value); }

    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline EvaluateOnExit& WithOnExitCode(const Aws::String& value) { SetOnExitCode(value); return *this;}

    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline EvaluateOnExit& WithOnExitCode(Aws::String&& value) { SetOnExitCode(std::move(value)); return *this;}

    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline EvaluateOnExit& WithOnExitCode(const char* value) { SetOnExitCode(value); return *this;}


    /**
     * <p>Specifies the action to take if all of the specified conditions
     * (<code>onStatusReason</code>, <code>onReason</code>, and
     * <code>onExitCode</code>) are met. The values aren't case sensitive.</p>
     */
    inline const RetryAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the action to take if all of the specified conditions
     * (<code>onStatusReason</code>, <code>onReason</code>, and
     * <code>onExitCode</code>) are met. The values aren't case sensitive.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the action to take if all of the specified conditions
     * (<code>onStatusReason</code>, <code>onReason</code>, and
     * <code>onExitCode</code>) are met. The values aren't case sensitive.</p>
     */
    inline void SetAction(const RetryAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the action to take if all of the specified conditions
     * (<code>onStatusReason</code>, <code>onReason</code>, and
     * <code>onExitCode</code>) are met. The values aren't case sensitive.</p>
     */
    inline void SetAction(RetryAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the action to take if all of the specified conditions
     * (<code>onStatusReason</code>, <code>onReason</code>, and
     * <code>onExitCode</code>) are met. The values aren't case sensitive.</p>
     */
    inline EvaluateOnExit& WithAction(const RetryAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the action to take if all of the specified conditions
     * (<code>onStatusReason</code>, <code>onReason</code>, and
     * <code>onExitCode</code>) are met. The values aren't case sensitive.</p>
     */
    inline EvaluateOnExit& WithAction(RetryAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_onStatusReason;
    bool m_onStatusReasonHasBeenSet = false;

    Aws::String m_onReason;
    bool m_onReasonHasBeenSet = false;

    Aws::String m_onExitCode;
    bool m_onExitCodeHasBeenSet = false;

    RetryAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
