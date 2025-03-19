/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeVpcsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpcsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcs"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4 CIDR
     * block of the VPC. The CIDR block you specify must exactly match the VPC's CIDR
     * block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-pool</code> - The ID of the IPv6 address
     * pool from which the IPv6 CIDR block is allocated.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>is-default</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the Amazon Web Services account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeVpcsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeVpcsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the VPCs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcIds() const { return m_vpcIds; }
    inline bool VpcIdsHasBeenSet() const { return m_vpcIdsHasBeenSet; }
    template<typename VpcIdsT = Aws::Vector<Aws::String>>
    void SetVpcIds(VpcIdsT&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = std::forward<VpcIdsT>(value); }
    template<typename VpcIdsT = Aws::Vector<Aws::String>>
    DescribeVpcsRequest& WithVpcIds(VpcIdsT&& value) { SetVpcIds(std::forward<VpcIdsT>(value)); return *this;}
    template<typename VpcIdsT = Aws::String>
    DescribeVpcsRequest& AddVpcIds(VpcIdsT&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.emplace_back(std::forward<VpcIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeVpcsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeVpcsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcIds;
    bool m_vpcIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
