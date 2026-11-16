/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/connectscheduling/model/ValidationExceptionField.h>
#include <aws/connectscheduling/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The input fails to satisfy the constraints specified by an AWS
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_CONNECTSCHEDULING_API ValidationException() = default;
  AWS_CONNECTSCHEDULING_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the input failed validation. Branch on this value rather than on
   * the message wording.</p>
   */
  inline ValidationExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ValidationExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ValidationException& WithReason(ValidationExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific input fields that failed validation, when <code>Reason</code> is
   * <code>FIELD_VALIDATION_FAILED</code>.</p>
   */
  inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const { return m_fieldList; }
  inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }
  template <typename FieldListT = Aws::Vector<ValidationExceptionField>>
  void SetFieldList(FieldListT&& value) {
    m_fieldListHasBeenSet = true;
    m_fieldList = std::forward<FieldListT>(value);
  }
  template <typename FieldListT = Aws::Vector<ValidationExceptionField>>
  ValidationException& WithFieldList(FieldListT&& value) {
    SetFieldList(std::forward<FieldListT>(value));
    return *this;
  }
  template <typename FieldListT = ValidationExceptionField>
  ValidationException& AddFieldList(FieldListT&& value) {
    m_fieldListHasBeenSet = true;
    m_fieldList.emplace_back(std::forward<FieldListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};

  Aws::Vector<ValidationExceptionField> m_fieldList;
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_fieldListHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
