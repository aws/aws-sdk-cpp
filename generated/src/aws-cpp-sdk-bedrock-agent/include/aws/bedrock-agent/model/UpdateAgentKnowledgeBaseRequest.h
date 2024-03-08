/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/KnowledgeBaseState.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Update Agent Knowledge Base Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentKnowledgeBaseRequest">AWS
   * API Reference</a></p>
   */
  class UpdateAgentKnowledgeBaseRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API UpdateAgentKnowledgeBaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentKnowledgeBase"; }

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
    inline UpdateAgentKnowledgeBaseRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


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
    inline UpdateAgentKnowledgeBaseRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


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
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>Id generated at the server side when a Knowledge Base is associated to an
     * Agent</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline UpdateAgentKnowledgeBaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline UpdateAgentKnowledgeBaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline UpdateAgentKnowledgeBaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const KnowledgeBaseState& GetKnowledgeBaseState() const{ return m_knowledgeBaseState; }

    
    inline bool KnowledgeBaseStateHasBeenSet() const { return m_knowledgeBaseStateHasBeenSet; }

    
    inline void SetKnowledgeBaseState(const KnowledgeBaseState& value) { m_knowledgeBaseStateHasBeenSet = true; m_knowledgeBaseState = value; }

    
    inline void SetKnowledgeBaseState(KnowledgeBaseState&& value) { m_knowledgeBaseStateHasBeenSet = true; m_knowledgeBaseState = std::move(value); }

    
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseState(const KnowledgeBaseState& value) { SetKnowledgeBaseState(value); return *this;}

    
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseState(KnowledgeBaseState&& value) { SetKnowledgeBaseState(std::move(value)); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KnowledgeBaseState m_knowledgeBaseState;
    bool m_knowledgeBaseStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
