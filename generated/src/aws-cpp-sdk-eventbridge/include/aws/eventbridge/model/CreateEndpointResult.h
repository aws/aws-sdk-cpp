﻿/**
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
  class CreateEndpointResult
  {
  public:
    AWS_EVENTBRIDGE_API CreateEndpointResult();
    AWS_EVENTBRIDGE_API CreateEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API CreateEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the endpoint that was created by this request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the endpoint that was created by this request.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the endpoint that was created by this request.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the endpoint that was created by this request.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the endpoint that was created by this request.</p>
     */
    inline CreateEndpointResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the endpoint that was created by this request.</p>
     */
    inline CreateEndpointResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint that was created by this request.</p>
     */
    inline CreateEndpointResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the endpoint that was created by this request.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the endpoint that was created by this request.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the endpoint that was created by this request.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the endpoint that was created by this request.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the endpoint that was created by this request.</p>
     */
    inline CreateEndpointResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the endpoint that was created by this request.</p>
     */
    inline CreateEndpointResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the endpoint that was created by this request.</p>
     */
    inline CreateEndpointResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The routing configuration defined by this request.</p>
     */
    inline const RoutingConfig& GetRoutingConfig() const{ return m_routingConfig; }

    /**
     * <p>The routing configuration defined by this request.</p>
     */
    inline void SetRoutingConfig(const RoutingConfig& value) { m_routingConfig = value; }

    /**
     * <p>The routing configuration defined by this request.</p>
     */
    inline void SetRoutingConfig(RoutingConfig&& value) { m_routingConfig = std::move(value); }

    /**
     * <p>The routing configuration defined by this request.</p>
     */
    inline CreateEndpointResult& WithRoutingConfig(const RoutingConfig& value) { SetRoutingConfig(value); return *this;}

    /**
     * <p>The routing configuration defined by this request.</p>
     */
    inline CreateEndpointResult& WithRoutingConfig(RoutingConfig&& value) { SetRoutingConfig(std::move(value)); return *this;}


    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const{ return m_replicationConfig; }

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline void SetReplicationConfig(const ReplicationConfig& value) { m_replicationConfig = value; }

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline void SetReplicationConfig(ReplicationConfig&& value) { m_replicationConfig = std::move(value); }

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline CreateEndpointResult& WithReplicationConfig(const ReplicationConfig& value) { SetReplicationConfig(value); return *this;}

    /**
     * <p>Whether event replication was enabled or disabled by this request.</p>
     */
    inline CreateEndpointResult& WithReplicationConfig(ReplicationConfig&& value) { SetReplicationConfig(std::move(value)); return *this;}


    /**
     * <p>The event buses used by this request.</p>
     */
    inline const Aws::Vector<EndpointEventBus>& GetEventBuses() const{ return m_eventBuses; }

    /**
     * <p>The event buses used by this request.</p>
     */
    inline void SetEventBuses(const Aws::Vector<EndpointEventBus>& value) { m_eventBuses = value; }

    /**
     * <p>The event buses used by this request.</p>
     */
    inline void SetEventBuses(Aws::Vector<EndpointEventBus>&& value) { m_eventBuses = std::move(value); }

    /**
     * <p>The event buses used by this request.</p>
     */
    inline CreateEndpointResult& WithEventBuses(const Aws::Vector<EndpointEventBus>& value) { SetEventBuses(value); return *this;}

    /**
     * <p>The event buses used by this request.</p>
     */
    inline CreateEndpointResult& WithEventBuses(Aws::Vector<EndpointEventBus>&& value) { SetEventBuses(std::move(value)); return *this;}

    /**
     * <p>The event buses used by this request.</p>
     */
    inline CreateEndpointResult& AddEventBuses(const EndpointEventBus& value) { m_eventBuses.push_back(value); return *this; }

    /**
     * <p>The event buses used by this request.</p>
     */
    inline CreateEndpointResult& AddEventBuses(EndpointEventBus&& value) { m_eventBuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline CreateEndpointResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline CreateEndpointResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role used by event replication for this request.</p>
     */
    inline CreateEndpointResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The state of the endpoint that was created by this request.</p>
     */
    inline const EndpointState& GetState() const{ return m_state; }

    /**
     * <p>The state of the endpoint that was created by this request.</p>
     */
    inline void SetState(const EndpointState& value) { m_state = value; }

    /**
     * <p>The state of the endpoint that was created by this request.</p>
     */
    inline void SetState(EndpointState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the endpoint that was created by this request.</p>
     */
    inline CreateEndpointResult& WithState(const EndpointState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the endpoint that was created by this request.</p>
     */
    inline CreateEndpointResult& WithState(EndpointState&& value) { SetState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;

    RoutingConfig m_routingConfig;

    ReplicationConfig m_replicationConfig;

    Aws::Vector<EndpointEventBus> m_eventBuses;

    Aws::String m_roleArn;

    EndpointState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
