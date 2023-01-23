/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AgentStatus.h>
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


    /**
     * <p>The agent status.</p>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    /**
     * <p>The agent status.</p>
     */
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatus = value; }

    /**
     * <p>The agent status.</p>
     */
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatus = std::move(value); }

    /**
     * <p>The agent status.</p>
     */
    inline DescribeAgentStatusResult& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    /**
     * <p>The agent status.</p>
     */
    inline DescribeAgentStatusResult& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}

  private:

    AgentStatus m_agentStatus;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
