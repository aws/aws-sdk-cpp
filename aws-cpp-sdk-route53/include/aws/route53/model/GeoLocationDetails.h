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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>A complex type that contains the codes and full continent, country, and
   * subdivision names for the specified <code>geolocation</code> code.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GeoLocationDetails">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GeoLocationDetails
  {
  public:
    GeoLocationDetails();
    GeoLocationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    GeoLocationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline const Aws::String& GetContinentCode() const{ return m_continentCode; }

    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }

    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline void SetContinentCode(const Aws::String& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline void SetContinentCode(Aws::String&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::move(value); }

    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline void SetContinentCode(const char* value) { m_continentCodeHasBeenSet = true; m_continentCode.assign(value); }

    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline GeoLocationDetails& WithContinentCode(const Aws::String& value) { SetContinentCode(value); return *this;}

    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline GeoLocationDetails& WithContinentCode(Aws::String&& value) { SetContinentCode(std::move(value)); return *this;}

    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline GeoLocationDetails& WithContinentCode(const char* value) { SetContinentCode(value); return *this;}


    /**
     * <p>The full name of the continent.</p>
     */
    inline const Aws::String& GetContinentName() const{ return m_continentName; }

    /**
     * <p>The full name of the continent.</p>
     */
    inline bool ContinentNameHasBeenSet() const { return m_continentNameHasBeenSet; }

    /**
     * <p>The full name of the continent.</p>
     */
    inline void SetContinentName(const Aws::String& value) { m_continentNameHasBeenSet = true; m_continentName = value; }

    /**
     * <p>The full name of the continent.</p>
     */
    inline void SetContinentName(Aws::String&& value) { m_continentNameHasBeenSet = true; m_continentName = std::move(value); }

    /**
     * <p>The full name of the continent.</p>
     */
    inline void SetContinentName(const char* value) { m_continentNameHasBeenSet = true; m_continentName.assign(value); }

    /**
     * <p>The full name of the continent.</p>
     */
    inline GeoLocationDetails& WithContinentName(const Aws::String& value) { SetContinentName(value); return *this;}

    /**
     * <p>The full name of the continent.</p>
     */
    inline GeoLocationDetails& WithContinentName(Aws::String&& value) { SetContinentName(std::move(value)); return *this;}

    /**
     * <p>The full name of the continent.</p>
     */
    inline GeoLocationDetails& WithContinentName(const char* value) { SetContinentName(value); return *this;}


    /**
     * <p>The two-letter code for the country.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline GeoLocationDetails& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline GeoLocationDetails& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline GeoLocationDetails& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>The name of the country.</p>
     */
    inline const Aws::String& GetCountryName() const{ return m_countryName; }

    /**
     * <p>The name of the country.</p>
     */
    inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }

    /**
     * <p>The name of the country.</p>
     */
    inline void SetCountryName(const Aws::String& value) { m_countryNameHasBeenSet = true; m_countryName = value; }

    /**
     * <p>The name of the country.</p>
     */
    inline void SetCountryName(Aws::String&& value) { m_countryNameHasBeenSet = true; m_countryName = std::move(value); }

    /**
     * <p>The name of the country.</p>
     */
    inline void SetCountryName(const char* value) { m_countryNameHasBeenSet = true; m_countryName.assign(value); }

    /**
     * <p>The name of the country.</p>
     */
    inline GeoLocationDetails& WithCountryName(const Aws::String& value) { SetCountryName(value); return *this;}

    /**
     * <p>The name of the country.</p>
     */
    inline GeoLocationDetails& WithCountryName(Aws::String&& value) { SetCountryName(std::move(value)); return *this;}

    /**
     * <p>The name of the country.</p>
     */
    inline GeoLocationDetails& WithCountryName(const char* value) { SetCountryName(value); return *this;}


    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline const Aws::String& GetSubdivisionCode() const{ return m_subdivisionCode; }

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline void SetSubdivisionCode(const Aws::String& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = value; }

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline void SetSubdivisionCode(Aws::String&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = std::move(value); }

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline void SetSubdivisionCode(const char* value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode.assign(value); }

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline GeoLocationDetails& WithSubdivisionCode(const Aws::String& value) { SetSubdivisionCode(value); return *this;}

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline GeoLocationDetails& WithSubdivisionCode(Aws::String&& value) { SetSubdivisionCode(std::move(value)); return *this;}

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline GeoLocationDetails& WithSubdivisionCode(const char* value) { SetSubdivisionCode(value); return *this;}


    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline const Aws::String& GetSubdivisionName() const{ return m_subdivisionName; }

    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline bool SubdivisionNameHasBeenSet() const { return m_subdivisionNameHasBeenSet; }

    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline void SetSubdivisionName(const Aws::String& value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName = value; }

    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline void SetSubdivisionName(Aws::String&& value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName = std::move(value); }

    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline void SetSubdivisionName(const char* value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName.assign(value); }

    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline GeoLocationDetails& WithSubdivisionName(const Aws::String& value) { SetSubdivisionName(value); return *this;}

    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline GeoLocationDetails& WithSubdivisionName(Aws::String&& value) { SetSubdivisionName(std::move(value)); return *this;}

    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
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
