/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorPolicyFilter.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class DescribeSnapmirrorPoliciesRequest : public FSxRequest {
 public:
  AWS_FSX_API DescribeSnapmirrorPoliciesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapmirrorPolicies"; }

  AWS_FSX_API Aws::String SerializePayload() const override;

  AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The IDs of the SnapMirror policies that you want to retrieve. If you also
   * specify <code>Filters</code>, only SnapMirror policies that match both the IDs
   * and the filters are returned. If any IDs aren't found, or if a filter excludes
   * any of them, a <code>SnapmirrorPolicyNotFound</code> error occurs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSnapmirrorPolicyIds() const { return m_snapmirrorPolicyIds; }
  inline bool SnapmirrorPolicyIdsHasBeenSet() const { return m_snapmirrorPolicyIdsHasBeenSet; }
  template <typename SnapmirrorPolicyIdsT = Aws::Vector<Aws::String>>
  void SetSnapmirrorPolicyIds(SnapmirrorPolicyIdsT&& value) {
    m_snapmirrorPolicyIdsHasBeenSet = true;
    m_snapmirrorPolicyIds = std::forward<SnapmirrorPolicyIdsT>(value);
  }
  template <typename SnapmirrorPolicyIdsT = Aws::Vector<Aws::String>>
  DescribeSnapmirrorPoliciesRequest& WithSnapmirrorPolicyIds(SnapmirrorPolicyIdsT&& value) {
    SetSnapmirrorPolicyIds(std::forward<SnapmirrorPolicyIdsT>(value));
    return *this;
  }
  template <typename SnapmirrorPolicyIdsT = Aws::String>
  DescribeSnapmirrorPoliciesRequest& AddSnapmirrorPolicyIds(SnapmirrorPolicyIdsT&& value) {
    m_snapmirrorPolicyIdsHasBeenSet = true;
    m_snapmirrorPolicyIds.emplace_back(std::forward<SnapmirrorPolicyIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters structure. The supported names are <code>file-system-id</code> or
   * <code>storage-virtual-machine-id</code>.</p>
   */
  inline const Aws::Vector<SnapmirrorPolicyFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<SnapmirrorPolicyFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<SnapmirrorPolicyFilter>>
  DescribeSnapmirrorPoliciesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = SnapmirrorPolicyFilter>
  DescribeSnapmirrorPoliciesRequest& AddFilters(FiltersT&& value) {
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
  inline DescribeSnapmirrorPoliciesRequest& WithMaxResults(int value) {
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
  DescribeSnapmirrorPoliciesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_snapmirrorPolicyIds;

  Aws::Vector<SnapmirrorPolicyFilter> m_filters;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_snapmirrorPolicyIdsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
