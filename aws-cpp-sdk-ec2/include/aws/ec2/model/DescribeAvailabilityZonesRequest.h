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
  class AWS_EC2_API DescribeAvailabilityZonesRequest : public EC2Request
  {
  public:
    DescribeAvailabilityZonesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAvailabilityZones"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>).</p>
     * </li> <li> <p> <code>message</code> - The Availability Zone or Local Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt in status
     * (<code>opted-in</code>, and <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p> <code>region-name</code> -
     * The name of the Region for the Availability Zone or Local Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p> <code>state</code> - The state of
     * the Availability Zone or Local Zone (<code>available</code> |
     * <code>information</code> | <code>impaired</code> |
     * <code>unavailable</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>) or the Local Zone
     * (for example, use <code>usw2-lax1-az1</code>).</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>) or the Local Zone (for example, use
     * <code>us-west-2-lax-1a</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>).</p>
     * </li> <li> <p> <code>message</code> - The Availability Zone or Local Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt in status
     * (<code>opted-in</code>, and <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p> <code>region-name</code> -
     * The name of the Region for the Availability Zone or Local Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p> <code>state</code> - The state of
     * the Availability Zone or Local Zone (<code>available</code> |
     * <code>information</code> | <code>impaired</code> |
     * <code>unavailable</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>) or the Local Zone
     * (for example, use <code>usw2-lax1-az1</code>).</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>) or the Local Zone (for example, use
     * <code>us-west-2-lax-1a</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>).</p>
     * </li> <li> <p> <code>message</code> - The Availability Zone or Local Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt in status
     * (<code>opted-in</code>, and <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p> <code>region-name</code> -
     * The name of the Region for the Availability Zone or Local Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p> <code>state</code> - The state of
     * the Availability Zone or Local Zone (<code>available</code> |
     * <code>information</code> | <code>impaired</code> |
     * <code>unavailable</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>) or the Local Zone
     * (for example, use <code>usw2-lax1-az1</code>).</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>) or the Local Zone (for example, use
     * <code>us-west-2-lax-1a</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>).</p>
     * </li> <li> <p> <code>message</code> - The Availability Zone or Local Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt in status
     * (<code>opted-in</code>, and <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p> <code>region-name</code> -
     * The name of the Region for the Availability Zone or Local Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p> <code>state</code> - The state of
     * the Availability Zone or Local Zone (<code>available</code> |
     * <code>information</code> | <code>impaired</code> |
     * <code>unavailable</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>) or the Local Zone
     * (for example, use <code>usw2-lax1-az1</code>).</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>) or the Local Zone (for example, use
     * <code>us-west-2-lax-1a</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>).</p>
     * </li> <li> <p> <code>message</code> - The Availability Zone or Local Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt in status
     * (<code>opted-in</code>, and <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p> <code>region-name</code> -
     * The name of the Region for the Availability Zone or Local Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p> <code>state</code> - The state of
     * the Availability Zone or Local Zone (<code>available</code> |
     * <code>information</code> | <code>impaired</code> |
     * <code>unavailable</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>) or the Local Zone
     * (for example, use <code>usw2-lax1-az1</code>).</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>) or the Local Zone (for example, use
     * <code>us-west-2-lax-1a</code>).</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>).</p>
     * </li> <li> <p> <code>message</code> - The Availability Zone or Local Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt in status
     * (<code>opted-in</code>, and <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p> <code>region-name</code> -
     * The name of the Region for the Availability Zone or Local Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p> <code>state</code> - The state of
     * the Availability Zone or Local Zone (<code>available</code> |
     * <code>information</code> | <code>impaired</code> |
     * <code>unavailable</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>) or the Local Zone
     * (for example, use <code>usw2-lax1-az1</code>).</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>) or the Local Zone (for example, use
     * <code>us-west-2-lax-1a</code>).</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>).</p>
     * </li> <li> <p> <code>message</code> - The Availability Zone or Local Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt in status
     * (<code>opted-in</code>, and <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p> <code>region-name</code> -
     * The name of the Region for the Availability Zone or Local Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p> <code>state</code> - The state of
     * the Availability Zone or Local Zone (<code>available</code> |
     * <code>information</code> | <code>impaired</code> |
     * <code>unavailable</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>) or the Local Zone
     * (for example, use <code>usw2-lax1-az1</code>).</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>) or the Local Zone (for example, use
     * <code>us-west-2-lax-1a</code>).</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>).</p>
     * </li> <li> <p> <code>message</code> - The Availability Zone or Local Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt in status
     * (<code>opted-in</code>, and <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p> <code>region-name</code> -
     * The name of the Region for the Availability Zone or Local Zone (for example,
     * <code>us-east-1</code>).</p> </li> <li> <p> <code>state</code> - The state of
     * the Availability Zone or Local Zone (<code>available</code> |
     * <code>information</code> | <code>impaired</code> |
     * <code>unavailable</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>) or the Local Zone
     * (for example, use <code>usw2-lax1-az1</code>).</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>) or the Local Zone (for example, use
     * <code>us-west-2-lax-1a</code>).</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetZoneNames() const{ return m_zoneNames; }

    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline bool ZoneNamesHasBeenSet() const { return m_zoneNamesHasBeenSet; }

    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline void SetZoneNames(const Aws::Vector<Aws::String>& value) { m_zoneNamesHasBeenSet = true; m_zoneNames = value; }

    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline void SetZoneNames(Aws::Vector<Aws::String>&& value) { m_zoneNamesHasBeenSet = true; m_zoneNames = std::move(value); }

    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneNames(const Aws::Vector<Aws::String>& value) { SetZoneNames(value); return *this;}

    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneNames(Aws::Vector<Aws::String>&& value) { SetZoneNames(std::move(value)); return *this;}

    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(const Aws::String& value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(value); return *this; }

    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(Aws::String&& value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(const char* value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(value); return *this; }


    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetZoneIds() const{ return m_zoneIds; }

    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline bool ZoneIdsHasBeenSet() const { return m_zoneIdsHasBeenSet; }

    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline void SetZoneIds(const Aws::Vector<Aws::String>& value) { m_zoneIdsHasBeenSet = true; m_zoneIds = value; }

    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline void SetZoneIds(Aws::Vector<Aws::String>&& value) { m_zoneIdsHasBeenSet = true; m_zoneIds = std::move(value); }

    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneIds(const Aws::Vector<Aws::String>& value) { SetZoneIds(value); return *this;}

    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneIds(Aws::Vector<Aws::String>&& value) { SetZoneIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneIds(const Aws::String& value) { m_zoneIdsHasBeenSet = true; m_zoneIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneIds(Aws::String&& value) { m_zoneIdsHasBeenSet = true; m_zoneIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Availability Zones and Local Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneIds(const char* value) { m_zoneIdsHasBeenSet = true; m_zoneIds.push_back(value); return *this; }


    /**
     * <p>Include all Availability Zones and Local Zones regardless of your opt in
     * status.</p> <p>If you do not use this parameter, the results include only the
     * zones for the Regions where you have chosen the option to opt in.</p>
     */
    inline bool GetAllAvailabilityZones() const{ return m_allAvailabilityZones; }

    /**
     * <p>Include all Availability Zones and Local Zones regardless of your opt in
     * status.</p> <p>If you do not use this parameter, the results include only the
     * zones for the Regions where you have chosen the option to opt in.</p>
     */
    inline bool AllAvailabilityZonesHasBeenSet() const { return m_allAvailabilityZonesHasBeenSet; }

    /**
     * <p>Include all Availability Zones and Local Zones regardless of your opt in
     * status.</p> <p>If you do not use this parameter, the results include only the
     * zones for the Regions where you have chosen the option to opt in.</p>
     */
    inline void SetAllAvailabilityZones(bool value) { m_allAvailabilityZonesHasBeenSet = true; m_allAvailabilityZones = value; }

    /**
     * <p>Include all Availability Zones and Local Zones regardless of your opt in
     * status.</p> <p>If you do not use this parameter, the results include only the
     * zones for the Regions where you have chosen the option to opt in.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithAllAvailabilityZones(bool value) { SetAllAvailabilityZones(value); return *this;}


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
    inline DescribeAvailabilityZonesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_zoneNames;
    bool m_zoneNamesHasBeenSet;

    Aws::Vector<Aws::String> m_zoneIds;
    bool m_zoneIdsHasBeenSet;

    bool m_allAvailabilityZones;
    bool m_allAvailabilityZonesHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
