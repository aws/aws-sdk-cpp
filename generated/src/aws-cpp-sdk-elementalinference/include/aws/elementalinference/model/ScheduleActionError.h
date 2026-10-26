/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ScheduleActionErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Describes the cause of a schedule action failure, including the failure type
 * and a description of what went wrong. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ScheduleActionError">AWS
 * API Reference</a></p>
 */
class ScheduleActionError {
 public:
  AWS_ELEMENTALINFERENCE_API ScheduleActionError() = default;
  AWS_ELEMENTALINFERENCE_API ScheduleActionError(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ScheduleActionError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of failure. Valid values are the following:</p> <dl>
   * <dt>INVALID_ACTION_TARGET</dt> <dd> <p>The action referred to something that
   * didn't exist or wasn't valid at the scheduled time, for example an output that
   * you deleted. </p> </dd> <dt>INTERNAL_ERROR</dt> <dd> <p>An unexpected error
   * prevented the action from completing.</p> </dd> </dl>
   */
  inline ScheduleActionErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(ScheduleActionErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline ScheduleActionError& WithErrorCode(ScheduleActionErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the failure.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  ScheduleActionError& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  ScheduleActionErrorCode m_errorCode{ScheduleActionErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
