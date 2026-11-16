/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The request processing failed because of an error or failure with the
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/InternalServerException">AWS
 * API Reference</a></p>
 */
class InternalServerException {
 public:
  AWS_CONNECTSCHEDULING_API InternalServerException() = default;
  AWS_CONNECTSCHEDULING_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  InternalServerException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds to wait before retrying.</p>
   */
  inline int GetRetryAfterSeconds() const { return m_retryAfterSeconds; }
  inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
  inline void SetRetryAfterSeconds(int value) {
    m_retryAfterSecondsHasBeenSet = true;
    m_retryAfterSeconds = value;
  }
  inline InternalServerException& WithRetryAfterSeconds(int value) {
    SetRetryAfterSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  int m_retryAfterSeconds{0};
  bool m_messageHasBeenSet = false;
  bool m_retryAfterSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
