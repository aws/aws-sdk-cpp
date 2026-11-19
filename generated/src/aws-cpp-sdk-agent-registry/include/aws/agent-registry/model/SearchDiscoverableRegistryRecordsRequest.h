/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryRequest.h>
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/SearchType.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AgentRegistry {
namespace Model {

/**
 */
class SearchDiscoverableRegistryRecordsRequest : public AgentRegistryRequest {
 public:
  AWS_AGENTREGISTRY_API SearchDiscoverableRegistryRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchDiscoverableRegistryRecords"; }

  AWS_AGENTREGISTRY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The natural language query to search for matching registry records. If you
   * specify an empty string, the operation returns the records that match the
   * <code>filters</code>, most recently updated first, up to the result limit for
   * the <code>searchType</code>.</p>
   */
  inline const Aws::String& GetSearchQuery() const { return m_searchQuery; }
  inline bool SearchQueryHasBeenSet() const { return m_searchQueryHasBeenSet; }
  template <typename SearchQueryT = Aws::String>
  void SetSearchQuery(SearchQueryT&& value) {
    m_searchQueryHasBeenSet = true;
    m_searchQuery = std::forward<SearchQueryT>(value);
  }
  template <typename SearchQueryT = Aws::String>
  SearchDiscoverableRegistryRecordsRequest& WithSearchQuery(SearchQueryT&& value) {
    SetSearchQuery(std::forward<SearchQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The registry identifiers to search within. Currently, you must specify
   * exactly one registry identifier. You can provide either the full Amazon Web
   * Services Resource Name (ARN) or the registry ID.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegistryIds() const { return m_registryIds; }
  inline bool RegistryIdsHasBeenSet() const { return m_registryIdsHasBeenSet; }
  template <typename RegistryIdsT = Aws::Vector<Aws::String>>
  void SetRegistryIds(RegistryIdsT&& value) {
    m_registryIdsHasBeenSet = true;
    m_registryIds = std::forward<RegistryIdsT>(value);
  }
  template <typename RegistryIdsT = Aws::Vector<Aws::String>>
  SearchDiscoverableRegistryRecordsRequest& WithRegistryIds(RegistryIdsT&& value) {
    SetRegistryIds(std::forward<RegistryIdsT>(value));
    return *this;
  }
  template <typename RegistryIdsT = Aws::String>
  SearchDiscoverableRegistryRecordsRequest& AddRegistryIds(RegistryIdsT&& value) {
    m_registryIdsHasBeenSet = true;
    m_registryIds.emplace_back(std::forward<RegistryIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of results to return in one page. Valid values are 1
   * through 50 when <code>searchType</code> is <code>KEYWORD</code>, and 1 through
   * 20 when it is <code>HYBRID</code> or <code>SEMANTIC</code>. The default value is
   * 10.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchDiscoverableRegistryRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> An optional structured JSON metadata filter that narrows the search results.
   * Supports the field-level operators <code>$eq</code>, <code>$ne</code>, and
   * <code>$in</code>, and the logical operators <code>$and</code> and
   * <code>$or</code> on filterable fields.</p> <p> Specifies additional filtering on
   * custom metadata fields using the <code>customMetadata.{key}</code> prefix. For
   * example, to filter by a custom metadata field:
   * <code>{"customMetadata.environment": {"$eq": "production"}}</code>. For a
   * Boolean field, you can also use a native JSON boolean value, for example:
   * <code>{"customMetadata.requiresApproval": {"$eq": true}}</code>.</p>
   */
  inline Aws::Utils::DocumentView GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Utils::Document>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Utils::Document>
  SearchDiscoverableRegistryRecordsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Specifies how the service ranks registry records against the search query.
   * If you omit this parameter, the service uses <code>HYBRID</code> in Amazon Web
   * Services Regions that support semantic search and <code>KEYWORD</code> in
   * Regions that do not. The response reports the search type that the service used.
   * Valid values are the following:</p> <ul> <li> <p> <code>KEYWORD</code> – Ranks
   * records by keyword match between the query terms and the record name,
   * description, descriptors, and custom metadata text values. Available in every
   * Amazon Web Services Region.</p> </li> <li> <p> <code>SEMANTIC</code> – Ranks
   * records by semantic similarity to the query and returns the most similar
   * records, up to <code>maxResults</code>, even when none of them closely matches
   * the query.</p> </li> <li> <p> <code>HYBRID</code> – Combines keyword ranking and
   * semantic ranking.</p> </li> </ul> <p> <code>HYBRID</code> and
   * <code>SEMANTIC</code> are available in a limited number of Regions. If you
   * specify either one in a Region that does not support semantic search, the
   * request fails with a <code>ValidationException</code> that has the reason
   * <code>UnsupportedInRegion</code>.</p>
   */
  inline SearchType GetSearchType() const { return m_searchType; }
  inline bool SearchTypeHasBeenSet() const { return m_searchTypeHasBeenSet; }
  inline void SetSearchType(SearchType value) {
    m_searchTypeHasBeenSet = true;
    m_searchType = value;
  }
  inline SearchDiscoverableRegistryRecordsRequest& WithSearchType(SearchType value) {
    SetSearchType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The pagination token from a previous response. Use it to retrieve the next
   * page of results, and send the same <code>searchQuery</code>,
   * <code>registryIds</code>, <code>filters</code>, and <code>searchType</code> that
   * you used for the first page. If any of them differ, the request fails with a
   * <code>ValidationException</code>. A pagination token expires 15 minutes after
   * the service returns the first page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchDiscoverableRegistryRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_searchQuery;

  Aws::Vector<Aws::String> m_registryIds;

  int m_maxResults{0};

  Aws::Utils::Document m_filters;

  SearchType m_searchType{SearchType::NOT_SET};

  Aws::String m_nextToken;
  bool m_searchQueryHasBeenSet = false;
  bool m_registryIdsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_searchTypeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
