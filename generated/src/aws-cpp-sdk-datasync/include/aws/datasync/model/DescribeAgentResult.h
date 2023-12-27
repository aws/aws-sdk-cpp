/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AgentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/EndpointType.h>
#include <aws/datasync/model/PrivateLinkConfig.h>
#include <aws/datasync/model/Platform.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeAgentResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeAgentResponse">AWS
   * API Reference</a></p>
   */
  class DescribeAgentResult
  {
  public:
    AWS_DATASYNC_API DescribeAgentResult();
    AWS_DATASYNC_API DescribeAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the agent.</p>
     */
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }

    /**
     * <p>The ARN of the agent.</p>
     */
    inline void SetAgentArn(const Aws::String& value) { m_agentArn = value; }

    /**
     * <p>The ARN of the agent.</p>
     */
    inline void SetAgentArn(Aws::String&& value) { m_agentArn = std::move(value); }

    /**
     * <p>The ARN of the agent.</p>
     */
    inline void SetAgentArn(const char* value) { m_agentArn.assign(value); }

    /**
     * <p>The ARN of the agent.</p>
     */
    inline DescribeAgentResult& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}

    /**
     * <p>The ARN of the agent.</p>
     */
    inline DescribeAgentResult& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the agent.</p>
     */
    inline DescribeAgentResult& WithAgentArn(const char* value) { SetAgentArn(value); return *this;}


    /**
     * <p>The name of the agent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the agent.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the agent.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the agent.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the agent.</p>
     */
    inline DescribeAgentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the agent.</p>
     */
    inline DescribeAgentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the agent.</p>
     */
    inline DescribeAgentResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the agent.</p> <ul> <li> <p>If the status is
     * <code>ONLINE</code>, the agent is configured properly and ready to use.</p>
     * </li> <li> <p>If the status is <code>OFFLINE</code>, the agent has been out of
     * contact with DataSync for five minutes or longer. This can happen for a few
     * reasons. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-agents.html#troubleshoot-agent-offline">What
     * do I do if my agent is offline?</a> </p> </li> </ul>
     */
    inline const AgentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the agent.</p> <ul> <li> <p>If the status is
     * <code>ONLINE</code>, the agent is configured properly and ready to use.</p>
     * </li> <li> <p>If the status is <code>OFFLINE</code>, the agent has been out of
     * contact with DataSync for five minutes or longer. This can happen for a few
     * reasons. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-agents.html#troubleshoot-agent-offline">What
     * do I do if my agent is offline?</a> </p> </li> </ul>
     */
    inline void SetStatus(const AgentStatus& value) { m_status = value; }

    /**
     * <p>The status of the agent.</p> <ul> <li> <p>If the status is
     * <code>ONLINE</code>, the agent is configured properly and ready to use.</p>
     * </li> <li> <p>If the status is <code>OFFLINE</code>, the agent has been out of
     * contact with DataSync for five minutes or longer. This can happen for a few
     * reasons. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-agents.html#troubleshoot-agent-offline">What
     * do I do if my agent is offline?</a> </p> </li> </ul>
     */
    inline void SetStatus(AgentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the agent.</p> <ul> <li> <p>If the status is
     * <code>ONLINE</code>, the agent is configured properly and ready to use.</p>
     * </li> <li> <p>If the status is <code>OFFLINE</code>, the agent has been out of
     * contact with DataSync for five minutes or longer. This can happen for a few
     * reasons. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-agents.html#troubleshoot-agent-offline">What
     * do I do if my agent is offline?</a> </p> </li> </ul>
     */
    inline DescribeAgentResult& WithStatus(const AgentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the agent.</p> <ul> <li> <p>If the status is
     * <code>ONLINE</code>, the agent is configured properly and ready to use.</p>
     * </li> <li> <p>If the status is <code>OFFLINE</code>, the agent has been out of
     * contact with DataSync for five minutes or longer. This can happen for a few
     * reasons. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-agents.html#troubleshoot-agent-offline">What
     * do I do if my agent is offline?</a> </p> </li> </ul>
     */
    inline DescribeAgentResult& WithStatus(AgentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The last time that the agent was communicating with the DataSync service.</p>
     */
    inline const Aws::Utils::DateTime& GetLastConnectionTime() const{ return m_lastConnectionTime; }

    /**
     * <p>The last time that the agent was communicating with the DataSync service.</p>
     */
    inline void SetLastConnectionTime(const Aws::Utils::DateTime& value) { m_lastConnectionTime = value; }

    /**
     * <p>The last time that the agent was communicating with the DataSync service.</p>
     */
    inline void SetLastConnectionTime(Aws::Utils::DateTime&& value) { m_lastConnectionTime = std::move(value); }

    /**
     * <p>The last time that the agent was communicating with the DataSync service.</p>
     */
    inline DescribeAgentResult& WithLastConnectionTime(const Aws::Utils::DateTime& value) { SetLastConnectionTime(value); return *this;}

    /**
     * <p>The last time that the agent was communicating with the DataSync service.</p>
     */
    inline DescribeAgentResult& WithLastConnectionTime(Aws::Utils::DateTime&& value) { SetLastConnectionTime(std::move(value)); return *this;}


    /**
     * <p>The time that the agent was <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">activated</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the agent was <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">activated</a>.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the agent was <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">activated</a>.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the agent was <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">activated</a>.</p>
     */
    inline DescribeAgentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the agent was <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">activated</a>.</p>
     */
    inline DescribeAgentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The type of <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html">service
     * endpoint</a> that your agent is connected to.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html">service
     * endpoint</a> that your agent is connected to.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointType = value; }

    /**
     * <p>The type of <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html">service
     * endpoint</a> that your agent is connected to.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointType = std::move(value); }

    /**
     * <p>The type of <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html">service
     * endpoint</a> that your agent is connected to.</p>
     */
    inline DescribeAgentResult& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html">service
     * endpoint</a> that your agent is connected to.</p>
     */
    inline DescribeAgentResult& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The network configuration that the agent uses when connecting to a <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">VPC
     * service endpoint</a>.</p>
     */
    inline const PrivateLinkConfig& GetPrivateLinkConfig() const{ return m_privateLinkConfig; }

    /**
     * <p>The network configuration that the agent uses when connecting to a <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">VPC
     * service endpoint</a>.</p>
     */
    inline void SetPrivateLinkConfig(const PrivateLinkConfig& value) { m_privateLinkConfig = value; }

    /**
     * <p>The network configuration that the agent uses when connecting to a <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">VPC
     * service endpoint</a>.</p>
     */
    inline void SetPrivateLinkConfig(PrivateLinkConfig&& value) { m_privateLinkConfig = std::move(value); }

    /**
     * <p>The network configuration that the agent uses when connecting to a <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">VPC
     * service endpoint</a>.</p>
     */
    inline DescribeAgentResult& WithPrivateLinkConfig(const PrivateLinkConfig& value) { SetPrivateLinkConfig(value); return *this;}

    /**
     * <p>The network configuration that the agent uses when connecting to a <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">VPC
     * service endpoint</a>.</p>
     */
    inline DescribeAgentResult& WithPrivateLinkConfig(PrivateLinkConfig&& value) { SetPrivateLinkConfig(std::move(value)); return *this;}


    /**
     * <p>The platform-related details about the agent, such as the version number.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform-related details about the agent, such as the version number.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platform = value; }

    /**
     * <p>The platform-related details about the agent, such as the version number.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platform = std::move(value); }

    /**
     * <p>The platform-related details about the agent, such as the version number.</p>
     */
    inline DescribeAgentResult& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform-related details about the agent, such as the version number.</p>
     */
    inline DescribeAgentResult& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAgentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAgentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAgentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_agentArn;

    Aws::String m_name;

    AgentStatus m_status;

    Aws::Utils::DateTime m_lastConnectionTime;

    Aws::Utils::DateTime m_creationTime;

    EndpointType m_endpointType;

    PrivateLinkConfig m_privateLinkConfig;

    Platform m_platform;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
