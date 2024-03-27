/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/Agent.h>
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
  class GetAgentResult
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentResult();
    AWS_BEDROCKAGENT_API GetAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about the agent.</p>
     */
    inline const Agent& GetAgent() const{ return m_agent; }

    /**
     * <p>Contains details about the agent.</p>
     */
    inline void SetAgent(const Agent& value) { m_agent = value; }

    /**
     * <p>Contains details about the agent.</p>
     */
    inline void SetAgent(Agent&& value) { m_agent = std::move(value); }

    /**
     * <p>Contains details about the agent.</p>
     */
    inline GetAgentResult& WithAgent(const Agent& value) { SetAgent(value); return *this;}

    /**
     * <p>Contains details about the agent.</p>
     */
    inline GetAgentResult& WithAgent(Agent&& value) { SetAgent(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAgentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAgentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAgentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Agent m_agent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
