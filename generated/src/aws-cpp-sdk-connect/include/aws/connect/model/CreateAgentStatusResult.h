/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class CreateAgentStatusResult
  {
  public:
    AWS_CONNECT_API CreateAgentStatusResult() = default;
    AWS_CONNECT_API CreateAgentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateAgentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusARN() const { return m_agentStatusARN; }
    template<typename AgentStatusARNT = Aws::String>
    void SetAgentStatusARN(AgentStatusARNT&& value) { m_agentStatusARNHasBeenSet = true; m_agentStatusARN = std::forward<AgentStatusARNT>(value); }
    template<typename AgentStatusARNT = Aws::String>
    CreateAgentStatusResult& WithAgentStatusARN(AgentStatusARNT&& value) { SetAgentStatusARN(std::forward<AgentStatusARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusId() const { return m_agentStatusId; }
    template<typename AgentStatusIdT = Aws::String>
    void SetAgentStatusId(AgentStatusIdT&& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = std::forward<AgentStatusIdT>(value); }
    template<typename AgentStatusIdT = Aws::String>
    CreateAgentStatusResult& WithAgentStatusId(AgentStatusIdT&& value) { SetAgentStatusId(std::forward<AgentStatusIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAgentStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentStatusARN;
    bool m_agentStatusARNHasBeenSet = false;

    Aws::String m_agentStatusId;
    bool m_agentStatusIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
