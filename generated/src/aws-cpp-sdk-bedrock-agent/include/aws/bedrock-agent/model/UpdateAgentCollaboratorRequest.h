/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentDescriptor.h>
#include <aws/bedrock-agent/model/RelayConversationHistory.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class UpdateAgentCollaboratorRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API UpdateAgentCollaboratorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentCollaborator"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The agent's ID.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    UpdateAgentCollaboratorRequest& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's version.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    UpdateAgentCollaboratorRequest& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's ID.</p>
     */
    inline const Aws::String& GetCollaboratorId() const { return m_collaboratorId; }
    inline bool CollaboratorIdHasBeenSet() const { return m_collaboratorIdHasBeenSet; }
    template<typename CollaboratorIdT = Aws::String>
    void SetCollaboratorId(CollaboratorIdT&& value) { m_collaboratorIdHasBeenSet = true; m_collaboratorId = std::forward<CollaboratorIdT>(value); }
    template<typename CollaboratorIdT = Aws::String>
    UpdateAgentCollaboratorRequest& WithCollaboratorId(CollaboratorIdT&& value) { SetCollaboratorId(std::forward<CollaboratorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An agent descriptor for the agent collaborator.</p>
     */
    inline const AgentDescriptor& GetAgentDescriptor() const { return m_agentDescriptor; }
    inline bool AgentDescriptorHasBeenSet() const { return m_agentDescriptorHasBeenSet; }
    template<typename AgentDescriptorT = AgentDescriptor>
    void SetAgentDescriptor(AgentDescriptorT&& value) { m_agentDescriptorHasBeenSet = true; m_agentDescriptor = std::forward<AgentDescriptorT>(value); }
    template<typename AgentDescriptorT = AgentDescriptor>
    UpdateAgentCollaboratorRequest& WithAgentDescriptor(AgentDescriptorT&& value) { SetAgentDescriptor(std::forward<AgentDescriptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's name.</p>
     */
    inline const Aws::String& GetCollaboratorName() const { return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    template<typename CollaboratorNameT = Aws::String>
    void SetCollaboratorName(CollaboratorNameT&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::forward<CollaboratorNameT>(value); }
    template<typename CollaboratorNameT = Aws::String>
    UpdateAgentCollaboratorRequest& WithCollaboratorName(CollaboratorNameT&& value) { SetCollaboratorName(std::forward<CollaboratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instruction for the collaborator.</p>
     */
    inline const Aws::String& GetCollaborationInstruction() const { return m_collaborationInstruction; }
    inline bool CollaborationInstructionHasBeenSet() const { return m_collaborationInstructionHasBeenSet; }
    template<typename CollaborationInstructionT = Aws::String>
    void SetCollaborationInstruction(CollaborationInstructionT&& value) { m_collaborationInstructionHasBeenSet = true; m_collaborationInstruction = std::forward<CollaborationInstructionT>(value); }
    template<typename CollaborationInstructionT = Aws::String>
    UpdateAgentCollaboratorRequest& WithCollaborationInstruction(CollaborationInstructionT&& value) { SetCollaborationInstruction(std::forward<CollaborationInstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A relay conversation history for the collaborator.</p>
     */
    inline RelayConversationHistory GetRelayConversationHistory() const { return m_relayConversationHistory; }
    inline bool RelayConversationHistoryHasBeenSet() const { return m_relayConversationHistoryHasBeenSet; }
    inline void SetRelayConversationHistory(RelayConversationHistory value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = value; }
    inline UpdateAgentCollaboratorRequest& WithRelayConversationHistory(RelayConversationHistory value) { SetRelayConversationHistory(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_collaboratorId;
    bool m_collaboratorIdHasBeenSet = false;

    AgentDescriptor m_agentDescriptor;
    bool m_agentDescriptorHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::String m_collaborationInstruction;
    bool m_collaborationInstructionHasBeenSet = false;

    RelayConversationHistory m_relayConversationHistory{RelayConversationHistory::NOT_SET};
    bool m_relayConversationHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
