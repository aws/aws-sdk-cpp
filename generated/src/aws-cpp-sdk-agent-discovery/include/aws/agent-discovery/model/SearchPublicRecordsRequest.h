/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscoveryRequest.h>
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AgentDiscovery {
namespace Model {

/**
 */
class SearchPublicRecordsRequest : public AgentDiscoveryRequest {
 public:
  AWS_AGENTDISCOVERY_API SearchPublicRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchPublicRecords"; }

  AWS_AGENTDISCOVERY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Free-text natural-language query (ARD <code>text</code>). Drives semantic +
   * lexical ranking.</p>
   */
  inline const Aws::String& GetSearchQuery() const { return m_searchQuery; }
  inline bool SearchQueryHasBeenSet() const { return m_searchQueryHasBeenSet; }
  template <typename SearchQueryT = Aws::String>
  void SetSearchQuery(SearchQueryT&& value) {
    m_searchQueryHasBeenSet = true;
    m_searchQuery = std::forward<SearchQueryT>(value);
  }
  template <typename SearchQueryT = Aws::String>
  SearchPublicRecordsRequest& WithSearchQuery(SearchQueryT&& value) {
    SetSearchQuery(std::forward<SearchQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Structured filter narrowing the results, in the grammar of Agent Registry's
   * SearchDiscoverableRegistryRecords <code>filters</code>: <code>$eq</code>,
   * <code>$ne</code> and <code>$in</code> on a field, with <code>$and</code> or
   * <code>$or</code> over single-condition objects, never nested. Fields are
   * <code>identifier</code>, <code>domain</code>, <code>recordType</code>,
   * <code>descriptorType</code>, <code>provenance</code> and
   * <code>recordVersion</code>, and <code>identifier</code> also takes
   * <code>$prefix</code>. For example <code>{&quot;recordType&quot;:
   * {&quot;$eq&quot;: &quot;AGENT&quot;}}</code> or <code>{&quot;$or&quot;:
   * [{&quot;recordType&quot;: {&quot;$eq&quot;: &quot;MCP&quot;}},
   * {&quot;domain&quot;: {&quot;$eq&quot;: &quot;acme.com&quot;}}]}</code>.</p>
   * <p>Limits, the same ones Agent Registry applies: at most 10 conditions, `$in`
   * takes 1-25 values, values are strings of 1-512 characters, and `{}` is invalid.
   * A `document` can't carry `@length`, so the service enforces these and answers a
   * filter past them with a ValidationException, as Agent Registry does.
   */
  inline Aws::Utils::DocumentView GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Utils::Document>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Utils::Document>
  SearchPublicRecordsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Max records per page. Default 20, max 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchPublicRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Opaque composite-cursor pagination token (O-DM12).</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchPublicRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_searchQuery;

  Aws::Utils::Document m_filters;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_searchQueryHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
