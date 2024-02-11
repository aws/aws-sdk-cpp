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
   * <p>Disassociate Agent Knowledge Base Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DisassociateAgentKnowledgeBaseRequest">AWS
   * API Reference</a></p>
   */
  class DisassociateAgentKnowledgeBaseRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API DisassociateAgentKnowledgeBaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateAgentKnowledgeBase"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline DisassociateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
