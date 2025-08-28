/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/QueueReference.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/RoutingProfileReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AgentStatusIdentifier.h>
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
   * <p>Contains information about the dimensions for a set of metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Dimensions">AWS
   * API Reference</a></p>
   */
  class Dimensions
  {
  public:
    AWS_CONNECT_API Dimensions() = default;
    AWS_CONNECT_API Dimensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Dimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the queue for which metrics are returned.</p>
     */
    inline const QueueReference& GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    template<typename QueueT = QueueReference>
    void SetQueue(QueueT&& value) { m_queueHasBeenSet = true; m_queue = std::forward<QueueT>(value); }
    template<typename QueueT = QueueReference>
    Dimensions& WithQueue(QueueT&& value) { SetQueue(std::forward<QueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel used for grouping and filters.</p>
     */
    inline Channel GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(Channel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline Dimensions& WithChannel(Channel value) { SetChannel(value); return *this;}
    ///@}

    ///@{
    
    inline const RoutingProfileReference& GetRoutingProfile() const { return m_routingProfile; }
    inline bool RoutingProfileHasBeenSet() const { return m_routingProfileHasBeenSet; }
    template<typename RoutingProfileT = RoutingProfileReference>
    void SetRoutingProfile(RoutingProfileT&& value) { m_routingProfileHasBeenSet = true; m_routingProfile = std::forward<RoutingProfileT>(value); }
    template<typename RoutingProfileT = RoutingProfileReference>
    Dimensions& WithRoutingProfile(RoutingProfileT&& value) { SetRoutingProfile(std::forward<RoutingProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression of a step in a routing criteria.</p>
     */
    inline const Aws::String& GetRoutingStepExpression() const { return m_routingStepExpression; }
    inline bool RoutingStepExpressionHasBeenSet() const { return m_routingStepExpressionHasBeenSet; }
    template<typename RoutingStepExpressionT = Aws::String>
    void SetRoutingStepExpression(RoutingStepExpressionT&& value) { m_routingStepExpressionHasBeenSet = true; m_routingStepExpression = std::forward<RoutingStepExpressionT>(value); }
    template<typename RoutingStepExpressionT = Aws::String>
    Dimensions& WithRoutingStepExpression(RoutingStepExpressionT&& value) { SetRoutingStepExpression(std::forward<RoutingStepExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the agent status assigned to the user.</p>
     */
    inline const AgentStatusIdentifier& GetAgentStatus() const { return m_agentStatus; }
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }
    template<typename AgentStatusT = AgentStatusIdentifier>
    void SetAgentStatus(AgentStatusT&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::forward<AgentStatusT>(value); }
    template<typename AgentStatusT = AgentStatusIdentifier>
    Dimensions& WithAgentStatus(AgentStatusT&& value) { SetAgentStatus(std::forward<AgentStatusT>(value)); return *this;}
    ///@}
  private:

    QueueReference m_queue;
    bool m_queueHasBeenSet = false;

    Channel m_channel{Channel::NOT_SET};
    bool m_channelHasBeenSet = false;

    RoutingProfileReference m_routingProfile;
    bool m_routingProfileHasBeenSet = false;

    Aws::String m_routingStepExpression;
    bool m_routingStepExpressionHasBeenSet = false;

    AgentStatusIdentifier m_agentStatus;
    bool m_agentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
