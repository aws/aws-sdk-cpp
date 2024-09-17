/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/City.h>
#include <aws/guardduty/model/Country.h>
#include <aws/guardduty/model/GeoLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Organization.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the remote IP address of the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RemoteIpDetails">AWS
   * API Reference</a></p>
   */
  class RemoteIpDetails
  {
  public:
    AWS_GUARDDUTY_API RemoteIpDetails();
    AWS_GUARDDUTY_API RemoteIpDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RemoteIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The city information of the remote IP address.</p>
     */
    inline const City& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const City& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(City&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline RemoteIpDetails& WithCity(const City& value) { SetCity(value); return *this;}
    inline RemoteIpDetails& WithCity(City&& value) { SetCity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline const Country& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Country& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Country&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline RemoteIpDetails& WithCountry(const Country& value) { SetCountry(value); return *this;}
    inline RemoteIpDetails& WithCountry(Country&& value) { SetCountry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location information of the remote IP address.</p>
     */
    inline const GeoLocation& GetGeoLocation() const{ return m_geoLocation; }
    inline bool GeoLocationHasBeenSet() const { return m_geoLocationHasBeenSet; }
    inline void SetGeoLocation(const GeoLocation& value) { m_geoLocationHasBeenSet = true; m_geoLocation = value; }
    inline void SetGeoLocation(GeoLocation&& value) { m_geoLocationHasBeenSet = true; m_geoLocation = std::move(value); }
    inline RemoteIpDetails& WithGeoLocation(const GeoLocation& value) { SetGeoLocation(value); return *this;}
    inline RemoteIpDetails& WithGeoLocation(GeoLocation&& value) { SetGeoLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 remote address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV4() const{ return m_ipAddressV4; }
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }
    inline void SetIpAddressV4(const Aws::String& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = value; }
    inline void SetIpAddressV4(Aws::String&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::move(value); }
    inline void SetIpAddressV4(const char* value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4.assign(value); }
    inline RemoteIpDetails& WithIpAddressV4(const Aws::String& value) { SetIpAddressV4(value); return *this;}
    inline RemoteIpDetails& WithIpAddressV4(Aws::String&& value) { SetIpAddressV4(std::move(value)); return *this;}
    inline RemoteIpDetails& WithIpAddressV4(const char* value) { SetIpAddressV4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 remote address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV6() const{ return m_ipAddressV6; }
    inline bool IpAddressV6HasBeenSet() const { return m_ipAddressV6HasBeenSet; }
    inline void SetIpAddressV6(const Aws::String& value) { m_ipAddressV6HasBeenSet = true; m_ipAddressV6 = value; }
    inline void SetIpAddressV6(Aws::String&& value) { m_ipAddressV6HasBeenSet = true; m_ipAddressV6 = std::move(value); }
    inline void SetIpAddressV6(const char* value) { m_ipAddressV6HasBeenSet = true; m_ipAddressV6.assign(value); }
    inline RemoteIpDetails& WithIpAddressV6(const Aws::String& value) { SetIpAddressV6(value); return *this;}
    inline RemoteIpDetails& WithIpAddressV6(Aws::String&& value) { SetIpAddressV6(std::move(value)); return *this;}
    inline RemoteIpDetails& WithIpAddressV6(const char* value) { SetIpAddressV6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISP organization information of the remote IP address.</p>
     */
    inline const Organization& GetOrganization() const{ return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    inline void SetOrganization(const Organization& value) { m_organizationHasBeenSet = true; m_organization = value; }
    inline void SetOrganization(Organization&& value) { m_organizationHasBeenSet = true; m_organization = std::move(value); }
    inline RemoteIpDetails& WithOrganization(const Organization& value) { SetOrganization(value); return *this;}
    inline RemoteIpDetails& WithOrganization(Organization&& value) { SetOrganization(std::move(value)); return *this;}
    ///@}
  private:

    City m_city;
    bool m_cityHasBeenSet = false;

    Country m_country;
    bool m_countryHasBeenSet = false;

    GeoLocation m_geoLocation;
    bool m_geoLocationHasBeenSet = false;

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet = false;

    Aws::String m_ipAddressV6;
    bool m_ipAddressV6HasBeenSet = false;

    Organization m_organization;
    bool m_organizationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
