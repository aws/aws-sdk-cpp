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
  /**
   * <p>Update Action Group Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentActionGroupResponse">AWS
   * API Reference</a></p>
   */
  class UpdateAgentActionGroupResult
  {
  public:
    AWS_BEDROCKAGENT_API UpdateAgentActionGroupResult();
    AWS_BEDROCKAGENT_API UpdateAgentActionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API UpdateAgentActionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AgentActionGroup& GetAgentActionGroup() const{ return m_agentActionGroup; }

    
    inline void SetAgentActionGroup(const AgentActionGroup& value) { m_agentActionGroup = value; }

    
    inline void SetAgentActionGroup(AgentActionGroup&& value) { m_agentActionGroup = std::move(value); }

    
    inline UpdateAgentActionGroupResult& WithAgentActionGroup(const AgentActionGroup& value) { SetAgentActionGroup(value); return *this;}

    
    inline UpdateAgentActionGroupResult& WithAgentActionGroup(AgentActionGroup&& value) { SetAgentActionGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAgentActionGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAgentActionGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAgentActionGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AgentActionGroup m_agentActionGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
