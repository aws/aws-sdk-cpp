/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/Trace.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Trace Part which contains intermidate response for customer</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TracePart">AWS
   * API Reference</a></p>
   */
  class TracePart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TracePart();
    AWS_BEDROCKAGENTRUNTIME_API TracePart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TracePart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    
    inline TracePart& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    
    inline TracePart& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    
    inline TracePart& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }

    
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }

    
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }

    
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }

    
    inline TracePart& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    
    inline TracePart& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    
    inline TracePart& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    
    inline TracePart& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    
    inline TracePart& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    
    inline TracePart& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    
    inline const Trace& GetTrace() const{ return m_trace; }

    
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }

    
    inline void SetTrace(const Trace& value) { m_traceHasBeenSet = true; m_trace = value; }

    
    inline void SetTrace(Trace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }

    
    inline TracePart& WithTrace(const Trace& value) { SetTrace(value); return *this;}

    
    inline TracePart& WithTrace(Trace&& value) { SetTrace(std::move(value)); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Trace m_trace;
    bool m_traceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
