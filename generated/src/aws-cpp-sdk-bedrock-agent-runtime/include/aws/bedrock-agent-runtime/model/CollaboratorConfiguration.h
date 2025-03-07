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
    AWS_BEDROCKAGENTRUNTIME_API CollaboratorConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API CollaboratorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CollaboratorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the inline collaborator agent. </p>
     */
    inline const Aws::String& GetAgentAliasArn() const{ return m_agentAliasArn; }
    inline bool AgentAliasArnHasBeenSet() const { return m_agentAliasArnHasBeenSet; }
    inline void SetAgentAliasArn(const Aws::String& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = value; }
    inline void SetAgentAliasArn(Aws::String&& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = std::move(value); }
    inline void SetAgentAliasArn(const char* value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn.assign(value); }
    inline CollaboratorConfiguration& WithAgentAliasArn(const Aws::String& value) { SetAgentAliasArn(value); return *this;}
    inline CollaboratorConfiguration& WithAgentAliasArn(Aws::String&& value) { SetAgentAliasArn(std::move(value)); return *this;}
    inline CollaboratorConfiguration& WithAgentAliasArn(const char* value) { SetAgentAliasArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Instructions that tell the inline collaborator agent what it should do and
     * how it should interact with users. </p>
     */
    inline const Aws::String& GetCollaboratorInstruction() const{ return m_collaboratorInstruction; }
    inline bool CollaboratorInstructionHasBeenSet() const { return m_collaboratorInstructionHasBeenSet; }
    inline void SetCollaboratorInstruction(const Aws::String& value) { m_collaboratorInstructionHasBeenSet = true; m_collaboratorInstruction = value; }
    inline void SetCollaboratorInstruction(Aws::String&& value) { m_collaboratorInstructionHasBeenSet = true; m_collaboratorInstruction = std::move(value); }
    inline void SetCollaboratorInstruction(const char* value) { m_collaboratorInstructionHasBeenSet = true; m_collaboratorInstruction.assign(value); }
    inline CollaboratorConfiguration& WithCollaboratorInstruction(const Aws::String& value) { SetCollaboratorInstruction(value); return *this;}
    inline CollaboratorConfiguration& WithCollaboratorInstruction(Aws::String&& value) { SetCollaboratorInstruction(std::move(value)); return *this;}
    inline CollaboratorConfiguration& WithCollaboratorInstruction(const char* value) { SetCollaboratorInstruction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the inline collaborator agent which must be the same name as
     * specified for <code>agentName</code>. </p>
     */
    inline const Aws::String& GetCollaboratorName() const{ return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    inline void SetCollaboratorName(const Aws::String& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = value; }
    inline void SetCollaboratorName(Aws::String&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::move(value); }
    inline void SetCollaboratorName(const char* value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName.assign(value); }
    inline CollaboratorConfiguration& WithCollaboratorName(const Aws::String& value) { SetCollaboratorName(value); return *this;}
    inline CollaboratorConfiguration& WithCollaboratorName(Aws::String&& value) { SetCollaboratorName(std::move(value)); return *this;}
    inline CollaboratorConfiguration& WithCollaboratorName(const char* value) { SetCollaboratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A relay conversation history for the inline collaborator agent. </p>
     */
    inline const RelayConversationHistory& GetRelayConversationHistory() const{ return m_relayConversationHistory; }
    inline bool RelayConversationHistoryHasBeenSet() const { return m_relayConversationHistoryHasBeenSet; }
    inline void SetRelayConversationHistory(const RelayConversationHistory& value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = value; }
    inline void SetRelayConversationHistory(RelayConversationHistory&& value) { m_relayConversationHistoryHasBeenSet = true; m_relayConversationHistory = std::move(value); }
    inline CollaboratorConfiguration& WithRelayConversationHistory(const RelayConversationHistory& value) { SetRelayConversationHistory(value); return *this;}
    inline CollaboratorConfiguration& WithRelayConversationHistory(RelayConversationHistory&& value) { SetRelayConversationHistory(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasArn;
    bool m_agentAliasArnHasBeenSet = false;

    Aws::String m_collaboratorInstruction;
    bool m_collaboratorInstructionHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    RelayConversationHistory m_relayConversationHistory;
    bool m_relayConversationHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
