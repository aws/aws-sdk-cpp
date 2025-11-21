/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Represents a StatusException.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/StatusException">AWS
 * API Reference</a></p>
 */
class StatusException {
 public:
  AWS_APIGATEWAYV2_API StatusException() = default;
  AWS_APIGATEWAYV2_API StatusException(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API StatusException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The exception.</p>
   */
  inline const Aws::String& GetException() const { return m_exception; }
  inline bool ExceptionHasBeenSet() const { return m_exceptionHasBeenSet; }
  template <typename ExceptionT = Aws::String>
  void SetException(ExceptionT&& value) {
    m_exceptionHasBeenSet = true;
    m_exception = std::forward<ExceptionT>(value);
  }
  template <typename ExceptionT = Aws::String>
  StatusException& WithException(ExceptionT&& value) {
    SetException(std::forward<ExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  StatusException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exception;
  bool m_exceptionHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
