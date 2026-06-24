/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksConfig.h>
#include <aws/bedrock-runtime/model/GuardrailChecksMessage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockRuntime {
namespace Model {

/**
 */
class InvokeGuardrailChecksRequest : public BedrockRuntimeRequest {
 public:
  AWS_BEDROCKRUNTIME_API InvokeGuardrailChecksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeGuardrailChecks"; }

  AWS_BEDROCKRUNTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The messages to evaluate against the specified guardrail checks. Each message
   * includes a role and one or more content blocks.</p>
   */
  inline const Aws::Vector<GuardrailChecksMessage>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<GuardrailChecksMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<GuardrailChecksMessage>>
  InvokeGuardrailChecksRequest& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = GuardrailChecksMessage>
  InvokeGuardrailChecksRequest& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inline check configurations that specify which guardrail checks to run
   * against the messages.</p>
   */
  inline const GuardrailChecksConfig& GetChecks() const { return m_checks; }
  inline bool ChecksHasBeenSet() const { return m_checksHasBeenSet; }
  template <typename ChecksT = GuardrailChecksConfig>
  void SetChecks(ChecksT&& value) {
    m_checksHasBeenSet = true;
    m_checks = std::forward<ChecksT>(value);
  }
  template <typename ChecksT = GuardrailChecksConfig>
  InvokeGuardrailChecksRequest& WithChecks(ChecksT&& value) {
    SetChecks(std::forward<ChecksT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuardrailChecksMessage> m_messages;

  GuardrailChecksConfig m_checks;
  bool m_messagesHasBeenSet = false;
  bool m_checksHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
