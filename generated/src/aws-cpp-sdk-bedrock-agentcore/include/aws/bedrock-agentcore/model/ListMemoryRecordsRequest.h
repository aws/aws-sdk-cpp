/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class ListMemoryRecordsRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API ListMemoryRecordsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMemoryRecords"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the AgentCore Memory resource for which to list memory
     * records.</p>
     */
    inline const Aws::String& GetMemoryId() const { return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    template<typename MemoryIdT = Aws::String>
    void SetMemoryId(MemoryIdT&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::forward<MemoryIdT>(value); }
    template<typename MemoryIdT = Aws::String>
    ListMemoryRecordsRequest& WithMemoryId(MemoryIdT&& value) { SetMemoryId(std::forward<MemoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace to filter memory records by. If specified, only memory records
     * in this namespace are returned.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    ListMemoryRecordsRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory strategy identifier to filter memory records by. If specified,
     * only memory records with this strategy ID are returned.</p>
     */
    inline const Aws::String& GetMemoryStrategyId() const { return m_memoryStrategyId; }
    inline bool MemoryStrategyIdHasBeenSet() const { return m_memoryStrategyIdHasBeenSet; }
    template<typename MemoryStrategyIdT = Aws::String>
    void SetMemoryStrategyId(MemoryStrategyIdT&& value) { m_memoryStrategyIdHasBeenSet = true; m_memoryStrategyId = std::forward<MemoryStrategyIdT>(value); }
    template<typename MemoryStrategyIdT = Aws::String>
    ListMemoryRecordsRequest& WithMemoryStrategyId(MemoryStrategyIdT&& value) { SetMemoryStrategyId(std::forward<MemoryStrategyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. Minimum value of 1,
     * maximum value of 100. Default is 20.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMemoryRecordsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMemoryRecordsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_memoryStrategyId;
    bool m_memoryStrategyIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
