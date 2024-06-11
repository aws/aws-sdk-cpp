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
  class CreateEndpointRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API CreateEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpoint"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the global endpoint. For example,
     * <code>"Name":"us-east-2-custom_bus_A-endpoint"</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateEndpointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateEndpointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateEndpointRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the global endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure the routing policy, including the health check and secondary
     * Region..</p>
     */
    inline const RoutingConfig& GetRoutingConfig() const{ return m_routingConfig; }
    inline bool RoutingConfigHasBeenSet() const { return m_routingConfigHasBeenSet; }
    inline void SetRoutingConfig(const RoutingConfig& value) { m_routingConfigHasBeenSet = true; m_routingConfig = value; }
    inline void SetRoutingConfig(RoutingConfig&& value) { m_routingConfigHasBeenSet = true; m_routingConfig = std::move(value); }
    inline CreateEndpointRequest& WithRoutingConfig(const RoutingConfig& value) { SetRoutingConfig(value); return *this;}
    inline CreateEndpointRequest& WithRoutingConfig(RoutingConfig&& value) { SetRoutingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable event replication. The default state is
     * <code>ENABLED</code> which means you must supply a <code>RoleArn</code>. If you
     * don't have a <code>RoleArn</code> or you don't want event replication enabled,
     * set the state to <code>DISABLED</code>.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const{ return m_replicationConfig; }
    inline bool ReplicationConfigHasBeenSet() const { return m_replicationConfigHasBeenSet; }
    inline void SetReplicationConfig(const ReplicationConfig& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = value; }
    inline void SetReplicationConfig(ReplicationConfig&& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = std::move(value); }
    inline CreateEndpointRequest& WithReplicationConfig(const ReplicationConfig& value) { SetReplicationConfig(value); return *this;}
    inline CreateEndpointRequest& WithReplicationConfig(ReplicationConfig&& value) { SetReplicationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the event buses used. </p>  <p>The names of the event buses
     * must be identical in each Region.</p> 
     */
    inline const Aws::Vector<EndpointEventBus>& GetEventBuses() const{ return m_eventBuses; }
    inline bool EventBusesHasBeenSet() const { return m_eventBusesHasBeenSet; }
    inline void SetEventBuses(const Aws::Vector<EndpointEventBus>& value) { m_eventBusesHasBeenSet = true; m_eventBuses = value; }
    inline void SetEventBuses(Aws::Vector<EndpointEventBus>&& value) { m_eventBusesHasBeenSet = true; m_eventBuses = std::move(value); }
    inline CreateEndpointRequest& WithEventBuses(const Aws::Vector<EndpointEventBus>& value) { SetEventBuses(value); return *this;}
    inline CreateEndpointRequest& WithEventBuses(Aws::Vector<EndpointEventBus>&& value) { SetEventBuses(std::move(value)); return *this;}
    inline CreateEndpointRequest& AddEventBuses(const EndpointEventBus& value) { m_eventBusesHasBeenSet = true; m_eventBuses.push_back(value); return *this; }
    inline CreateEndpointRequest& AddEventBuses(EndpointEventBus&& value) { m_eventBusesHasBeenSet = true; m_eventBuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used for replication.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateEndpointRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateEndpointRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateEndpointRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
