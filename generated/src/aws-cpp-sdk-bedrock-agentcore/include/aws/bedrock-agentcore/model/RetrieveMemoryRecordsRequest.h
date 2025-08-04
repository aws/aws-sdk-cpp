/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/SearchCriteria.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class RetrieveMemoryRecordsRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API RetrieveMemoryRecordsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetrieveMemoryRecords"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the AgentCore Memory resource from which to retrieve memory
     * records.</p>
     */
    inline const Aws::String& GetMemoryId() const { return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    template<typename MemoryIdT = Aws::String>
    void SetMemoryId(MemoryIdT&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::forward<MemoryIdT>(value); }
    template<typename MemoryIdT = Aws::String>
    RetrieveMemoryRecordsRequest& WithMemoryId(MemoryIdT&& value) { SetMemoryId(std::forward<MemoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace to filter memory records by. If specified, only memory records
     * in this namespace are searched.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    RetrieveMemoryRecordsRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search criteria to use for finding relevant memory records. This includes
     * the search query, memory strategy ID, and other search parameters.</p>
     */
    inline const SearchCriteria& GetSearchCriteria() const { return m_searchCriteria; }
    inline bool SearchCriteriaHasBeenSet() const { return m_searchCriteriaHasBeenSet; }
    template<typename SearchCriteriaT = SearchCriteria>
    void SetSearchCriteria(SearchCriteriaT&& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = std::forward<SearchCriteriaT>(value); }
    template<typename SearchCriteriaT = SearchCriteria>
    RetrieveMemoryRecordsRequest& WithSearchCriteria(SearchCriteriaT&& value) { SetSearchCriteria(std::forward<SearchCriteriaT>(value)); return *this;}
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
    RetrieveMemoryRecordsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. Minimum value of 1,
     * maximum value of 100. Default is 20.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline RetrieveMemoryRecordsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    SearchCriteria m_searchCriteria;
    bool m_searchCriteriaHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
