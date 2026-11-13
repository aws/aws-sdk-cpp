/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Filter.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest : public EC2Request {
 public:
  AWS_EC2_API DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkingFlexCostAllocationPolicyAssociations"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the policy associations to describe.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFcaPolicyAssociationIds() const { return m_fcaPolicyAssociationIds; }
  inline bool FcaPolicyAssociationIdsHasBeenSet() const { return m_fcaPolicyAssociationIdsHasBeenSet; }
  template <typename FcaPolicyAssociationIdsT = Aws::Vector<Aws::String>>
  void SetFcaPolicyAssociationIds(FcaPolicyAssociationIdsT&& value) {
    m_fcaPolicyAssociationIdsHasBeenSet = true;
    m_fcaPolicyAssociationIds = std::forward<FcaPolicyAssociationIdsT>(value);
  }
  template <typename FcaPolicyAssociationIdsT = Aws::Vector<Aws::String>>
  DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest& WithFcaPolicyAssociationIds(FcaPolicyAssociationIdsT&& value) {
    SetFcaPolicyAssociationIds(std::forward<FcaPolicyAssociationIdsT>(value));
    return *this;
  }
  template <typename FcaPolicyAssociationIdsT = Aws::String>
  DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest& AddFcaPolicyAssociationIds(FcaPolicyAssociationIdsT&& value) {
    m_fcaPolicyAssociationIdsHasBeenSet = true;
    m_fcaPolicyAssociationIds.emplace_back(std::forward<FcaPolicyAssociationIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. The range is 5 to
   * 1000. To retrieve the remaining results, make another call with the returned
   * <code>nextToken</code> value.</p> <p>Default: 100</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters.</p> <ul> <li> <p> <code>fca-policy-id</code> - The ID of the
   * policy.</p> </li> <li> <p> <code>managed-by</code> - The entity that manages the
   * association (<code>account</code> | <code>declarative-policy</code>).</p> </li>
   * <li> <p> <code>resource-id</code> - The ID of the associated network
   * resource.</p> </li> </ul>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DescribeNetworkingFlexCostAllocationPolicyAssociationsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_fcaPolicyAssociationIds;

  int m_maxResults{0};

  Aws::Vector<Filter> m_filters;

  Aws::String m_nextToken;

  bool m_dryRun{false};
  bool m_fcaPolicyAssociationIdsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
