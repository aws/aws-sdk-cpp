/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/Type.h>
#include <aws/bedrock-agent-runtime/model/ActionGroupInvocationOutput.h>
#include <aws/bedrock-agent-runtime/model/AgentCollaboratorInvocationOutput.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseLookupOutput.h>
#include <aws/bedrock-agent-runtime/model/FinalResponse.h>
#include <aws/bedrock-agent-runtime/model/RepromptResponse.h>
#include <aws/bedrock-agent-runtime/model/CodeInterpreterInvocationOutput.h>
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
   * <p>Contains the result or output of an action group or knowledge base, or the
   * response to the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Observation">AWS
   * API Reference</a></p>
   */
  class Observation
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Observation() = default;
    AWS_BEDROCKAGENTRUNTIME_API Observation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Observation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    Observation& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies what kind of information the agent returns in the observation. The
     * following values are possible.</p> <ul> <li> <p> <code>ACTION_GROUP</code> – The
     * agent returns the result of an action group.</p> </li> <li> <p>
     * <code>KNOWLEDGE_BASE</code> – The agent returns information from a knowledge
     * base.</p> </li> <li> <p> <code>FINISH</code> – The agent returns a final
     * response to the user with no follow-up.</p> </li> <li> <p> <code>ASK_USER</code>
     * – The agent asks the user a question.</p> </li> <li> <p> <code>REPROMPT</code> –
     * The agent prompts the user again for the same information.</p> </li> </ul>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline Observation& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the JSON-formatted string returned by the API invoked by the action
     * group.</p>
     */
    inline const ActionGroupInvocationOutput& GetActionGroupInvocationOutput() const { return m_actionGroupInvocationOutput; }
    inline bool ActionGroupInvocationOutputHasBeenSet() const { return m_actionGroupInvocationOutputHasBeenSet; }
    template<typename ActionGroupInvocationOutputT = ActionGroupInvocationOutput>
    void SetActionGroupInvocationOutput(ActionGroupInvocationOutputT&& value) { m_actionGroupInvocationOutputHasBeenSet = true; m_actionGroupInvocationOutput = std::forward<ActionGroupInvocationOutputT>(value); }
    template<typename ActionGroupInvocationOutputT = ActionGroupInvocationOutput>
    Observation& WithActionGroupInvocationOutput(ActionGroupInvocationOutputT&& value) { SetActionGroupInvocationOutput(std::forward<ActionGroupInvocationOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collaborator's invocation output.</p>
     */
    inline const AgentCollaboratorInvocationOutput& GetAgentCollaboratorInvocationOutput() const { return m_agentCollaboratorInvocationOutput; }
    inline bool AgentCollaboratorInvocationOutputHasBeenSet() const { return m_agentCollaboratorInvocationOutputHasBeenSet; }
    template<typename AgentCollaboratorInvocationOutputT = AgentCollaboratorInvocationOutput>
    void SetAgentCollaboratorInvocationOutput(AgentCollaboratorInvocationOutputT&& value) { m_agentCollaboratorInvocationOutputHasBeenSet = true; m_agentCollaboratorInvocationOutput = std::forward<AgentCollaboratorInvocationOutputT>(value); }
    template<typename AgentCollaboratorInvocationOutputT = AgentCollaboratorInvocationOutput>
    Observation& WithAgentCollaboratorInvocationOutput(AgentCollaboratorInvocationOutputT&& value) { SetAgentCollaboratorInvocationOutput(std::forward<AgentCollaboratorInvocationOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the results from looking up the knowledge base.</p>
     */
    inline const KnowledgeBaseLookupOutput& GetKnowledgeBaseLookupOutput() const { return m_knowledgeBaseLookupOutput; }
    inline bool KnowledgeBaseLookupOutputHasBeenSet() const { return m_knowledgeBaseLookupOutputHasBeenSet; }
    template<typename KnowledgeBaseLookupOutputT = KnowledgeBaseLookupOutput>
    void SetKnowledgeBaseLookupOutput(KnowledgeBaseLookupOutputT&& value) { m_knowledgeBaseLookupOutputHasBeenSet = true; m_knowledgeBaseLookupOutput = std::forward<KnowledgeBaseLookupOutputT>(value); }
    template<typename KnowledgeBaseLookupOutputT = KnowledgeBaseLookupOutput>
    Observation& WithKnowledgeBaseLookupOutput(KnowledgeBaseLookupOutputT&& value) { SetKnowledgeBaseLookupOutput(std::forward<KnowledgeBaseLookupOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the response to the user.</p>
     */
    inline const FinalResponse& GetFinalResponse() const { return m_finalResponse; }
    inline bool FinalResponseHasBeenSet() const { return m_finalResponseHasBeenSet; }
    template<typename FinalResponseT = FinalResponse>
    void SetFinalResponse(FinalResponseT&& value) { m_finalResponseHasBeenSet = true; m_finalResponse = std::forward<FinalResponseT>(value); }
    template<typename FinalResponseT = FinalResponse>
    Observation& WithFinalResponse(FinalResponseT&& value) { SetFinalResponse(std::forward<FinalResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the response to reprompt the input.</p>
     */
    inline const RepromptResponse& GetRepromptResponse() const { return m_repromptResponse; }
    inline bool RepromptResponseHasBeenSet() const { return m_repromptResponseHasBeenSet; }
    template<typename RepromptResponseT = RepromptResponse>
    void SetRepromptResponse(RepromptResponseT&& value) { m_repromptResponseHasBeenSet = true; m_repromptResponse = std::forward<RepromptResponseT>(value); }
    template<typename RepromptResponseT = RepromptResponse>
    Observation& WithRepromptResponse(RepromptResponseT&& value) { SetRepromptResponse(std::forward<RepromptResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the JSON-formatted string returned by the API invoked by the code
     * interpreter.</p>
     */
    inline const CodeInterpreterInvocationOutput& GetCodeInterpreterInvocationOutput() const { return m_codeInterpreterInvocationOutput; }
    inline bool CodeInterpreterInvocationOutputHasBeenSet() const { return m_codeInterpreterInvocationOutputHasBeenSet; }
    template<typename CodeInterpreterInvocationOutputT = CodeInterpreterInvocationOutput>
    void SetCodeInterpreterInvocationOutput(CodeInterpreterInvocationOutputT&& value) { m_codeInterpreterInvocationOutputHasBeenSet = true; m_codeInterpreterInvocationOutput = std::forward<CodeInterpreterInvocationOutputT>(value); }
    template<typename CodeInterpreterInvocationOutputT = CodeInterpreterInvocationOutput>
    Observation& WithCodeInterpreterInvocationOutput(CodeInterpreterInvocationOutputT&& value) { SetCodeInterpreterInvocationOutput(std::forward<CodeInterpreterInvocationOutputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    ActionGroupInvocationOutput m_actionGroupInvocationOutput;
    bool m_actionGroupInvocationOutputHasBeenSet = false;

    AgentCollaboratorInvocationOutput m_agentCollaboratorInvocationOutput;
    bool m_agentCollaboratorInvocationOutputHasBeenSet = false;

    KnowledgeBaseLookupOutput m_knowledgeBaseLookupOutput;
    bool m_knowledgeBaseLookupOutputHasBeenSet = false;

    FinalResponse m_finalResponse;
    bool m_finalResponseHasBeenSet = false;

    RepromptResponse m_repromptResponse;
    bool m_repromptResponseHasBeenSet = false;

    CodeInterpreterInvocationOutput m_codeInterpreterInvocationOutput;
    bool m_codeInterpreterInvocationOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
