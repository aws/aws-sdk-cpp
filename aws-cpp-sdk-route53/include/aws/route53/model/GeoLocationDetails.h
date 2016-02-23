/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a
   * <code>GeoLocation</code>.</p>
   */
  class AWS_ROUTE53_API GeoLocationDetails
  {
  public:
    GeoLocationDetails();
    GeoLocationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    GeoLocationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>The code for a continent geo location. Note: only continent locations have a
     * continent code.</p>
     */
    inline const Aws::String& GetContinentCode() const{ return m_continentCode; }

    /**
     * <p>The code for a continent geo location. Note: only continent locations have a
     * continent code.</p>
     */
    inline void SetContinentCode(const Aws::String& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>The code for a continent geo location. Note: only continent locations have a
     * continent code.</p>
     */
    inline void SetContinentCode(Aws::String&& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>The code for a continent geo location. Note: only continent locations have a
     * continent code.</p>
     */
    inline void SetContinentCode(const char* value) { m_continentCodeHasBeenSet = true; m_continentCode.assign(value); }

    /**
     * <p>The code for a continent geo location. Note: only continent locations have a
     * continent code.</p>
     */
    inline GeoLocationDetails& WithContinentCode(const Aws::String& value) { SetContinentCode(value); return *this;}

    /**
     * <p>The code for a continent geo location. Note: only continent locations have a
     * continent code.</p>
     */
    inline GeoLocationDetails& WithContinentCode(Aws::String&& value) { SetContinentCode(value); return *this;}

    /**
     * <p>The code for a continent geo location. Note: only continent locations have a
     * continent code.</p>
     */
    inline GeoLocationDetails& WithContinentCode(const char* value) { SetContinentCode(value); return *this;}

    /**
     * <p>The name of the continent. This element is only present if
     * <code>ContinentCode</code> is also present.</p>
     */
    inline const Aws::String& GetContinentName() const{ return m_continentName; }

    /**
     * <p>The name of the continent. This element is only present if
     * <code>ContinentCode</code> is also present.</p>
     */
    inline void SetContinentName(const Aws::String& value) { m_continentNameHasBeenSet = true; m_continentName = value; }

    /**
     * <p>The name of the continent. This element is only present if
     * <code>ContinentCode</code> is also present.</p>
     */
    inline void SetContinentName(Aws::String&& value) { m_continentNameHasBeenSet = true; m_continentName = value; }

    /**
     * <p>The name of the continent. This element is only present if
     * <code>ContinentCode</code> is also present.</p>
     */
    inline void SetContinentName(const char* value) { m_continentNameHasBeenSet = true; m_continentName.assign(value); }

    /**
     * <p>The name of the continent. This element is only present if
     * <code>ContinentCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithContinentName(const Aws::String& value) { SetContinentName(value); return *this;}

    /**
     * <p>The name of the continent. This element is only present if
     * <code>ContinentCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithContinentName(Aws::String&& value) { SetContinentName(value); return *this;}

    /**
     * <p>The name of the continent. This element is only present if
     * <code>ContinentCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithContinentName(const char* value) { SetContinentName(value); return *this;}

    /**
     * <p>The code for a country geo location. The default location uses '*' for the
     * country code and will match all locations that are not matched by a geo
     * location.</p> <p>The default geo location uses a <code>*</code> for the country
     * code. All other country codes follow the ISO 3166 two-character code.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>The code for a country geo location. The default location uses '*' for the
     * country code and will match all locations that are not matched by a geo
     * location.</p> <p>The default geo location uses a <code>*</code> for the country
     * code. All other country codes follow the ISO 3166 two-character code.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The code for a country geo location. The default location uses '*' for the
     * country code and will match all locations that are not matched by a geo
     * location.</p> <p>The default geo location uses a <code>*</code> for the country
     * code. All other country codes follow the ISO 3166 two-character code.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The code for a country geo location. The default location uses '*' for the
     * country code and will match all locations that are not matched by a geo
     * location.</p> <p>The default geo location uses a <code>*</code> for the country
     * code. All other country codes follow the ISO 3166 two-character code.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>The code for a country geo location. The default location uses '*' for the
     * country code and will match all locations that are not matched by a geo
     * location.</p> <p>The default geo location uses a <code>*</code> for the country
     * code. All other country codes follow the ISO 3166 two-character code.</p>
     */
    inline GeoLocationDetails& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The code for a country geo location. The default location uses '*' for the
     * country code and will match all locations that are not matched by a geo
     * location.</p> <p>The default geo location uses a <code>*</code> for the country
     * code. All other country codes follow the ISO 3166 two-character code.</p>
     */
    inline GeoLocationDetails& WithCountryCode(Aws::String&& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The code for a country geo location. The default location uses '*' for the
     * country code and will match all locations that are not matched by a geo
     * location.</p> <p>The default geo location uses a <code>*</code> for the country
     * code. All other country codes follow the ISO 3166 two-character code.</p>
     */
    inline GeoLocationDetails& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}

    /**
     * <p>The name of the country. This element is only present if
     * <code>CountryCode</code> is also present.</p>
     */
    inline const Aws::String& GetCountryName() const{ return m_countryName; }

    /**
     * <p>The name of the country. This element is only present if
     * <code>CountryCode</code> is also present.</p>
     */
    inline void SetCountryName(const Aws::String& value) { m_countryNameHasBeenSet = true; m_countryName = value; }

    /**
     * <p>The name of the country. This element is only present if
     * <code>CountryCode</code> is also present.</p>
     */
    inline void SetCountryName(Aws::String&& value) { m_countryNameHasBeenSet = true; m_countryName = value; }

    /**
     * <p>The name of the country. This element is only present if
     * <code>CountryCode</code> is also present.</p>
     */
    inline void SetCountryName(const char* value) { m_countryNameHasBeenSet = true; m_countryName.assign(value); }

    /**
     * <p>The name of the country. This element is only present if
     * <code>CountryCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithCountryName(const Aws::String& value) { SetCountryName(value); return *this;}

    /**
     * <p>The name of the country. This element is only present if
     * <code>CountryCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithCountryName(Aws::String&& value) { SetCountryName(value); return *this;}

    /**
     * <p>The name of the country. This element is only present if
     * <code>CountryCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithCountryName(const char* value) { SetCountryName(value); return *this;}

    /**
     * <p>The code for a country's subdivision (e.g., a province of Canada). A
     * subdivision code is only valid with the appropriate country code.</p>
     */
    inline const Aws::String& GetSubdivisionCode() const{ return m_subdivisionCode; }

    /**
     * <p>The code for a country's subdivision (e.g., a province of Canada). A
     * subdivision code is only valid with the appropriate country code.</p>
     */
    inline void SetSubdivisionCode(const Aws::String& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = value; }

    /**
     * <p>The code for a country's subdivision (e.g., a province of Canada). A
     * subdivision code is only valid with the appropriate country code.</p>
     */
    inline void SetSubdivisionCode(Aws::String&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = value; }

    /**
     * <p>The code for a country's subdivision (e.g., a province of Canada). A
     * subdivision code is only valid with the appropriate country code.</p>
     */
    inline void SetSubdivisionCode(const char* value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode.assign(value); }

    /**
     * <p>The code for a country's subdivision (e.g., a province of Canada). A
     * subdivision code is only valid with the appropriate country code.</p>
     */
    inline GeoLocationDetails& WithSubdivisionCode(const Aws::String& value) { SetSubdivisionCode(value); return *this;}

    /**
     * <p>The code for a country's subdivision (e.g., a province of Canada). A
     * subdivision code is only valid with the appropriate country code.</p>
     */
    inline GeoLocationDetails& WithSubdivisionCode(Aws::String&& value) { SetSubdivisionCode(value); return *this;}

    /**
     * <p>The code for a country's subdivision (e.g., a province of Canada). A
     * subdivision code is only valid with the appropriate country code.</p>
     */
    inline GeoLocationDetails& WithSubdivisionCode(const char* value) { SetSubdivisionCode(value); return *this;}

    /**
     * <p>The name of the subdivision. This element is only present if
     * <code>SubdivisionCode</code> is also present.</p>
     */
    inline const Aws::String& GetSubdivisionName() const{ return m_subdivisionName; }

    /**
     * <p>The name of the subdivision. This element is only present if
     * <code>SubdivisionCode</code> is also present.</p>
     */
    inline void SetSubdivisionName(const Aws::String& value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName = value; }

    /**
     * <p>The name of the subdivision. This element is only present if
     * <code>SubdivisionCode</code> is also present.</p>
     */
    inline void SetSubdivisionName(Aws::String&& value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName = value; }

    /**
     * <p>The name of the subdivision. This element is only present if
     * <code>SubdivisionCode</code> is also present.</p>
     */
    inline void SetSubdivisionName(const char* value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName.assign(value); }

    /**
     * <p>The name of the subdivision. This element is only present if
     * <code>SubdivisionCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithSubdivisionName(const Aws::String& value) { SetSubdivisionName(value); return *this;}

    /**
     * <p>The name of the subdivision. This element is only present if
     * <code>SubdivisionCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithSubdivisionName(Aws::String&& value) { SetSubdivisionName(value); return *this;}

    /**
     * <p>The name of the subdivision. This element is only present if
     * <code>SubdivisionCode</code> is also present.</p>
     */
    inline GeoLocationDetails& WithSubdivisionName(const char* value) { SetSubdivisionName(value); return *this;}

  private:
    Aws::String m_continentCode;
    bool m_continentCodeHasBeenSet;
    Aws::String m_continentName;
    bool m_continentNameHasBeenSet;
    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet;
    Aws::String m_countryName;
    bool m_countryNameHasBeenSet;
    Aws::String m_subdivisionCode;
    bool m_subdivisionCodeHasBeenSet;
    Aws::String m_subdivisionName;
    bool m_subdivisionNameHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
