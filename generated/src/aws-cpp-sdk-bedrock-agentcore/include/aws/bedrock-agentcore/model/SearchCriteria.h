/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains search criteria for retrieving memory records.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SearchCriteria">AWS
   * API Reference</a></p>
   */
  class SearchCriteria
  {
  public:
    AWS_BEDROCKAGENTCORE_API SearchCriteria() = default;
    AWS_BEDROCKAGENTCORE_API SearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API SearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The search query to use for finding relevant memory records.</p>
     */
    inline const Aws::String& GetSearchQuery() const { return m_searchQuery; }
    inline bool SearchQueryHasBeenSet() const { return m_searchQueryHasBeenSet; }
    template<typename SearchQueryT = Aws::String>
    void SetSearchQuery(SearchQueryT&& value) { m_searchQueryHasBeenSet = true; m_searchQuery = std::forward<SearchQueryT>(value); }
    template<typename SearchQueryT = Aws::String>
    SearchCriteria& WithSearchQuery(SearchQueryT&& value) { SetSearchQuery(std::forward<SearchQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory strategy identifier to filter memory records by.</p>
     */
    inline const Aws::String& GetMemoryStrategyId() const { return m_memoryStrategyId; }
    inline bool MemoryStrategyIdHasBeenSet() const { return m_memoryStrategyIdHasBeenSet; }
    template<typename MemoryStrategyIdT = Aws::String>
    void SetMemoryStrategyId(MemoryStrategyIdT&& value) { m_memoryStrategyIdHasBeenSet = true; m_memoryStrategyId = std::forward<MemoryStrategyIdT>(value); }
    template<typename MemoryStrategyIdT = Aws::String>
    SearchCriteria& WithMemoryStrategyId(MemoryStrategyIdT&& value) { SetMemoryStrategyId(std::forward<MemoryStrategyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of top-scoring memory records to return. This value is
     * used for semantic search ranking.</p>
     */
    inline int GetTopK() const { return m_topK; }
    inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
    inline void SetTopK(int value) { m_topKHasBeenSet = true; m_topK = value; }
    inline SearchCriteria& WithTopK(int value) { SetTopK(value); return *this;}
    ///@}
  private:

    Aws::String m_searchQuery;
    bool m_searchQueryHasBeenSet = false;

    Aws::String m_memoryStrategyId;
    bool m_memoryStrategyIdHasBeenSet = false;

    int m_topK{0};
    bool m_topKHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
