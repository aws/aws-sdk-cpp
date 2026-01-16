/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationReviewNotificationRecipientType.h>
#include <aws/connect/model/EvaluationReviewNotificationRecipientValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about a recipient who should be notified when an evaluation
 * review is requested.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationReviewNotificationRecipient">AWS
 * API Reference</a></p>
 */
class EvaluationReviewNotificationRecipient {
 public:
  AWS_CONNECT_API EvaluationReviewNotificationRecipient() = default;
  AWS_CONNECT_API EvaluationReviewNotificationRecipient(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationReviewNotificationRecipient& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of notification recipient.</p>
   */
  inline EvaluationReviewNotificationRecipientType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EvaluationReviewNotificationRecipientType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EvaluationReviewNotificationRecipient& WithType(EvaluationReviewNotificationRecipientType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value associated with the notification recipient type.</p>
   */
  inline const EvaluationReviewNotificationRecipientValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = EvaluationReviewNotificationRecipientValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = EvaluationReviewNotificationRecipientValue>
  EvaluationReviewNotificationRecipient& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationReviewNotificationRecipientType m_type{EvaluationReviewNotificationRecipientType::NOT_SET};

  EvaluationReviewNotificationRecipientValue m_value;
  bool m_typeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
