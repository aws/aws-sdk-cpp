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
class DescribeIpamPrefixListResolverTargetsRequest : public EC2Request {
 public:
  AWS_EC2_API DescribeIpamPrefixListResolverTargetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeIpamPrefixListResolverTargets"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>A check for whether you have the required permissions for the action without
   * actually making the request and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DescribeIpamPrefixListResolverTargetsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more filters to limit the results.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeIpamPrefixListResolverTargetsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeIpamPrefixListResolverTargetsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return for this request. To get the next page
   * of items, make another request with the token returned in the output. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeIpamPrefixListResolverTargetsRequest& WithMaxResults(int value) {
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
  DescribeIpamPrefixListResolverTargetsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the IPAM prefix list resolver Targets to describe. If not
   * specified, all targets in your account are described.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpamPrefixListResolverTargetIds() const { return m_ipamPrefixListResolverTargetIds; }
  inline bool IpamPrefixListResolverTargetIdsHasBeenSet() const { return m_ipamPrefixListResolverTargetIdsHasBeenSet; }
  template <typename IpamPrefixListResolverTargetIdsT = Aws::Vector<Aws::String>>
  void SetIpamPrefixListResolverTargetIds(IpamPrefixListResolverTargetIdsT&& value) {
    m_ipamPrefixListResolverTargetIdsHasBeenSet = true;
    m_ipamPrefixListResolverTargetIds = std::forward<IpamPrefixListResolverTargetIdsT>(value);
  }
  template <typename IpamPrefixListResolverTargetIdsT = Aws::Vector<Aws::String>>
  DescribeIpamPrefixListResolverTargetsRequest& WithIpamPrefixListResolverTargetIds(IpamPrefixListResolverTargetIdsT&& value) {
    SetIpamPrefixListResolverTargetIds(std::forward<IpamPrefixListResolverTargetIdsT>(value));
    return *this;
  }
  template <typename IpamPrefixListResolverTargetIdsT = Aws::String>
  DescribeIpamPrefixListResolverTargetsRequest& AddIpamPrefixListResolverTargetIds(IpamPrefixListResolverTargetIdsT&& value) {
    m_ipamPrefixListResolverTargetIdsHasBeenSet = true;
    m_ipamPrefixListResolverTargetIds.emplace_back(std::forward<IpamPrefixListResolverTargetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver to filter targets by. Only targets
   * associated with this resolver will be returned.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverId() const { return m_ipamPrefixListResolverId; }
  inline bool IpamPrefixListResolverIdHasBeenSet() const { return m_ipamPrefixListResolverIdHasBeenSet; }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  void SetIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    m_ipamPrefixListResolverIdHasBeenSet = true;
    m_ipamPrefixListResolverId = std::forward<IpamPrefixListResolverIdT>(value);
  }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  DescribeIpamPrefixListResolverTargetsRequest& WithIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    SetIpamPrefixListResolverId(std::forward<IpamPrefixListResolverIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::Vector<Filter> m_filters;
  bool m_filtersHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<Aws::String> m_ipamPrefixListResolverTargetIds;
  bool m_ipamPrefixListResolverTargetIdsHasBeenSet = false;

  Aws::String m_ipamPrefixListResolverId;
  bool m_ipamPrefixListResolverIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
