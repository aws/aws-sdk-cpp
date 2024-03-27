/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/KnowledgeBaseState.h>
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
   * <p>Contains details about a knowledge base associated with an
   * agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentKnowledgeBaseSummary">AWS
   * API Reference</a></p>
   */
  class AgentKnowledgeBaseSummary
  {
  public:
    AWS_BEDROCKAGENT_API AgentKnowledgeBaseSummary();
    AWS_BEDROCKAGENT_API AgentKnowledgeBaseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentKnowledgeBaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the knowledge base associated with an agent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the knowledge base associated with an agent.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the knowledge base associated with an agent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the knowledge base associated with an agent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the knowledge base associated with an agent.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the knowledge base associated with an agent.</p>
     */
    inline AgentKnowledgeBaseSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the knowledge base associated with an agent.</p>
     */
    inline AgentKnowledgeBaseSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the knowledge base associated with an agent.</p>
     */
    inline AgentKnowledgeBaseSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the knowledge base associated with an agent.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base associated with an agent.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base associated with an agent.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base associated with an agent.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base associated with an agent.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base associated with an agent.</p>
     */
    inline AgentKnowledgeBaseSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base associated with an agent.</p>
     */
    inline AgentKnowledgeBaseSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base associated with an agent.</p>
     */
    inline AgentKnowledgeBaseSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


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
    inline AgentKnowledgeBaseSummary& WithKnowledgeBaseState(const KnowledgeBaseState& value) { SetKnowledgeBaseState(value); return *this;}

    /**
     * <p>Specifies whether the agent uses the knowledge base or not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline AgentKnowledgeBaseSummary& WithKnowledgeBaseState(KnowledgeBaseState&& value) { SetKnowledgeBaseState(std::move(value)); return *this;}


    /**
     * <p>The time at which the knowledge base associated with an agent was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the knowledge base associated with an agent was last
     * updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the knowledge base associated with an agent was last
     * updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the knowledge base associated with an agent was last
     * updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the knowledge base associated with an agent was last
     * updated.</p>
     */
    inline AgentKnowledgeBaseSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the knowledge base associated with an agent was last
     * updated.</p>
     */
    inline AgentKnowledgeBaseSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

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
