/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentVersion.h>
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
  class GetAgentVersionResult
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentVersionResult();
    AWS_BEDROCKAGENT_API GetAgentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetAgentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about the version of the agent.</p>
     */
    inline const AgentVersion& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>Contains details about the version of the agent.</p>
     */
    inline void SetAgentVersion(const AgentVersion& value) { m_agentVersion = value; }

    /**
     * <p>Contains details about the version of the agent.</p>
     */
    inline void SetAgentVersion(AgentVersion&& value) { m_agentVersion = std::move(value); }

    /**
     * <p>Contains details about the version of the agent.</p>
     */
    inline GetAgentVersionResult& WithAgentVersion(const AgentVersion& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>Contains details about the version of the agent.</p>
     */
    inline GetAgentVersionResult& WithAgentVersion(AgentVersion&& value) { SetAgentVersion(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAgentVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAgentVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAgentVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AgentVersion m_agentVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
