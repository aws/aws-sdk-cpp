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
   * <p>History event for an alias for an Agent.</p><p><h3>See Also:</h3>   <a
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


    
    inline const Aws::Vector<AgentAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }

    
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }

    
    inline void SetRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }

    
    inline void SetRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }

    
    inline AgentAliasHistoryEvent& WithRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    
    inline AgentAliasHistoryEvent& WithRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    
    inline AgentAliasHistoryEvent& AddRoutingConfiguration(const AgentAliasRoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }

    
    inline AgentAliasHistoryEvent& AddRoutingConfiguration(AgentAliasRoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    
    inline AgentAliasHistoryEvent& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    
    inline AgentAliasHistoryEvent& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    
    inline AgentAliasHistoryEvent& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    
    inline AgentAliasHistoryEvent& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}

  private:

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
