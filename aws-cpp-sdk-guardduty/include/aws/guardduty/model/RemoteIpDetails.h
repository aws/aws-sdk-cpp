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

  class AWS_GUARDDUTY_API RemoteIpDetails
  {
  public:
    RemoteIpDetails();
    RemoteIpDetails(Aws::Utils::Json::JsonView jsonValue);
    RemoteIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>City information of the remote IP address.</p>
     */
    inline const City& GetCity() const{ return m_city; }

    /**
     * <p>City information of the remote IP address.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>City information of the remote IP address.</p>
     */
    inline void SetCity(const City& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>City information of the remote IP address.</p>
     */
    inline void SetCity(City&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>City information of the remote IP address.</p>
     */
    inline RemoteIpDetails& WithCity(const City& value) { SetCity(value); return *this;}

    /**
     * <p>City information of the remote IP address.</p>
     */
    inline RemoteIpDetails& WithCity(City&& value) { SetCity(std::move(value)); return *this;}


    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline const Country& GetCountry() const{ return m_country; }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline void SetCountry(const Country& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline void SetCountry(Country&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline RemoteIpDetails& WithCountry(const Country& value) { SetCountry(value); return *this;}

    /**
     * <p>Country code of the remote IP address.</p>
     */
    inline RemoteIpDetails& WithCountry(Country&& value) { SetCountry(std::move(value)); return *this;}


    /**
     * <p>Location information of the remote IP address.</p>
     */
    inline const GeoLocation& GetGeoLocation() const{ return m_geoLocation; }

    /**
     * <p>Location information of the remote IP address.</p>
     */
    inline bool GeoLocationHasBeenSet() const { return m_geoLocationHasBeenSet; }

    /**
     * <p>Location information of the remote IP address.</p>
     */
    inline void SetGeoLocation(const GeoLocation& value) { m_geoLocationHasBeenSet = true; m_geoLocation = value; }

    /**
     * <p>Location information of the remote IP address.</p>
     */
    inline void SetGeoLocation(GeoLocation&& value) { m_geoLocationHasBeenSet = true; m_geoLocation = std::move(value); }

    /**
     * <p>Location information of the remote IP address.</p>
     */
    inline RemoteIpDetails& WithGeoLocation(const GeoLocation& value) { SetGeoLocation(value); return *this;}

    /**
     * <p>Location information of the remote IP address.</p>
     */
    inline RemoteIpDetails& WithGeoLocation(GeoLocation&& value) { SetGeoLocation(std::move(value)); return *this;}


    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV4() const{ return m_ipAddressV4; }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline void SetIpAddressV4(const Aws::String& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = value; }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline void SetIpAddressV4(Aws::String&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::move(value); }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline void SetIpAddressV4(const char* value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4.assign(value); }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline RemoteIpDetails& WithIpAddressV4(const Aws::String& value) { SetIpAddressV4(value); return *this;}

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline RemoteIpDetails& WithIpAddressV4(Aws::String&& value) { SetIpAddressV4(std::move(value)); return *this;}

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline RemoteIpDetails& WithIpAddressV4(const char* value) { SetIpAddressV4(value); return *this;}


    /**
     * <p>ISP Organization information of the remote IP address.</p>
     */
    inline const Organization& GetOrganization() const{ return m_organization; }

    /**
     * <p>ISP Organization information of the remote IP address.</p>
     */
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }

    /**
     * <p>ISP Organization information of the remote IP address.</p>
     */
    inline void SetOrganization(const Organization& value) { m_organizationHasBeenSet = true; m_organization = value; }

    /**
     * <p>ISP Organization information of the remote IP address.</p>
     */
    inline void SetOrganization(Organization&& value) { m_organizationHasBeenSet = true; m_organization = std::move(value); }

    /**
     * <p>ISP Organization information of the remote IP address.</p>
     */
    inline RemoteIpDetails& WithOrganization(const Organization& value) { SetOrganization(value); return *this;}

    /**
     * <p>ISP Organization information of the remote IP address.</p>
     */
    inline RemoteIpDetails& WithOrganization(Organization&& value) { SetOrganization(std::move(value)); return *this;}

  private:

    City m_city;
    bool m_cityHasBeenSet;

    Country m_country;
    bool m_countryHasBeenSet;

    GeoLocation m_geoLocation;
    bool m_geoLocationHasBeenSet;

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet;

    Organization m_organization;
    bool m_organizationHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
