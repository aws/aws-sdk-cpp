/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The value information for an evaluation review notification
 * recipient.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationReviewNotificationRecipientValue">AWS
 * API Reference</a></p>
 */
class EvaluationReviewNotificationRecipientValue {
 public:
  AWS_CONNECT_API EvaluationReviewNotificationRecipientValue() = default;
  AWS_CONNECT_API EvaluationReviewNotificationRecipientValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationReviewNotificationRecipientValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The user identifier for the notification recipient.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  EvaluationReviewNotificationRecipientValue& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;
  bool m_userIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
