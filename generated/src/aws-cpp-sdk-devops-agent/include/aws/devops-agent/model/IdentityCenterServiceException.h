/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Calls to the customer Identity Center have failed</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/IdentityCenterServiceException">AWS
 * API Reference</a></p>
 */
class IdentityCenterServiceException {
 public:
  AWS_DEVOPSAGENT_API IdentityCenterServiceException() = default;
  AWS_DEVOPSAGENT_API IdentityCenterServiceException(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API IdentityCenterServiceException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Detailed error message describing why the call fails</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  IdentityCenterServiceException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Idc error code</p>
   */
  inline const Aws::String& GetUnderlyingErrorCode() const { return m_underlyingErrorCode; }
  inline bool UnderlyingErrorCodeHasBeenSet() const { return m_underlyingErrorCodeHasBeenSet; }
  template <typename UnderlyingErrorCodeT = Aws::String>
  void SetUnderlyingErrorCode(UnderlyingErrorCodeT&& value) {
    m_underlyingErrorCodeHasBeenSet = true;
    m_underlyingErrorCode = std::forward<UnderlyingErrorCodeT>(value);
  }
  template <typename UnderlyingErrorCodeT = Aws::String>
  IdentityCenterServiceException& WithUnderlyingErrorCode(UnderlyingErrorCodeT&& value) {
    SetUnderlyingErrorCode(std::forward<UnderlyingErrorCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_underlyingErrorCode;
  bool m_messageHasBeenSet = false;
  bool m_underlyingErrorCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
