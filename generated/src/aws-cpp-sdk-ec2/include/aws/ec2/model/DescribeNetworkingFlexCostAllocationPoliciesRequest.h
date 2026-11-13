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
class DescribeNetworkingFlexCostAllocationPoliciesRequest : public EC2Request {
 public:
  AWS_EC2_API DescribeNetworkingFlexCostAllocationPoliciesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkingFlexCostAllocationPolicies"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the flex cost allocation policies to describe.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFcaPolicyIds() const { return m_fcaPolicyIds; }
  inline bool FcaPolicyIdsHasBeenSet() const { return m_fcaPolicyIdsHasBeenSet; }
  template <typename FcaPolicyIdsT = Aws::Vector<Aws::String>>
  void SetFcaPolicyIds(FcaPolicyIdsT&& value) {
    m_fcaPolicyIdsHasBeenSet = true;
    m_fcaPolicyIds = std::forward<FcaPolicyIdsT>(value);
  }
  template <typename FcaPolicyIdsT = Aws::Vector<Aws::String>>
  DescribeNetworkingFlexCostAllocationPoliciesRequest& WithFcaPolicyIds(FcaPolicyIdsT&& value) {
    SetFcaPolicyIds(std::forward<FcaPolicyIdsT>(value));
    return *this;
  }
  template <typename FcaPolicyIdsT = Aws::String>
  DescribeNetworkingFlexCostAllocationPoliciesRequest& AddFcaPolicyIds(FcaPolicyIdsT&& value) {
    m_fcaPolicyIdsHasBeenSet = true;
    m_fcaPolicyIds.emplace_back(std::forward<FcaPolicyIdsT>(value));
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
  inline DescribeNetworkingFlexCostAllocationPoliciesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters.</p> <ul> <li> <p> <code>fca-policy-id</code> - The ID of the
   * policy.</p> </li> <li> <p> <code>managed-by</code> - The entity that manages the
   * policy (<code>account</code> | <code>declarative-policy</code>).</p> </li> <li>
   * <p> <code>network-resource-type</code> - The type of network resource that the
   * policy applies to (<code>natgw</code> | <code>ec2</code> |
   * <code>pcx</code>).</p> </li> <li> <p> <code>showback-enabled</code> - Indicates
   * whether showback reporting is enabled for the policy (<code>true</code> |
   * <code>false</code>).</p> </li> </ul>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeNetworkingFlexCostAllocationPoliciesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeNetworkingFlexCostAllocationPoliciesRequest& AddFilters(FiltersT&& value) {
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
  DescribeNetworkingFlexCostAllocationPoliciesRequest& WithNextToken(NextTokenT&& value) {
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
  inline DescribeNetworkingFlexCostAllocationPoliciesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_fcaPolicyIds;

  int m_maxResults{0};

  Aws::Vector<Filter> m_filters;

  Aws::String m_nextToken;

  bool m_dryRun{false};
  bool m_fcaPolicyIdsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
