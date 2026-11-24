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
 * <p>Thrown on an internal defect — a bug or malformed state, not a failed
 * dependency.</p> <p>⚠️ Deliberately a **permanent** failure. Repeating a request
 * that failed to serialize will fail identically, so treating a 500 as retryable
 * would spin a poison message through redelivery forever instead of letting it
 * reach a dead-letter queue. Dependency failures that *are* worth retrying use
 * `ServiceUnavailableException` and its 503 instead.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/InternalServerException">AWS
 * API Reference</a></p>
 */
class InternalServerException {
 public:
  AWS_AGENTDISCOVERY_API InternalServerException() = default;
  AWS_AGENTDISCOVERY_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  InternalServerException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARD's Appendix B code on the ARD surface, <code>INTERNAL_ERROR</code>.</p>
   */
  inline ArdErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(ArdErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline InternalServerException& WithErrorCode(ArdErrorCode value) {
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
