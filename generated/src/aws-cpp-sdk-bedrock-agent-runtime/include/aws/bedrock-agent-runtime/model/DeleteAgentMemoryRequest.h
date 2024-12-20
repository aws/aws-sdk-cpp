/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class DeleteAgentMemoryRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API DeleteAgentMemoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAgentMemory"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENTRUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of an alias of an agent.</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }
    inline DeleteAgentMemoryRequest& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}
    inline DeleteAgentMemoryRequest& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}
    inline DeleteAgentMemoryRequest& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent to which the alias belongs.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline DeleteAgentMemoryRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline DeleteAgentMemoryRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline DeleteAgentMemoryRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the memory.</p>
     */
    inline const Aws::String& GetMemoryId() const{ return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    inline void SetMemoryId(const Aws::String& value) { m_memoryIdHasBeenSet = true; m_memoryId = value; }
    inline void SetMemoryId(Aws::String&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::move(value); }
    inline void SetMemoryId(const char* value) { m_memoryIdHasBeenSet = true; m_memoryId.assign(value); }
    inline DeleteAgentMemoryRequest& WithMemoryId(const Aws::String& value) { SetMemoryId(value); return *this;}
    inline DeleteAgentMemoryRequest& WithMemoryId(Aws::String&& value) { SetMemoryId(std::move(value)); return *this;}
    inline DeleteAgentMemoryRequest& WithMemoryId(const char* value) { SetMemoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique session identifier of the memory.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline DeleteAgentMemoryRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline DeleteAgentMemoryRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline DeleteAgentMemoryRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
