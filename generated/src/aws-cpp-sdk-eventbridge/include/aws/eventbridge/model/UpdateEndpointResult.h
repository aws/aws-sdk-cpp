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
#include <aws/eventbridge/model/EndpointEventBus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EventBridge
{
namespace Model
{
  class UpdateEndpointResult
  {
  public:
    AWS_EVENTBRIDGE_API UpdateEndpointResult() = default;
    AWS_EVENTBRIDGE_API UpdateEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API UpdateEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the endpoint you updated in this request.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEndpointResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the endpoint you updated in this request.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateEndpointResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing configuration you updated in this request.</p>
     */
    inline const RoutingConfig& GetRoutingConfig() const { return m_routingConfig; }
    template<typename RoutingConfigT = RoutingConfig>
    void SetRoutingConfig(RoutingConfigT&& value) { m_routingConfigHasBeenSet = true; m_routingConfig = std::forward<RoutingConfigT>(value); }
    template<typename RoutingConfigT = RoutingConfig>
    UpdateEndpointResult& WithRoutingConfig(RoutingConfigT&& value) { SetRoutingConfig(std::forward<RoutingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether event replication was enabled or disabled for the endpoint you
     * updated in this request.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const { return m_replicationConfig; }
    template<typename ReplicationConfigT = ReplicationConfig>
    void SetReplicationConfig(ReplicationConfigT&& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = std::forward<ReplicationConfigT>(value); }
    template<typename ReplicationConfigT = ReplicationConfig>
    UpdateEndpointResult& WithReplicationConfig(ReplicationConfigT&& value) { SetReplicationConfig(std::forward<ReplicationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event buses used for replication for the endpoint you updated in this
     * request.</p>
     */
    inline const Aws::Vector<EndpointEventBus>& GetEventBuses() const { return m_eventBuses; }
    template<typename EventBusesT = Aws::Vector<EndpointEventBus>>
    void SetEventBuses(EventBusesT&& value) { m_eventBusesHasBeenSet = true; m_eventBuses = std::forward<EventBusesT>(value); }
    template<typename EventBusesT = Aws::Vector<EndpointEventBus>>
    UpdateEndpointResult& WithEventBuses(EventBusesT&& value) { SetEventBuses(std::forward<EventBusesT>(value)); return *this;}
    template<typename EventBusesT = EndpointEventBus>
    UpdateEndpointResult& AddEventBuses(EventBusesT&& value) { m_eventBusesHasBeenSet = true; m_eventBuses.emplace_back(std::forward<EventBusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by event replication for the endpoint you updated in
     * this request.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateEndpointResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint you updated in this request.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    UpdateEndpointResult& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the endpoint you updated in this request.</p>
     */
    inline const Aws::String& GetEndpointUrl() const { return m_endpointUrl; }
    template<typename EndpointUrlT = Aws::String>
    void SetEndpointUrl(EndpointUrlT&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::forward<EndpointUrlT>(value); }
    template<typename EndpointUrlT = Aws::String>
    UpdateEndpointResult& WithEndpointUrl(EndpointUrlT&& value) { SetEndpointUrl(std::forward<EndpointUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the endpoint you updated in this request.</p>
     */
    inline EndpointState GetState() const { return m_state; }
    inline void SetState(EndpointState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateEndpointResult& WithState(EndpointState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    EndpointState m_state{EndpointState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
