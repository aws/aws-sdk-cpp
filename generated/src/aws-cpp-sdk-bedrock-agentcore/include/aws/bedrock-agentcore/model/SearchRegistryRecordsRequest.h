/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class SearchRegistryRecordsRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API SearchRegistryRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchRegistryRecords"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The search query to find matching registry records.</p>
   */
  inline const Aws::String& GetSearchQuery() const { return m_searchQuery; }
  inline bool SearchQueryHasBeenSet() const { return m_searchQueryHasBeenSet; }
  template <typename SearchQueryT = Aws::String>
  void SetSearchQuery(SearchQueryT&& value) {
    m_searchQueryHasBeenSet = true;
    m_searchQuery = std::forward<SearchQueryT>(value);
  }
  template <typename SearchQueryT = Aws::String>
  SearchRegistryRecordsRequest& WithSearchQuery(SearchQueryT&& value) {
    SetSearchQuery(std::forward<SearchQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of registry identifiers to search within. Currently, you can
   * specify exactly one registry identifier. You can provide either the full Amazon
   * Web Services Resource Name (ARN) or the 12-character alphanumeric registry
   * ID.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegistryIds() const { return m_registryIds; }
  inline bool RegistryIdsHasBeenSet() const { return m_registryIdsHasBeenSet; }
  template <typename RegistryIdsT = Aws::Vector<Aws::String>>
  void SetRegistryIds(RegistryIdsT&& value) {
    m_registryIdsHasBeenSet = true;
    m_registryIds = std::forward<RegistryIdsT>(value);
  }
  template <typename RegistryIdsT = Aws::Vector<Aws::String>>
  SearchRegistryRecordsRequest& WithRegistryIds(RegistryIdsT&& value) {
    SetRegistryIds(std::forward<RegistryIdsT>(value));
    return *this;
  }
  template <typename RegistryIdsT = Aws::String>
  SearchRegistryRecordsRequest& AddRegistryIds(RegistryIdsT&& value) {
    m_registryIdsHasBeenSet = true;
    m_registryIds.emplace_back(std::forward<RegistryIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of records to return in a single call. Valid values are 1
   * through 20. The default value is 10.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchRegistryRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A metadata filter expression to narrow search results. Uses structured JSON
   * operators including field-level operators (<code>$eq</code>, <code>$ne</code>,
   * <code>$in</code>) and logical operators (<code>$and</code>, <code>$or</code>) on
   * filterable fields (<code>name</code>, <code>descriptorType</code>,
   * <code>version</code>). For example, to filter by descriptor type:
   * <code>{"descriptorType": {"$eq": "MCP"}}</code>. To combine filters:
   * <code>{"$and": [{"descriptorType": {"$eq": "MCP"}}, {"name": {"$eq":
   * "my-tool"}}]}</code>.</p>
   */
  inline Aws::Utils::DocumentView GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Utils::Document>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Utils::Document>
  SearchRegistryRecordsRequest& WithFilters(FiltersT&& value) {
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
}  // namespace BedrockAgentCore
}  // namespace Aws
