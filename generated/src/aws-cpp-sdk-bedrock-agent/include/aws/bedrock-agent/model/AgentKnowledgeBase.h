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
    AWS_BEDROCKAGENT_API AgentKnowledgeBase() = default;
    AWS_BEDROCKAGENT_API AgentKnowledgeBase(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentKnowledgeBase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the agent with which the knowledge base is
     * associated.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AgentKnowledgeBase& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent with which the knowledge base is associated.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    AgentKnowledgeBase& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the association between the agent and the knowledge
     * base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    AgentKnowledgeBase& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the association between the agent and the knowledge
     * base.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AgentKnowledgeBase& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AgentKnowledgeBase& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the association between the agent and the knowledge base
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AgentKnowledgeBase& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to use the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline KnowledgeBaseState GetKnowledgeBaseState() const { return m_knowledgeBaseState; }
    inline bool KnowledgeBaseStateHasBeenSet() const { return m_knowledgeBaseStateHasBeenSet; }
    inline void SetKnowledgeBaseState(KnowledgeBaseState value) { m_knowledgeBaseStateHasBeenSet = true; m_knowledgeBaseState = value; }
    inline AgentKnowledgeBase& WithKnowledgeBaseState(KnowledgeBaseState value) { SetKnowledgeBaseState(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    KnowledgeBaseState m_knowledgeBaseState{KnowledgeBaseState::NOT_SET};
    bool m_knowledgeBaseStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
