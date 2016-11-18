﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeAvailabilityZones.</p>
   */
  class AWS_EC2_API DescribeAvailabilityZonesRequest : public EC2Request
  {
  public:
    DescribeAvailabilityZonesRequest();
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
    inline DescribeAvailabilityZonesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The names of one or more Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetZoneNames() const{ return m_zoneNames; }

    /**
     * <p>The names of one or more Availability Zones.</p>
     */
    inline void SetZoneNames(const Aws::Vector<Aws::String>& value) { m_zoneNamesHasBeenSet = true; m_zoneNames = value; }

    /**
     * <p>The names of one or more Availability Zones.</p>
     */
    inline void SetZoneNames(Aws::Vector<Aws::String>&& value) { m_zoneNamesHasBeenSet = true; m_zoneNames = value; }

    /**
     * <p>The names of one or more Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneNames(const Aws::Vector<Aws::String>& value) { SetZoneNames(value); return *this;}

    /**
     * <p>The names of one or more Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneNames(Aws::Vector<Aws::String>&& value) { SetZoneNames(value); return *this;}

    /**
     * <p>The names of one or more Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(const Aws::String& value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(value); return *this; }

    /**
     * <p>The names of one or more Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(Aws::String&& value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(value); return *this; }

    /**
     * <p>The names of one or more Availability Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(const char* value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>message</code> - Information
     * about the Availability Zone.</p> </li> <li> <p><code>region-name</code> - The
     * name of the region for the Availability Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p><code>state</code> - The state of the
     * Availability Zone (<code>available</code> | <code>information</code> |
     * <code>impaired</code> | <code>unavailable</code>).</p> </li> <li>
     * <p><code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>message</code> - Information
     * about the Availability Zone.</p> </li> <li> <p><code>region-name</code> - The
     * name of the region for the Availability Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p><code>state</code> - The state of the
     * Availability Zone (<code>available</code> | <code>information</code> |
     * <code>impaired</code> | <code>unavailable</code>).</p> </li> <li>
     * <p><code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>message</code> - Information
     * about the Availability Zone.</p> </li> <li> <p><code>region-name</code> - The
     * name of the region for the Availability Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p><code>state</code> - The state of the
     * Availability Zone (<code>available</code> | <code>information</code> |
     * <code>impaired</code> | <code>unavailable</code>).</p> </li> <li>
     * <p><code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>message</code> - Information
     * about the Availability Zone.</p> </li> <li> <p><code>region-name</code> - The
     * name of the region for the Availability Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p><code>state</code> - The state of the
     * Availability Zone (<code>available</code> | <code>information</code> |
     * <code>impaired</code> | <code>unavailable</code>).</p> </li> <li>
     * <p><code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>).</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>message</code> - Information
     * about the Availability Zone.</p> </li> <li> <p><code>region-name</code> - The
     * name of the region for the Availability Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p><code>state</code> - The state of the
     * Availability Zone (<code>available</code> | <code>information</code> |
     * <code>impaired</code> | <code>unavailable</code>).</p> </li> <li>
     * <p><code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>).</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>message</code> - Information
     * about the Availability Zone.</p> </li> <li> <p><code>region-name</code> - The
     * name of the region for the Availability Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p><code>state</code> - The state of the
     * Availability Zone (<code>available</code> | <code>information</code> |
     * <code>impaired</code> | <code>unavailable</code>).</p> </li> <li>
     * <p><code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>).</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>message</code> - Information
     * about the Availability Zone.</p> </li> <li> <p><code>region-name</code> - The
     * name of the region for the Availability Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p><code>state</code> - The state of the
     * Availability Zone (<code>available</code> | <code>information</code> |
     * <code>impaired</code> | <code>unavailable</code>).</p> </li> <li>
     * <p><code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>).</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_zoneNames;
    bool m_zoneNamesHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
