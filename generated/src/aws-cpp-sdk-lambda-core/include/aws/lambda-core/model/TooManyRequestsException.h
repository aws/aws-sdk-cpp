/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/ThrottleReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>The request was throttled due to exceeding the allowed request rate. Retry
 * the request after a brief wait using exponential backoff.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/TooManyRequestsException">AWS
 * API Reference</a></p>
 */
class TooManyRequestsException {
 public:
  AWS_LAMBDACORE_API TooManyRequestsException() = default;
  AWS_LAMBDACORE_API TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of seconds to wait before retrying the request.</p>
   */
  inline const Aws::String& GetRetryAfterSeconds() const { return m_retryAfterSeconds; }
  inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
  template <typename RetryAfterSecondsT = Aws::String>
  void SetRetryAfterSeconds(RetryAfterSecondsT&& value) {
    m_retryAfterSecondsHasBeenSet = true;
    m_retryAfterSeconds = std::forward<RetryAfterSecondsT>(value);
  }
  template <typename RetryAfterSecondsT = Aws::String>
  TooManyRequestsException& WithRetryAfterSeconds(RetryAfterSecondsT&& value) {
    SetRetryAfterSeconds(std::forward<RetryAfterSecondsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exception type.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  TooManyRequestsException& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  TooManyRequestsException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the throttling.</p>
   */
  inline ThrottleReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ThrottleReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline TooManyRequestsException& WithReason(ThrottleReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_retryAfterSeconds;

  Aws::String m_type;

  Aws::String m_message;

  ThrottleReason m_reason{ThrottleReason::NOT_SET};
  bool m_retryAfterSecondsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
