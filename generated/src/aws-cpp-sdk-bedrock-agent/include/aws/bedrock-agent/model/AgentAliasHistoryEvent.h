/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/AgentAliasRoutingConfigurationListItem.h>
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
   * <p>Contains details about the history of the alias.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentAliasHistoryEvent">AWS
   * API Reference</a></p>
   */
  class AgentAliasHistoryEvent
  {
  public:
    AWS_BEDROCKAGENT_API AgentAliasHistoryEvent() = default;
    AWS_BEDROCKAGENT_API AgentAliasHistoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentAliasHistoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline const Aws::Vector<AgentAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const { return m_routingConfiguration; }
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }
    template<typename RoutingConfigurationT = Aws::Vector<AgentAliasRoutingConfigurationListItem>>
    void SetRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::forward<RoutingConfigurationT>(value); }
    template<typename RoutingConfigurationT = Aws::Vector<AgentAliasRoutingConfigurationListItem>>
    AgentAliasHistoryEvent& WithRoutingConfiguration(RoutingConfigurationT&& value) { SetRoutingConfiguration(std::forward<RoutingConfigurationT>(value)); return *this;}
    template<typename RoutingConfigurationT = AgentAliasRoutingConfigurationListItem>
    AgentAliasHistoryEvent& AddRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.emplace_back(std::forward<RoutingConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date that the alias stopped being associated to the version in the
     * <code>routingConfiguration</code> object</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    AgentAliasHistoryEvent& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the alias began being associated to the version in the
     * <code>routingConfiguration</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    AgentAliasHistoryEvent& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
