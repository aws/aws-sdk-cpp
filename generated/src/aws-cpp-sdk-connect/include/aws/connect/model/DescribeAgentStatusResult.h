﻿/**
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
    AWS_CONNECT_API DescribeAgentStatusResult();
    AWS_CONNECT_API DescribeAgentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeAgentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The agent status.</p>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatus = value; }
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatus = std::move(value); }
    inline DescribeAgentStatusResult& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}
    inline DescribeAgentStatusResult& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAgentStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAgentStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAgentStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AgentStatus m_agentStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
