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
 * <p>The Lambda function couldn't be invoked because provisioning of its code
 * artifact user failed. Update the function's code package or check the Lambda
 * function's <code>State</code> and <code>StateReasonCode</code> for additional
 * context.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CodeArtifactUserFailedException">AWS
 * API Reference</a></p>
 */
class CodeArtifactUserFailedException {
 public:
  AWS_LAMBDA_API CodeArtifactUserFailedException() = default;
  AWS_LAMBDA_API CodeArtifactUserFailedException(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CodeArtifactUserFailedException& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CodeArtifactUserFailedException& WithType(TypeT&& value) {
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
  CodeArtifactUserFailedException& WithMessage(MessageT&& value) {
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
