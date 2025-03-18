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
  class DescribeAddressesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeAddressesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddresses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicIps() const { return m_publicIps; }
    inline bool PublicIpsHasBeenSet() const { return m_publicIpsHasBeenSet; }
    template<typename PublicIpsT = Aws::Vector<Aws::String>>
    void SetPublicIps(PublicIpsT&& value) { m_publicIpsHasBeenSet = true; m_publicIps = std::forward<PublicIpsT>(value); }
    template<typename PublicIpsT = Aws::Vector<Aws::String>>
    DescribeAddressesRequest& WithPublicIps(PublicIpsT&& value) { SetPublicIps(std::forward<PublicIpsT>(value)); return *this;}
    template<typename PublicIpsT = Aws::String>
    DescribeAddressesRequest& AddPublicIps(PublicIpsT&& value) { m_publicIpsHasBeenSet = true; m_publicIps.emplace_back(std::forward<PublicIpsT>(value)); return *this; }
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
    inline DescribeAddressesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - The allocation ID for the address.</p>
     * </li> <li> <p> <code>association-id</code> - The association ID for the
     * address.</p> </li> <li> <p> <code>instance-id</code> - The ID of the instance
     * the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-border-group</code> - A unique set of Availability Zones, Local
     * Zones, or Wavelength Zones from where Amazon Web Services advertises IP
     * addresses. </p> </li> <li> <p> <code>network-interface-id</code> - The ID of the
     * network interface that the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-owner-id</code> - The Amazon Web Services account ID
     * of the owner.</p> </li> <li> <p> <code>private-ip-address</code> - The private
     * IP address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address, or the carrier IP address.</p>
     * </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeAddressesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeAddressesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the allocation IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllocationIds() const { return m_allocationIds; }
    inline bool AllocationIdsHasBeenSet() const { return m_allocationIdsHasBeenSet; }
    template<typename AllocationIdsT = Aws::Vector<Aws::String>>
    void SetAllocationIds(AllocationIdsT&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = std::forward<AllocationIdsT>(value); }
    template<typename AllocationIdsT = Aws::Vector<Aws::String>>
    DescribeAddressesRequest& WithAllocationIds(AllocationIdsT&& value) { SetAllocationIds(std::forward<AllocationIdsT>(value)); return *this;}
    template<typename AllocationIdsT = Aws::String>
    DescribeAddressesRequest& AddAllocationIds(AllocationIdsT&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.emplace_back(std::forward<AllocationIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_publicIps;
    bool m_publicIpsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_allocationIds;
    bool m_allocationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
