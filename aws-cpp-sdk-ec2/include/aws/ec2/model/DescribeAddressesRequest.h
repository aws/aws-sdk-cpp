/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeAddressesRequest : public EC2Request
  {
  public:
    DescribeAddressesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddresses"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - [EC2-VPC] The allocation ID for the
     * address.</p> </li> <li> <p> <code>association-id</code> - [EC2-VPC] The
     * association ID for the address.</p> </li> <li> <p> <code>domain</code> -
     * Indicates whether the address is for use in EC2-Classic (<code>standard</code>)
     * or in a VPC (<code>vpc</code>).</p> </li> <li> <p> <code>instance-id</code> -
     * The ID of the instance the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-id</code> - [EC2-VPC] The ID of the network
     * interface that the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-interface-owner-id</code> - The AWS account ID of the owner.</p>
     * </li> <li> <p> <code>private-ip-address</code> - [EC2-VPC] The private IP
     * address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - [EC2-VPC] The allocation ID for the
     * address.</p> </li> <li> <p> <code>association-id</code> - [EC2-VPC] The
     * association ID for the address.</p> </li> <li> <p> <code>domain</code> -
     * Indicates whether the address is for use in EC2-Classic (<code>standard</code>)
     * or in a VPC (<code>vpc</code>).</p> </li> <li> <p> <code>instance-id</code> -
     * The ID of the instance the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-id</code> - [EC2-VPC] The ID of the network
     * interface that the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-interface-owner-id</code> - The AWS account ID of the owner.</p>
     * </li> <li> <p> <code>private-ip-address</code> - [EC2-VPC] The private IP
     * address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - [EC2-VPC] The allocation ID for the
     * address.</p> </li> <li> <p> <code>association-id</code> - [EC2-VPC] The
     * association ID for the address.</p> </li> <li> <p> <code>domain</code> -
     * Indicates whether the address is for use in EC2-Classic (<code>standard</code>)
     * or in a VPC (<code>vpc</code>).</p> </li> <li> <p> <code>instance-id</code> -
     * The ID of the instance the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-id</code> - [EC2-VPC] The ID of the network
     * interface that the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-interface-owner-id</code> - The AWS account ID of the owner.</p>
     * </li> <li> <p> <code>private-ip-address</code> - [EC2-VPC] The private IP
     * address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - [EC2-VPC] The allocation ID for the
     * address.</p> </li> <li> <p> <code>association-id</code> - [EC2-VPC] The
     * association ID for the address.</p> </li> <li> <p> <code>domain</code> -
     * Indicates whether the address is for use in EC2-Classic (<code>standard</code>)
     * or in a VPC (<code>vpc</code>).</p> </li> <li> <p> <code>instance-id</code> -
     * The ID of the instance the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-id</code> - [EC2-VPC] The ID of the network
     * interface that the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-interface-owner-id</code> - The AWS account ID of the owner.</p>
     * </li> <li> <p> <code>private-ip-address</code> - [EC2-VPC] The private IP
     * address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - [EC2-VPC] The allocation ID for the
     * address.</p> </li> <li> <p> <code>association-id</code> - [EC2-VPC] The
     * association ID for the address.</p> </li> <li> <p> <code>domain</code> -
     * Indicates whether the address is for use in EC2-Classic (<code>standard</code>)
     * or in a VPC (<code>vpc</code>).</p> </li> <li> <p> <code>instance-id</code> -
     * The ID of the instance the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-id</code> - [EC2-VPC] The ID of the network
     * interface that the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-interface-owner-id</code> - The AWS account ID of the owner.</p>
     * </li> <li> <p> <code>private-ip-address</code> - [EC2-VPC] The private IP
     * address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeAddressesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - [EC2-VPC] The allocation ID for the
     * address.</p> </li> <li> <p> <code>association-id</code> - [EC2-VPC] The
     * association ID for the address.</p> </li> <li> <p> <code>domain</code> -
     * Indicates whether the address is for use in EC2-Classic (<code>standard</code>)
     * or in a VPC (<code>vpc</code>).</p> </li> <li> <p> <code>instance-id</code> -
     * The ID of the instance the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-id</code> - [EC2-VPC] The ID of the network
     * interface that the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-interface-owner-id</code> - The AWS account ID of the owner.</p>
     * </li> <li> <p> <code>private-ip-address</code> - [EC2-VPC] The private IP
     * address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeAddressesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - [EC2-VPC] The allocation ID for the
     * address.</p> </li> <li> <p> <code>association-id</code> - [EC2-VPC] The
     * association ID for the address.</p> </li> <li> <p> <code>domain</code> -
     * Indicates whether the address is for use in EC2-Classic (<code>standard</code>)
     * or in a VPC (<code>vpc</code>).</p> </li> <li> <p> <code>instance-id</code> -
     * The ID of the instance the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-id</code> - [EC2-VPC] The ID of the network
     * interface that the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-interface-owner-id</code> - The AWS account ID of the owner.</p>
     * </li> <li> <p> <code>private-ip-address</code> - [EC2-VPC] The private IP
     * address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeAddressesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>allocation-id</code> - [EC2-VPC] The allocation ID for the
     * address.</p> </li> <li> <p> <code>association-id</code> - [EC2-VPC] The
     * association ID for the address.</p> </li> <li> <p> <code>domain</code> -
     * Indicates whether the address is for use in EC2-Classic (<code>standard</code>)
     * or in a VPC (<code>vpc</code>).</p> </li> <li> <p> <code>instance-id</code> -
     * The ID of the instance the address is associated with, if any.</p> </li> <li>
     * <p> <code>network-interface-id</code> - [EC2-VPC] The ID of the network
     * interface that the address is associated with, if any.</p> </li> <li> <p>
     * <code>network-interface-owner-id</code> - The AWS account ID of the owner.</p>
     * </li> <li> <p> <code>private-ip-address</code> - [EC2-VPC] The private IP
     * address associated with the Elastic IP address.</p> </li> <li> <p>
     * <code>public-ip</code> - The Elastic IP address.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeAddressesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicIps() const{ return m_publicIps; }

    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline bool PublicIpsHasBeenSet() const { return m_publicIpsHasBeenSet; }

    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline void SetPublicIps(const Aws::Vector<Aws::String>& value) { m_publicIpsHasBeenSet = true; m_publicIps = value; }

    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline void SetPublicIps(Aws::Vector<Aws::String>&& value) { m_publicIpsHasBeenSet = true; m_publicIps = std::move(value); }

    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline DescribeAddressesRequest& WithPublicIps(const Aws::Vector<Aws::String>& value) { SetPublicIps(value); return *this;}

    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline DescribeAddressesRequest& WithPublicIps(Aws::Vector<Aws::String>&& value) { SetPublicIps(std::move(value)); return *this;}

    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline DescribeAddressesRequest& AddPublicIps(const Aws::String& value) { m_publicIpsHasBeenSet = true; m_publicIps.push_back(value); return *this; }

    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline DescribeAddressesRequest& AddPublicIps(Aws::String&& value) { m_publicIpsHasBeenSet = true; m_publicIps.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Elastic IP addresses.</p> <p>Default: Describes all your Elastic
     * IP addresses.</p>
     */
    inline DescribeAddressesRequest& AddPublicIps(const char* value) { m_publicIpsHasBeenSet = true; m_publicIps.push_back(value); return *this; }


    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllocationIds() const{ return m_allocationIds; }

    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline bool AllocationIdsHasBeenSet() const { return m_allocationIdsHasBeenSet; }

    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline void SetAllocationIds(const Aws::Vector<Aws::String>& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = value; }

    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline void SetAllocationIds(Aws::Vector<Aws::String>&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = std::move(value); }

    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline DescribeAddressesRequest& WithAllocationIds(const Aws::Vector<Aws::String>& value) { SetAllocationIds(value); return *this;}

    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline DescribeAddressesRequest& WithAllocationIds(Aws::Vector<Aws::String>&& value) { SetAllocationIds(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline DescribeAddressesRequest& AddAllocationIds(const Aws::String& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(value); return *this; }

    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline DescribeAddressesRequest& AddAllocationIds(Aws::String&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>[EC2-VPC] Information about the allocation IDs.</p>
     */
    inline DescribeAddressesRequest& AddAllocationIds(const char* value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(value); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeAddressesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_publicIps;
    bool m_publicIpsHasBeenSet;

    Aws::Vector<Aws::String> m_allocationIds;
    bool m_allocationIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
