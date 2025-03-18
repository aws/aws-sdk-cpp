/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AgentAvailabilityTimer.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateRoutingProfileAgentAvailabilityTimerRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateRoutingProfileAgentAvailabilityTimerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingProfileAgentAvailabilityTimer"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateRoutingProfileAgentAvailabilityTimerRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const { return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    template<typename RoutingProfileIdT = Aws::String>
    void SetRoutingProfileId(RoutingProfileIdT&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::forward<RoutingProfileIdT>(value); }
    template<typename RoutingProfileIdT = Aws::String>
    UpdateRoutingProfileAgentAvailabilityTimerRequest& WithRoutingProfileId(RoutingProfileIdT&& value) { SetRoutingProfileId(std::forward<RoutingProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether agents with this routing profile will have their routing order
     * calculated based on <i>time since their last inbound contact</i> or <i>longest
     * idle time</i>. </p>
     */
    inline AgentAvailabilityTimer GetAgentAvailabilityTimer() const { return m_agentAvailabilityTimer; }
    inline bool AgentAvailabilityTimerHasBeenSet() const { return m_agentAvailabilityTimerHasBeenSet; }
    inline void SetAgentAvailabilityTimer(AgentAvailabilityTimer value) { m_agentAvailabilityTimerHasBeenSet = true; m_agentAvailabilityTimer = value; }
    inline UpdateRoutingProfileAgentAvailabilityTimerRequest& WithAgentAvailabilityTimer(AgentAvailabilityTimer value) { SetAgentAvailabilityTimer(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    AgentAvailabilityTimer m_agentAvailabilityTimer{AgentAvailabilityTimer::NOT_SET};
    bool m_agentAvailabilityTimerHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
