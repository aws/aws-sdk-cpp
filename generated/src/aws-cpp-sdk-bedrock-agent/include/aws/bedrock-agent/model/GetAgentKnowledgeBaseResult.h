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
  /**
   * <p>Get Agent Knowledge Base Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentKnowledgeBaseResponse">AWS
   * API Reference</a></p>
   */
  class GetAgentKnowledgeBaseResult
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentKnowledgeBaseResult();
    AWS_BEDROCKAGENT_API GetAgentKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetAgentKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AgentKnowledgeBase& GetAgentKnowledgeBase() const{ return m_agentKnowledgeBase; }

    
    inline void SetAgentKnowledgeBase(const AgentKnowledgeBase& value) { m_agentKnowledgeBase = value; }

    
    inline void SetAgentKnowledgeBase(AgentKnowledgeBase&& value) { m_agentKnowledgeBase = std::move(value); }

    
    inline GetAgentKnowledgeBaseResult& WithAgentKnowledgeBase(const AgentKnowledgeBase& value) { SetAgentKnowledgeBase(value); return *this;}

    
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
