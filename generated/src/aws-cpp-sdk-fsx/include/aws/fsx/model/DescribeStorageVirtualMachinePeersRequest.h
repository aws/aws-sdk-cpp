/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/StorageVirtualMachinePeerFilter.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class DescribeStorageVirtualMachinePeersRequest : public FSxRequest {
 public:
  AWS_FSX_API DescribeStorageVirtualMachinePeersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeStorageVirtualMachinePeers"; }

  AWS_FSX_API Aws::String SerializePayload() const override;

  AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The IDs of the SVM peers that you want to retrieve. If you also specify
   * <code>Filters</code>, only SVM peers that match both the IDs and the filters are
   * returned. If any IDs aren't found, or if a filter excludes any of them, a
   * <code>StorageVirtualMachinePeerNotFound</code> error occurs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStorageVirtualMachinePeerIds() const { return m_storageVirtualMachinePeerIds; }
  inline bool StorageVirtualMachinePeerIdsHasBeenSet() const { return m_storageVirtualMachinePeerIdsHasBeenSet; }
  template <typename StorageVirtualMachinePeerIdsT = Aws::Vector<Aws::String>>
  void SetStorageVirtualMachinePeerIds(StorageVirtualMachinePeerIdsT&& value) {
    m_storageVirtualMachinePeerIdsHasBeenSet = true;
    m_storageVirtualMachinePeerIds = std::forward<StorageVirtualMachinePeerIdsT>(value);
  }
  template <typename StorageVirtualMachinePeerIdsT = Aws::Vector<Aws::String>>
  DescribeStorageVirtualMachinePeersRequest& WithStorageVirtualMachinePeerIds(StorageVirtualMachinePeerIdsT&& value) {
    SetStorageVirtualMachinePeerIds(std::forward<StorageVirtualMachinePeerIdsT>(value));
    return *this;
  }
  template <typename StorageVirtualMachinePeerIdsT = Aws::String>
  DescribeStorageVirtualMachinePeersRequest& AddStorageVirtualMachinePeerIds(StorageVirtualMachinePeerIdsT&& value) {
    m_storageVirtualMachinePeerIdsHasBeenSet = true;
    m_storageVirtualMachinePeerIds.emplace_back(std::forward<StorageVirtualMachinePeerIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters structure. The supported names are <code>file-system-id</code> or
   * <code>storage-virtual-machine-id</code>.</p>
   */
  inline const Aws::Vector<StorageVirtualMachinePeerFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<StorageVirtualMachinePeerFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<StorageVirtualMachinePeerFilter>>
  DescribeStorageVirtualMachinePeersRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = StorageVirtualMachinePeerFilter>
  DescribeStorageVirtualMachinePeersRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeStorageVirtualMachinePeersRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeStorageVirtualMachinePeersRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_storageVirtualMachinePeerIds;

  Aws::Vector<StorageVirtualMachinePeerFilter> m_filters;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_storageVirtualMachinePeerIdsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
