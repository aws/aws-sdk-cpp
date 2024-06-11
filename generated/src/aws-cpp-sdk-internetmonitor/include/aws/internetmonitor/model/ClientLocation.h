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
    AWS_INTERNETMONITOR_API ClientLocation();
    AWS_INTERNETMONITOR_API ClientLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API ClientLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ClientLocation& WithASName(const Aws::String& value) { SetASName(value); return *this;}
    inline ClientLocation& WithASName(Aws::String&& value) { SetASName(std::move(value)); return *this;}
    inline ClientLocation& WithASName(const char* value) { SetASName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the network at an impacted
     * location.</p>
     */
    inline long long GetASNumber() const{ return m_aSNumber; }
    inline bool ASNumberHasBeenSet() const { return m_aSNumberHasBeenSet; }
    inline void SetASNumber(long long value) { m_aSNumberHasBeenSet = true; m_aSNumber = value; }
    inline ClientLocation& WithASNumber(long long value) { SetASNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country where the internet event is located.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline ClientLocation& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline ClientLocation& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline ClientLocation& WithCountry(const char* value) { SetCountry(value); return *this;}
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
    inline ClientLocation& WithSubdivision(const Aws::String& value) { SetSubdivision(value); return *this;}
    inline ClientLocation& WithSubdivision(Aws::String&& value) { SetSubdivision(std::move(value)); return *this;}
    inline ClientLocation& WithSubdivision(const char* value) { SetSubdivision(value); return *this;}
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
    inline ClientLocation& WithMetro(const Aws::String& value) { SetMetro(value); return *this;}
    inline ClientLocation& WithMetro(Aws::String&& value) { SetMetro(std::move(value)); return *this;}
    inline ClientLocation& WithMetro(const char* value) { SetMetro(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the city where the internet event is located.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline ClientLocation& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline ClientLocation& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline ClientLocation& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude where the internet event is located.</p>
     */
    inline double GetLatitude() const{ return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }
    inline ClientLocation& WithLatitude(double value) { SetLatitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude where the internet event is located.</p>
     */
    inline double GetLongitude() const{ return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }
    inline ClientLocation& WithLongitude(double value) { SetLongitude(value); return *this;}
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
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
