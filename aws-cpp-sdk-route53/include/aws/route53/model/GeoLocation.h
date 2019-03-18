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
   * <p>A complex type that contains information about a geographic
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GeoLocation">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GeoLocation
  {
  public:
    GeoLocation();
    GeoLocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    GeoLocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The two-letter code for the continent.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code> </p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline const Aws::String& GetContinentCode() const{ return m_continentCode; }

    /**
     * <p>The two-letter code for the continent.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code> </p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }

    /**
     * <p>The two-letter code for the continent.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code> </p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline void SetContinentCode(const Aws::String& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>The two-letter code for the continent.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code> </p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline void SetContinentCode(Aws::String&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::move(value); }

    /**
     * <p>The two-letter code for the continent.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code> </p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline void SetContinentCode(const char* value) { m_continentCodeHasBeenSet = true; m_continentCode.assign(value); }

    /**
     * <p>The two-letter code for the continent.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code> </p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline GeoLocation& WithContinentCode(const Aws::String& value) { SetContinentCode(value); return *this;}

    /**
     * <p>The two-letter code for the continent.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code> </p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline GeoLocation& WithContinentCode(Aws::String&& value) { SetContinentCode(std::move(value)); return *this;}

    /**
     * <p>The two-letter code for the continent.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code> </p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline GeoLocation& WithContinentCode(const char* value) { SetContinentCode(value); return *this;}


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
    inline GeoLocation& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline GeoLocation& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-letter code for the country.</p>
     */
    inline GeoLocation& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


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
    inline GeoLocation& WithSubdivisionCode(const Aws::String& value) { SetSubdivisionCode(value); return *this;}

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline GeoLocation& WithSubdivisionCode(Aws::String&& value) { SetSubdivisionCode(std::move(value)); return *this;}

    /**
     * <p>The code for the subdivision. Route 53 currently supports only states in the
     * United States.</p>
     */
    inline GeoLocation& WithSubdivisionCode(const char* value) { SetSubdivisionCode(value); return *this;}

  private:

    Aws::String m_continentCode;
    bool m_continentCodeHasBeenSet;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet;

    Aws::String m_subdivisionCode;
    bool m_subdivisionCodeHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
