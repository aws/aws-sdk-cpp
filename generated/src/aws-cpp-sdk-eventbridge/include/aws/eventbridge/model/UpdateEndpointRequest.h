/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/RoutingConfig.h>
#include <aws/eventbridge/model/ReplicationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/EndpointEventBus.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class UpdateEndpointRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API UpdateEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpoint"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEndpointRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the endpoint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateEndpointRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure the routing policy, including the health check and secondary
     * Region.</p>
     */
    inline const RoutingConfig& GetRoutingConfig() const { return m_routingConfig; }
    inline bool RoutingConfigHasBeenSet() const { return m_routingConfigHasBeenSet; }
    template<typename RoutingConfigT = RoutingConfig>
    void SetRoutingConfig(RoutingConfigT&& value) { m_routingConfigHasBeenSet = true; m_routingConfig = std::forward<RoutingConfigT>(value); }
    template<typename RoutingConfigT = RoutingConfig>
    UpdateEndpointRequest& WithRoutingConfig(RoutingConfigT&& value) { SetRoutingConfig(std::forward<RoutingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const { return m_replicationConfig; }
    inline bool ReplicationConfigHasBeenSet() const { return m_replicationConfigHasBeenSet; }
    template<typename ReplicationConfigT = ReplicationConfig>
    void SetReplicationConfig(ReplicationConfigT&& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = std::forward<ReplicationConfigT>(value); }
    template<typename ReplicationConfigT = ReplicationConfig>
    UpdateEndpointRequest& WithReplicationConfig(ReplicationConfigT&& value) { SetReplicationConfig(std::forward<ReplicationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define event buses used for replication.</p>
     */
    inline const Aws::Vector<EndpointEventBus>& GetEventBuses() const { return m_eventBuses; }
    inline bool EventBusesHasBeenSet() const { return m_eventBusesHasBeenSet; }
    template<typename EventBusesT = Aws::Vector<EndpointEventBus>>
    void SetEventBuses(EventBusesT&& value) { m_eventBusesHasBeenSet = true; m_eventBuses = std::forward<EventBusesT>(value); }
    template<typename EventBusesT = Aws::Vector<EndpointEventBus>>
    UpdateEndpointRequest& WithEventBuses(EventBusesT&& value) { SetEventBuses(std::forward<EventBusesT>(value)); return *this;}
    template<typename EventBusesT = EndpointEventBus>
    UpdateEndpointRequest& AddEventBuses(EventBusesT&& value) { m_eventBusesHasBeenSet = true; m_eventBuses.emplace_back(std::forward<EventBusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateEndpointRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RoutingConfig m_routingConfig;
    bool m_routingConfigHasBeenSet = false;

    ReplicationConfig m_replicationConfig;
    bool m_replicationConfigHasBeenSet = false;

    Aws::Vector<EndpointEventBus> m_eventBuses;
    bool m_eventBusesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
