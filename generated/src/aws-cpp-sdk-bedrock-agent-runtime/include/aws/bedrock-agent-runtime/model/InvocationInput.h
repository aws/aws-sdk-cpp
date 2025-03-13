/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ActionGroupInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/AgentCollaboratorInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/CodeInterpreterInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/InvocationType.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseLookupInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information pertaining to the action group or knowledge base that is
   * being invoked.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvocationInput">AWS
   * API Reference</a></p>
   */
  class InvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvocationInput() = default;
    AWS_BEDROCKAGENTRUNTIME_API InvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the action group to be invoked.</p>
     */
    inline const ActionGroupInvocationInput& GetActionGroupInvocationInput() const { return m_actionGroupInvocationInput; }
    inline bool ActionGroupInvocationInputHasBeenSet() const { return m_actionGroupInvocationInputHasBeenSet; }
    template<typename ActionGroupInvocationInputT = ActionGroupInvocationInput>
    void SetActionGroupInvocationInput(ActionGroupInvocationInputT&& value) { m_actionGroupInvocationInputHasBeenSet = true; m_actionGroupInvocationInput = std::forward<ActionGroupInvocationInputT>(value); }
    template<typename ActionGroupInvocationInputT = ActionGroupInvocationInput>
    InvocationInput& WithActionGroupInvocationInput(ActionGroupInvocationInputT&& value) { SetActionGroupInvocationInput(std::forward<ActionGroupInvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's invocation input.</p>
     */
    inline const AgentCollaboratorInvocationInput& GetAgentCollaboratorInvocationInput() const { return m_agentCollaboratorInvocationInput; }
    inline bool AgentCollaboratorInvocationInputHasBeenSet() const { return m_agentCollaboratorInvocationInputHasBeenSet; }
    template<typename AgentCollaboratorInvocationInputT = AgentCollaboratorInvocationInput>
    void SetAgentCollaboratorInvocationInput(AgentCollaboratorInvocationInputT&& value) { m_agentCollaboratorInvocationInputHasBeenSet = true; m_agentCollaboratorInvocationInput = std::forward<AgentCollaboratorInvocationInputT>(value); }
    template<typename AgentCollaboratorInvocationInputT = AgentCollaboratorInvocationInput>
    InvocationInput& WithAgentCollaboratorInvocationInput(AgentCollaboratorInvocationInputT&& value) { SetAgentCollaboratorInvocationInput(std::forward<AgentCollaboratorInvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the code interpreter to be invoked.</p>
     */
    inline const CodeInterpreterInvocationInput& GetCodeInterpreterInvocationInput() const { return m_codeInterpreterInvocationInput; }
    inline bool CodeInterpreterInvocationInputHasBeenSet() const { return m_codeInterpreterInvocationInputHasBeenSet; }
    template<typename CodeInterpreterInvocationInputT = CodeInterpreterInvocationInput>
    void SetCodeInterpreterInvocationInput(CodeInterpreterInvocationInputT&& value) { m_codeInterpreterInvocationInputHasBeenSet = true; m_codeInterpreterInvocationInput = std::forward<CodeInterpreterInvocationInputT>(value); }
    template<typename CodeInterpreterInvocationInputT = CodeInterpreterInvocationInput>
    InvocationInput& WithCodeInterpreterInvocationInput(CodeInterpreterInvocationInputT&& value) { SetCodeInterpreterInvocationInput(std::forward<CodeInterpreterInvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the agent is invoking an action group or a knowledge
     * base.</p>
     */
    inline InvocationType GetInvocationType() const { return m_invocationType; }
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }
    inline void SetInvocationType(InvocationType value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }
    inline InvocationInput& WithInvocationType(InvocationType value) { SetInvocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the knowledge base to look up and the query to be
     * made.</p>
     */
    inline const KnowledgeBaseLookupInput& GetKnowledgeBaseLookupInput() const { return m_knowledgeBaseLookupInput; }
    inline bool KnowledgeBaseLookupInputHasBeenSet() const { return m_knowledgeBaseLookupInputHasBeenSet; }
    template<typename KnowledgeBaseLookupInputT = KnowledgeBaseLookupInput>
    void SetKnowledgeBaseLookupInput(KnowledgeBaseLookupInputT&& value) { m_knowledgeBaseLookupInputHasBeenSet = true; m_knowledgeBaseLookupInput = std::forward<KnowledgeBaseLookupInputT>(value); }
    template<typename KnowledgeBaseLookupInputT = KnowledgeBaseLookupInput>
    InvocationInput& WithKnowledgeBaseLookupInput(KnowledgeBaseLookupInputT&& value) { SetKnowledgeBaseLookupInput(std::forward<KnowledgeBaseLookupInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    InvocationInput& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}
  private:

    ActionGroupInvocationInput m_actionGroupInvocationInput;
    bool m_actionGroupInvocationInputHasBeenSet = false;

    AgentCollaboratorInvocationInput m_agentCollaboratorInvocationInput;
    bool m_agentCollaboratorInvocationInputHasBeenSet = false;

    CodeInterpreterInvocationInput m_codeInterpreterInvocationInput;
    bool m_codeInterpreterInvocationInputHasBeenSet = false;

    InvocationType m_invocationType{InvocationType::NOT_SET};
    bool m_invocationTypeHasBeenSet = false;

    KnowledgeBaseLookupInput m_knowledgeBaseLookupInput;
    bool m_knowledgeBaseLookupInputHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
