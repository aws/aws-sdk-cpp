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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Location data for the endpoint.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointLocation">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointLocation
  {
  public:
    EndpointLocation();
    EndpointLocation(Aws::Utils::Json::JsonView jsonValue);
    EndpointLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The city where the endpoint is located.
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * The city where the endpoint is located.
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * The city where the endpoint is located.
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * The city where the endpoint is located.
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * The city where the endpoint is located.
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * The city where the endpoint is located.
     */
    inline EndpointLocation& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * The city where the endpoint is located.
     */
    inline EndpointLocation& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * The city where the endpoint is located.
     */
    inline EndpointLocation& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * The two-letter code for the country or region of the endpoint. Specified as an
     * ISO 3166-1 alpha-2 code, such as "US" for the United States.
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * The two-letter code for the country or region of the endpoint. Specified as an
     * ISO 3166-1 alpha-2 code, such as "US" for the United States.
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * The two-letter code for the country or region of the endpoint. Specified as an
     * ISO 3166-1 alpha-2 code, such as "US" for the United States.
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * The two-letter code for the country or region of the endpoint. Specified as an
     * ISO 3166-1 alpha-2 code, such as "US" for the United States.
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * The two-letter code for the country or region of the endpoint. Specified as an
     * ISO 3166-1 alpha-2 code, such as "US" for the United States.
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * The two-letter code for the country or region of the endpoint. Specified as an
     * ISO 3166-1 alpha-2 code, such as "US" for the United States.
     */
    inline EndpointLocation& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * The two-letter code for the country or region of the endpoint. Specified as an
     * ISO 3166-1 alpha-2 code, such as "US" for the United States.
     */
    inline EndpointLocation& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * The two-letter code for the country or region of the endpoint. Specified as an
     * ISO 3166-1 alpha-2 code, such as "US" for the United States.
     */
    inline EndpointLocation& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * The latitude of the endpoint location, rounded to one decimal place.
     */
    inline double GetLatitude() const{ return m_latitude; }

    /**
     * The latitude of the endpoint location, rounded to one decimal place.
     */
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }

    /**
     * The latitude of the endpoint location, rounded to one decimal place.
     */
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    /**
     * The latitude of the endpoint location, rounded to one decimal place.
     */
    inline EndpointLocation& WithLatitude(double value) { SetLatitude(value); return *this;}


    /**
     * The longitude of the endpoint location, rounded to one decimal place.
     */
    inline double GetLongitude() const{ return m_longitude; }

    /**
     * The longitude of the endpoint location, rounded to one decimal place.
     */
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }

    /**
     * The longitude of the endpoint location, rounded to one decimal place.
     */
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    /**
     * The longitude of the endpoint location, rounded to one decimal place.
     */
    inline EndpointLocation& WithLongitude(double value) { SetLongitude(value); return *this;}


    /**
     * The postal code or zip code of the endpoint.
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * The postal code or zip code of the endpoint.
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * The postal code or zip code of the endpoint.
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * The postal code or zip code of the endpoint.
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * The postal code or zip code of the endpoint.
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * The postal code or zip code of the endpoint.
     */
    inline EndpointLocation& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * The postal code or zip code of the endpoint.
     */
    inline EndpointLocation& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * The postal code or zip code of the endpoint.
     */
    inline EndpointLocation& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    /**
     * The region of the endpoint location. For example, in the United States, this
     * corresponds to a state.
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * The region of the endpoint location. For example, in the United States, this
     * corresponds to a state.
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * The region of the endpoint location. For example, in the United States, this
     * corresponds to a state.
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * The region of the endpoint location. For example, in the United States, this
     * corresponds to a state.
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * The region of the endpoint location. For example, in the United States, this
     * corresponds to a state.
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * The region of the endpoint location. For example, in the United States, this
     * corresponds to a state.
     */
    inline EndpointLocation& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * The region of the endpoint location. For example, in the United States, this
     * corresponds to a state.
     */
    inline EndpointLocation& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * The region of the endpoint location. For example, in the United States, this
     * corresponds to a state.
     */
    inline EndpointLocation& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_city;
    bool m_cityHasBeenSet;

    Aws::String m_country;
    bool m_countryHasBeenSet;

    double m_latitude;
    bool m_latitudeHasBeenSet;

    double m_longitude;
    bool m_longitudeHasBeenSet;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
