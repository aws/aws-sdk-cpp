/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class DisassociateAgentCollaboratorRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API DisassociateAgentCollaboratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateAgentCollaborator"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An agent ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline DisassociateAgentCollaboratorRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline DisassociateAgentCollaboratorRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline DisassociateAgentCollaboratorRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}
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
    inline DisassociateAgentCollaboratorRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline DisassociateAgentCollaboratorRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline DisassociateAgentCollaboratorRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
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
    inline DisassociateAgentCollaboratorRequest& WithCollaboratorId(const Aws::String& value) { SetCollaboratorId(value); return *this;}
    inline DisassociateAgentCollaboratorRequest& WithCollaboratorId(Aws::String&& value) { SetCollaboratorId(std::move(value)); return *this;}
    inline DisassociateAgentCollaboratorRequest& WithCollaboratorId(const char* value) { SetCollaboratorId(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_collaboratorId;
    bool m_collaboratorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
