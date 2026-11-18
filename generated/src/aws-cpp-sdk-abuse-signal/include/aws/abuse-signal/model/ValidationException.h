/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/abuse-signal/model/ValidationExceptionField.h>
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
namespace AbuseSignal {
namespace Model {

/**
 * <p>The input fails to satisfy the constraints specified by the service, which
 * indicates that the request is not well-formed. Check <code>fieldList</code> for
 * the specific members that failed validation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_ABUSESIGNAL_API ValidationException() = default;
  AWS_ABUSESIGNAL_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A summary of the validation failure.</p>
   */
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
   * <p>A list of the specific input fields that failed validation.</p>
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

  Aws::Vector<ValidationExceptionField> m_fieldList;
  bool m_messageHasBeenSet = false;
  bool m_fieldListHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
