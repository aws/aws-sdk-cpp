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
    AWS_EVENTBRIDGE_API UpdateEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpoint"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline UpdateEndpointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline UpdateEndpointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint you want to update.</p>
     */
    inline UpdateEndpointRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the endpoint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the endpoint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the endpoint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the endpoint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the endpoint.</p>
     */
    inline UpdateEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the endpoint.</p>
     */
    inline UpdateEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the endpoint.</p>
     */
    inline UpdateEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configure the routing policy, including the health check and secondary
     * Region..</p>
     */
    inline const RoutingConfig& GetRoutingConfig() const{ return m_routingConfig; }

    /**
     * <p>Configure the routing policy, including the health check and secondary
     * Region..</p>
     */
    inline bool RoutingConfigHasBeenSet() const { return m_routingConfigHasBeenSet; }

    /**
     * <p>Configure the routing policy, including the health check and secondary
     * Region..</p>
     */
    inline void SetRoutingConfig(const RoutingConfig& value) { m_routingConfigHasBeenSet = true; m_routingConfig = value; }

    /**
     * <p>Configure the routing policy, including the health check and secondary
     * Region..</p>
     */
    inline void SetRoutingConfig(RoutingConfig&& value) { m_routingConfigHasBeenSet = true; m_routingConfig = std::move(value); }

    /**
     * <p>Configure the routing policy, including the health check and secondary
     * Region..</p>
     */
    inline UpdateEndpointRequest& WithRoutingConfig(const RoutingConfig& value) { SetRoutingConfig(value); return *this;}

    /**
     * <p>Configure the routing policy, including the health check and secondary
     * Region..</p>
     */
    inline UpdateEndpointRequest& WithRoutingConfig(RoutingConfig&& value) { SetRoutingConfig(std::move(value)); return *this;}


    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const{ return m_replicationConfig; }

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline bool ReplicationConfigHasBeenSet() const { return m_replicationConfigHasBeenSet; }

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline void SetReplicationConfig(const ReplicationConfig& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = value; }

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline void SetReplicationConfig(ReplicationConfig&& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = std::move(value); }

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline UpdateEndpointRequest& WithReplicationConfig(const ReplicationConfig& value) { SetReplicationConfig(value); return *this;}

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline UpdateEndpointRequest& WithReplicationConfig(ReplicationConfig&& value) { SetReplicationConfig(std::move(value)); return *this;}


    /**
     * <p>Define event buses used for replication.</p>
     */
    inline const Aws::Vector<EndpointEventBus>& GetEventBuses() const{ return m_eventBuses; }

    /**
     * <p>Define event buses used for replication.</p>
     */
    inline bool EventBusesHasBeenSet() const { return m_eventBusesHasBeenSet; }

    /**
     * <p>Define event buses used for replication.</p>
     */
    inline void SetEventBuses(const Aws::Vector<EndpointEventBus>& value) { m_eventBusesHasBeenSet = true; m_eventBuses = value; }

    /**
     * <p>Define event buses used for replication.</p>
     */
    inline void SetEventBuses(Aws::Vector<EndpointEventBus>&& value) { m_eventBusesHasBeenSet = true; m_eventBuses = std::move(value); }

    /**
     * <p>Define event buses used for replication.</p>
     */
    inline UpdateEndpointRequest& WithEventBuses(const Aws::Vector<EndpointEventBus>& value) { SetEventBuses(value); return *this;}

    /**
     * <p>Define event buses used for replication.</p>
     */
    inline UpdateEndpointRequest& WithEventBuses(Aws::Vector<EndpointEventBus>&& value) { SetEventBuses(std::move(value)); return *this;}

    /**
     * <p>Define event buses used for replication.</p>
     */
    inline UpdateEndpointRequest& AddEventBuses(const EndpointEventBus& value) { m_eventBusesHasBeenSet = true; m_eventBuses.push_back(value); return *this; }

    /**
     * <p>Define event buses used for replication.</p>
     */
    inline UpdateEndpointRequest& AddEventBuses(EndpointEventBus&& value) { m_eventBusesHasBeenSet = true; m_eventBuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline UpdateEndpointRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline UpdateEndpointRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline UpdateEndpointRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

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
