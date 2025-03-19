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
    AWS_BATCH_API EvaluateOnExit() = default;
    AWS_BATCH_API EvaluateOnExit(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EvaluateOnExit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a glob pattern to match against the <code>StatusReason</code>
     * returned for a job. The pattern can contain up to 512 characters. It can contain
     * letters, numbers, periods (.), colons (:), and white spaces (including spaces or
     * tabs). It can optionally end with an asterisk (*) so that only the start of the
     * string needs to be an exact match.</p>
     */
    inline const Aws::String& GetOnStatusReason() const { return m_onStatusReason; }
    inline bool OnStatusReasonHasBeenSet() const { return m_onStatusReasonHasBeenSet; }
    template<typename OnStatusReasonT = Aws::String>
    void SetOnStatusReason(OnStatusReasonT&& value) { m_onStatusReasonHasBeenSet = true; m_onStatusReason = std::forward<OnStatusReasonT>(value); }
    template<typename OnStatusReasonT = Aws::String>
    EvaluateOnExit& WithOnStatusReason(OnStatusReasonT&& value) { SetOnStatusReason(std::forward<OnStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a glob pattern to match against the <code>Reason</code> returned for
     * a job. The pattern can contain up to 512 characters. It can contain letters,
     * numbers, periods (.), colons (:), and white space (including spaces and tabs).
     * It can optionally end with an asterisk (*) so that only the start of the string
     * needs to be an exact match.</p>
     */
    inline const Aws::String& GetOnReason() const { return m_onReason; }
    inline bool OnReasonHasBeenSet() const { return m_onReasonHasBeenSet; }
    template<typename OnReasonT = Aws::String>
    void SetOnReason(OnReasonT&& value) { m_onReasonHasBeenSet = true; m_onReason = std::forward<OnReasonT>(value); }
    template<typename OnReasonT = Aws::String>
    EvaluateOnExit& WithOnReason(OnReasonT&& value) { SetOnReason(std::forward<OnReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a glob pattern to match against the decimal representation of the
     * <code>ExitCode</code> returned for a job. The pattern can be up to 512
     * characters long. It can contain only numbers, and can end with an asterisk (*)
     * so that only the start of the string needs to be an exact match.</p> <p>The
     * string can contain up to 512 characters.</p>
     */
    inline const Aws::String& GetOnExitCode() const { return m_onExitCode; }
    inline bool OnExitCodeHasBeenSet() const { return m_onExitCodeHasBeenSet; }
    template<typename OnExitCodeT = Aws::String>
    void SetOnExitCode(OnExitCodeT&& value) { m_onExitCodeHasBeenSet = true; m_onExitCode = std::forward<OnExitCodeT>(value); }
    template<typename OnExitCodeT = Aws::String>
    EvaluateOnExit& WithOnExitCode(OnExitCodeT&& value) { SetOnExitCode(std::forward<OnExitCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action to take if all of the specified conditions
     * (<code>onStatusReason</code>, <code>onReason</code>, and
     * <code>onExitCode</code>) are met. The values aren't case sensitive.</p>
     */
    inline RetryAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(RetryAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline EvaluateOnExit& WithAction(RetryAction value) { SetAction(value); return *this;}
    ///@}
  private:

    Aws::String m_onStatusReason;
    bool m_onStatusReasonHasBeenSet = false;

    Aws::String m_onReason;
    bool m_onReasonHasBeenSet = false;

    Aws::String m_onExitCode;
    bool m_onExitCodeHasBeenSet = false;

    RetryAction m_action{RetryAction::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
