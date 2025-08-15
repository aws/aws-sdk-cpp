/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/GuardrailConfiguration.h>
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
   * <p>Contains details about an agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentSummary">AWS
   * API Reference</a></p>
   */
  class AgentSummary
  {
  public:
    AWS_BEDROCKAGENT_API AgentSummary() = default;
    AWS_BEDROCKAGENT_API AgentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AgentSummary& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent.</p>
     */
    inline const Aws::String& GetAgentName() const { return m_agentName; }
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
    template<typename AgentNameT = Aws::String>
    void SetAgentName(AgentNameT&& value) { m_agentNameHasBeenSet = true; m_agentName = std::forward<AgentNameT>(value); }
    template<typename AgentNameT = Aws::String>
    AgentSummary& WithAgentName(AgentNameT&& value) { SetAgentName(std::forward<AgentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the agent.</p>
     */
    inline AgentStatus GetAgentStatus() const { return m_agentStatus; }
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }
    inline void SetAgentStatus(AgentStatus value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }
    inline AgentSummary& WithAgentStatus(AgentStatus value) { SetAgentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the agent.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AgentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the agent was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AgentSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the agent.</p>
     */
    inline const Aws::String& GetLatestAgentVersion() const { return m_latestAgentVersion; }
    inline bool LatestAgentVersionHasBeenSet() const { return m_latestAgentVersionHasBeenSet; }
    template<typename LatestAgentVersionT = Aws::String>
    void SetLatestAgentVersion(LatestAgentVersionT&& value) { m_latestAgentVersionHasBeenSet = true; m_latestAgentVersion = std::forward<LatestAgentVersionT>(value); }
    template<typename LatestAgentVersionT = Aws::String>
    AgentSummary& WithLatestAgentVersion(LatestAgentVersionT&& value) { SetLatestAgentVersion(std::forward<LatestAgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the guardrail associated with the agent.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const { return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    void SetGuardrailConfiguration(GuardrailConfigurationT&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::forward<GuardrailConfigurationT>(value); }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    AgentSummary& WithGuardrailConfiguration(GuardrailConfigurationT&& value) { SetGuardrailConfiguration(std::forward<GuardrailConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    AgentStatus m_agentStatus{AgentStatus::NOT_SET};
    bool m_agentStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_latestAgentVersion;
    bool m_latestAgentVersionHasBeenSet = false;

    GuardrailConfiguration m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
