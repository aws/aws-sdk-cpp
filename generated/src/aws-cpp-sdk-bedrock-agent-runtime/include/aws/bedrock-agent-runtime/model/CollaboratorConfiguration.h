/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/RelayConversationHistory.h>
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
   * <p> Settings of an inline collaborator agent. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CollaboratorConfiguration">AWS
   * API Reference</a></p>
   */
  class CollaboratorConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CollaboratorConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API CollaboratorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CollaboratorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the inline collaborator agent. </p>
     */
    inline const Aws::String& GetAgentAliasArn() const { return m_agentAliasArn; }
    inline bool AgentAliasArnHasBeenSet() const { return m_agentAliasArnHasBeenSet; }
    template<typename AgentAliasArnT = Aws::String>
    void SetAgentAliasArn(AgentAliasArnT&& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = std::forward<AgentAliasArnT>(value); }
    template<typename AgentAliasArnT = Aws::String>
    CollaboratorConfiguration& WithAgentAliasArn(AgentAliasArnT&& value) { SetAgentAliasArn(std::forward<AgentAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Instructions that tell the inline collaborator agent what it should do and
     * how it should interact with users. </p>
     */
    inline const Aws::String& GetCollaboratorInstruction() const { return m_collaboratorInstruction; }
    inline bool CollaboratorInstructionHasBeenSet() const { return m_collaboratorInstructionHasBeenSet; }
    template<typename CollaboratorInstructionT = Aws::String>
    void SetCollaboratorInstruction(CollaboratorInstructionT&& value) { m_collaboratorInstructionHasBeenSet = true; m_collaboratorInstruction = std::forward<CollaboratorInstructionT>(value); }
    template<typename CollaboratorInstructionT = Aws::String>
    CollaboratorConfiguration& WithCollaboratorInstruction(CollaboratorInstructionT&& value) { SetCollaboratorInstruction(std::forward<CollaboratorInstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the inline collaborator agent which must be the same name as
     * specified for <code>agentName</code>. </p>
     */
    inline const Aws::String& GetCollaboratorName() const { return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    template<typename CollaboratorNameT = Aws::String>
    void SetCollaboratorName(CollaboratorNameT&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::forward<CollaboratorNameT>(value); }
    template<typename CollaboratorNameT = Aws::String>
    CollaboratorConfiguration& WithCollaboratorName(CollaboratorNameT&& value) { SetCollaboratorName(std::forward<CollaboratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A relay conversation history for the inline collaborator agent. </p>
     */
    inline RelayConversationHistory GetRelayConversationHistory() const { return m_relayConversationHistory; }
    inline bool RelayConversationHistoryHasBeenSet() const { return m_relayConversationHistoryHasBeenSet; }
    inline void SetRelayConversationHistory(RelayConversationHistory value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = value; }
    inline CollaboratorConfiguration& WithRelayConversationHistory(RelayConversationHistory value) { SetRelayConversationHistory(value); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasArn;
    bool m_agentAliasArnHasBeenSet = false;

    Aws::String m_collaboratorInstruction;
    bool m_collaboratorInstructionHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    RelayConversationHistory m_relayConversationHistory{RelayConversationHistory::NOT_SET};
    bool m_relayConversationHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
