﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/HealthEventStatus.h>
#include <aws/internetmonitor/model/NetworkImpairment.h>
#include <aws/internetmonitor/model/InternetHealth.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>Information about a location impacted by a health event in Amazon CloudWatch
   * Internet Monitor.</p> <p>Geographic regions are hierarchically categorized into
   * country, subdivision, metro and city geographic granularities. The geographic
   * region is identified based on the IP address used at the client
   * locations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/ImpactedLocation">AWS
   * API Reference</a></p>
   */
  class ImpactedLocation
  {
  public:
    AWS_INTERNETMONITOR_API ImpactedLocation();
    AWS_INTERNETMONITOR_API ImpactedLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API ImpactedLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the internet service provider (ISP) or network (ASN).</p>
     */
    inline const Aws::String& GetASName() const{ return m_aSName; }
    inline bool ASNameHasBeenSet() const { return m_aSNameHasBeenSet; }
    inline void SetASName(const Aws::String& value) { m_aSNameHasBeenSet = true; m_aSName = value; }
    inline void SetASName(Aws::String&& value) { m_aSNameHasBeenSet = true; m_aSName = std::move(value); }
    inline void SetASName(const char* value) { m_aSNameHasBeenSet = true; m_aSName.assign(value); }
    inline ImpactedLocation& WithASName(const Aws::String& value) { SetASName(value); return *this;}
    inline ImpactedLocation& WithASName(Aws::String&& value) { SetASName(std::move(value)); return *this;}
    inline ImpactedLocation& WithASName(const char* value) { SetASName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the network at an impacted
     * location.</p>
     */
    inline long long GetASNumber() const{ return m_aSNumber; }
    inline bool ASNumberHasBeenSet() const { return m_aSNumberHasBeenSet; }
    inline void SetASNumber(long long value) { m_aSNumberHasBeenSet = true; m_aSNumber = value; }
    inline ImpactedLocation& WithASNumber(long long value) { SetASNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country where the health event is located.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline ImpactedLocation& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline ImpactedLocation& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline ImpactedLocation& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdivision location where the health event is located. The subdivision
     * usually maps to states in most countries (including the United States). For
     * United Kingdom, it maps to a country (England, Scotland, Wales) or province
     * (Northern Ireland).</p>
     */
    inline const Aws::String& GetSubdivision() const{ return m_subdivision; }
    inline bool SubdivisionHasBeenSet() const { return m_subdivisionHasBeenSet; }
    inline void SetSubdivision(const Aws::String& value) { m_subdivisionHasBeenSet = true; m_subdivision = value; }
    inline void SetSubdivision(Aws::String&& value) { m_subdivisionHasBeenSet = true; m_subdivision = std::move(value); }
    inline void SetSubdivision(const char* value) { m_subdivisionHasBeenSet = true; m_subdivision.assign(value); }
    inline ImpactedLocation& WithSubdivision(const Aws::String& value) { SetSubdivision(value); return *this;}
    inline ImpactedLocation& WithSubdivision(Aws::String&& value) { SetSubdivision(std::move(value)); return *this;}
    inline ImpactedLocation& WithSubdivision(const char* value) { SetSubdivision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metro area where the health event is located.</p> <p>Metro indicates a
     * metropolitan region in the United States, such as the region around New York
     * City. In non-US countries, this is a second-level subdivision. For example, in
     * the United Kingdom, it could be a county, a London borough, a unitary authority,
     * council area, and so on.</p>
     */
    inline const Aws::String& GetMetro() const{ return m_metro; }
    inline bool MetroHasBeenSet() const { return m_metroHasBeenSet; }
    inline void SetMetro(const Aws::String& value) { m_metroHasBeenSet = true; m_metro = value; }
    inline void SetMetro(Aws::String&& value) { m_metroHasBeenSet = true; m_metro = std::move(value); }
    inline void SetMetro(const char* value) { m_metroHasBeenSet = true; m_metro.assign(value); }
    inline ImpactedLocation& WithMetro(const Aws::String& value) { SetMetro(value); return *this;}
    inline ImpactedLocation& WithMetro(Aws::String&& value) { SetMetro(std::move(value)); return *this;}
    inline ImpactedLocation& WithMetro(const char* value) { SetMetro(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the city where the health event is located.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline ImpactedLocation& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline ImpactedLocation& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline ImpactedLocation& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude where the health event is located.</p>
     */
    inline double GetLatitude() const{ return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }
    inline ImpactedLocation& WithLatitude(double value) { SetLatitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude where the health event is located.</p>
     */
    inline double GetLongitude() const{ return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }
    inline ImpactedLocation& WithLongitude(double value) { SetLongitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country code where the health event is located. The ISO 3166-2 codes for
     * the country is provided, when available. </p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }
    inline ImpactedLocation& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}
    inline ImpactedLocation& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}
    inline ImpactedLocation& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdivision code where the health event is located. The ISO 3166-2 codes
     * for country subdivisions is provided, when available. </p>
     */
    inline const Aws::String& GetSubdivisionCode() const{ return m_subdivisionCode; }
    inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }
    inline void SetSubdivisionCode(const Aws::String& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = value; }
    inline void SetSubdivisionCode(Aws::String&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = std::move(value); }
    inline void SetSubdivisionCode(const char* value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode.assign(value); }
    inline ImpactedLocation& WithSubdivisionCode(const Aws::String& value) { SetSubdivisionCode(value); return *this;}
    inline ImpactedLocation& WithSubdivisionCode(Aws::String&& value) { SetSubdivisionCode(std::move(value)); return *this;}
    inline ImpactedLocation& WithSubdivisionCode(const char* value) { SetSubdivisionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service location where the health event is located.</p>
     */
    inline const Aws::String& GetServiceLocation() const{ return m_serviceLocation; }
    inline bool ServiceLocationHasBeenSet() const { return m_serviceLocationHasBeenSet; }
    inline void SetServiceLocation(const Aws::String& value) { m_serviceLocationHasBeenSet = true; m_serviceLocation = value; }
    inline void SetServiceLocation(Aws::String&& value) { m_serviceLocationHasBeenSet = true; m_serviceLocation = std::move(value); }
    inline void SetServiceLocation(const char* value) { m_serviceLocationHasBeenSet = true; m_serviceLocation.assign(value); }
    inline ImpactedLocation& WithServiceLocation(const Aws::String& value) { SetServiceLocation(value); return *this;}
    inline ImpactedLocation& WithServiceLocation(Aws::String&& value) { SetServiceLocation(std::move(value)); return *this;}
    inline ImpactedLocation& WithServiceLocation(const char* value) { SetServiceLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the health event at an impacted location.</p>
     */
    inline const HealthEventStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const HealthEventStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(HealthEventStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImpactedLocation& WithStatus(const HealthEventStatus& value) { SetStatus(value); return *this;}
    inline ImpactedLocation& WithStatus(HealthEventStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cause of the impairment. There are two types of network impairments:
     * Amazon Web Services network issues or internet issues. Internet issues are
     * typically a problem with a network provider, like an internet service provider
     * (ISP).</p>
     */
    inline const NetworkImpairment& GetCausedBy() const{ return m_causedBy; }
    inline bool CausedByHasBeenSet() const { return m_causedByHasBeenSet; }
    inline void SetCausedBy(const NetworkImpairment& value) { m_causedByHasBeenSet = true; m_causedBy = value; }
    inline void SetCausedBy(NetworkImpairment&& value) { m_causedByHasBeenSet = true; m_causedBy = std::move(value); }
    inline ImpactedLocation& WithCausedBy(const NetworkImpairment& value) { SetCausedBy(value); return *this;}
    inline ImpactedLocation& WithCausedBy(NetworkImpairment&& value) { SetCausedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated health at a specific location.</p>
     */
    inline const InternetHealth& GetInternetHealth() const{ return m_internetHealth; }
    inline bool InternetHealthHasBeenSet() const { return m_internetHealthHasBeenSet; }
    inline void SetInternetHealth(const InternetHealth& value) { m_internetHealthHasBeenSet = true; m_internetHealth = value; }
    inline void SetInternetHealth(InternetHealth&& value) { m_internetHealthHasBeenSet = true; m_internetHealth = std::move(value); }
    inline ImpactedLocation& WithInternetHealth(const InternetHealth& value) { SetInternetHealth(value); return *this;}
    inline ImpactedLocation& WithInternetHealth(InternetHealth&& value) { SetInternetHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 prefixes at the client location that was impacted by the health
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    inline void SetIpv4Prefixes(const Aws::Vector<Aws::String>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }
    inline void SetIpv4Prefixes(Aws::Vector<Aws::String>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }
    inline ImpactedLocation& WithIpv4Prefixes(const Aws::Vector<Aws::String>& value) { SetIpv4Prefixes(value); return *this;}
    inline ImpactedLocation& WithIpv4Prefixes(Aws::Vector<Aws::String>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}
    inline ImpactedLocation& AddIpv4Prefixes(const Aws::String& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }
    inline ImpactedLocation& AddIpv4Prefixes(Aws::String&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }
    inline ImpactedLocation& AddIpv4Prefixes(const char* value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_aSName;
    bool m_aSNameHasBeenSet = false;

    long long m_aSNumber;
    bool m_aSNumberHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_subdivision;
    bool m_subdivisionHasBeenSet = false;

    Aws::String m_metro;
    bool m_metroHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    double m_latitude;
    bool m_latitudeHasBeenSet = false;

    double m_longitude;
    bool m_longitudeHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_subdivisionCode;
    bool m_subdivisionCodeHasBeenSet = false;

    Aws::String m_serviceLocation;
    bool m_serviceLocationHasBeenSet = false;

    HealthEventStatus m_status;
    bool m_statusHasBeenSet = false;

    NetworkImpairment m_causedBy;
    bool m_causedByHasBeenSet = false;

    InternetHealth m_internetHealth;
    bool m_internetHealthHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
