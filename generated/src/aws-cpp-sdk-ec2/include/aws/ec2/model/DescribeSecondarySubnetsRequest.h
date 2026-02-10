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
class DescribeSecondarySubnetsRequest : public EC2Request {
 public:
  AWS_EC2_API DescribeSecondarySubnetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeSecondarySubnets"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
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
  inline DescribeSecondarySubnetsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters.</p> <ul> <li> <p>
   * <code>ipv4-cidr-block-association.association-id</code> - The association ID for
   * an IPv4 CIDR block associated with the secondary subnet.</p> </li> <li> <p>
   * <code>ipv4-cidr-block-association.cidr-block</code> - An IPv4 CIDR block
   * associated with the secondary subnet.</p> </li> <li> <p>
   * <code>ipv4-cidr-block-association.state</code> - The state of an IPv4 CIDR block
   * associated with the secondary subnet.</p> </li> <li> <p> <code>owner-id</code> -
   * The ID of the Amazon Web Services account that owns the secondary subnet.</p>
   * </li> <li> <p> <code>secondary-network-id</code> - The ID of the secondary
   * network.</p> </li> <li> <p> <code>secondary-network-type</code> - The type of
   * the secondary network (<code>rdma</code>).</p> </li> <li> <p>
   * <code>secondary-subnet-id</code> - The ID of the secondary subnet.</p> </li>
   * <li> <p> <code>secondary-subnet-arn</code> - The ARN of the secondary
   * subnet.</p> </li> <li> <p> <code>state</code> - The state of the secondary
   * subnet (<code>create-in-progress</code> | <code>create-complete</code> |
   * <code>create-failed</code> | <code>delete-in-progress</code> |
   * <code>delete-complete</code> | <code>delete-failed</code>).</p> </li> <li> <p>
   * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
   * the resource. Use the tag key in the filter name and the tag value as the filter
   * value. For example, to find all resources that have a tag with the key
   * <code>Owner</code> and the value <code>TeamA</code>, specify
   * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
   * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
   * the resource. Use this filter to find all resources assigned a tag with a
   * specific key, regardless of the tag value.</p> </li> </ul>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeSecondarySubnetsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeSecondarySubnetsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return with a single call. To retrieve the
   * remaining results, make another call with the returned <code>nextToken</code>
   * value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeSecondarySubnetsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
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
  DescribeSecondarySubnetsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the secondary subnets.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecondarySubnetIds() const { return m_secondarySubnetIds; }
  inline bool SecondarySubnetIdsHasBeenSet() const { return m_secondarySubnetIdsHasBeenSet; }
  template <typename SecondarySubnetIdsT = Aws::Vector<Aws::String>>
  void SetSecondarySubnetIds(SecondarySubnetIdsT&& value) {
    m_secondarySubnetIdsHasBeenSet = true;
    m_secondarySubnetIds = std::forward<SecondarySubnetIdsT>(value);
  }
  template <typename SecondarySubnetIdsT = Aws::Vector<Aws::String>>
  DescribeSecondarySubnetsRequest& WithSecondarySubnetIds(SecondarySubnetIdsT&& value) {
    SetSecondarySubnetIds(std::forward<SecondarySubnetIdsT>(value));
    return *this;
  }
  template <typename SecondarySubnetIdsT = Aws::String>
  DescribeSecondarySubnetsRequest& AddSecondarySubnetIds(SecondarySubnetIdsT&& value) {
    m_secondarySubnetIdsHasBeenSet = true;
    m_secondarySubnetIds.emplace_back(std::forward<SecondarySubnetIdsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::Vector<Filter> m_filters;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::Vector<Aws::String> m_secondarySubnetIds;
  bool m_dryRunHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_secondarySubnetIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
