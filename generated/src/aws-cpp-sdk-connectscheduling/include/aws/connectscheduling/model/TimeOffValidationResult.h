/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/connectscheduling/model/TimeOffValidationCode.h>
#include <aws/connectscheduling/model/TimeOffValidationSeverity.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectScheduling {
namespace Model {

/**
 * <p>A warning or failure produced while processing the time off
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/TimeOffValidationResult">AWS
 * API Reference</a></p>
 */
class TimeOffValidationResult {
 public:
  AWS_CONNECTSCHEDULING_API TimeOffValidationResult() = default;
  AWS_CONNECTSCHEDULING_API TimeOffValidationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API TimeOffValidationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The severity of the validation result. <code>WARNING</code> is a breach of
   * the configured rules that is not enough to reject the request, either because of
   * the rules configuration or because the caller sent
   * <code>RuleFailureAction</code> <code>OVERRIDE</code>. <code>ERROR</code> is a
   * reason the request was rejected.</p>
   */
  inline TimeOffValidationSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(TimeOffValidationSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline TimeOffValidationResult& WithSeverity(TimeOffValidationSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific reason for the validation result. New values may be added, so
   * treat an unrecognized value as a generic failure of the reported severity.</p>
   * <ul> <li> <p> <code>INSUFFICIENT_USER_TIME_OFF_BALANCE</code>: the user's time
   * off balance for the activity is less than the time this request deducts. Connect
   * Customer deducts only working time in the window. For details, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/upload-timeoff-balance.html#how-system-calculates-time-off-deductions">How
   * the system calculates time off deductions</a> in the <i>Connect Customer
   * Administrator Guide</i>.</p> </li> <li> <p>
   * <code>INSUFFICIENT_GROUP_TIME_OFF_ALLOWANCE</code>: the time off allowance of
   * the user's forecast group or demand group for the activity is too low for this
   * request.</p> </li> <li> <p>
   * <code>INSUFFICIENT_STAFFING_GROUP_TIME_OFF_ALLOWANCE</code>: the daily time off
   * allowance of the user's staffing group for the activity is too low for this
   * request.</p> </li> <li> <p> <code>CONFLICTING_TIME_OFF_REQUEST</code>: the
   * request overlaps another time off request for the user that is
   * <code>APPROVED</code> or being approved. Requests in
   * <code>AWAITING_APPROVAL</code> don't count. For <code>CreateTimeOff</code> with
   * <code>AUTOMATIC</code>, overlapping overtime and voluntary time off also
   * count.</p> </li> </ul>
   */
  inline TimeOffValidationCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(TimeOffValidationCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline TimeOffValidationResult& WithCode(TimeOffValidationCode value) {
    SetCode(value);
    return *this;
  }
  ///@}
 private:
  TimeOffValidationSeverity m_severity{TimeOffValidationSeverity::NOT_SET};

  TimeOffValidationCode m_code{TimeOffValidationCode::NOT_SET};
  bool m_severityHasBeenSet = false;
  bool m_codeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
