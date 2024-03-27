/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentActionGroup.h>
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
  class GetAgentActionGroupResult
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentActionGroupResult();
    AWS_BEDROCKAGENT_API GetAgentActionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetAgentActionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about the action group.</p>
     */
    inline const AgentActionGroup& GetAgentActionGroup() const{ return m_agentActionGroup; }

    /**
     * <p>Contains details about the action group.</p>
     */
    inline void SetAgentActionGroup(const AgentActionGroup& value) { m_agentActionGroup = value; }

    /**
     * <p>Contains details about the action group.</p>
     */
    inline void SetAgentActionGroup(AgentActionGroup&& value) { m_agentActionGroup = std::move(value); }

    /**
     * <p>Contains details about the action group.</p>
     */
    inline GetAgentActionGroupResult& WithAgentActionGroup(const AgentActionGroup& value) { SetAgentActionGroup(value); return *this;}

    /**
     * <p>Contains details about the action group.</p>
     */
    inline GetAgentActionGroupResult& WithAgentActionGroup(AgentActionGroup&& value) { SetAgentActionGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAgentActionGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAgentActionGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAgentActionGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AgentActionGroup m_agentActionGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
