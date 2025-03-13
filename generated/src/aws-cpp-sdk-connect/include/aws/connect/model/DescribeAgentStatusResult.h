/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AgentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{
  class DescribeAgentStatusResult
  {
  public:
    AWS_CONNECT_API DescribeAgentStatusResult() = default;
    AWS_CONNECT_API DescribeAgentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeAgentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The agent status.</p>
     */
    inline const AgentStatus& GetAgentStatus() const { return m_agentStatus; }
    template<typename AgentStatusT = AgentStatus>
    void SetAgentStatus(AgentStatusT&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::forward<AgentStatusT>(value); }
    template<typename AgentStatusT = AgentStatus>
    DescribeAgentStatusResult& WithAgentStatus(AgentStatusT&& value) { SetAgentStatus(std::forward<AgentStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAgentStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AgentStatus m_agentStatus;
    bool m_agentStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
