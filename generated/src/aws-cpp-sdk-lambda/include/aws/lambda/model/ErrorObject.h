/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>An object that contains error information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ErrorObject">AWS
 * API Reference</a></p>
 */
class ErrorObject {
 public:
  AWS_LAMBDA_API ErrorObject() = default;
  AWS_LAMBDA_API ErrorObject(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ErrorObject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A human-readable error message.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  ErrorObject& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error type.</p>
   */
  inline const Aws::String& GetErrorType() const { return m_errorType; }
  inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
  template <typename ErrorTypeT = Aws::String>
  void SetErrorType(ErrorTypeT&& value) {
    m_errorTypeHasBeenSet = true;
    m_errorType = std::forward<ErrorTypeT>(value);
  }
  template <typename ErrorTypeT = Aws::String>
  ErrorObject& WithErrorType(ErrorTypeT&& value) {
    SetErrorType(std::forward<ErrorTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Machine-readable error data.</p>
   */
  inline const Aws::String& GetErrorData() const { return m_errorData; }
  inline bool ErrorDataHasBeenSet() const { return m_errorDataHasBeenSet; }
  template <typename ErrorDataT = Aws::String>
  void SetErrorData(ErrorDataT&& value) {
    m_errorDataHasBeenSet = true;
    m_errorData = std::forward<ErrorDataT>(value);
  }
  template <typename ErrorDataT = Aws::String>
  ErrorObject& WithErrorData(ErrorDataT&& value) {
    SetErrorData(std::forward<ErrorDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Stack trace information for the error.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStackTrace() const { return m_stackTrace; }
  inline bool StackTraceHasBeenSet() const { return m_stackTraceHasBeenSet; }
  template <typename StackTraceT = Aws::Vector<Aws::String>>
  void SetStackTrace(StackTraceT&& value) {
    m_stackTraceHasBeenSet = true;
    m_stackTrace = std::forward<StackTraceT>(value);
  }
  template <typename StackTraceT = Aws::Vector<Aws::String>>
  ErrorObject& WithStackTrace(StackTraceT&& value) {
    SetStackTrace(std::forward<StackTraceT>(value));
    return *this;
  }
  template <typename StackTraceT = Aws::String>
  ErrorObject& AddStackTrace(StackTraceT&& value) {
    m_stackTraceHasBeenSet = true;
    m_stackTrace.emplace_back(std::forward<StackTraceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_errorMessage;
  bool m_errorMessageHasBeenSet = false;

  Aws::String m_errorType;
  bool m_errorTypeHasBeenSet = false;

  Aws::String m_errorData;
  bool m_errorDataHasBeenSet = false;

  Aws::Vector<Aws::String> m_stackTrace;
  bool m_stackTraceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
