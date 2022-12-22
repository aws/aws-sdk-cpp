/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/RoutingConfig.h>
#include <aws/eventbridge/model/ReplicationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/EndpointState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eventbridge/model/EndpointEventBus.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>An global endpoint used to improve your application's availability by making
   * it regional-fault tolerant. For more information about global endpoints, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-global-endpoints.html">Making
   * applications Regional-fault tolerant with global endpoints and event
   * replication</a> in the Amazon EventBridge User Guide..</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_EVENTBRIDGE_API Endpoint();
    AWS_EVENTBRIDGE_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithName(const char* value) { SetName(value); return *this;}


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
    inline Endpoint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the endpoint.</p>
     */
    inline Endpoint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the endpoint.</p>
     */
    inline Endpoint& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline Endpoint& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline Endpoint& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline Endpoint& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The routing configuration of the endpoint.</p>
     */
    inline const RoutingConfig& GetRoutingConfig() const{ return m_routingConfig; }

    /**
     * <p>The routing configuration of the endpoint.</p>
     */
    inline bool RoutingConfigHasBeenSet() const { return m_routingConfigHasBeenSet; }

    /**
     * <p>The routing configuration of the endpoint.</p>
     */
    inline void SetRoutingConfig(const RoutingConfig& value) { m_routingConfigHasBeenSet = true; m_routingConfig = value; }

    /**
     * <p>The routing configuration of the endpoint.</p>
     */
    inline void SetRoutingConfig(RoutingConfig&& value) { m_routingConfigHasBeenSet = true; m_routingConfig = std::move(value); }

    /**
     * <p>The routing configuration of the endpoint.</p>
     */
    inline Endpoint& WithRoutingConfig(const RoutingConfig& value) { SetRoutingConfig(value); return *this;}

    /**
     * <p>The routing configuration of the endpoint.</p>
     */
    inline Endpoint& WithRoutingConfig(RoutingConfig&& value) { SetRoutingConfig(std::move(value)); return *this;}


    /**
     * <p>Whether event replication was enabled or disabled for this endpoint.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const{ return m_replicationConfig; }

    /**
     * <p>Whether event replication was enabled or disabled for this endpoint.</p>
     */
    inline bool ReplicationConfigHasBeenSet() const { return m_replicationConfigHasBeenSet; }

    /**
     * <p>Whether event replication was enabled or disabled for this endpoint.</p>
     */
    inline void SetReplicationConfig(const ReplicationConfig& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = value; }

    /**
     * <p>Whether event replication was enabled or disabled for this endpoint.</p>
     */
    inline void SetReplicationConfig(ReplicationConfig&& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = std::move(value); }

    /**
     * <p>Whether event replication was enabled or disabled for this endpoint.</p>
     */
    inline Endpoint& WithReplicationConfig(const ReplicationConfig& value) { SetReplicationConfig(value); return *this;}

    /**
     * <p>Whether event replication was enabled or disabled for this endpoint.</p>
     */
    inline Endpoint& WithReplicationConfig(ReplicationConfig&& value) { SetReplicationConfig(std::move(value)); return *this;}


    /**
     * <p>The event buses being used by the endpoint.</p>
     */
    inline const Aws::Vector<EndpointEventBus>& GetEventBuses() const{ return m_eventBuses; }

    /**
     * <p>The event buses being used by the endpoint.</p>
     */
    inline bool EventBusesHasBeenSet() const { return m_eventBusesHasBeenSet; }

    /**
     * <p>The event buses being used by the endpoint.</p>
     */
    inline void SetEventBuses(const Aws::Vector<EndpointEventBus>& value) { m_eventBusesHasBeenSet = true; m_eventBuses = value; }

    /**
     * <p>The event buses being used by the endpoint.</p>
     */
    inline void SetEventBuses(Aws::Vector<EndpointEventBus>&& value) { m_eventBusesHasBeenSet = true; m_eventBuses = std::move(value); }

    /**
     * <p>The event buses being used by the endpoint.</p>
     */
    inline Endpoint& WithEventBuses(const Aws::Vector<EndpointEventBus>& value) { SetEventBuses(value); return *this;}

    /**
     * <p>The event buses being used by the endpoint.</p>
     */
    inline Endpoint& WithEventBuses(Aws::Vector<EndpointEventBus>&& value) { SetEventBuses(std::move(value)); return *this;}

    /**
     * <p>The event buses being used by the endpoint.</p>
     */
    inline Endpoint& AddEventBuses(const EndpointEventBus& value) { m_eventBusesHasBeenSet = true; m_eventBuses.push_back(value); return *this; }

    /**
     * <p>The event buses being used by the endpoint.</p>
     */
    inline Endpoint& AddEventBuses(EndpointEventBus&& value) { m_eventBusesHasBeenSet = true; m_eventBuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the role used by event replication for the endpoint.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role used by event replication for the endpoint.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role used by event replication for the endpoint.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role used by event replication for the endpoint.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role used by event replication for the endpoint.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role used by event replication for the endpoint.</p>
     */
    inline Endpoint& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role used by event replication for the endpoint.</p>
     */
    inline Endpoint& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role used by event replication for the endpoint.</p>
     */
    inline Endpoint& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline Endpoint& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline Endpoint& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline Endpoint& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>The URL of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointUrl() const{ return m_endpointUrl; }

    /**
     * <p>The URL of the endpoint.</p>
     */
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }

    /**
     * <p>The URL of the endpoint.</p>
     */
    inline void SetEndpointUrl(const Aws::String& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = value; }

    /**
     * <p>The URL of the endpoint.</p>
     */
    inline void SetEndpointUrl(Aws::String&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::move(value); }

    /**
     * <p>The URL of the endpoint.</p>
     */
    inline void SetEndpointUrl(const char* value) { m_endpointUrlHasBeenSet = true; m_endpointUrl.assign(value); }

    /**
     * <p>The URL of the endpoint.</p>
     */
    inline Endpoint& WithEndpointUrl(const Aws::String& value) { SetEndpointUrl(value); return *this;}

    /**
     * <p>The URL of the endpoint.</p>
     */
    inline Endpoint& WithEndpointUrl(Aws::String&& value) { SetEndpointUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the endpoint.</p>
     */
    inline Endpoint& WithEndpointUrl(const char* value) { SetEndpointUrl(value); return *this;}


    /**
     * <p>The current state of the endpoint.</p>
     */
    inline const EndpointState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the endpoint.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the endpoint.</p>
     */
    inline void SetState(const EndpointState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the endpoint.</p>
     */
    inline void SetState(EndpointState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the endpoint.</p>
     */
    inline Endpoint& WithState(const EndpointState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the endpoint.</p>
     */
    inline Endpoint& WithState(EndpointState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason the endpoint is in its current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason the endpoint is in its current state.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>The reason the endpoint is in its current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>The reason the endpoint is in its current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>The reason the endpoint is in its current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>The reason the endpoint is in its current state.</p>
     */
    inline Endpoint& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason the endpoint is in its current state.</p>
     */
    inline Endpoint& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason the endpoint is in its current state.</p>
     */
    inline Endpoint& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The time the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline Endpoint& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline Endpoint& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline Endpoint& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline Endpoint& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    RoutingConfig m_routingConfig;
    bool m_routingConfigHasBeenSet = false;

    ReplicationConfig m_replicationConfig;
    bool m_replicationConfigHasBeenSet = false;

    Aws::Vector<EndpointEventBus> m_eventBuses;
    bool m_eventBusesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_endpointUrl;
    bool m_endpointUrlHasBeenSet = false;

    EndpointState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
