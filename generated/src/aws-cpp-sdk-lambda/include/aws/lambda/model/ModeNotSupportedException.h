/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>The Lambda function doesn't support the invocation mode requested. For
 * example, calling <code>Invoke</code> with
 * <code>InvocationType=RequestResponse</code> on a function configured for
 * asynchronous-only invocation, or vice versa. For more information about
 * invocation types, see <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-options.html">Invoking
 * Lambda functions</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ModeNotSupportedException">AWS
 * API Reference</a></p>
 */
class ModeNotSupportedException {
 public:
  AWS_LAMBDA_API ModeNotSupportedException() = default;
  AWS_LAMBDA_API ModeNotSupportedException(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ModeNotSupportedException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ModeNotSupportedException& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exception message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ModeNotSupportedException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  Aws::String m_message;
  bool m_typeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
