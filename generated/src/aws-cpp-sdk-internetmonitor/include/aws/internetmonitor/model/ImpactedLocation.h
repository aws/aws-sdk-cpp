/**
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
    AWS_INTERNETMONITOR_API ImpactedLocation() = default;
    AWS_INTERNETMONITOR_API ImpactedLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API ImpactedLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the internet service provider (ISP) or network (ASN).</p>
     */
    inline const Aws::String& GetASName() const { return m_aSName; }
    inline bool ASNameHasBeenSet() const { return m_aSNameHasBeenSet; }
    template<typename ASNameT = Aws::String>
    void SetASName(ASNameT&& value) { m_aSNameHasBeenSet = true; m_aSName = std::forward<ASNameT>(value); }
    template<typename ASNameT = Aws::String>
    ImpactedLocation& WithASName(ASNameT&& value) { SetASName(std::forward<ASNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the network at an impacted
     * location.</p>
     */
    inline long long GetASNumber() const { return m_aSNumber; }
    inline bool ASNumberHasBeenSet() const { return m_aSNumberHasBeenSet; }
    inline void SetASNumber(long long value) { m_aSNumberHasBeenSet = true; m_aSNumber = value; }
    inline ImpactedLocation& WithASNumber(long long value) { SetASNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country where the health event is located.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    ImpactedLocation& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdivision location where the health event is located. The subdivision
     * usually maps to states in most countries (including the United States). For
     * United Kingdom, it maps to a country (England, Scotland, Wales) or province
     * (Northern Ireland).</p>
     */
    inline const Aws::String& GetSubdivision() const { return m_subdivision; }
    inline bool SubdivisionHasBeenSet() const { return m_subdivisionHasBeenSet; }
    template<typename SubdivisionT = Aws::String>
    void SetSubdivision(SubdivisionT&& value) { m_subdivisionHasBeenSet = true; m_subdivision = std::forward<SubdivisionT>(value); }
    template<typename SubdivisionT = Aws::String>
    ImpactedLocation& WithSubdivision(SubdivisionT&& value) { SetSubdivision(std::forward<SubdivisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metro area where the health event is located.</p> <p>Metro indicates a
     * metropolitan region in the United States, such as the region around New York
     * City. In non-US countries, this is a second-level subdivision. For example, in
     * the United Kingdom, it could be a county, a London borough, a unitary authority,
     * council area, and so on.</p>
     */
    inline const Aws::String& GetMetro() const { return m_metro; }
    inline bool MetroHasBeenSet() const { return m_metroHasBeenSet; }
    template<typename MetroT = Aws::String>
    void SetMetro(MetroT&& value) { m_metroHasBeenSet = true; m_metro = std::forward<MetroT>(value); }
    template<typename MetroT = Aws::String>
    ImpactedLocation& WithMetro(MetroT&& value) { SetMetro(std::forward<MetroT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the city where the health event is located.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    ImpactedLocation& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude where the health event is located.</p>
     */
    inline double GetLatitude() const { return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }
    inline ImpactedLocation& WithLatitude(double value) { SetLatitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude where the health event is located.</p>
     */
    inline double GetLongitude() const { return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }
    inline ImpactedLocation& WithLongitude(double value) { SetLongitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country code where the health event is located. The ISO 3166-2 codes for
     * the country is provided, when available. </p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    ImpactedLocation& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdivision code where the health event is located. The ISO 3166-2 codes
     * for country subdivisions is provided, when available. </p>
     */
    inline const Aws::String& GetSubdivisionCode() const { return m_subdivisionCode; }
    inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }
    template<typename SubdivisionCodeT = Aws::String>
    void SetSubdivisionCode(SubdivisionCodeT&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = std::forward<SubdivisionCodeT>(value); }
    template<typename SubdivisionCodeT = Aws::String>
    ImpactedLocation& WithSubdivisionCode(SubdivisionCodeT&& value) { SetSubdivisionCode(std::forward<SubdivisionCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service location where the health event is located.</p>
     */
    inline const Aws::String& GetServiceLocation() const { return m_serviceLocation; }
    inline bool ServiceLocationHasBeenSet() const { return m_serviceLocationHasBeenSet; }
    template<typename ServiceLocationT = Aws::String>
    void SetServiceLocation(ServiceLocationT&& value) { m_serviceLocationHasBeenSet = true; m_serviceLocation = std::forward<ServiceLocationT>(value); }
    template<typename ServiceLocationT = Aws::String>
    ImpactedLocation& WithServiceLocation(ServiceLocationT&& value) { SetServiceLocation(std::forward<ServiceLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the health event at an impacted location.</p>
     */
    inline HealthEventStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(HealthEventStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImpactedLocation& WithStatus(HealthEventStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cause of the impairment. There are two types of network impairments:
     * Amazon Web Services network issues or internet issues. Internet issues are
     * typically a problem with a network provider, like an internet service provider
     * (ISP).</p>
     */
    inline const NetworkImpairment& GetCausedBy() const { return m_causedBy; }
    inline bool CausedByHasBeenSet() const { return m_causedByHasBeenSet; }
    template<typename CausedByT = NetworkImpairment>
    void SetCausedBy(CausedByT&& value) { m_causedByHasBeenSet = true; m_causedBy = std::forward<CausedByT>(value); }
    template<typename CausedByT = NetworkImpairment>
    ImpactedLocation& WithCausedBy(CausedByT&& value) { SetCausedBy(std::forward<CausedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated health at a specific location.</p>
     */
    inline const InternetHealth& GetInternetHealth() const { return m_internetHealth; }
    inline bool InternetHealthHasBeenSet() const { return m_internetHealthHasBeenSet; }
    template<typename InternetHealthT = InternetHealth>
    void SetInternetHealth(InternetHealthT&& value) { m_internetHealthHasBeenSet = true; m_internetHealth = std::forward<InternetHealthT>(value); }
    template<typename InternetHealthT = InternetHealth>
    ImpactedLocation& WithInternetHealth(InternetHealthT&& value) { SetInternetHealth(std::forward<InternetHealthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 prefixes at the client location that was impacted by the health
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Prefixes() const { return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    template<typename Ipv4PrefixesT = Aws::Vector<Aws::String>>
    void SetIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::forward<Ipv4PrefixesT>(value); }
    template<typename Ipv4PrefixesT = Aws::Vector<Aws::String>>
    ImpactedLocation& WithIpv4Prefixes(Ipv4PrefixesT&& value) { SetIpv4Prefixes(std::forward<Ipv4PrefixesT>(value)); return *this;}
    template<typename Ipv4PrefixesT = Aws::String>
    ImpactedLocation& AddIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.emplace_back(std::forward<Ipv4PrefixesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aSName;
    bool m_aSNameHasBeenSet = false;

    long long m_aSNumber{0};
    bool m_aSNumberHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_subdivision;
    bool m_subdivisionHasBeenSet = false;

    Aws::String m_metro;
    bool m_metroHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    double m_latitude{0.0};
    bool m_latitudeHasBeenSet = false;

    double m_longitude{0.0};
    bool m_longitudeHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_subdivisionCode;
    bool m_subdivisionCodeHasBeenSet = false;

    Aws::String m_serviceLocation;
    bool m_serviceLocationHasBeenSet = false;

    HealthEventStatus m_status{HealthEventStatus::NOT_SET};
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
