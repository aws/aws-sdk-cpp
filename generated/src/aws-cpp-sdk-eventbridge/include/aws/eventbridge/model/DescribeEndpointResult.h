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
  class DescribeEndpointResult
  {
  public:
    AWS_EVENTBRIDGE_API DescribeEndpointResult();
    AWS_EVENTBRIDGE_API DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the endpoint you asked for information about.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the endpoint you asked for information about.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the endpoint you asked for information about.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the endpoint you asked for information about.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the endpoint you asked for information about.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the endpoint you asked for information about.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the endpoint you asked for information about.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the endpoint you asked for information about.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the endpoint you asked for information about.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the endpoint you asked for information about.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the endpoint you asked for information about.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the endpoint you asked for information about.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The routing configuration of the endpoint you asked for information
     * about.</p>
     */
    inline const RoutingConfig& GetRoutingConfig() const{ return m_routingConfig; }

    /**
     * <p>The routing configuration of the endpoint you asked for information
     * about.</p>
     */
    inline void SetRoutingConfig(const RoutingConfig& value) { m_routingConfig = value; }

    /**
     * <p>The routing configuration of the endpoint you asked for information
     * about.</p>
     */
    inline void SetRoutingConfig(RoutingConfig&& value) { m_routingConfig = std::move(value); }

    /**
     * <p>The routing configuration of the endpoint you asked for information
     * about.</p>
     */
    inline DescribeEndpointResult& WithRoutingConfig(const RoutingConfig& value) { SetRoutingConfig(value); return *this;}

    /**
     * <p>The routing configuration of the endpoint you asked for information
     * about.</p>
     */
    inline DescribeEndpointResult& WithRoutingConfig(RoutingConfig&& value) { SetRoutingConfig(std::move(value)); return *this;}


    /**
     * <p>Whether replication is enabled or disabled for the endpoint you asked for
     * information about.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const{ return m_replicationConfig; }

    /**
     * <p>Whether replication is enabled or disabled for the endpoint you asked for
     * information about.</p>
     */
    inline void SetReplicationConfig(const ReplicationConfig& value) { m_replicationConfig = value; }

    /**
     * <p>Whether replication is enabled or disabled for the endpoint you asked for
     * information about.</p>
     */
    inline void SetReplicationConfig(ReplicationConfig&& value) { m_replicationConfig = std::move(value); }

    /**
     * <p>Whether replication is enabled or disabled for the endpoint you asked for
     * information about.</p>
     */
    inline DescribeEndpointResult& WithReplicationConfig(const ReplicationConfig& value) { SetReplicationConfig(value); return *this;}

    /**
     * <p>Whether replication is enabled or disabled for the endpoint you asked for
     * information about.</p>
     */
    inline DescribeEndpointResult& WithReplicationConfig(ReplicationConfig&& value) { SetReplicationConfig(std::move(value)); return *this;}


    /**
     * <p>The event buses being used by the endpoint you asked for information
     * about.</p>
     */
    inline const Aws::Vector<EndpointEventBus>& GetEventBuses() const{ return m_eventBuses; }

    /**
     * <p>The event buses being used by the endpoint you asked for information
     * about.</p>
     */
    inline void SetEventBuses(const Aws::Vector<EndpointEventBus>& value) { m_eventBuses = value; }

    /**
     * <p>The event buses being used by the endpoint you asked for information
     * about.</p>
     */
    inline void SetEventBuses(Aws::Vector<EndpointEventBus>&& value) { m_eventBuses = std::move(value); }

    /**
     * <p>The event buses being used by the endpoint you asked for information
     * about.</p>
     */
    inline DescribeEndpointResult& WithEventBuses(const Aws::Vector<EndpointEventBus>& value) { SetEventBuses(value); return *this;}

    /**
     * <p>The event buses being used by the endpoint you asked for information
     * about.</p>
     */
    inline DescribeEndpointResult& WithEventBuses(Aws::Vector<EndpointEventBus>&& value) { SetEventBuses(std::move(value)); return *this;}

    /**
     * <p>The event buses being used by the endpoint you asked for information
     * about.</p>
     */
    inline DescribeEndpointResult& AddEventBuses(const EndpointEventBus& value) { m_eventBuses.push_back(value); return *this; }

    /**
     * <p>The event buses being used by the endpoint you asked for information
     * about.</p>
     */
    inline DescribeEndpointResult& AddEventBuses(EndpointEventBus&& value) { m_eventBuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the role used by the endpoint you asked for information about.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role used by the endpoint you asked for information about.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the role used by the endpoint you asked for information about.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role used by the endpoint you asked for information about.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role used by the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role used by the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role used by the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The ID of the endpoint you asked for information about.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The ID of the endpoint you asked for information about.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointId = value; }

    /**
     * <p>The ID of the endpoint you asked for information about.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointId = std::move(value); }

    /**
     * <p>The ID of the endpoint you asked for information about.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointId.assign(value); }

    /**
     * <p>The ID of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The ID of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>The URL of the endpoint you asked for information about.</p>
     */
    inline const Aws::String& GetEndpointUrl() const{ return m_endpointUrl; }

    /**
     * <p>The URL of the endpoint you asked for information about.</p>
     */
    inline void SetEndpointUrl(const Aws::String& value) { m_endpointUrl = value; }

    /**
     * <p>The URL of the endpoint you asked for information about.</p>
     */
    inline void SetEndpointUrl(Aws::String&& value) { m_endpointUrl = std::move(value); }

    /**
     * <p>The URL of the endpoint you asked for information about.</p>
     */
    inline void SetEndpointUrl(const char* value) { m_endpointUrl.assign(value); }

    /**
     * <p>The URL of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithEndpointUrl(const Aws::String& value) { SetEndpointUrl(value); return *this;}

    /**
     * <p>The URL of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithEndpointUrl(Aws::String&& value) { SetEndpointUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithEndpointUrl(const char* value) { SetEndpointUrl(value); return *this;}


    /**
     * <p>The current state of the endpoint you asked for information about.</p>
     */
    inline const EndpointState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the endpoint you asked for information about.</p>
     */
    inline void SetState(const EndpointState& value) { m_state = value; }

    /**
     * <p>The current state of the endpoint you asked for information about.</p>
     */
    inline void SetState(EndpointState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithState(const EndpointState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the endpoint you asked for information about.</p>
     */
    inline DescribeEndpointResult& WithState(EndpointState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason the endpoint you asked for information about is in its current
     * state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason the endpoint you asked for information about is in its current
     * state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }

    /**
     * <p>The reason the endpoint you asked for information about is in its current
     * state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }

    /**
     * <p>The reason the endpoint you asked for information about is in its current
     * state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }

    /**
     * <p>The reason the endpoint you asked for information about is in its current
     * state.</p>
     */
    inline DescribeEndpointResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason the endpoint you asked for information about is in its current
     * state.</p>
     */
    inline DescribeEndpointResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason the endpoint you asked for information about is in its current
     * state.</p>
     */
    inline DescribeEndpointResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The time the endpoint you asked for information about was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the endpoint you asked for information about was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the endpoint you asked for information about was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the endpoint you asked for information about was created.</p>
     */
    inline DescribeEndpointResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the endpoint you asked for information about was created.</p>
     */
    inline DescribeEndpointResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the endpoint you asked for information about was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time the endpoint you asked for information about was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The last time the endpoint you asked for information about was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time the endpoint you asked for information about was modified.</p>
     */
    inline DescribeEndpointResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time the endpoint you asked for information about was modified.</p>
     */
    inline DescribeEndpointResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_arn;

    RoutingConfig m_routingConfig;

    ReplicationConfig m_replicationConfig;

    Aws::Vector<EndpointEventBus> m_eventBuses;

    Aws::String m_roleArn;

    Aws::String m_endpointId;

    Aws::String m_endpointUrl;

    EndpointState m_state;

    Aws::String m_stateReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
