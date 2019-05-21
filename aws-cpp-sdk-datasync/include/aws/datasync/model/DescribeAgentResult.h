/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AgentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/EndpointOptions.h>
#include <aws/datasync/model/PrivateLinkConfig.h>
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
  class AWS_DATASYNC_API DescribeAgentResult
  {
  public:
    DescribeAgentResult();
    DescribeAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline void SetAgentArn(const Aws::String& value) { m_agentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline void SetAgentArn(Aws::String&& value) { m_agentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline void SetAgentArn(const char* value) { m_agentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline DescribeAgentResult& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline DescribeAgentResult& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
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
     * <p>The status of the agent. If the status is ONLINE, then the agent is
     * configured properly and is available to use. The Running status is the normal
     * running status for an agent. If the status is OFFLINE, the agent's VM is turned
     * off or the agent is in an unhealthy state. When the issue that caused the
     * unhealthy state is resolved, the agent returns to ONLINE status.</p>
     */
    inline const AgentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the agent. If the status is ONLINE, then the agent is
     * configured properly and is available to use. The Running status is the normal
     * running status for an agent. If the status is OFFLINE, the agent's VM is turned
     * off or the agent is in an unhealthy state. When the issue that caused the
     * unhealthy state is resolved, the agent returns to ONLINE status.</p>
     */
    inline void SetStatus(const AgentStatus& value) { m_status = value; }

    /**
     * <p>The status of the agent. If the status is ONLINE, then the agent is
     * configured properly and is available to use. The Running status is the normal
     * running status for an agent. If the status is OFFLINE, the agent's VM is turned
     * off or the agent is in an unhealthy state. When the issue that caused the
     * unhealthy state is resolved, the agent returns to ONLINE status.</p>
     */
    inline void SetStatus(AgentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the agent. If the status is ONLINE, then the agent is
     * configured properly and is available to use. The Running status is the normal
     * running status for an agent. If the status is OFFLINE, the agent's VM is turned
     * off or the agent is in an unhealthy state. When the issue that caused the
     * unhealthy state is resolved, the agent returns to ONLINE status.</p>
     */
    inline DescribeAgentResult& WithStatus(const AgentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the agent. If the status is ONLINE, then the agent is
     * configured properly and is available to use. The Running status is the normal
     * running status for an agent. If the status is OFFLINE, the agent's VM is turned
     * off or the agent is in an unhealthy state. When the issue that caused the
     * unhealthy state is resolved, the agent returns to ONLINE status.</p>
     */
    inline DescribeAgentResult& WithStatus(AgentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time that the agent last connected to DataSyc.</p>
     */
    inline const Aws::Utils::DateTime& GetLastConnectionTime() const{ return m_lastConnectionTime; }

    /**
     * <p>The time that the agent last connected to DataSyc.</p>
     */
    inline void SetLastConnectionTime(const Aws::Utils::DateTime& value) { m_lastConnectionTime = value; }

    /**
     * <p>The time that the agent last connected to DataSyc.</p>
     */
    inline void SetLastConnectionTime(Aws::Utils::DateTime&& value) { m_lastConnectionTime = std::move(value); }

    /**
     * <p>The time that the agent last connected to DataSyc.</p>
     */
    inline DescribeAgentResult& WithLastConnectionTime(const Aws::Utils::DateTime& value) { SetLastConnectionTime(value); return *this;}

    /**
     * <p>The time that the agent last connected to DataSyc.</p>
     */
    inline DescribeAgentResult& WithLastConnectionTime(Aws::Utils::DateTime&& value) { SetLastConnectionTime(std::move(value)); return *this;}


    /**
     * <p>The time that the agent was activated (that is, created in your account).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the agent was activated (that is, created in your account).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the agent was activated (that is, created in your account).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the agent was activated (that is, created in your account).</p>
     */
    inline DescribeAgentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the agent was activated (that is, created in your account).</p>
     */
    inline DescribeAgentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const EndpointOptions& GetEndpointOptions() const{ return m_endpointOptions; }

    
    inline void SetEndpointOptions(const EndpointOptions& value) { m_endpointOptions = value; }

    
    inline void SetEndpointOptions(EndpointOptions&& value) { m_endpointOptions = std::move(value); }

    
    inline DescribeAgentResult& WithEndpointOptions(const EndpointOptions& value) { SetEndpointOptions(value); return *this;}

    
    inline DescribeAgentResult& WithEndpointOptions(EndpointOptions&& value) { SetEndpointOptions(std::move(value)); return *this;}


    
    inline const PrivateLinkConfig& GetPrivateLinkConfig() const{ return m_privateLinkConfig; }

    
    inline void SetPrivateLinkConfig(const PrivateLinkConfig& value) { m_privateLinkConfig = value; }

    
    inline void SetPrivateLinkConfig(PrivateLinkConfig&& value) { m_privateLinkConfig = std::move(value); }

    
    inline DescribeAgentResult& WithPrivateLinkConfig(const PrivateLinkConfig& value) { SetPrivateLinkConfig(value); return *this;}

    
    inline DescribeAgentResult& WithPrivateLinkConfig(PrivateLinkConfig&& value) { SetPrivateLinkConfig(std::move(value)); return *this;}

  private:

    Aws::String m_agentArn;

    Aws::String m_name;

    AgentStatus m_status;

    Aws::Utils::DateTime m_lastConnectionTime;

    Aws::Utils::DateTime m_creationTime;

    EndpointOptions m_endpointOptions;

    PrivateLinkConfig m_privateLinkConfig;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
