/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeAvailabilityZonesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeAvailabilityZonesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAvailabilityZones"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>) For
     * Wavelength Zones, use the name of the group associated with the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>message</code> - The Zone message.</p> </li> <li> <p>
     * <code>opt-in-status</code> - The opt-in status (<code>opted-in</code>, and
     * <code>not-opted-in</code> | <code>opt-in-not-required</code>).</p> </li> <li>
     * <p> <code>parent-zoneID</code> - The ID of the zone that handles some of the
     * Local Zone and Wavelength Zone control plane operations, such as API calls.</p>
     * </li> <li> <p> <code>parent-zoneName</code> - The ID of the zone that handles
     * some of the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code>).</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>use1-az1</code>), the Local Zone (for example,
     * <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1a</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>) For
     * Wavelength Zones, use the name of the group associated with the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>message</code> - The Zone message.</p> </li> <li> <p>
     * <code>opt-in-status</code> - The opt-in status (<code>opted-in</code>, and
     * <code>not-opted-in</code> | <code>opt-in-not-required</code>).</p> </li> <li>
     * <p> <code>parent-zoneID</code> - The ID of the zone that handles some of the
     * Local Zone and Wavelength Zone control plane operations, such as API calls.</p>
     * </li> <li> <p> <code>parent-zoneName</code> - The ID of the zone that handles
     * some of the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code>).</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>use1-az1</code>), the Local Zone (for example,
     * <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1a</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>) For
     * Wavelength Zones, use the name of the group associated with the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>message</code> - The Zone message.</p> </li> <li> <p>
     * <code>opt-in-status</code> - The opt-in status (<code>opted-in</code>, and
     * <code>not-opted-in</code> | <code>opt-in-not-required</code>).</p> </li> <li>
     * <p> <code>parent-zoneID</code> - The ID of the zone that handles some of the
     * Local Zone and Wavelength Zone control plane operations, such as API calls.</p>
     * </li> <li> <p> <code>parent-zoneName</code> - The ID of the zone that handles
     * some of the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code>).</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>use1-az1</code>), the Local Zone (for example,
     * <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1a</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>) For
     * Wavelength Zones, use the name of the group associated with the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>message</code> - The Zone message.</p> </li> <li> <p>
     * <code>opt-in-status</code> - The opt-in status (<code>opted-in</code>, and
     * <code>not-opted-in</code> | <code>opt-in-not-required</code>).</p> </li> <li>
     * <p> <code>parent-zoneID</code> - The ID of the zone that handles some of the
     * Local Zone and Wavelength Zone control plane operations, such as API calls.</p>
     * </li> <li> <p> <code>parent-zoneName</code> - The ID of the zone that handles
     * some of the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code>).</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>use1-az1</code>), the Local Zone (for example,
     * <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1a</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>) For
     * Wavelength Zones, use the name of the group associated with the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>message</code> - The Zone message.</p> </li> <li> <p>
     * <code>opt-in-status</code> - The opt-in status (<code>opted-in</code>, and
     * <code>not-opted-in</code> | <code>opt-in-not-required</code>).</p> </li> <li>
     * <p> <code>parent-zoneID</code> - The ID of the zone that handles some of the
     * Local Zone and Wavelength Zone control plane operations, such as API calls.</p>
     * </li> <li> <p> <code>parent-zoneName</code> - The ID of the zone that handles
     * some of the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code>).</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>use1-az1</code>), the Local Zone (for example,
     * <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1a</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>) For
     * Wavelength Zones, use the name of the group associated with the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>message</code> - The Zone message.</p> </li> <li> <p>
     * <code>opt-in-status</code> - The opt-in status (<code>opted-in</code>, and
     * <code>not-opted-in</code> | <code>opt-in-not-required</code>).</p> </li> <li>
     * <p> <code>parent-zoneID</code> - The ID of the zone that handles some of the
     * Local Zone and Wavelength Zone control plane operations, such as API calls.</p>
     * </li> <li> <p> <code>parent-zoneName</code> - The ID of the zone that handles
     * some of the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code>).</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>use1-az1</code>), the Local Zone (for example,
     * <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1a</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>) For
     * Wavelength Zones, use the name of the group associated with the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>message</code> - The Zone message.</p> </li> <li> <p>
     * <code>opt-in-status</code> - The opt-in status (<code>opted-in</code>, and
     * <code>not-opted-in</code> | <code>opt-in-not-required</code>).</p> </li> <li>
     * <p> <code>parent-zoneID</code> - The ID of the zone that handles some of the
     * Local Zone and Wavelength Zone control plane operations, such as API calls.</p>
     * </li> <li> <p> <code>parent-zoneName</code> - The ID of the zone that handles
     * some of the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code>).</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>use1-az1</code>), the Local Zone (for example,
     * <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1a</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - For Availability
     * Zones, use the Region name. For Local Zones, use the name of the group
     * associated with the Local Zone (for example, <code>us-west-2-lax-1</code>) For
     * Wavelength Zones, use the name of the group associated with the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>message</code> - The Zone message.</p> </li> <li> <p>
     * <code>opt-in-status</code> - The opt-in status (<code>opted-in</code>, and
     * <code>not-opted-in</code> | <code>opt-in-not-required</code>).</p> </li> <li>
     * <p> <code>parent-zoneID</code> - The ID of the zone that handles some of the
     * Local Zone and Wavelength Zone control plane operations, such as API calls.</p>
     * </li> <li> <p> <code>parent-zoneName</code> - The ID of the zone that handles
     * some of the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code>).</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>use1-az1</code>), the Local Zone (for example,
     * <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> <li> <p>
     * <code>zone-name</code> - The name of the Availability Zone (for example,
     * <code>us-east-1a</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1a</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-type</code>
     * - The type of zone, for example, <code>local-zone</code>.</p> </li> </ul>
     */
    inline DescribeAvailabilityZonesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetZoneNames() const{ return m_zoneNames; }

    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline bool ZoneNamesHasBeenSet() const { return m_zoneNamesHasBeenSet; }

    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline void SetZoneNames(const Aws::Vector<Aws::String>& value) { m_zoneNamesHasBeenSet = true; m_zoneNames = value; }

    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline void SetZoneNames(Aws::Vector<Aws::String>&& value) { m_zoneNamesHasBeenSet = true; m_zoneNames = std::move(value); }

    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneNames(const Aws::Vector<Aws::String>& value) { SetZoneNames(value); return *this;}

    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneNames(Aws::Vector<Aws::String>&& value) { SetZoneNames(std::move(value)); return *this;}

    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(const Aws::String& value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(value); return *this; }

    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(Aws::String&& value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneNames(const char* value) { m_zoneNamesHasBeenSet = true; m_zoneNames.push_back(value); return *this; }


    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetZoneIds() const{ return m_zoneIds; }

    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline bool ZoneIdsHasBeenSet() const { return m_zoneIdsHasBeenSet; }

    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline void SetZoneIds(const Aws::Vector<Aws::String>& value) { m_zoneIdsHasBeenSet = true; m_zoneIds = value; }

    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline void SetZoneIds(Aws::Vector<Aws::String>&& value) { m_zoneIdsHasBeenSet = true; m_zoneIds = std::move(value); }

    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneIds(const Aws::Vector<Aws::String>& value) { SetZoneIds(value); return *this;}

    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& WithZoneIds(Aws::Vector<Aws::String>&& value) { SetZoneIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneIds(const Aws::String& value) { m_zoneIdsHasBeenSet = true; m_zoneIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneIds(Aws::String&& value) { m_zoneIdsHasBeenSet = true; m_zoneIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline DescribeAvailabilityZonesRequest& AddZoneIds(const char* value) { m_zoneIdsHasBeenSet = true; m_zoneIds.push_back(value); return *this; }


    /**
     * <p>Include all Availability Zones, Local Zones, and Wavelength Zones regardless
     * of your opt-in status.</p> <p>If you do not use this parameter, the results
     * include only the zones for the Regions where you have chosen the option to opt
     * in.</p>
     */
    inline bool GetAllAvailabilityZones() const{ return m_allAvailabilityZones; }

    /**
     * <p>Include all Availability Zones, Local Zones, and Wavelength Zones regardless
     * of your opt-in status.</p> <p>If you do not use this parameter, the results
     * include only the zones for the Regions where you have chosen the option to opt
     * in.</p>
     */
    inline bool AllAvailabilityZonesHasBeenSet() const { return m_allAvailabilityZonesHasBeenSet; }

    /**
     * <p>Include all Availability Zones, Local Zones, and Wavelength Zones regardless
     * of your opt-in status.</p> <p>If you do not use this parameter, the results
     * include only the zones for the Regions where you have chosen the option to opt
     * in.</p>
     */
    inline void SetAllAvailabilityZones(bool value) { m_allAvailabilityZonesHasBeenSet = true; m_allAvailabilityZones = value; }

    /**
     * <p>Include all Availability Zones, Local Zones, and Wavelength Zones regardless
     * of your opt-in status.</p> <p>If you do not use this parameter, the results
     * include only the zones for the Regions where you have chosen the option to opt
     * in.</p>
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
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_zoneNames;
    bool m_zoneNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_zoneIds;
    bool m_zoneIdsHasBeenSet = false;

    bool m_allAvailabilityZones;
    bool m_allAvailabilityZonesHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
