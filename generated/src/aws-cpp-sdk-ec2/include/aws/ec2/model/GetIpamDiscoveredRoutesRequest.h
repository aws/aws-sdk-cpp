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
class GetIpamDiscoveredRoutesRequest : public EC2Request {
 public:
  AWS_EC2_API GetIpamDiscoveredRoutesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIpamDiscoveredRoutes"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
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
  inline GetIpamDiscoveredRoutesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM resource discovery.</p>
   */
  inline const Aws::String& GetIpamResourceDiscoveryId() const { return m_ipamResourceDiscoveryId; }
  inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
  template <typename IpamResourceDiscoveryIdT = Aws::String>
  void SetIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) {
    m_ipamResourceDiscoveryIdHasBeenSet = true;
    m_ipamResourceDiscoveryId = std::forward<IpamResourceDiscoveryIdT>(value);
  }
  template <typename IpamResourceDiscoveryIdT = Aws::String>
  GetIpamDiscoveredRoutesRequest& WithIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) {
    SetIpamResourceDiscoveryId(std::forward<IpamResourceDiscoveryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region to retrieve discovered routes for.</p>
   */
  inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
  inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
  template <typename ResourceRegionT = Aws::String>
  void SetResourceRegion(ResourceRegionT&& value) {
    m_resourceRegionHasBeenSet = true;
    m_resourceRegion = std::forward<ResourceRegionT>(value);
  }
  template <typename ResourceRegionT = Aws::String>
  GetIpamDiscoveredRoutesRequest& WithResourceRegion(ResourceRegionT&& value) {
    SetResourceRegion(std::forward<ResourceRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more filters to apply to the results.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  GetIpamDiscoveredRoutesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  GetIpamDiscoveredRoutesRequest& AddFilters(FiltersT&& value) {
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
  GetIpamDiscoveredRoutesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. If not specified,
   * all available results are returned. To retrieve the remaining results, make
   * another call with the returned <code>nextToken</code> value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetIpamDiscoveredRoutesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamResourceDiscoveryId;

  Aws::String m_resourceRegion;

  Aws::Vector<Filter> m_filters;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_dryRunHasBeenSet = false;
  bool m_ipamResourceDiscoveryIdHasBeenSet = false;
  bool m_resourceRegionHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
