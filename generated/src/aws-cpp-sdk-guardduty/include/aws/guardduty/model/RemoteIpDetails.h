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
    AWS_GUARDDUTY_API RemoteIpDetails() = default;
    AWS_GUARDDUTY_API RemoteIpDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RemoteIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The city information of the remote IP address.</p>
     */
    inline const City& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = City>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = City>
    RemoteIpDetails& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline const Country& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Country>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Country>
    RemoteIpDetails& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location information of the remote IP address.</p>
     */
    inline const GeoLocation& GetGeoLocation() const { return m_geoLocation; }
    inline bool GeoLocationHasBeenSet() const { return m_geoLocationHasBeenSet; }
    template<typename GeoLocationT = GeoLocation>
    void SetGeoLocation(GeoLocationT&& value) { m_geoLocationHasBeenSet = true; m_geoLocation = std::forward<GeoLocationT>(value); }
    template<typename GeoLocationT = GeoLocation>
    RemoteIpDetails& WithGeoLocation(GeoLocationT&& value) { SetGeoLocation(std::forward<GeoLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 remote address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV4() const { return m_ipAddressV4; }
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }
    template<typename IpAddressV4T = Aws::String>
    void SetIpAddressV4(IpAddressV4T&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::forward<IpAddressV4T>(value); }
    template<typename IpAddressV4T = Aws::String>
    RemoteIpDetails& WithIpAddressV4(IpAddressV4T&& value) { SetIpAddressV4(std::forward<IpAddressV4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 remote address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV6() const { return m_ipAddressV6; }
    inline bool IpAddressV6HasBeenSet() const { return m_ipAddressV6HasBeenSet; }
    template<typename IpAddressV6T = Aws::String>
    void SetIpAddressV6(IpAddressV6T&& value) { m_ipAddressV6HasBeenSet = true; m_ipAddressV6 = std::forward<IpAddressV6T>(value); }
    template<typename IpAddressV6T = Aws::String>
    RemoteIpDetails& WithIpAddressV6(IpAddressV6T&& value) { SetIpAddressV6(std::forward<IpAddressV6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISP organization information of the remote IP address.</p>
     */
    inline const Organization& GetOrganization() const { return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    template<typename OrganizationT = Organization>
    void SetOrganization(OrganizationT&& value) { m_organizationHasBeenSet = true; m_organization = std::forward<OrganizationT>(value); }
    template<typename OrganizationT = Organization>
    RemoteIpDetails& WithOrganization(OrganizationT&& value) { SetOrganization(std::forward<OrganizationT>(value)); return *this;}
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
