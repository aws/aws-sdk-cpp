/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>A single error encountered while creating or reading a web function revision.
 * The error describes the affected attribute, an error code, and a human-readable
 * message. This structure is present only when the revision has
 * errors.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/RevisionError">AWS
 * API Reference</a></p>
 */
class RevisionError {
 public:
  AWS_LAMBDAWEB_API RevisionError() = default;
  AWS_LAMBDAWEB_API RevisionError(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API RevisionError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the revision attribute that the error applies to. Must be between
   * 1 and 64 characters.</p>
   */
  inline const Aws::String& GetAttribute() const { return m_attribute; }
  inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
  template <typename AttributeT = Aws::String>
  void SetAttribute(AttributeT&& value) {
    m_attributeHasBeenSet = true;
    m_attribute = std::forward<AttributeT>(value);
  }
  template <typename AttributeT = Aws::String>
  RevisionError& WithAttribute(AttributeT&& value) {
    SetAttribute(std::forward<AttributeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short, machine-readable code that identifies the error. Must be between 1
   * and 64 characters.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  RevisionError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the error. Must be between 1 and 2048
   * characters.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  RevisionError& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attribute;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;
  bool m_attributeHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
