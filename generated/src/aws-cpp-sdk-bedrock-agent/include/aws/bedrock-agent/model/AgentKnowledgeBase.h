/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/KnowledgeBaseState.h>
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
   * <p>Contains details about a knowledge base that is associated with an
   * agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentKnowledgeBase">AWS
   * API Reference</a></p>
   */
  class AgentKnowledgeBase
  {
  public:
    AWS_BEDROCKAGENT_API AgentKnowledgeBase();
    AWS_BEDROCKAGENT_API AgentKnowledgeBase(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentKnowledgeBase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline AgentKnowledgeBase& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline AgentKnowledgeBase& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline AgentKnowledgeBase& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline AgentKnowledgeBase& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline AgentKnowledgeBase& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline AgentKnowledgeBase& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was created.</p>
     */
    inline AgentKnowledgeBase& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was created.</p>
     */
    inline AgentKnowledgeBase& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline AgentKnowledgeBase& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline AgentKnowledgeBase& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline AgentKnowledgeBase& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline AgentKnowledgeBase& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline AgentKnowledgeBase& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline AgentKnowledgeBase& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>Specifies whether to use the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline const KnowledgeBaseState& GetKnowledgeBaseState() const{ return m_knowledgeBaseState; }

    /**
     * <p>Specifies whether to use the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline bool KnowledgeBaseStateHasBeenSet() const { return m_knowledgeBaseStateHasBeenSet; }

    /**
     * <p>Specifies whether to use the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline void SetKnowledgeBaseState(const KnowledgeBaseState& value) { m_knowledgeBaseStateHasBeenSet = true; m_knowledgeBaseState = value; }

    /**
     * <p>Specifies whether to use the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline void SetKnowledgeBaseState(KnowledgeBaseState&& value) { m_knowledgeBaseStateHasBeenSet = true; m_knowledgeBaseState = std::move(value); }

    /**
     * <p>Specifies whether to use the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline AgentKnowledgeBase& WithKnowledgeBaseState(const KnowledgeBaseState& value) { SetKnowledgeBaseState(value); return *this;}

    /**
     * <p>Specifies whether to use the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline AgentKnowledgeBase& WithKnowledgeBaseState(KnowledgeBaseState&& value) { SetKnowledgeBaseState(std::move(value)); return *this;}


    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was last updated.</p>
     */
    inline AgentKnowledgeBase& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was last updated.</p>
     */
    inline AgentKnowledgeBase& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    KnowledgeBaseState m_knowledgeBaseState;
    bool m_knowledgeBaseStateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
