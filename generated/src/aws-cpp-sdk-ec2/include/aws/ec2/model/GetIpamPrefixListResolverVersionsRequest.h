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
class GetIpamPrefixListResolverVersionsRequest : public EC2Request {
 public:
  AWS_EC2_API GetIpamPrefixListResolverVersionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIpamPrefixListResolverVersions"; }

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
  inline GetIpamPrefixListResolverVersionsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver whose versions you want to
   * retrieve.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverId() const { return m_ipamPrefixListResolverId; }
  inline bool IpamPrefixListResolverIdHasBeenSet() const { return m_ipamPrefixListResolverIdHasBeenSet; }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  void SetIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    m_ipamPrefixListResolverIdHasBeenSet = true;
    m_ipamPrefixListResolverId = std::forward<IpamPrefixListResolverIdT>(value);
  }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  GetIpamPrefixListResolverVersionsRequest& WithIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    SetIpamPrefixListResolverId(std::forward<IpamPrefixListResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific version numbers to retrieve. If not specified, all versions are
   * returned.</p>
   */
  inline const Aws::Vector<long long>& GetIpamPrefixListResolverVersions() const { return m_ipamPrefixListResolverVersions; }
  inline bool IpamPrefixListResolverVersionsHasBeenSet() const { return m_ipamPrefixListResolverVersionsHasBeenSet; }
  template <typename IpamPrefixListResolverVersionsT = Aws::Vector<long long>>
  void SetIpamPrefixListResolverVersions(IpamPrefixListResolverVersionsT&& value) {
    m_ipamPrefixListResolverVersionsHasBeenSet = true;
    m_ipamPrefixListResolverVersions = std::forward<IpamPrefixListResolverVersionsT>(value);
  }
  template <typename IpamPrefixListResolverVersionsT = Aws::Vector<long long>>
  GetIpamPrefixListResolverVersionsRequest& WithIpamPrefixListResolverVersions(IpamPrefixListResolverVersionsT&& value) {
    SetIpamPrefixListResolverVersions(std::forward<IpamPrefixListResolverVersionsT>(value));
    return *this;
  }
  inline GetIpamPrefixListResolverVersionsRequest& AddIpamPrefixListResolverVersions(long long value) {
    m_ipamPrefixListResolverVersionsHasBeenSet = true;
    m_ipamPrefixListResolverVersions.push_back(value);
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
  inline GetIpamPrefixListResolverVersionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
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
  GetIpamPrefixListResolverVersionsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  GetIpamPrefixListResolverVersionsRequest& AddFilters(FiltersT&& value) {
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
  GetIpamPrefixListResolverVersionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamPrefixListResolverId;

  Aws::Vector<long long> m_ipamPrefixListResolverVersions;

  int m_maxResults{0};

  Aws::Vector<Filter> m_filters;

  Aws::String m_nextToken;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamPrefixListResolverIdHasBeenSet = false;
  bool m_ipamPrefixListResolverVersionsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
