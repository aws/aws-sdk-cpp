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
  class DescribeAvailabilityZonesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeAvailabilityZonesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAvailabilityZones"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The names of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetZoneNames() const { return m_zoneNames; }
    inline bool ZoneNamesHasBeenSet() const { return m_zoneNamesHasBeenSet; }
    template<typename ZoneNamesT = Aws::Vector<Aws::String>>
    void SetZoneNames(ZoneNamesT&& value) { m_zoneNamesHasBeenSet = true; m_zoneNames = std::forward<ZoneNamesT>(value); }
    template<typename ZoneNamesT = Aws::Vector<Aws::String>>
    DescribeAvailabilityZonesRequest& WithZoneNames(ZoneNamesT&& value) { SetZoneNames(std::forward<ZoneNamesT>(value)); return *this;}
    template<typename ZoneNamesT = Aws::String>
    DescribeAvailabilityZonesRequest& AddZoneNames(ZoneNamesT&& value) { m_zoneNamesHasBeenSet = true; m_zoneNames.emplace_back(std::forward<ZoneNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Availability Zones, Local Zones, and Wavelength Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetZoneIds() const { return m_zoneIds; }
    inline bool ZoneIdsHasBeenSet() const { return m_zoneIdsHasBeenSet; }
    template<typename ZoneIdsT = Aws::Vector<Aws::String>>
    void SetZoneIds(ZoneIdsT&& value) { m_zoneIdsHasBeenSet = true; m_zoneIds = std::forward<ZoneIdsT>(value); }
    template<typename ZoneIdsT = Aws::Vector<Aws::String>>
    DescribeAvailabilityZonesRequest& WithZoneIds(ZoneIdsT&& value) { SetZoneIds(std::forward<ZoneIdsT>(value)); return *this;}
    template<typename ZoneIdsT = Aws::String>
    DescribeAvailabilityZonesRequest& AddZoneIds(ZoneIdsT&& value) { m_zoneIdsHasBeenSet = true; m_zoneIds.emplace_back(std::forward<ZoneIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include all Availability Zones, Local Zones, and Wavelength Zones regardless
     * of your opt-in status.</p> <p>If you do not use this parameter, the results
     * include only the zones for the Regions where you have chosen the option to opt
     * in.</p>
     */
    inline bool GetAllAvailabilityZones() const { return m_allAvailabilityZones; }
    inline bool AllAvailabilityZonesHasBeenSet() const { return m_allAvailabilityZonesHasBeenSet; }
    inline void SetAllAvailabilityZones(bool value) { m_allAvailabilityZonesHasBeenSet = true; m_allAvailabilityZones = value; }
    inline DescribeAvailabilityZonesRequest& WithAllAvailabilityZones(bool value) { SetAllAvailabilityZones(value); return *this;}
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
    inline DescribeAvailabilityZonesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-long-name</code> - The long name
     * of the zone group for the Availability Zone (for example, <code>US West (Oregon)
     * 1</code>), the Local Zone (for example, for Zone group
     * <code>us-west-2-lax-1</code>, it is <code>US West (Los Angeles)</code>, or the
     * Wavelength Zone (for example, for Zone group <code>us-east-1-wl1</code>, it is
     * <code>US East (Verizon)</code>.</p> </li> <li> <p> <code>group-name</code> - The
     * name of the zone group for the Availability Zone (for example,
     * <code>us-east-1-zg-1</code>), the Local Zone (for example,
     * <code>us-west-2-lax-1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1</code>).</p> </li> <li> <p> <code>message</code> - The Zone
     * message.</p> </li> <li> <p> <code>opt-in-status</code> - The opt-in status
     * (<code>opted-in</code> | <code>not-opted-in</code> |
     * <code>opt-in-not-required</code>).</p> </li> <li> <p>
     * <code>parent-zone-id</code> - The ID of the zone that handles some of the Local
     * Zone and Wavelength Zone control plane operations, such as API calls.</p> </li>
     * <li> <p> <code>parent-zone-name</code> - The ID of the zone that handles some of
     * the Local Zone and Wavelength Zone control plane operations, such as API
     * calls.</p> </li> <li> <p> <code>region-name</code> - The name of the Region for
     * the Zone (for example, <code>us-east-1</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the Availability Zone, the Local Zone, or the
     * Wavelength Zone (<code>available</code> | <code>unavailable</code> |
     * <code>constrained</code>).</p> </li> <li> <p> <code>zone-id</code> - The ID of
     * the Availability Zone (for example, <code>use1-az1</code>), the Local Zone (for
     * example, <code>usw2-lax1-az1</code>), or the Wavelength Zone (for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p> <code>zone-name</code>
     * - The name of the Availability Zone (for example, <code>us-east-1a</code>), the
     * Local Zone (for example, <code>us-west-2-lax-1a</code>), or the Wavelength Zone
     * (for example, <code>us-east-1-wl1-bos-wlz-1</code>).</p> </li> <li> <p>
     * <code>zone-type</code> - The type of zone (<code>availability-zone</code> |
     * <code>local-zone</code> | <code>wavelength-zone</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeAvailabilityZonesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeAvailabilityZonesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_zoneNames;
    bool m_zoneNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_zoneIds;
    bool m_zoneIdsHasBeenSet = false;

    bool m_allAvailabilityZones{false};
    bool m_allAvailabilityZonesHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
