/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/model/AgentDescriptor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BEDROCKAGENT_API UpdateAgentCollaboratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentCollaborator"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An agent descriptor for the agent collaborator.</p>
     */
    inline const AgentDescriptor& GetAgentDescriptor() const{ return m_agentDescriptor; }
    inline bool AgentDescriptorHasBeenSet() const { return m_agentDescriptorHasBeenSet; }
    inline void SetAgentDescriptor(const AgentDescriptor& value) { m_agentDescriptorHasBeenSet = true; m_agentDescriptor = value; }
    inline void SetAgentDescriptor(AgentDescriptor&& value) { m_agentDescriptorHasBeenSet = true; m_agentDescriptor = std::move(value); }
    inline UpdateAgentCollaboratorRequest& WithAgentDescriptor(const AgentDescriptor& value) { SetAgentDescriptor(value); return *this;}
    inline UpdateAgentCollaboratorRequest& WithAgentDescriptor(AgentDescriptor&& value) { SetAgentDescriptor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline UpdateAgentCollaboratorRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline UpdateAgentCollaboratorRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline UpdateAgentCollaboratorRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's version.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline UpdateAgentCollaboratorRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline UpdateAgentCollaboratorRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline UpdateAgentCollaboratorRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instruction for the collaborator.</p>
     */
    inline const Aws::String& GetCollaborationInstruction() const{ return m_collaborationInstruction; }
    inline bool CollaborationInstructionHasBeenSet() const { return m_collaborationInstructionHasBeenSet; }
    inline void SetCollaborationInstruction(const Aws::String& value) { m_collaborationInstructionHasBeenSet = true; m_collaborationInstruction = value; }
    inline void SetCollaborationInstruction(Aws::String&& value) { m_collaborationInstructionHasBeenSet = true; m_collaborationInstruction = std::move(value); }
    inline void SetCollaborationInstruction(const char* value) { m_collaborationInstructionHasBeenSet = true; m_collaborationInstruction.assign(value); }
    inline UpdateAgentCollaboratorRequest& WithCollaborationInstruction(const Aws::String& value) { SetCollaborationInstruction(value); return *this;}
    inline UpdateAgentCollaboratorRequest& WithCollaborationInstruction(Aws::String&& value) { SetCollaborationInstruction(std::move(value)); return *this;}
    inline UpdateAgentCollaboratorRequest& WithCollaborationInstruction(const char* value) { SetCollaborationInstruction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's ID.</p>
     */
    inline const Aws::String& GetCollaboratorId() const{ return m_collaboratorId; }
    inline bool CollaboratorIdHasBeenSet() const { return m_collaboratorIdHasBeenSet; }
    inline void SetCollaboratorId(const Aws::String& value) { m_collaboratorIdHasBeenSet = true; m_collaboratorId = value; }
    inline void SetCollaboratorId(Aws::String&& value) { m_collaboratorIdHasBeenSet = true; m_collaboratorId = std::move(value); }
    inline void SetCollaboratorId(const char* value) { m_collaboratorIdHasBeenSet = true; m_collaboratorId.assign(value); }
    inline UpdateAgentCollaboratorRequest& WithCollaboratorId(const Aws::String& value) { SetCollaboratorId(value); return *this;}
    inline UpdateAgentCollaboratorRequest& WithCollaboratorId(Aws::String&& value) { SetCollaboratorId(std::move(value)); return *this;}
    inline UpdateAgentCollaboratorRequest& WithCollaboratorId(const char* value) { SetCollaboratorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's name.</p>
     */
    inline const Aws::String& GetCollaboratorName() const{ return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    inline void SetCollaboratorName(const Aws::String& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = value; }
    inline void SetCollaboratorName(Aws::String&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::move(value); }
    inline void SetCollaboratorName(const char* value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName.assign(value); }
    inline UpdateAgentCollaboratorRequest& WithCollaboratorName(const Aws::String& value) { SetCollaboratorName(value); return *this;}
    inline UpdateAgentCollaboratorRequest& WithCollaboratorName(Aws::String&& value) { SetCollaboratorName(std::move(value)); return *this;}
    inline UpdateAgentCollaboratorRequest& WithCollaboratorName(const char* value) { SetCollaboratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A relay conversation history for the collaborator.</p>
     */
    inline const RelayConversationHistory& GetRelayConversationHistory() const{ return m_relayConversationHistory; }
    inline bool RelayConversationHistoryHasBeenSet() const { return m_relayConversationHistoryHasBeenSet; }
    inline void SetRelayConversationHistory(const RelayConversationHistory& value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = value; }
    inline void SetRelayConversationHistory(RelayConversationHistory&& value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = std::move(value); }
    inline UpdateAgentCollaboratorRequest& WithRelayConversationHistory(const RelayConversationHistory& value) { SetRelayConversationHistory(value); return *this;}
    inline UpdateAgentCollaboratorRequest& WithRelayConversationHistory(RelayConversationHistory&& value) { SetRelayConversationHistory(std::move(value)); return *this;}
    ///@}
  private:

    AgentDescriptor m_agentDescriptor;
    bool m_agentDescriptorHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_collaborationInstruction;
    bool m_collaborationInstructionHasBeenSet = false;

    Aws::String m_collaboratorId;
    bool m_collaboratorIdHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    RelayConversationHistory m_relayConversationHistory;
    bool m_relayConversationHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
