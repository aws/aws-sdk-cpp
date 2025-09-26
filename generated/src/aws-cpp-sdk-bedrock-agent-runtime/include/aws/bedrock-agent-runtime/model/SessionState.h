/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ConversationHistory.h>
#include <aws/bedrock-agent-runtime/model/InvocationResultMember.h>
#include <aws/bedrock-agent-runtime/model/InputFile.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseConfiguration.h>
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
   * <p>Contains parameters that specify various attributes that persist across a
   * session or prompt. You can define session state attributes as key-value pairs
   * when writing a <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-lambda.html">Lambda
   * function</a> for an action group or pass them when making an <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
   * request. Use session state attributes to control and provide conversational
   * context for your agent and to help customize your agent's behavior. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-session-state.html">Control
   * session context</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/SessionState">AWS
   * API Reference</a></p>
   */
  class SessionState
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API SessionState() = default;
    AWS_BEDROCKAGENTRUNTIME_API SessionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API SessionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes. If <code>sessionAttributes</code> are passed to a supervisor agent
     * in <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-multi-agent-collaboration.html">multi-agent
     * collaboration</a>, it will be forwarded to all agent collaborators.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const { return m_sessionAttributes; }
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    SessionState& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    template<typename SessionAttributesKeyT = Aws::String, typename SessionAttributesValueT = Aws::String>
    SessionState& AddSessionAttributes(SessionAttributesKeyT&& key, SessionAttributesValueT&& value) {
      m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::forward<SessionAttributesKeyT>(key), std::forward<SessionAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. </p> <ul> <li> <p>In orchestration prompt template, these attributes
     * replace the $prompt_session_attributes$ placeholder variable. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p> </li> <li> <p>In <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-multi-agent-collaboration.html">multi-agent
     * collaboration</a>, the <code>promptSessionAttributes</code> will only be used by
     * supervisor agent when $prompt_session_attributes$ is present in prompt template.
     * </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPromptSessionAttributes() const { return m_promptSessionAttributes; }
    inline bool PromptSessionAttributesHasBeenSet() const { return m_promptSessionAttributesHasBeenSet; }
    template<typename PromptSessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetPromptSessionAttributes(PromptSessionAttributesT&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes = std::forward<PromptSessionAttributesT>(value); }
    template<typename PromptSessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    SessionState& WithPromptSessionAttributes(PromptSessionAttributesT&& value) { SetPromptSessionAttributes(std::forward<PromptSessionAttributesT>(value)); return *this;}
    template<typename PromptSessionAttributesKeyT = Aws::String, typename PromptSessionAttributesValueT = Aws::String>
    SessionState& AddPromptSessionAttributes(PromptSessionAttributesKeyT&& key, PromptSessionAttributesValueT&& value) {
      m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(std::forward<PromptSessionAttributesKeyT>(key), std::forward<PromptSessionAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains information about the results from the action group invocation. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-returncontrol.html">Return
     * control to the agent developer</a> and <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-session-state.html">Control
     * session context</a>.</p>  <p>If you include this field, the
     * <code>inputText</code> field will be ignored.</p> 
     */
    inline const Aws::Vector<InvocationResultMember>& GetReturnControlInvocationResults() const { return m_returnControlInvocationResults; }
    inline bool ReturnControlInvocationResultsHasBeenSet() const { return m_returnControlInvocationResultsHasBeenSet; }
    template<typename ReturnControlInvocationResultsT = Aws::Vector<InvocationResultMember>>
    void SetReturnControlInvocationResults(ReturnControlInvocationResultsT&& value) { m_returnControlInvocationResultsHasBeenSet = true; m_returnControlInvocationResults = std::forward<ReturnControlInvocationResultsT>(value); }
    template<typename ReturnControlInvocationResultsT = Aws::Vector<InvocationResultMember>>
    SessionState& WithReturnControlInvocationResults(ReturnControlInvocationResultsT&& value) { SetReturnControlInvocationResults(std::forward<ReturnControlInvocationResultsT>(value)); return *this;}
    template<typename ReturnControlInvocationResultsT = InvocationResultMember>
    SessionState& AddReturnControlInvocationResults(ReturnControlInvocationResultsT&& value) { m_returnControlInvocationResultsHasBeenSet = true; m_returnControlInvocationResults.emplace_back(std::forward<ReturnControlInvocationResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the invocation of an action. This value must match the
     * <code>invocationId</code> returned in the <code>InvokeAgent</code> response for
     * the action whose results are provided in the
     * <code>returnControlInvocationResults</code> field. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-returncontrol.html">Return
     * control to the agent developer</a> and <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-session-state.html">Control
     * session context</a>.</p>
     */
    inline const Aws::String& GetInvocationId() const { return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    template<typename InvocationIdT = Aws::String>
    void SetInvocationId(InvocationIdT&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::forward<InvocationIdT>(value); }
    template<typename InvocationIdT = Aws::String>
    SessionState& WithInvocationId(InvocationIdT&& value) { SetInvocationId(std::forward<InvocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the files used by code interpreter.</p>
     */
    inline const Aws::Vector<InputFile>& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = Aws::Vector<InputFile>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<InputFile>>
    SessionState& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = InputFile>
    SessionState& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of configurations, each of which applies to a knowledge base
     * attached to the agent.</p>
     */
    inline const Aws::Vector<KnowledgeBaseConfiguration>& GetKnowledgeBaseConfigurations() const { return m_knowledgeBaseConfigurations; }
    inline bool KnowledgeBaseConfigurationsHasBeenSet() const { return m_knowledgeBaseConfigurationsHasBeenSet; }
    template<typename KnowledgeBaseConfigurationsT = Aws::Vector<KnowledgeBaseConfiguration>>
    void SetKnowledgeBaseConfigurations(KnowledgeBaseConfigurationsT&& value) { m_knowledgeBaseConfigurationsHasBeenSet = true; m_knowledgeBaseConfigurations = std::forward<KnowledgeBaseConfigurationsT>(value); }
    template<typename KnowledgeBaseConfigurationsT = Aws::Vector<KnowledgeBaseConfiguration>>
    SessionState& WithKnowledgeBaseConfigurations(KnowledgeBaseConfigurationsT&& value) { SetKnowledgeBaseConfigurations(std::forward<KnowledgeBaseConfigurationsT>(value)); return *this;}
    template<typename KnowledgeBaseConfigurationsT = KnowledgeBaseConfiguration>
    SessionState& AddKnowledgeBaseConfigurations(KnowledgeBaseConfigurationsT&& value) { m_knowledgeBaseConfigurationsHasBeenSet = true; m_knowledgeBaseConfigurations.emplace_back(std::forward<KnowledgeBaseConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state's conversation history.</p>
     */
    inline const ConversationHistory& GetConversationHistory() const { return m_conversationHistory; }
    inline bool ConversationHistoryHasBeenSet() const { return m_conversationHistoryHasBeenSet; }
    template<typename ConversationHistoryT = ConversationHistory>
    void SetConversationHistory(ConversationHistoryT&& value) { m_conversationHistoryHasBeenSet = true; m_conversationHistory = std::forward<ConversationHistoryT>(value); }
    template<typename ConversationHistoryT = ConversationHistory>
    SessionState& WithConversationHistory(ConversationHistoryT&& value) { SetConversationHistory(std::forward<ConversationHistoryT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_promptSessionAttributes;
    bool m_promptSessionAttributesHasBeenSet = false;

    Aws::Vector<InvocationResultMember> m_returnControlInvocationResults;
    bool m_returnControlInvocationResultsHasBeenSet = false;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::Vector<InputFile> m_files;
    bool m_filesHasBeenSet = false;

    Aws::Vector<KnowledgeBaseConfiguration> m_knowledgeBaseConfigurations;
    bool m_knowledgeBaseConfigurationsHasBeenSet = false;

    ConversationHistory m_conversationHistory;
    bool m_conversationHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
