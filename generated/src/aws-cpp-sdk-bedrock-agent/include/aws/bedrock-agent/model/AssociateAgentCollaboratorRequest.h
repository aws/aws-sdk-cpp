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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class AssociateAgentCollaboratorRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API AssociateAgentCollaboratorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAgentCollaborator"; }

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
    AssociateAgentCollaboratorRequest& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    AssociateAgentCollaboratorRequest& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the collaborator agent.</p>
     */
    inline const AgentDescriptor& GetAgentDescriptor() const { return m_agentDescriptor; }
    inline bool AgentDescriptorHasBeenSet() const { return m_agentDescriptorHasBeenSet; }
    template<typename AgentDescriptorT = AgentDescriptor>
    void SetAgentDescriptor(AgentDescriptorT&& value) { m_agentDescriptorHasBeenSet = true; m_agentDescriptor = std::forward<AgentDescriptorT>(value); }
    template<typename AgentDescriptorT = AgentDescriptor>
    AssociateAgentCollaboratorRequest& WithAgentDescriptor(AgentDescriptorT&& value) { SetAgentDescriptor(std::forward<AgentDescriptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the collaborator.</p>
     */
    inline const Aws::String& GetCollaboratorName() const { return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    template<typename CollaboratorNameT = Aws::String>
    void SetCollaboratorName(CollaboratorNameT&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::forward<CollaboratorNameT>(value); }
    template<typename CollaboratorNameT = Aws::String>
    AssociateAgentCollaboratorRequest& WithCollaboratorName(CollaboratorNameT&& value) { SetCollaboratorName(std::forward<CollaboratorNameT>(value)); return *this;}
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
    AssociateAgentCollaboratorRequest& WithCollaborationInstruction(CollaborationInstructionT&& value) { SetCollaborationInstruction(std::forward<CollaborationInstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A relay conversation history for the collaborator.</p>
     */
    inline RelayConversationHistory GetRelayConversationHistory() const { return m_relayConversationHistory; }
    inline bool RelayConversationHistoryHasBeenSet() const { return m_relayConversationHistoryHasBeenSet; }
    inline void SetRelayConversationHistory(RelayConversationHistory value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = value; }
    inline AssociateAgentCollaboratorRequest& WithRelayConversationHistory(RelayConversationHistory value) { SetRelayConversationHistory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A client token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AssociateAgentCollaboratorRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    AgentDescriptor m_agentDescriptor;
    bool m_agentDescriptorHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::String m_collaborationInstruction;
    bool m_collaborationInstructionHasBeenSet = false;

    RelayConversationHistory m_relayConversationHistory{RelayConversationHistory::NOT_SET};
    bool m_relayConversationHistoryHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
