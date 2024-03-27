/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCKAGENT_API AgentAliasHistoryEvent();
    AWS_BEDROCKAGENT_API AgentAliasHistoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentAliasHistoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date that the alias stopped being associated to the version in the
     * <code>routingConfiguration</code> object</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date that the alias stopped being associated to the version in the
     * <code>routingConfiguration</code> object</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date that the alias stopped being associated to the version in the
     * <code>routingConfiguration</code> object</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date that the alias stopped being associated to the version in the
     * <code>routingConfiguration</code> object</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date that the alias stopped being associated to the version in the
     * <code>routingConfiguration</code> object</p>
     */
    inline AgentAliasHistoryEvent& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date that the alias stopped being associated to the version in the
     * <code>routingConfiguration</code> object</p>
     */
    inline AgentAliasHistoryEvent& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline const Aws::Vector<AgentAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline void SetRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline void SetRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline AgentAliasHistoryEvent& WithRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline AgentAliasHistoryEvent& WithRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline AgentAliasHistoryEvent& AddRoutingConfiguration(const AgentAliasRoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline AgentAliasHistoryEvent& AddRoutingConfiguration(AgentAliasRoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>The date that the alias began being associated to the version in the
     * <code>routingConfiguration</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date that the alias began being associated to the version in the
     * <code>routingConfiguration</code> object.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The date that the alias began being associated to the version in the
     * <code>routingConfiguration</code> object.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The date that the alias began being associated to the version in the
     * <code>routingConfiguration</code> object.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The date that the alias began being associated to the version in the
     * <code>routingConfiguration</code> object.</p>
     */
    inline AgentAliasHistoryEvent& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date that the alias began being associated to the version in the
     * <code>routingConfiguration</code> object.</p>
     */
    inline AgentAliasHistoryEvent& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
