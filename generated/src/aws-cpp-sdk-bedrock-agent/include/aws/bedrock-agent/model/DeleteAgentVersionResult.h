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
   * <p>Delete Agent Version Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentVersionResponse">AWS
   * API Reference</a></p>
   */
  class DeleteAgentVersionResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteAgentVersionResult();
    AWS_BEDROCKAGENT_API DeleteAgentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteAgentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    
    inline void SetAgentId(const Aws::String& value) { m_agentId = value; }

    
    inline void SetAgentId(Aws::String&& value) { m_agentId = std::move(value); }

    
    inline void SetAgentId(const char* value) { m_agentId.assign(value); }

    
    inline DeleteAgentVersionResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    
    inline DeleteAgentVersionResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    
    inline DeleteAgentVersionResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersion = value; }

    
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersion = std::move(value); }

    
    inline void SetAgentVersion(const char* value) { m_agentVersion.assign(value); }

    
    inline DeleteAgentVersionResult& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    
    inline DeleteAgentVersionResult& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    
    inline DeleteAgentVersionResult& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatus = value; }

    
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatus = std::move(value); }

    
    inline DeleteAgentVersionResult& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    
    inline DeleteAgentVersionResult& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAgentVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAgentVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAgentVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_agentId;

    Aws::String m_agentVersion;

    AgentStatus m_agentStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
