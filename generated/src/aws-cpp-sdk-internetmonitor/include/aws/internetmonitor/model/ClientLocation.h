/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The impacted location, such as a city, that Amazon Web Services clients
   * access application resources from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/ClientLocation">AWS
   * API Reference</a></p>
   */
  class ClientLocation
  {
  public:
    AWS_INTERNETMONITOR_API ClientLocation() = default;
    AWS_INTERNETMONITOR_API ClientLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API ClientLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ClientLocation& WithASName(ASNameT&& value) { SetASName(std::forward<ASNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the network at an impacted
     * location.</p>
     */
    inline long long GetASNumber() const { return m_aSNumber; }
    inline bool ASNumberHasBeenSet() const { return m_aSNumberHasBeenSet; }
    inline void SetASNumber(long long value) { m_aSNumberHasBeenSet = true; m_aSNumber = value; }
    inline ClientLocation& WithASNumber(long long value) { SetASNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country where the internet event is located.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    ClientLocation& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
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
    ClientLocation& WithSubdivision(SubdivisionT&& value) { SetSubdivision(std::forward<SubdivisionT>(value)); return *this;}
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
    ClientLocation& WithMetro(MetroT&& value) { SetMetro(std::forward<MetroT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the city where the internet event is located.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    ClientLocation& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude where the internet event is located.</p>
     */
    inline double GetLatitude() const { return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }
    inline ClientLocation& WithLatitude(double value) { SetLatitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude where the internet event is located.</p>
     */
    inline double GetLongitude() const { return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }
    inline ClientLocation& WithLongitude(double value) { SetLongitude(value); return *this;}
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
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
