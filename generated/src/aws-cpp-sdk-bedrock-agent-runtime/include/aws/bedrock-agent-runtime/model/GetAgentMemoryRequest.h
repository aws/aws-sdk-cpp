/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/MemoryType.h>
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
  class GetAgentMemoryRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GetAgentMemoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAgentMemory"; }

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
    inline GetAgentMemoryRequest& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}
    inline GetAgentMemoryRequest& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}
    inline GetAgentMemoryRequest& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}
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
    inline GetAgentMemoryRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline GetAgentMemoryRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline GetAgentMemoryRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in the response. If the total number of
     * results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline GetAgentMemoryRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the memory. </p>
     */
    inline const Aws::String& GetMemoryId() const{ return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    inline void SetMemoryId(const Aws::String& value) { m_memoryIdHasBeenSet = true; m_memoryId = value; }
    inline void SetMemoryId(Aws::String&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::move(value); }
    inline void SetMemoryId(const char* value) { m_memoryIdHasBeenSet = true; m_memoryId.assign(value); }
    inline GetAgentMemoryRequest& WithMemoryId(const Aws::String& value) { SetMemoryId(value); return *this;}
    inline GetAgentMemoryRequest& WithMemoryId(Aws::String&& value) { SetMemoryId(std::move(value)); return *this;}
    inline GetAgentMemoryRequest& WithMemoryId(const char* value) { SetMemoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of memory.</p>
     */
    inline const MemoryType& GetMemoryType() const{ return m_memoryType; }
    inline bool MemoryTypeHasBeenSet() const { return m_memoryTypeHasBeenSet; }
    inline void SetMemoryType(const MemoryType& value) { m_memoryTypeHasBeenSet = true; m_memoryType = value; }
    inline void SetMemoryType(MemoryType&& value) { m_memoryTypeHasBeenSet = true; m_memoryType = std::move(value); }
    inline GetAgentMemoryRequest& WithMemoryType(const MemoryType& value) { SetMemoryType(value); return *this;}
    inline GetAgentMemoryRequest& WithMemoryType(MemoryType&& value) { SetMemoryType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the maxItems value provided in
     * the request, enter the token returned in the <code>nextToken</code> field in the
     * response in this field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetAgentMemoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAgentMemoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAgentMemoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    MemoryType m_memoryType;
    bool m_memoryTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
