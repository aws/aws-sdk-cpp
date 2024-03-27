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
     * <p>The unique identifier of the agent associated with the knowledge base that
     * you want to update.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent associated with the knowledge base that
     * you want to update.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agent associated with the knowledge base that
     * you want to update.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The unique identifier of the agent associated with the knowledge base that
     * you want to update.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent associated with the knowledge base that
     * you want to update.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent associated with the knowledge base that
     * you want to update.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent associated with the knowledge base that
     * you want to update.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent associated with the knowledge base that
     * you want to update.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The version of the agent associated with the knowledge base that you want to
     * update.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version of the agent associated with the knowledge base that you want to
     * update.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The version of the agent associated with the knowledge base that you want to
     * update.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the agent associated with the knowledge base that you want to
     * update.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The version of the agent associated with the knowledge base that you want to
     * update.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version of the agent associated with the knowledge base that you want to
     * update.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the agent associated with the knowledge base that you want to
     * update.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the agent associated with the knowledge base that you want to
     * update.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>Specifies a new description for the knowledge base associated with an
     * agent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Specifies a new description for the knowledge base associated with an
     * agent.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Specifies a new description for the knowledge base associated with an
     * agent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Specifies a new description for the knowledge base associated with an
     * agent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Specifies a new description for the knowledge base associated with an
     * agent.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Specifies a new description for the knowledge base associated with an
     * agent.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies a new description for the knowledge base associated with an
     * agent.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Specifies a new description for the knowledge base associated with an
     * agent.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the knowledge base that has been associated with an
     * agent.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base that has been associated with an
     * agent.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base that has been associated with an
     * agent.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base that has been associated with an
     * agent.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base that has been associated with an
     * agent.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base that has been associated with an
     * agent.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base that has been associated with an
     * agent.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base that has been associated with an
     * agent.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>Specifies whether the agent uses the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline const KnowledgeBaseState& GetKnowledgeBaseState() const{ return m_knowledgeBaseState; }

    /**
     * <p>Specifies whether the agent uses the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline bool KnowledgeBaseStateHasBeenSet() const { return m_knowledgeBaseStateHasBeenSet; }

    /**
     * <p>Specifies whether the agent uses the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline void SetKnowledgeBaseState(const KnowledgeBaseState& value) { m_knowledgeBaseStateHasBeenSet = true; m_knowledgeBaseState = value; }

    /**
     * <p>Specifies whether the agent uses the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline void SetKnowledgeBaseState(KnowledgeBaseState&& value) { m_knowledgeBaseStateHasBeenSet = true; m_knowledgeBaseState = std::move(value); }

    /**
     * <p>Specifies whether the agent uses the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseState(const KnowledgeBaseState& value) { SetKnowledgeBaseState(value); return *this;}

    /**
     * <p>Specifies whether the agent uses the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline UpdateAgentKnowledgeBaseRequest& WithKnowledgeBaseState(KnowledgeBaseState&& value) { SetKnowledgeBaseState(std::move(value)); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    KnowledgeBaseState m_knowledgeBaseState;
    bool m_knowledgeBaseStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
