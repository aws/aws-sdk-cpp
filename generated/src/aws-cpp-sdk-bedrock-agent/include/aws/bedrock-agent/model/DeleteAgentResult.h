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
  /**
   * <p>Delete Agent Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentResponse">AWS
   * API Reference</a></p>
   */
  class DeleteAgentResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteAgentResult();
    AWS_BEDROCKAGENT_API DeleteAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    
    inline void SetAgentId(const Aws::String& value) { m_agentId = value; }

    
    inline void SetAgentId(Aws::String&& value) { m_agentId = std::move(value); }

    
    inline void SetAgentId(const char* value) { m_agentId.assign(value); }

    
    inline DeleteAgentResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    
    inline DeleteAgentResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    
    inline DeleteAgentResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatus = value; }

    
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatus = std::move(value); }

    
    inline DeleteAgentResult& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    
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
