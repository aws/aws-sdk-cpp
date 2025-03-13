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
    AWS_DATASYNC_API DescribeAgentResult() = default;
    AWS_DATASYNC_API DescribeAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the agent.</p>
     */
    inline const Aws::String& GetAgentArn() const { return m_agentArn; }
    template<typename AgentArnT = Aws::String>
    void SetAgentArn(AgentArnT&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::forward<AgentArnT>(value); }
    template<typename AgentArnT = Aws::String>
    DescribeAgentResult& WithAgentArn(AgentArnT&& value) { SetAgentArn(std::forward<AgentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeAgentResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the agent.</p> <ul> <li> <p>If the status is
     * <code>ONLINE</code>, the agent is configured properly and ready to use.</p>
     * </li> <li> <p>If the status is <code>OFFLINE</code>, the agent has been out of
     * contact with DataSync for five minutes or longer. This can happen for a few
     * reasons. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-agents.html#troubleshoot-agent-offline">What
     * do I do if my agent is offline?</a> </p> </li> </ul>
     */
    inline AgentStatus GetStatus() const { return m_status; }
    inline void SetStatus(AgentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAgentResult& WithStatus(AgentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the agent was communicating with the DataSync service.</p>
     */
    inline const Aws::Utils::DateTime& GetLastConnectionTime() const { return m_lastConnectionTime; }
    template<typename LastConnectionTimeT = Aws::Utils::DateTime>
    void SetLastConnectionTime(LastConnectionTimeT&& value) { m_lastConnectionTimeHasBeenSet = true; m_lastConnectionTime = std::forward<LastConnectionTimeT>(value); }
    template<typename LastConnectionTimeT = Aws::Utils::DateTime>
    DescribeAgentResult& WithLastConnectionTime(LastConnectionTimeT&& value) { SetLastConnectionTime(std::forward<LastConnectionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the agent was <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">activated</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAgentResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html">service
     * endpoint</a> that your agent is connected to.</p>
     */
    inline EndpointType GetEndpointType() const { return m_endpointType; }
    inline void SetEndpointType(EndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline DescribeAgentResult& WithEndpointType(EndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network configuration that the agent uses when connecting to a <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">VPC
     * service endpoint</a>.</p>
     */
    inline const PrivateLinkConfig& GetPrivateLinkConfig() const { return m_privateLinkConfig; }
    template<typename PrivateLinkConfigT = PrivateLinkConfig>
    void SetPrivateLinkConfig(PrivateLinkConfigT&& value) { m_privateLinkConfigHasBeenSet = true; m_privateLinkConfig = std::forward<PrivateLinkConfigT>(value); }
    template<typename PrivateLinkConfigT = PrivateLinkConfig>
    DescribeAgentResult& WithPrivateLinkConfig(PrivateLinkConfigT&& value) { SetPrivateLinkConfig(std::forward<PrivateLinkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform-related details about the agent, such as the version number.</p>
     */
    inline const Platform& GetPlatform() const { return m_platform; }
    template<typename PlatformT = Platform>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Platform>
    DescribeAgentResult& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAgentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AgentStatus m_status{AgentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastConnectionTime{};
    bool m_lastConnectionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    EndpointType m_endpointType{EndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    PrivateLinkConfig m_privateLinkConfig;
    bool m_privateLinkConfigHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
