/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/WebSearchFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Request for the <code>InvokeWebSearch</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeWebSearchInput">AWS
 * API Reference</a></p>
 */
class InvokeWebSearchRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeWebSearchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeWebSearch"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the web search tool to invoke. The Amazon Web
   * Services-managed web search tool is <code>web-search.v1</code>.</p>
   */
  inline const Aws::String& GetWebSearchId() const { return m_webSearchId; }
  inline bool WebSearchIdHasBeenSet() const { return m_webSearchIdHasBeenSet; }
  template <typename WebSearchIdT = Aws::String>
  void SetWebSearchId(WebSearchIdT&& value) {
    m_webSearchIdHasBeenSet = true;
    m_webSearchId = std::forward<WebSearchIdT>(value);
  }
  template <typename WebSearchIdT = Aws::String>
  InvokeWebSearchRequest& WithWebSearchId(WebSearchIdT&& value) {
    SetWebSearchId(std::forward<WebSearchIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text to search for.</p>
   */
  inline const Aws::String& GetSearchQuery() const { return m_searchQuery; }
  inline bool SearchQueryHasBeenSet() const { return m_searchQueryHasBeenSet; }
  template <typename SearchQueryT = Aws::String>
  void SetSearchQuery(SearchQueryT&& value) {
    m_searchQueryHasBeenSet = true;
    m_searchQuery = std::forward<SearchQueryT>(value);
  }
  template <typename SearchQueryT = Aws::String>
  InvokeWebSearchRequest& WithSearchQuery(SearchQueryT&& value) {
    SetSearchQuery(std::forward<SearchQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return. Defaults to 25.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline InvokeWebSearchRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters to apply to the search results.</p>
   */
  inline const WebSearchFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = WebSearchFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = WebSearchFilters>
  InvokeWebSearchRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_webSearchId;

  Aws::String m_searchQuery;

  int m_maxResults{0};

  WebSearchFilters m_filters;
  bool m_webSearchIdHasBeenSet = false;
  bool m_searchQueryHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
