/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentDescriptor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/RelayConversationHistory.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>An agent collaborator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentCollaborator">AWS
   * API Reference</a></p>
   */
  class AgentCollaborator
  {
  public:
    AWS_BEDROCKAGENT_API AgentCollaborator();
    AWS_BEDROCKAGENT_API AgentCollaborator(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentCollaborator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The collaborator's agent descriptor.</p>
     */
    inline const AgentDescriptor& GetAgentDescriptor() const{ return m_agentDescriptor; }
    inline bool AgentDescriptorHasBeenSet() const { return m_agentDescriptorHasBeenSet; }
    inline void SetAgentDescriptor(const AgentDescriptor& value) { m_agentDescriptorHasBeenSet = true; m_agentDescriptor = value; }
    inline void SetAgentDescriptor(AgentDescriptor&& value) { m_agentDescriptorHasBeenSet = true; m_agentDescriptor = std::move(value); }
    inline AgentCollaborator& WithAgentDescriptor(const AgentDescriptor& value) { SetAgentDescriptor(value); return *this;}
    inline AgentCollaborator& WithAgentDescriptor(AgentDescriptor&& value) { SetAgentDescriptor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's agent ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline AgentCollaborator& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline AgentCollaborator& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline AgentCollaborator& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline AgentCollaborator& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline AgentCollaborator& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline AgentCollaborator& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's client token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AgentCollaborator& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AgentCollaborator& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AgentCollaborator& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's instructions.</p>
     */
    inline const Aws::String& GetCollaborationInstruction() const{ return m_collaborationInstruction; }
    inline bool CollaborationInstructionHasBeenSet() const { return m_collaborationInstructionHasBeenSet; }
    inline void SetCollaborationInstruction(const Aws::String& value) { m_collaborationInstructionHasBeenSet = true; m_collaborationInstruction = value; }
    inline void SetCollaborationInstruction(Aws::String&& value) { m_collaborationInstructionHasBeenSet = true; m_collaborationInstruction = std::move(value); }
    inline void SetCollaborationInstruction(const char* value) { m_collaborationInstructionHasBeenSet = true; m_collaborationInstruction.assign(value); }
    inline AgentCollaborator& WithCollaborationInstruction(const Aws::String& value) { SetCollaborationInstruction(value); return *this;}
    inline AgentCollaborator& WithCollaborationInstruction(Aws::String&& value) { SetCollaborationInstruction(std::move(value)); return *this;}
    inline AgentCollaborator& WithCollaborationInstruction(const char* value) { SetCollaborationInstruction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's collaborator ID.</p>
     */
    inline const Aws::String& GetCollaboratorId() const{ return m_collaboratorId; }
    inline bool CollaboratorIdHasBeenSet() const { return m_collaboratorIdHasBeenSet; }
    inline void SetCollaboratorId(const Aws::String& value) { m_collaboratorIdHasBeenSet = true; m_collaboratorId = value; }
    inline void SetCollaboratorId(Aws::String&& value) { m_collaboratorIdHasBeenSet = true; m_collaboratorId = std::move(value); }
    inline void SetCollaboratorId(const char* value) { m_collaboratorIdHasBeenSet = true; m_collaboratorId.assign(value); }
    inline AgentCollaborator& WithCollaboratorId(const Aws::String& value) { SetCollaboratorId(value); return *this;}
    inline AgentCollaborator& WithCollaboratorId(Aws::String&& value) { SetCollaboratorId(std::move(value)); return *this;}
    inline AgentCollaborator& WithCollaboratorId(const char* value) { SetCollaboratorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's collaborator name.</p>
     */
    inline const Aws::String& GetCollaboratorName() const{ return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    inline void SetCollaboratorName(const Aws::String& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = value; }
    inline void SetCollaboratorName(Aws::String&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::move(value); }
    inline void SetCollaboratorName(const char* value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName.assign(value); }
    inline AgentCollaborator& WithCollaboratorName(const Aws::String& value) { SetCollaboratorName(value); return *this;}
    inline AgentCollaborator& WithCollaboratorName(Aws::String&& value) { SetCollaboratorName(std::move(value)); return *this;}
    inline AgentCollaborator& WithCollaboratorName(const char* value) { SetCollaboratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the collaborator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AgentCollaborator& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AgentCollaborator& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the collaborator was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline AgentCollaborator& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline AgentCollaborator& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's relay conversation history.</p>
     */
    inline const RelayConversationHistory& GetRelayConversationHistory() const{ return m_relayConversationHistory; }
    inline bool RelayConversationHistoryHasBeenSet() const { return m_relayConversationHistoryHasBeenSet; }
    inline void SetRelayConversationHistory(const RelayConversationHistory& value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = value; }
    inline void SetRelayConversationHistory(RelayConversationHistory&& value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = std::move(value); }
    inline AgentCollaborator& WithRelayConversationHistory(const RelayConversationHistory& value) { SetRelayConversationHistory(value); return *this;}
    inline AgentCollaborator& WithRelayConversationHistory(RelayConversationHistory&& value) { SetRelayConversationHistory(std::move(value)); return *this;}
    ///@}
  private:

    AgentDescriptor m_agentDescriptor;
    bool m_agentDescriptorHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_collaborationInstruction;
    bool m_collaborationInstructionHasBeenSet = false;

    Aws::String m_collaboratorId;
    bool m_collaboratorIdHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    RelayConversationHistory m_relayConversationHistory;
    bool m_relayConversationHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
