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
  /**
   * <p>Get Agent Version Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentVersionResponse">AWS
   * API Reference</a></p>
   */
  class GetAgentVersionResult
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentVersionResult();
    AWS_BEDROCKAGENT_API GetAgentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetAgentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AgentVersion& GetAgentVersion() const{ return m_agentVersion; }

    
    inline void SetAgentVersion(const AgentVersion& value) { m_agentVersion = value; }

    
    inline void SetAgentVersion(AgentVersion&& value) { m_agentVersion = std::move(value); }

    
    inline GetAgentVersionResult& WithAgentVersion(const AgentVersion& value) { SetAgentVersion(value); return *this;}

    
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
