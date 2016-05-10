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
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>The input for a <code>ListGeoLocations</code> request.</p>
   */
  class AWS_ROUTE53_API ListGeoLocationsRequest : public Route53Request
  {
  public:
    ListGeoLocationsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The first continent code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list. For non-continent
     * geo locations, this should be null.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code></p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline const Aws::String& GetStartContinentCode() const{ return m_startContinentCode; }

    /**
     * <p>The first continent code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list. For non-continent
     * geo locations, this should be null.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code></p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline void SetStartContinentCode(const Aws::String& value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode = value; }

    /**
     * <p>The first continent code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list. For non-continent
     * geo locations, this should be null.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code></p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline void SetStartContinentCode(Aws::String&& value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode = value; }

    /**
     * <p>The first continent code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list. For non-continent
     * geo locations, this should be null.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code></p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline void SetStartContinentCode(const char* value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode.assign(value); }

    /**
     * <p>The first continent code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list. For non-continent
     * geo locations, this should be null.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code></p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(const Aws::String& value) { SetStartContinentCode(value); return *this;}

    /**
     * <p>The first continent code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list. For non-continent
     * geo locations, this should be null.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code></p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(Aws::String&& value) { SetStartContinentCode(value); return *this;}

    /**
     * <p>The first continent code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list. For non-continent
     * geo locations, this should be null.</p> <p>Valid values: <code>AF</code> |
     * <code>AN</code> | <code>AS</code> | <code>EU</code> | <code>OC</code> |
     * <code>NA</code> | <code>SA</code></p> <p>Constraint: Specifying
     * <code>ContinentCode</code> with either <code>CountryCode</code> or
     * <code>SubdivisionCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(const char* value) { SetStartContinentCode(value); return *this;}

    /**
     * <p>The first country code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list.</p> <p>The default
     * geo location uses a <code>*</code> for the country code. All other country codes
     * follow the ISO 3166 two-character code.</p>
     */
    inline const Aws::String& GetStartCountryCode() const{ return m_startCountryCode; }

    /**
     * <p>The first country code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list.</p> <p>The default
     * geo location uses a <code>*</code> for the country code. All other country codes
     * follow the ISO 3166 two-character code.</p>
     */
    inline void SetStartCountryCode(const Aws::String& value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode = value; }

    /**
     * <p>The first country code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list.</p> <p>The default
     * geo location uses a <code>*</code> for the country code. All other country codes
     * follow the ISO 3166 two-character code.</p>
     */
    inline void SetStartCountryCode(Aws::String&& value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode = value; }

    /**
     * <p>The first country code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list.</p> <p>The default
     * geo location uses a <code>*</code> for the country code. All other country codes
     * follow the ISO 3166 two-character code.</p>
     */
    inline void SetStartCountryCode(const char* value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode.assign(value); }

    /**
     * <p>The first country code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list.</p> <p>The default
     * geo location uses a <code>*</code> for the country code. All other country codes
     * follow the ISO 3166 two-character code.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(const Aws::String& value) { SetStartCountryCode(value); return *this;}

    /**
     * <p>The first country code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list.</p> <p>The default
     * geo location uses a <code>*</code> for the country code. All other country codes
     * follow the ISO 3166 two-character code.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(Aws::String&& value) { SetStartCountryCode(value); return *this;}

    /**
     * <p>The first country code in the lexicographic ordering of geo locations that
     * you want the <code>ListGeoLocations</code> request to list.</p> <p>The default
     * geo location uses a <code>*</code> for the country code. All other country codes
     * follow the ISO 3166 two-character code.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(const char* value) { SetStartCountryCode(value); return *this;}

    /**
     * <p>The first subdivision code in the lexicographic ordering of geo locations
     * that you want the <code>ListGeoLocations</code> request to list.</p>
     * <p>Constraint: Specifying <code>SubdivisionCode</code> without
     * <code>CountryCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline const Aws::String& GetStartSubdivisionCode() const{ return m_startSubdivisionCode; }

    /**
     * <p>The first subdivision code in the lexicographic ordering of geo locations
     * that you want the <code>ListGeoLocations</code> request to list.</p>
     * <p>Constraint: Specifying <code>SubdivisionCode</code> without
     * <code>CountryCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline void SetStartSubdivisionCode(const Aws::String& value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode = value; }

    /**
     * <p>The first subdivision code in the lexicographic ordering of geo locations
     * that you want the <code>ListGeoLocations</code> request to list.</p>
     * <p>Constraint: Specifying <code>SubdivisionCode</code> without
     * <code>CountryCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline void SetStartSubdivisionCode(Aws::String&& value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode = value; }

    /**
     * <p>The first subdivision code in the lexicographic ordering of geo locations
     * that you want the <code>ListGeoLocations</code> request to list.</p>
     * <p>Constraint: Specifying <code>SubdivisionCode</code> without
     * <code>CountryCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline void SetStartSubdivisionCode(const char* value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode.assign(value); }

    /**
     * <p>The first subdivision code in the lexicographic ordering of geo locations
     * that you want the <code>ListGeoLocations</code> request to list.</p>
     * <p>Constraint: Specifying <code>SubdivisionCode</code> without
     * <code>CountryCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(const Aws::String& value) { SetStartSubdivisionCode(value); return *this;}

    /**
     * <p>The first subdivision code in the lexicographic ordering of geo locations
     * that you want the <code>ListGeoLocations</code> request to list.</p>
     * <p>Constraint: Specifying <code>SubdivisionCode</code> without
     * <code>CountryCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(Aws::String&& value) { SetStartSubdivisionCode(value); return *this;}

    /**
     * <p>The first subdivision code in the lexicographic ordering of geo locations
     * that you want the <code>ListGeoLocations</code> request to list.</p>
     * <p>Constraint: Specifying <code>SubdivisionCode</code> without
     * <code>CountryCode</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(const char* value) { SetStartSubdivisionCode(value); return *this;}

    /**
     * <p>The maximum number of geo locations you want in the response body.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of geo locations you want in the response body.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of geo locations you want in the response body.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of geo locations you want in the response body.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of geo locations you want in the response body.</p>
     */
    inline ListGeoLocationsRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of geo locations you want in the response body.</p>
     */
    inline ListGeoLocationsRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of geo locations you want in the response body.</p>
     */
    inline ListGeoLocationsRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_startContinentCode;
    bool m_startContinentCodeHasBeenSet;
    Aws::String m_startCountryCode;
    bool m_startCountryCodeHasBeenSet;
    Aws::String m_startSubdivisionCode;
    bool m_startSubdivisionCodeHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
