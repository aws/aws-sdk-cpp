/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/agent-discovery/model/ArdErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentDiscovery {
namespace Model {

/**
 * <p>Thrown when the caller exceeds a rate/burst limit (D-9). ARD's code for it is
 * <code>RATE_LIMIT_EXCEEDED</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/ThrottlingException">AWS
 * API Reference</a></p>
 */
class ThrottlingException {
 public:
  AWS_AGENTDISCOVERY_API ThrottlingException() = default;
  AWS_AGENTDISCOVERY_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ThrottlingException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline ArdErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(ArdErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline ThrottlingException& WithErrorCode(ArdErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  ArdErrorCode m_errorCode{ArdErrorCode::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
