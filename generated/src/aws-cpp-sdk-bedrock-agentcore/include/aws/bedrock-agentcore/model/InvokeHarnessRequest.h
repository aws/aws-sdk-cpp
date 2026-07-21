/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessMessage.h>
#include <aws/bedrock-agentcore/model/HarnessModelConfiguration.h>
#include <aws/bedrock-agentcore/model/HarnessSkill.h>
#include <aws/bedrock-agentcore/model/HarnessSystemContentBlock.h>
#include <aws/bedrock-agentcore/model/HarnessTool.h>
#include <aws/bedrock-agentcore/model/InvokeHarnessHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCore {
namespace Model {

/**
 */
class InvokeHarnessRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeHarnessRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeHarness"; }

  inline virtual bool HasEventStreamResponse() const override { return true; }
  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline InvokeHarnessHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const InvokeHarnessHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline InvokeHarnessRequest& WithEventStreamHandler(const InvokeHarnessHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

  ///@{
  /**
   * <p>The ARN of the harness to invoke.</p>
   */
  inline const Aws::String& GetHarnessArn() const { return m_harnessArn; }
  inline bool HarnessArnHasBeenSet() const { return m_harnessArnHasBeenSet; }
  template <typename HarnessArnT = Aws::String>
  void SetHarnessArn(HarnessArnT&& value) {
    m_harnessArnHasBeenSet = true;
    m_harnessArn = std::forward<HarnessArnT>(value);
  }
  template <typename HarnessArnT = Aws::String>
  InvokeHarnessRequest& WithHarnessArn(HarnessArnT&& value) {
    SetHarnessArn(std::forward<HarnessArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint name to invoke. If omitted, the DEFAULT endpoint is used.</p>
   */
  inline const Aws::String& GetQualifier() const { return m_qualifier; }
  inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
  template <typename QualifierT = Aws::String>
  void SetQualifier(QualifierT&& value) {
    m_qualifierHasBeenSet = true;
    m_qualifier = std::forward<QualifierT>(value);
  }
  template <typename QualifierT = Aws::String>
  InvokeHarnessRequest& WithQualifier(QualifierT&& value) {
    SetQualifier(std::forward<QualifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session ID for the invocation. Use the same session ID across requests to
   * continue a conversation.</p>
   */
  inline const Aws::String& GetRuntimeSessionId() const { return m_runtimeSessionId; }
  inline bool RuntimeSessionIdHasBeenSet() const { return m_runtimeSessionIdHasBeenSet; }
  template <typename RuntimeSessionIdT = Aws::String>
  void SetRuntimeSessionId(RuntimeSessionIdT&& value) {
    m_runtimeSessionIdHasBeenSet = true;
    m_runtimeSessionId = std::forward<RuntimeSessionIdT>(value);
  }
  template <typename RuntimeSessionIdT = Aws::String>
  InvokeHarnessRequest& WithRuntimeSessionId(RuntimeSessionIdT&& value) {
    SetRuntimeSessionId(std::forward<RuntimeSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An identifier for the end user making the request. This value is passed
   * through to the runtime container.</p>
   */
  inline const Aws::String& GetRuntimeUserId() const { return m_runtimeUserId; }
  inline bool RuntimeUserIdHasBeenSet() const { return m_runtimeUserIdHasBeenSet; }
  template <typename RuntimeUserIdT = Aws::String>
  void SetRuntimeUserId(RuntimeUserIdT&& value) {
    m_runtimeUserIdHasBeenSet = true;
    m_runtimeUserId = std::forward<RuntimeUserIdT>(value);
  }
  template <typename RuntimeUserIdT = Aws::String>
  InvokeHarnessRequest& WithRuntimeUserId(RuntimeUserIdT&& value) {
    SetRuntimeUserId(std::forward<RuntimeUserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>W3C trace context parent header containing version, trace ID, parent span ID,
   * and trace flags.</p>
   */
  inline const Aws::String& GetTraceParent() const { return m_traceParent; }
  inline bool TraceParentHasBeenSet() const { return m_traceParentHasBeenSet; }
  template <typename TraceParentT = Aws::String>
  void SetTraceParent(TraceParentT&& value) {
    m_traceParentHasBeenSet = true;
    m_traceParent = std::forward<TraceParentT>(value);
  }
  template <typename TraceParentT = Aws::String>
  InvokeHarnessRequest& WithTraceParent(TraceParentT&& value) {
    SetTraceParent(std::forward<TraceParentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>W3C trace context state header for vendor-specific trace information.</p>
   */
  inline const Aws::String& GetTraceState() const { return m_traceState; }
  inline bool TraceStateHasBeenSet() const { return m_traceStateHasBeenSet; }
  template <typename TraceStateT = Aws::String>
  void SetTraceState(TraceStateT&& value) {
    m_traceStateHasBeenSet = true;
    m_traceState = std::forward<TraceStateT>(value);
  }
  template <typename TraceStateT = Aws::String>
  InvokeHarnessRequest& WithTraceState(TraceStateT&& value) {
    SetTraceState(std::forward<TraceStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Trace ID for maintaining observability through the operation.</p>
   */
  inline const Aws::String& GetTraceId() const { return m_traceId; }
  inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
  template <typename TraceIdT = Aws::String>
  void SetTraceId(TraceIdT&& value) {
    m_traceIdHasBeenSet = true;
    m_traceId = std::forward<TraceIdT>(value);
  }
  template <typename TraceIdT = Aws::String>
  InvokeHarnessRequest& WithTraceId(TraceIdT&& value) {
    SetTraceId(std::forward<TraceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>W3C Baggage header for user-defined context propagation. Format:
   * key1=value1,key2=value2</p>
   */
  inline const Aws::String& GetBaggage() const { return m_baggage; }
  inline bool BaggageHasBeenSet() const { return m_baggageHasBeenSet; }
  template <typename BaggageT = Aws::String>
  void SetBaggage(BaggageT&& value) {
    m_baggageHasBeenSet = true;
    m_baggage = std::forward<BaggageT>(value);
  }
  template <typename BaggageT = Aws::String>
  InvokeHarnessRequest& WithBaggage(BaggageT&& value) {
    SetBaggage(std::forward<BaggageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The messages to send to the agent.</p>
   */
  inline const Aws::Vector<HarnessMessage>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<HarnessMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<HarnessMessage>>
  InvokeHarnessRequest& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = HarnessMessage>
  InvokeHarnessRequest& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model configuration to use for this invocation. If specified, overrides
   * the harness default.</p>
   */
  inline const HarnessModelConfiguration& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = HarnessModelConfiguration>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = HarnessModelConfiguration>
  InvokeHarnessRequest& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system prompt to use for this invocation. If specified, overrides the
   * harness default.</p>
   */
  inline const Aws::Vector<HarnessSystemContentBlock>& GetSystemPrompt() const { return m_systemPrompt; }
  inline bool SystemPromptHasBeenSet() const { return m_systemPromptHasBeenSet; }
  template <typename SystemPromptT = Aws::Vector<HarnessSystemContentBlock>>
  void SetSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt = std::forward<SystemPromptT>(value);
  }
  template <typename SystemPromptT = Aws::Vector<HarnessSystemContentBlock>>
  InvokeHarnessRequest& WithSystemPrompt(SystemPromptT&& value) {
    SetSystemPrompt(std::forward<SystemPromptT>(value));
    return *this;
  }
  template <typename SystemPromptT = HarnessSystemContentBlock>
  InvokeHarnessRequest& AddSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt.emplace_back(std::forward<SystemPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tools available to the agent for this invocation. If specified, overrides
   * the harness default.</p>
   */
  inline const Aws::Vector<HarnessTool>& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = Aws::Vector<HarnessTool>>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = Aws::Vector<HarnessTool>>
  InvokeHarnessRequest& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  template <typename ToolsT = HarnessTool>
  InvokeHarnessRequest& AddTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools.emplace_back(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The skills available to the agent for this invocation. If specified,
   * overrides the harness default.</p>
   */
  inline const Aws::Vector<HarnessSkill>& GetSkills() const { return m_skills; }
  inline bool SkillsHasBeenSet() const { return m_skillsHasBeenSet; }
  template <typename SkillsT = Aws::Vector<HarnessSkill>>
  void SetSkills(SkillsT&& value) {
    m_skillsHasBeenSet = true;
    m_skills = std::forward<SkillsT>(value);
  }
  template <typename SkillsT = Aws::Vector<HarnessSkill>>
  InvokeHarnessRequest& WithSkills(SkillsT&& value) {
    SetSkills(std::forward<SkillsT>(value));
    return *this;
  }
  template <typename SkillsT = HarnessSkill>
  InvokeHarnessRequest& AddSkills(SkillsT&& value) {
    m_skillsHasBeenSet = true;
    m_skills.emplace_back(std::forward<SkillsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tools that the agent is allowed to use for this invocation. If specified,
   * overrides the harness default.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedTools() const { return m_allowedTools; }
  inline bool AllowedToolsHasBeenSet() const { return m_allowedToolsHasBeenSet; }
  template <typename AllowedToolsT = Aws::Vector<Aws::String>>
  void SetAllowedTools(AllowedToolsT&& value) {
    m_allowedToolsHasBeenSet = true;
    m_allowedTools = std::forward<AllowedToolsT>(value);
  }
  template <typename AllowedToolsT = Aws::Vector<Aws::String>>
  InvokeHarnessRequest& WithAllowedTools(AllowedToolsT&& value) {
    SetAllowedTools(std::forward<AllowedToolsT>(value));
    return *this;
  }
  template <typename AllowedToolsT = Aws::String>
  InvokeHarnessRequest& AddAllowedTools(AllowedToolsT&& value) {
    m_allowedToolsHasBeenSet = true;
    m_allowedTools.emplace_back(std::forward<AllowedToolsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of iterations the agent loop can execute. If specified,
   * overrides the harness default.</p>
   */
  inline int GetMaxIterations() const { return m_maxIterations; }
  inline bool MaxIterationsHasBeenSet() const { return m_maxIterationsHasBeenSet; }
  inline void SetMaxIterations(int value) {
    m_maxIterationsHasBeenSet = true;
    m_maxIterations = value;
  }
  inline InvokeHarnessRequest& WithMaxIterations(int value) {
    SetMaxIterations(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of tokens the agent can generate per iteration. If
   * specified, overrides the harness default.</p>
   */
  inline int GetMaxTokens() const { return m_maxTokens; }
  inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
  inline void SetMaxTokens(int value) {
    m_maxTokensHasBeenSet = true;
    m_maxTokens = value;
  }
  inline InvokeHarnessRequest& WithMaxTokens(int value) {
    SetMaxTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration in seconds for the agent loop execution. If specified,
   * overrides the harness default.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline InvokeHarnessRequest& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actor ID for memory operations. Overrides the actor ID configured on the
   * harness.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  InvokeHarnessRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_harnessArn;

  Aws::String m_qualifier;

  Aws::String m_runtimeSessionId;

  Aws::String m_runtimeUserId;

  Aws::String m_traceParent;

  Aws::String m_traceState;

  Aws::String m_traceId;

  Aws::String m_baggage;

  Aws::Vector<HarnessMessage> m_messages;

  HarnessModelConfiguration m_model;

  Aws::Vector<HarnessSystemContentBlock> m_systemPrompt;

  Aws::Vector<HarnessTool> m_tools;

  Aws::Vector<HarnessSkill> m_skills;

  Aws::Vector<Aws::String> m_allowedTools;

  int m_maxIterations{0};

  int m_maxTokens{0};

  int m_timeoutSeconds{0};

  Aws::String m_actorId;
  InvokeHarnessHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  bool m_harnessArnHasBeenSet = false;
  bool m_qualifierHasBeenSet = false;
  bool m_runtimeSessionIdHasBeenSet = false;
  bool m_runtimeUserIdHasBeenSet = false;
  bool m_traceParentHasBeenSet = false;
  bool m_traceStateHasBeenSet = false;
  bool m_traceIdHasBeenSet = false;
  bool m_baggageHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_systemPromptHasBeenSet = false;
  bool m_toolsHasBeenSet = false;
  bool m_skillsHasBeenSet = false;
  bool m_allowedToolsHasBeenSet = false;
  bool m_maxIterationsHasBeenSet = false;
  bool m_maxTokensHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
