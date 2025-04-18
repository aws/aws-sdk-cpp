﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeSpotInstanceRequests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotInstanceRequestsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeSpotInstanceRequestsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeSpotInstanceRequestsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSpotInstanceRequests"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    DescribeSpotInstanceRequestsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline DescribeSpotInstanceRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline DescribeSpotInstanceRequestsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Spot Instance requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpotInstanceRequestIds() const { return m_spotInstanceRequestIds; }
    inline bool SpotInstanceRequestIdsHasBeenSet() const { return m_spotInstanceRequestIdsHasBeenSet; }
    template<typename SpotInstanceRequestIdsT = Aws::Vector<Aws::String>>
    void SetSpotInstanceRequestIds(SpotInstanceRequestIdsT&& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds = std::forward<SpotInstanceRequestIdsT>(value); }
    template<typename SpotInstanceRequestIdsT = Aws::Vector<Aws::String>>
    DescribeSpotInstanceRequestsRequest& WithSpotInstanceRequestIds(SpotInstanceRequestIdsT&& value) { SetSpotInstanceRequestIds(std::forward<SpotInstanceRequestIdsT>(value)); return *this;}
    template<typename SpotInstanceRequestIdsT = Aws::String>
    DescribeSpotInstanceRequestsRequest& AddSpotInstanceRequestIds(SpotInstanceRequestIdsT&& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds.emplace_back(std::forward<SpotInstanceRequestIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone-group</code> - The
     * Availability Zone group.</p> </li> <li> <p> <code>create-time</code> - The time
     * stamp when the Spot Instance request was created.</p> </li> <li> <p>
     * <code>fault-code</code> - The fault code related to the request.</p> </li> <li>
     * <p> <code>fault-message</code> - The fault message related to the request.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance that fulfilled
     * the request.</p> </li> <li> <p> <code>launch-group</code> - The Spot Instance
     * launch group.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.delete-on-termination</code> - Indicates
     * whether the EBS volume is deleted on instance termination.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.device-name</code> - The device name for the
     * volume in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot
     * for the EBS volume.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-size</code> - The size of the EBS
     * volume, in GiB.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-type</code> - The type of EBS volume:
     * <code>gp2</code> or <code>gp3</code> for General Purpose SSD, <code>io1</code>
     * or <code>io2</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput
     * Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for
     * Magnetic.</p> </li> <li> <p> <code>launch.group-id</code> - The ID of the
     * security group for the instance.</p> </li> <li> <p>
     * <code>launch.group-name</code> - The name of the security group for the
     * instance.</p> </li> <li> <p> <code>launch.image-id</code> - The ID of the
     * AMI.</p> </li> <li> <p> <code>launch.instance-type</code> - The type of instance
     * (for example, <code>m3.medium</code>).</p> </li> <li> <p>
     * <code>launch.kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>launch.key-name</code> - The name of the key pair the instance launched
     * with.</p> </li> <li> <p> <code>launch.monitoring-enabled</code> - Whether
     * detailed monitoring is enabled for the Spot Instance.</p> </li> <li> <p>
     * <code>launch.ramdisk-id</code> - The RAM disk ID.</p> </li> <li> <p>
     * <code>launched-availability-zone</code> - The Availability Zone in which the
     * request is launched.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Indicates whether the IP
     * address is the primary private IP address.</p> </li> <li> <p>
     * <code>network-interface.delete-on-termination</code> - Indicates whether the
     * network interface is deleted when the instance is terminated.</p> </li> <li> <p>
     * <code>network-interface.description</code> - A description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.device-index</code> - The
     * index of the device for the network interface attachment on the instance.</p>
     * </li> <li> <p> <code>network-interface.group-id</code> - The ID of the security
     * group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.private-ip-address</code>
     * - The primary private IP address of the network interface.</p> </li> <li> <p>
     * <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>product-description</code> - The product
     * description associated with the instance (<code>Linux/UNIX</code> |
     * <code>Windows</code>).</p> </li> <li> <p> <code>spot-instance-request-id</code>
     * - The Spot Instance request ID.</p> </li> <li> <p> <code>spot-price</code> - The
     * maximum hourly price for any Spot Instance launched to fulfill the request.</p>
     * </li> <li> <p> <code>state</code> - The state of the Spot Instance request
     * (<code>open</code> | <code>active</code> | <code>closed</code> |
     * <code>cancelled</code> | <code>failed</code>). Spot request status information
     * can help you track your Amazon EC2 Spot Instance requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html">Spot
     * request status</a> in the <i>Amazon EC2 User Guide</i>.</p> </li> <li> <p>
     * <code>status-code</code> - The short code describing the most recent evaluation
     * of your Spot Instance request.</p> </li> <li> <p> <code>status-message</code> -
     * The message explaining the status of the Spot Instance request.</p> </li> <li>
     * <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p> <code>type</code>
     * - The type of Spot Instance request (<code>one-time</code> |
     * <code>persistent</code>).</p> </li> <li> <p> <code>valid-from</code> - The start
     * date of the request.</p> </li> <li> <p> <code>valid-until</code> - The end date
     * of the request.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeSpotInstanceRequestsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeSpotInstanceRequestsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_spotInstanceRequestIds;
    bool m_spotInstanceRequestIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
