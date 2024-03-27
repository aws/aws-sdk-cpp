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
  class DeleteAgentVersionResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteAgentVersionResult();
    AWS_BEDROCKAGENT_API DeleteAgentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteAgentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentId = value; }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(const char* value) { m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline DeleteAgentVersionResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline DeleteAgentVersionResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline DeleteAgentVersionResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The status of the agent version.</p>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    /**
     * <p>The status of the agent version.</p>
     */
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatus = value; }

    /**
     * <p>The status of the agent version.</p>
     */
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatus = std::move(value); }

    /**
     * <p>The status of the agent version.</p>
     */
    inline DeleteAgentVersionResult& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    /**
     * <p>The status of the agent version.</p>
     */
    inline DeleteAgentVersionResult& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}


    /**
     * <p>The version that was deleted.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version that was deleted.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersion = value; }

    /**
     * <p>The version that was deleted.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersion = std::move(value); }

    /**
     * <p>The version that was deleted.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersion.assign(value); }

    /**
     * <p>The version that was deleted.</p>
     */
    inline DeleteAgentVersionResult& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version that was deleted.</p>
     */
    inline DeleteAgentVersionResult& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version that was deleted.</p>
     */
    inline DeleteAgentVersionResult& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAgentVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAgentVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAgentVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_agentId;

    AgentStatus m_agentStatus;

    Aws::String m_agentVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
