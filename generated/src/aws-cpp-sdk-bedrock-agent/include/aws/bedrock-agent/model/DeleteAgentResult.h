/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentStatus.h>
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
namespace BedrockAgent
{
namespace Model
{
  class DeleteAgentResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteAgentResult();
    AWS_BEDROCKAGENT_API DeleteAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the agent that was deleted.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent that was deleted.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentId = value; }

    /**
     * <p>The unique identifier of the agent that was deleted.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent that was deleted.</p>
     */
    inline void SetAgentId(const char* value) { m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent that was deleted.</p>
     */
    inline DeleteAgentResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent that was deleted.</p>
     */
    inline DeleteAgentResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent that was deleted.</p>
     */
    inline DeleteAgentResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The status of the agent.</p>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    /**
     * <p>The status of the agent.</p>
     */
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatus = value; }

    /**
     * <p>The status of the agent.</p>
     */
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatus = std::move(value); }

    /**
     * <p>The status of the agent.</p>
     */
    inline DeleteAgentResult& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    /**
     * <p>The status of the agent.</p>
     */
    inline DeleteAgentResult& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAgentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAgentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAgentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_agentId;

    AgentStatus m_agentStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
