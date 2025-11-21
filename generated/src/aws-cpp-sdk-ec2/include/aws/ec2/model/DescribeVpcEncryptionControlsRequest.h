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
class DescribeVpcEncryptionControlsRequest : public EC2Request {
 public:
  AWS_EC2_API DescribeVpcEncryptionControlsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEncryptionControls"; }

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
  inline DescribeVpcEncryptionControlsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters to apply to the request.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeVpcEncryptionControlsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeVpcEncryptionControlsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the VPC Encryption Control configurations to describe.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpcEncryptionControlIds() const { return m_vpcEncryptionControlIds; }
  inline bool VpcEncryptionControlIdsHasBeenSet() const { return m_vpcEncryptionControlIdsHasBeenSet; }
  template <typename VpcEncryptionControlIdsT = Aws::Vector<Aws::String>>
  void SetVpcEncryptionControlIds(VpcEncryptionControlIdsT&& value) {
    m_vpcEncryptionControlIdsHasBeenSet = true;
    m_vpcEncryptionControlIds = std::forward<VpcEncryptionControlIdsT>(value);
  }
  template <typename VpcEncryptionControlIdsT = Aws::Vector<Aws::String>>
  DescribeVpcEncryptionControlsRequest& WithVpcEncryptionControlIds(VpcEncryptionControlIdsT&& value) {
    SetVpcEncryptionControlIds(std::forward<VpcEncryptionControlIdsT>(value));
    return *this;
  }
  template <typename VpcEncryptionControlIdsT = Aws::String>
  DescribeVpcEncryptionControlsRequest& AddVpcEncryptionControlIds(VpcEncryptionControlIdsT&& value) {
    m_vpcEncryptionControlIdsHasBeenSet = true;
    m_vpcEncryptionControlIds.emplace_back(std::forward<VpcEncryptionControlIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the VPCs to describe encryption control configurations for.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpcIds() const { return m_vpcIds; }
  inline bool VpcIdsHasBeenSet() const { return m_vpcIdsHasBeenSet; }
  template <typename VpcIdsT = Aws::Vector<Aws::String>>
  void SetVpcIds(VpcIdsT&& value) {
    m_vpcIdsHasBeenSet = true;
    m_vpcIds = std::forward<VpcIdsT>(value);
  }
  template <typename VpcIdsT = Aws::Vector<Aws::String>>
  DescribeVpcEncryptionControlsRequest& WithVpcIds(VpcIdsT&& value) {
    SetVpcIds(std::forward<VpcIdsT>(value));
    return *this;
  }
  template <typename VpcIdsT = Aws::String>
  DescribeVpcEncryptionControlsRequest& AddVpcIds(VpcIdsT&& value) {
    m_vpcIdsHasBeenSet = true;
    m_vpcIds.emplace_back(std::forward<VpcIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token returned from a previous paginated request. Pagination continues
   * from the end of the items returned by the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeVpcEncryptionControlsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  inline DescribeVpcEncryptionControlsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::Vector<Filter> m_filters;
  bool m_filtersHasBeenSet = false;

  Aws::Vector<Aws::String> m_vpcEncryptionControlIds;
  bool m_vpcEncryptionControlIdsHasBeenSet = false;

  Aws::Vector<Aws::String> m_vpcIds;
  bool m_vpcIdsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
