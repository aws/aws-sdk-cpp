/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CapabilityIssueCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>An issue affecting a capability's health or operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CapabilityIssue">AWS
 * API Reference</a></p>
 */
class CapabilityIssue {
 public:
  AWS_EKS_API CapabilityIssue() = default;
  AWS_EKS_API CapabilityIssue(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CapabilityIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A code identifying the type of issue. This can be used to programmatically
   * handle specific issue types.</p>
   */
  inline CapabilityIssueCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(CapabilityIssueCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline CapabilityIssue& WithCode(CapabilityIssueCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the issue and potential remediation
   * steps.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  CapabilityIssue& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  CapabilityIssueCode m_code{CapabilityIssueCode::NOT_SET};
  bool m_codeHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
