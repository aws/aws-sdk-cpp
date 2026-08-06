/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryRequest.h>
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
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
   * <p> The natural language query to search for matching registry records.</p>
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
   * <p> The maximum number of results to return. Valid values are 1 through 20. The
   * default value is 10.</p>
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
   * <code>$or</code> on filterable fields.</p>
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
 private:
  Aws::String m_searchQuery;

  Aws::Vector<Aws::String> m_registryIds;

  int m_maxResults{0};

  Aws::Utils::Document m_filters;
  bool m_searchQueryHasBeenSet = false;
  bool m_registryIdsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
