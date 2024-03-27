/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentAliasStatus.h>
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
  class DeleteAgentAliasResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteAgentAliasResult();
    AWS_BEDROCKAGENT_API DeleteAgentAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteAgentAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the alias that was deleted.</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    /**
     * <p>The unique identifier of the alias that was deleted.</p>
     */
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasId = value; }

    /**
     * <p>The unique identifier of the alias that was deleted.</p>
     */
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasId = std::move(value); }

    /**
     * <p>The unique identifier of the alias that was deleted.</p>
     */
    inline void SetAgentAliasId(const char* value) { m_agentAliasId.assign(value); }

    /**
     * <p>The unique identifier of the alias that was deleted.</p>
     */
    inline DeleteAgentAliasResult& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    /**
     * <p>The unique identifier of the alias that was deleted.</p>
     */
    inline DeleteAgentAliasResult& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the alias that was deleted.</p>
     */
    inline DeleteAgentAliasResult& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    /**
     * <p>The status of the alias.</p>
     */
    inline const AgentAliasStatus& GetAgentAliasStatus() const{ return m_agentAliasStatus; }

    /**
     * <p>The status of the alias.</p>
     */
    inline void SetAgentAliasStatus(const AgentAliasStatus& value) { m_agentAliasStatus = value; }

    /**
     * <p>The status of the alias.</p>
     */
    inline void SetAgentAliasStatus(AgentAliasStatus&& value) { m_agentAliasStatus = std::move(value); }

    /**
     * <p>The status of the alias.</p>
     */
    inline DeleteAgentAliasResult& WithAgentAliasStatus(const AgentAliasStatus& value) { SetAgentAliasStatus(value); return *this;}

    /**
     * <p>The status of the alias.</p>
     */
    inline DeleteAgentAliasResult& WithAgentAliasStatus(AgentAliasStatus&& value) { SetAgentAliasStatus(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the agent that the alias belongs to.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent that the alias belongs to.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentId = value; }

    /**
     * <p>The unique identifier of the agent that the alias belongs to.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent that the alias belongs to.</p>
     */
    inline void SetAgentId(const char* value) { m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent that the alias belongs to.</p>
     */
    inline DeleteAgentAliasResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent that the alias belongs to.</p>
     */
    inline DeleteAgentAliasResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent that the alias belongs to.</p>
     */
    inline DeleteAgentAliasResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAgentAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAgentAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAgentAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_agentAliasId;

    AgentAliasStatus m_agentAliasStatus;

    Aws::String m_agentId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
