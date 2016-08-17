/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/OfferingTypeValues.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeReservedInstances.</p>
   */
  class AWS_EC2_API DescribeReservedInstancesRequest : public EC2Request
  {
  public:
    DescribeReservedInstancesRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeReservedInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstancesIds() const{ return m_reservedInstancesIds; }

    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline void SetReservedInstancesIds(const Aws::Vector<Aws::String>& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = value; }

    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline void SetReservedInstancesIds(Aws::Vector<Aws::String>&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = value; }

    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline DescribeReservedInstancesRequest& WithReservedInstancesIds(const Aws::Vector<Aws::String>& value) { SetReservedInstancesIds(value); return *this;}

    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline DescribeReservedInstancesRequest& WithReservedInstancesIds(Aws::Vector<Aws::String>&& value) { SetReservedInstancesIds(value); return *this;}

    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline DescribeReservedInstancesRequest& AddReservedInstancesIds(const Aws::String& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }

    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline DescribeReservedInstancesRequest& AddReservedInstancesIds(Aws::String&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }

    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline DescribeReservedInstancesRequest& AddReservedInstancesIds(const char* value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li>
     * <p><code>duration</code> - The duration of the Reserved Instance (one year or
     * three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p>
     * </li> <li> <p><code>end</code> - The time when the Reserved Instance expires
     * (for example, 2015-08-07T11:54:42.000Z).</p> </li> <li>
     * <p><code>fixed-price</code> - The purchase price of the Reserved Instance (for
     * example, 9800.0).</p> </li> <li> <p><code>instance-type</code> - The instance
     * type that is covered by the reservation.</p> </li> <li>
     * <p><code>product-description</code> - The Reserved Instance product platform
     * description. Instances that include <code>(Amazon VPC)</code> in the product
     * platform description will only be displayed to EC2-Classic account holders and
     * are for use with Amazon VPC (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon
     * VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> |
     * <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon
     * VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> |
     * <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server
     * Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> |
     * <code>Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL
     * Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon
     * VPC)</code>).</p> </li> <li> <p><code>reserved-instances-id</code> - The ID of
     * the Reserved Instance.</p> </li> <li> <p><code>start</code> - The time at which
     * the Reserved Instance purchase request was placed (for example,
     * 2014-08-07T11:54:42.000Z).</p> </li> <li> <p><code>state</code> - The state of
     * the Reserved Instance (<code>payment-pending</code> | <code>active</code> |
     * <code>payment-failed</code> | <code>retired</code>).</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>usage-price</code> - The usage price of the
     * Reserved Instance, per hour (for example, 0.84).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li>
     * <p><code>duration</code> - The duration of the Reserved Instance (one year or
     * three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p>
     * </li> <li> <p><code>end</code> - The time when the Reserved Instance expires
     * (for example, 2015-08-07T11:54:42.000Z).</p> </li> <li>
     * <p><code>fixed-price</code> - The purchase price of the Reserved Instance (for
     * example, 9800.0).</p> </li> <li> <p><code>instance-type</code> - The instance
     * type that is covered by the reservation.</p> </li> <li>
     * <p><code>product-description</code> - The Reserved Instance product platform
     * description. Instances that include <code>(Amazon VPC)</code> in the product
     * platform description will only be displayed to EC2-Classic account holders and
     * are for use with Amazon VPC (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon
     * VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> |
     * <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon
     * VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> |
     * <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server
     * Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> |
     * <code>Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL
     * Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon
     * VPC)</code>).</p> </li> <li> <p><code>reserved-instances-id</code> - The ID of
     * the Reserved Instance.</p> </li> <li> <p><code>start</code> - The time at which
     * the Reserved Instance purchase request was placed (for example,
     * 2014-08-07T11:54:42.000Z).</p> </li> <li> <p><code>state</code> - The state of
     * the Reserved Instance (<code>payment-pending</code> | <code>active</code> |
     * <code>payment-failed</code> | <code>retired</code>).</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>usage-price</code> - The usage price of the
     * Reserved Instance, per hour (for example, 0.84).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li>
     * <p><code>duration</code> - The duration of the Reserved Instance (one year or
     * three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p>
     * </li> <li> <p><code>end</code> - The time when the Reserved Instance expires
     * (for example, 2015-08-07T11:54:42.000Z).</p> </li> <li>
     * <p><code>fixed-price</code> - The purchase price of the Reserved Instance (for
     * example, 9800.0).</p> </li> <li> <p><code>instance-type</code> - The instance
     * type that is covered by the reservation.</p> </li> <li>
     * <p><code>product-description</code> - The Reserved Instance product platform
     * description. Instances that include <code>(Amazon VPC)</code> in the product
     * platform description will only be displayed to EC2-Classic account holders and
     * are for use with Amazon VPC (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon
     * VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> |
     * <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon
     * VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> |
     * <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server
     * Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> |
     * <code>Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL
     * Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon
     * VPC)</code>).</p> </li> <li> <p><code>reserved-instances-id</code> - The ID of
     * the Reserved Instance.</p> </li> <li> <p><code>start</code> - The time at which
     * the Reserved Instance purchase request was placed (for example,
     * 2014-08-07T11:54:42.000Z).</p> </li> <li> <p><code>state</code> - The state of
     * the Reserved Instance (<code>payment-pending</code> | <code>active</code> |
     * <code>payment-failed</code> | <code>retired</code>).</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>usage-price</code> - The usage price of the
     * Reserved Instance, per hour (for example, 0.84).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li>
     * <p><code>duration</code> - The duration of the Reserved Instance (one year or
     * three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p>
     * </li> <li> <p><code>end</code> - The time when the Reserved Instance expires
     * (for example, 2015-08-07T11:54:42.000Z).</p> </li> <li>
     * <p><code>fixed-price</code> - The purchase price of the Reserved Instance (for
     * example, 9800.0).</p> </li> <li> <p><code>instance-type</code> - The instance
     * type that is covered by the reservation.</p> </li> <li>
     * <p><code>product-description</code> - The Reserved Instance product platform
     * description. Instances that include <code>(Amazon VPC)</code> in the product
     * platform description will only be displayed to EC2-Classic account holders and
     * are for use with Amazon VPC (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon
     * VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> |
     * <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon
     * VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> |
     * <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server
     * Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> |
     * <code>Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL
     * Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon
     * VPC)</code>).</p> </li> <li> <p><code>reserved-instances-id</code> - The ID of
     * the Reserved Instance.</p> </li> <li> <p><code>start</code> - The time at which
     * the Reserved Instance purchase request was placed (for example,
     * 2014-08-07T11:54:42.000Z).</p> </li> <li> <p><code>state</code> - The state of
     * the Reserved Instance (<code>payment-pending</code> | <code>active</code> |
     * <code>payment-failed</code> | <code>retired</code>).</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>usage-price</code> - The usage price of the
     * Reserved Instance, per hour (for example, 0.84).</p> </li> </ul>
     */
    inline DescribeReservedInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li>
     * <p><code>duration</code> - The duration of the Reserved Instance (one year or
     * three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p>
     * </li> <li> <p><code>end</code> - The time when the Reserved Instance expires
     * (for example, 2015-08-07T11:54:42.000Z).</p> </li> <li>
     * <p><code>fixed-price</code> - The purchase price of the Reserved Instance (for
     * example, 9800.0).</p> </li> <li> <p><code>instance-type</code> - The instance
     * type that is covered by the reservation.</p> </li> <li>
     * <p><code>product-description</code> - The Reserved Instance product platform
     * description. Instances that include <code>(Amazon VPC)</code> in the product
     * platform description will only be displayed to EC2-Classic account holders and
     * are for use with Amazon VPC (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon
     * VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> |
     * <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon
     * VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> |
     * <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server
     * Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> |
     * <code>Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL
     * Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon
     * VPC)</code>).</p> </li> <li> <p><code>reserved-instances-id</code> - The ID of
     * the Reserved Instance.</p> </li> <li> <p><code>start</code> - The time at which
     * the Reserved Instance purchase request was placed (for example,
     * 2014-08-07T11:54:42.000Z).</p> </li> <li> <p><code>state</code> - The state of
     * the Reserved Instance (<code>payment-pending</code> | <code>active</code> |
     * <code>payment-failed</code> | <code>retired</code>).</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>usage-price</code> - The usage price of the
     * Reserved Instance, per hour (for example, 0.84).</p> </li> </ul>
     */
    inline DescribeReservedInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li>
     * <p><code>duration</code> - The duration of the Reserved Instance (one year or
     * three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p>
     * </li> <li> <p><code>end</code> - The time when the Reserved Instance expires
     * (for example, 2015-08-07T11:54:42.000Z).</p> </li> <li>
     * <p><code>fixed-price</code> - The purchase price of the Reserved Instance (for
     * example, 9800.0).</p> </li> <li> <p><code>instance-type</code> - The instance
     * type that is covered by the reservation.</p> </li> <li>
     * <p><code>product-description</code> - The Reserved Instance product platform
     * description. Instances that include <code>(Amazon VPC)</code> in the product
     * platform description will only be displayed to EC2-Classic account holders and
     * are for use with Amazon VPC (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon
     * VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> |
     * <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon
     * VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> |
     * <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server
     * Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> |
     * <code>Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL
     * Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon
     * VPC)</code>).</p> </li> <li> <p><code>reserved-instances-id</code> - The ID of
     * the Reserved Instance.</p> </li> <li> <p><code>start</code> - The time at which
     * the Reserved Instance purchase request was placed (for example,
     * 2014-08-07T11:54:42.000Z).</p> </li> <li> <p><code>state</code> - The state of
     * the Reserved Instance (<code>payment-pending</code> | <code>active</code> |
     * <code>payment-failed</code> | <code>retired</code>).</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>usage-price</code> - The usage price of the
     * Reserved Instance, per hour (for example, 0.84).</p> </li> </ul>
     */
    inline DescribeReservedInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li>
     * <p><code>duration</code> - The duration of the Reserved Instance (one year or
     * three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p>
     * </li> <li> <p><code>end</code> - The time when the Reserved Instance expires
     * (for example, 2015-08-07T11:54:42.000Z).</p> </li> <li>
     * <p><code>fixed-price</code> - The purchase price of the Reserved Instance (for
     * example, 9800.0).</p> </li> <li> <p><code>instance-type</code> - The instance
     * type that is covered by the reservation.</p> </li> <li>
     * <p><code>product-description</code> - The Reserved Instance product platform
     * description. Instances that include <code>(Amazon VPC)</code> in the product
     * platform description will only be displayed to EC2-Classic account holders and
     * are for use with Amazon VPC (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon
     * VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> |
     * <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon
     * VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> |
     * <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server
     * Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> |
     * <code>Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL
     * Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon
     * VPC)</code>).</p> </li> <li> <p><code>reserved-instances-id</code> - The ID of
     * the Reserved Instance.</p> </li> <li> <p><code>start</code> - The time at which
     * the Reserved Instance purchase request was placed (for example,
     * 2014-08-07T11:54:42.000Z).</p> </li> <li> <p><code>state</code> - The state of
     * the Reserved Instance (<code>payment-pending</code> | <code>active</code> |
     * <code>payment-failed</code> | <code>retired</code>).</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>usage-price</code> - The usage price of the
     * Reserved Instance, per hour (for example, 0.84).</p> </li> </ul>
     */
    inline DescribeReservedInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The Reserved Instance offering type. If you are using tools that predate the
     * 2011-11-01 API version, you only have access to the <code>Medium
     * Utilization</code> Reserved Instance offering type. </p>
     */
    inline const OfferingTypeValues& GetOfferingType() const{ return m_offeringType; }

    /**
     * <p>The Reserved Instance offering type. If you are using tools that predate the
     * 2011-11-01 API version, you only have access to the <code>Medium
     * Utilization</code> Reserved Instance offering type. </p>
     */
    inline void SetOfferingType(const OfferingTypeValues& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The Reserved Instance offering type. If you are using tools that predate the
     * 2011-11-01 API version, you only have access to the <code>Medium
     * Utilization</code> Reserved Instance offering type. </p>
     */
    inline void SetOfferingType(OfferingTypeValues&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The Reserved Instance offering type. If you are using tools that predate the
     * 2011-11-01 API version, you only have access to the <code>Medium
     * Utilization</code> Reserved Instance offering type. </p>
     */
    inline DescribeReservedInstancesRequest& WithOfferingType(const OfferingTypeValues& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The Reserved Instance offering type. If you are using tools that predate the
     * 2011-11-01 API version, you only have access to the <code>Medium
     * Utilization</code> Reserved Instance offering type. </p>
     */
    inline DescribeReservedInstancesRequest& WithOfferingType(OfferingTypeValues&& value) { SetOfferingType(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_reservedInstancesIds;
    bool m_reservedInstancesIdsHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
    OfferingTypeValues m_offeringType;
    bool m_offeringTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
