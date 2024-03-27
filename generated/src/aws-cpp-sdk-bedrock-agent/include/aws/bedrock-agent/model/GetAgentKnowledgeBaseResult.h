/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentKnowledgeBase.h>
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
namespace BedrockAgent
{
namespace Model
{
  class GetAgentKnowledgeBaseResult
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentKnowledgeBaseResult();
    AWS_BEDROCKAGENT_API GetAgentKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetAgentKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about a knowledge base attached to an agent.</p>
     */
    inline const AgentKnowledgeBase& GetAgentKnowledgeBase() const{ return m_agentKnowledgeBase; }

    /**
     * <p>Contains details about a knowledge base attached to an agent.</p>
     */
    inline void SetAgentKnowledgeBase(const AgentKnowledgeBase& value) { m_agentKnowledgeBase = value; }

    /**
     * <p>Contains details about a knowledge base attached to an agent.</p>
     */
    inline void SetAgentKnowledgeBase(AgentKnowledgeBase&& value) { m_agentKnowledgeBase = std::move(value); }

    /**
     * <p>Contains details about a knowledge base attached to an agent.</p>
     */
    inline GetAgentKnowledgeBaseResult& WithAgentKnowledgeBase(const AgentKnowledgeBase& value) { SetAgentKnowledgeBase(value); return *this;}

    /**
     * <p>Contains details about a knowledge base attached to an agent.</p>
     */
    inline GetAgentKnowledgeBaseResult& WithAgentKnowledgeBase(AgentKnowledgeBase&& value) { SetAgentKnowledgeBase(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAgentKnowledgeBaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAgentKnowledgeBaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAgentKnowledgeBaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AgentKnowledgeBase m_agentKnowledgeBase;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
