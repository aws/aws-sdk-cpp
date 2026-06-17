/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveGuardrailWarning.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveWarningMessage.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>A warning generated during agentic retrieval.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveWarning">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveWarning {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveWarning() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveWarning(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A warning from a guardrail evaluation.</p>
   */
  inline const AgenticRetrieveGuardrailWarning& GetGuardrail() const { return m_guardrail; }
  inline bool GuardrailHasBeenSet() const { return m_guardrailHasBeenSet; }
  template <typename GuardrailT = AgenticRetrieveGuardrailWarning>
  void SetGuardrail(GuardrailT&& value) {
    m_guardrailHasBeenSet = true;
    m_guardrail = std::forward<GuardrailT>(value);
  }
  template <typename GuardrailT = AgenticRetrieveGuardrailWarning>
  AgenticRetrieveWarning& WithGuardrail(GuardrailT&& value) {
    SetGuardrail(std::forward<GuardrailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A general warning message.</p>
   */
  inline const AgenticRetrieveWarningMessage& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = AgenticRetrieveWarningMessage>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = AgenticRetrieveWarningMessage>
  AgenticRetrieveWarning& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveGuardrailWarning m_guardrail;

  AgenticRetrieveWarningMessage m_message;
  bool m_guardrailHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
