/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentAlias.h>
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
   * <p>Update Agent Alias Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentAliasResponse">AWS
   * API Reference</a></p>
   */
  class UpdateAgentAliasResult
  {
  public:
    AWS_BEDROCKAGENT_API UpdateAgentAliasResult();
    AWS_BEDROCKAGENT_API UpdateAgentAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API UpdateAgentAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AgentAlias& GetAgentAlias() const{ return m_agentAlias; }

    
    inline void SetAgentAlias(const AgentAlias& value) { m_agentAlias = value; }

    
    inline void SetAgentAlias(AgentAlias&& value) { m_agentAlias = std::move(value); }

    
    inline UpdateAgentAliasResult& WithAgentAlias(const AgentAlias& value) { SetAgentAlias(value); return *this;}

    
    inline UpdateAgentAliasResult& WithAgentAlias(AgentAlias&& value) { SetAgentAlias(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAgentAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAgentAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAgentAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AgentAlias m_agentAlias;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
