/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryRequest.h>
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/RegistryRecordFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AgentRegistry {
namespace Model {

/**
 */
class ListDiscoverableRegistryRecordsRequest : public AgentRegistryRequest {
 public:
  AWS_AGENTREGISTRY_API ListDiscoverableRegistryRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDiscoverableRegistryRecords"; }

  AWS_AGENTREGISTRY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The identifier of the registry whose discoverable records are listed. You
   * can provide either the full Amazon Resource Name (ARN) or the registry ID.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  ListDiscoverableRegistryRecordsRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of records to return in a single page. Valid values are 1
   * through 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDiscoverableRegistryRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The pagination token returned by a previous request. Use this value to
   * retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDiscoverableRegistryRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The filters to apply to the discoverable registry record list.</p>
   */
  inline const Aws::Vector<RegistryRecordFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<RegistryRecordFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<RegistryRecordFilter>>
  ListDiscoverableRegistryRecordsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = RegistryRecordFilter>
  ListDiscoverableRegistryRecordsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::Vector<RegistryRecordFilter> m_filters;
  bool m_registryIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
