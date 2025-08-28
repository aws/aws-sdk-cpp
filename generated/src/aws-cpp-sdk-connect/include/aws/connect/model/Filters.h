/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Channel.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains the filter to apply when retrieving metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Filters">AWS API
   * Reference</a></p>
   */
  class Filters
  {
  public:
    AWS_CONNECT_API Filters() = default;
    AWS_CONNECT_API Filters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Filters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const { return m_queues; }
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }
    template<typename QueuesT = Aws::Vector<Aws::String>>
    void SetQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues = std::forward<QueuesT>(value); }
    template<typename QueuesT = Aws::Vector<Aws::String>>
    Filters& WithQueues(QueuesT&& value) { SetQueues(std::forward<QueuesT>(value)); return *this;}
    template<typename QueuesT = Aws::String>
    Filters& AddQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues.emplace_back(std::forward<QueuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    template<typename ChannelsT = Aws::Vector<Channel>>
    void SetChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels = std::forward<ChannelsT>(value); }
    template<typename ChannelsT = Aws::Vector<Channel>>
    Filters& WithChannels(ChannelsT&& value) { SetChannels(std::forward<ChannelsT>(value)); return *this;}
    inline Filters& AddChannels(Channel value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoutingProfiles() const { return m_routingProfiles; }
    inline bool RoutingProfilesHasBeenSet() const { return m_routingProfilesHasBeenSet; }
    template<typename RoutingProfilesT = Aws::Vector<Aws::String>>
    void SetRoutingProfiles(RoutingProfilesT&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles = std::forward<RoutingProfilesT>(value); }
    template<typename RoutingProfilesT = Aws::Vector<Aws::String>>
    Filters& WithRoutingProfiles(RoutingProfilesT&& value) { SetRoutingProfiles(std::forward<RoutingProfilesT>(value)); return *this;}
    template<typename RoutingProfilesT = Aws::String>
    Filters& AddRoutingProfiles(RoutingProfilesT&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.emplace_back(std::forward<RoutingProfilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of expressions as a filter, in which an expression is an object of a
     * step in a routing criteria.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoutingStepExpressions() const { return m_routingStepExpressions; }
    inline bool RoutingStepExpressionsHasBeenSet() const { return m_routingStepExpressionsHasBeenSet; }
    template<typename RoutingStepExpressionsT = Aws::Vector<Aws::String>>
    void SetRoutingStepExpressions(RoutingStepExpressionsT&& value) { m_routingStepExpressionsHasBeenSet = true; m_routingStepExpressions = std::forward<RoutingStepExpressionsT>(value); }
    template<typename RoutingStepExpressionsT = Aws::Vector<Aws::String>>
    Filters& WithRoutingStepExpressions(RoutingStepExpressionsT&& value) { SetRoutingStepExpressions(std::forward<RoutingStepExpressionsT>(value)); return *this;}
    template<typename RoutingStepExpressionsT = Aws::String>
    Filters& AddRoutingStepExpressions(RoutingStepExpressionsT&& value) { m_routingStepExpressionsHasBeenSet = true; m_routingStepExpressions.emplace_back(std::forward<RoutingStepExpressionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 agent status IDs or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentStatuses() const { return m_agentStatuses; }
    inline bool AgentStatusesHasBeenSet() const { return m_agentStatusesHasBeenSet; }
    template<typename AgentStatusesT = Aws::Vector<Aws::String>>
    void SetAgentStatuses(AgentStatusesT&& value) { m_agentStatusesHasBeenSet = true; m_agentStatuses = std::forward<AgentStatusesT>(value); }
    template<typename AgentStatusesT = Aws::Vector<Aws::String>>
    Filters& WithAgentStatuses(AgentStatusesT&& value) { SetAgentStatuses(std::forward<AgentStatusesT>(value)); return *this;}
    template<typename AgentStatusesT = Aws::String>
    Filters& AddAgentStatuses(AgentStatusesT&& value) { m_agentStatusesHasBeenSet = true; m_agentStatuses.emplace_back(std::forward<AgentStatusesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet = false;

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_routingProfiles;
    bool m_routingProfilesHasBeenSet = false;

    Aws::Vector<Aws::String> m_routingStepExpressions;
    bool m_routingStepExpressionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentStatuses;
    bool m_agentStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
