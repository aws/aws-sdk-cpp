/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentDescriptor.h>
#include <aws/bedrock-agent/model/RelayConversationHistory.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An agent collaborator summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentCollaboratorSummary">AWS
   * API Reference</a></p>
   */
  class AgentCollaboratorSummary
  {
  public:
    AWS_BEDROCKAGENT_API AgentCollaboratorSummary() = default;
    AWS_BEDROCKAGENT_API AgentCollaboratorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentCollaboratorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The collaborator's agent ID.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AgentCollaboratorSummary& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    AgentCollaboratorSummary& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
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
    AgentCollaboratorSummary& WithCollaboratorId(CollaboratorIdT&& value) { SetCollaboratorId(std::forward<CollaboratorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's agent descriptor.</p>
     */
    inline const AgentDescriptor& GetAgentDescriptor() const { return m_agentDescriptor; }
    inline bool AgentDescriptorHasBeenSet() const { return m_agentDescriptorHasBeenSet; }
    template<typename AgentDescriptorT = AgentDescriptor>
    void SetAgentDescriptor(AgentDescriptorT&& value) { m_agentDescriptorHasBeenSet = true; m_agentDescriptor = std::forward<AgentDescriptorT>(value); }
    template<typename AgentDescriptorT = AgentDescriptor>
    AgentCollaboratorSummary& WithAgentDescriptor(AgentDescriptorT&& value) { SetAgentDescriptor(std::forward<AgentDescriptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's collaboration instruction.</p>
     */
    inline const Aws::String& GetCollaborationInstruction() const { return m_collaborationInstruction; }
    inline bool CollaborationInstructionHasBeenSet() const { return m_collaborationInstructionHasBeenSet; }
    template<typename CollaborationInstructionT = Aws::String>
    void SetCollaborationInstruction(CollaborationInstructionT&& value) { m_collaborationInstructionHasBeenSet = true; m_collaborationInstruction = std::forward<CollaborationInstructionT>(value); }
    template<typename CollaborationInstructionT = Aws::String>
    AgentCollaboratorSummary& WithCollaborationInstruction(CollaborationInstructionT&& value) { SetCollaborationInstruction(std::forward<CollaborationInstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's relay conversation history.</p>
     */
    inline RelayConversationHistory GetRelayConversationHistory() const { return m_relayConversationHistory; }
    inline bool RelayConversationHistoryHasBeenSet() const { return m_relayConversationHistoryHasBeenSet; }
    inline void SetRelayConversationHistory(RelayConversationHistory value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = value; }
    inline AgentCollaboratorSummary& WithRelayConversationHistory(RelayConversationHistory value) { SetRelayConversationHistory(value); return *this;}
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
    AgentCollaboratorSummary& WithCollaboratorName(CollaboratorNameT&& value) { SetCollaboratorName(std::forward<CollaboratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the collaborator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AgentCollaboratorSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the collaborator was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    AgentCollaboratorSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
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

    Aws::String m_collaborationInstruction;
    bool m_collaborationInstructionHasBeenSet = false;

    RelayConversationHistory m_relayConversationHistory{RelayConversationHistory::NOT_SET};
    bool m_relayConversationHistoryHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
