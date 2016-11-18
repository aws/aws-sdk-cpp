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
   * <p>To get a list of geographic locations that Amazon Route 53 supports for
   * geolocation, send a <code>GET</code> request to the <code>/<i>Amazon Route 53
   * API version</i>/geolocations</code> resource. The response to this request
   * includes a <code>GeoLocationDetails</code> element for each location that Amazon
   * Route 53 supports.</p> <p>Countries are listed first, and continents are listed
   * last. If Amazon Route 53 supports subdivisions for a country (for example,
   * states or provinces), the subdivisions for that country are listed in
   * alphabetical order immediately after the corresponding country. </p>
   */
  class AWS_ROUTE53_API ListGeoLocationsRequest : public Route53Request
  {
  public:
    ListGeoLocationsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>StartContinentCode</code> to return the next page of
     * results.</p> <p>Include <code>StartContinentCode</code> only if you want to list
     * continents. Don't include <code>StartContinentCode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline const Aws::String& GetStartContinentCode() const{ return m_startContinentCode; }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>StartContinentCode</code> to return the next page of
     * results.</p> <p>Include <code>StartContinentCode</code> only if you want to list
     * continents. Don't include <code>StartContinentCode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline void SetStartContinentCode(const Aws::String& value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode = value; }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>StartContinentCode</code> to return the next page of
     * results.</p> <p>Include <code>StartContinentCode</code> only if you want to list
     * continents. Don't include <code>StartContinentCode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline void SetStartContinentCode(Aws::String&& value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode = value; }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>StartContinentCode</code> to return the next page of
     * results.</p> <p>Include <code>StartContinentCode</code> only if you want to list
     * continents. Don't include <code>StartContinentCode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline void SetStartContinentCode(const char* value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode.assign(value); }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>StartContinentCode</code> to return the next page of
     * results.</p> <p>Include <code>StartContinentCode</code> only if you want to list
     * continents. Don't include <code>StartContinentCode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(const Aws::String& value) { SetStartContinentCode(value); return *this;}

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>StartContinentCode</code> to return the next page of
     * results.</p> <p>Include <code>StartContinentCode</code> only if you want to list
     * continents. Don't include <code>StartContinentCode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(Aws::String&& value) { SetStartContinentCode(value); return *this;}

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>StartContinentCode</code> to return the next page of
     * results.</p> <p>Include <code>StartContinentCode</code> only if you want to list
     * continents. Don't include <code>StartContinentCode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(const char* value) { SetStartContinentCode(value); return *this;}

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextCountryCode</code> from the previous
     * response has a value, enter that value in <code>StartCountryCode</code> to
     * return the next page of results.</p> <p>Amazon Route 53 uses the two-letter
     * country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline const Aws::String& GetStartCountryCode() const{ return m_startCountryCode; }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextCountryCode</code> from the previous
     * response has a value, enter that value in <code>StartCountryCode</code> to
     * return the next page of results.</p> <p>Amazon Route 53 uses the two-letter
     * country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetStartCountryCode(const Aws::String& value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode = value; }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextCountryCode</code> from the previous
     * response has a value, enter that value in <code>StartCountryCode</code> to
     * return the next page of results.</p> <p>Amazon Route 53 uses the two-letter
     * country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetStartCountryCode(Aws::String&& value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode = value; }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextCountryCode</code> from the previous
     * response has a value, enter that value in <code>StartCountryCode</code> to
     * return the next page of results.</p> <p>Amazon Route 53 uses the two-letter
     * country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetStartCountryCode(const char* value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode.assign(value); }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextCountryCode</code> from the previous
     * response has a value, enter that value in <code>StartCountryCode</code> to
     * return the next page of results.</p> <p>Amazon Route 53 uses the two-letter
     * country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(const Aws::String& value) { SetStartCountryCode(value); return *this;}

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextCountryCode</code> from the previous
     * response has a value, enter that value in <code>StartCountryCode</code> to
     * return the next page of results.</p> <p>Amazon Route 53 uses the two-letter
     * country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(Aws::String&& value) { SetStartCountryCode(value); return *this;}

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Amazon Route 53 has already
     * returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextCountryCode</code> from the previous
     * response has a value, enter that value in <code>StartCountryCode</code> to
     * return the next page of results.</p> <p>Amazon Route 53 uses the two-letter
     * country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(const char* value) { SetStartCountryCode(value); return *this;}

    /**
     * <p>The code for the subdivision (for example, state or province) with which you
     * want to start listing locations that Amazon Route 53 supports for geolocation.
     * If Amazon Route 53 has already returned a page or more of results, if
     * <code>IsTruncated</code> is <code>true</code>, and if
     * <code>NextSubdivisionCode</code> from the previous response has a value, enter
     * that value in <code>StartSubdivisionCode</code> to return the next page of
     * results.</p> <p>To list subdivisions of a country, you must include both
     * <code>StartCountryCode</code> and <code>StartSubdivisionCode</code>.</p>
     */
    inline const Aws::String& GetStartSubdivisionCode() const{ return m_startSubdivisionCode; }

    /**
     * <p>The code for the subdivision (for example, state or province) with which you
     * want to start listing locations that Amazon Route 53 supports for geolocation.
     * If Amazon Route 53 has already returned a page or more of results, if
     * <code>IsTruncated</code> is <code>true</code>, and if
     * <code>NextSubdivisionCode</code> from the previous response has a value, enter
     * that value in <code>StartSubdivisionCode</code> to return the next page of
     * results.</p> <p>To list subdivisions of a country, you must include both
     * <code>StartCountryCode</code> and <code>StartSubdivisionCode</code>.</p>
     */
    inline void SetStartSubdivisionCode(const Aws::String& value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode = value; }

    /**
     * <p>The code for the subdivision (for example, state or province) with which you
     * want to start listing locations that Amazon Route 53 supports for geolocation.
     * If Amazon Route 53 has already returned a page or more of results, if
     * <code>IsTruncated</code> is <code>true</code>, and if
     * <code>NextSubdivisionCode</code> from the previous response has a value, enter
     * that value in <code>StartSubdivisionCode</code> to return the next page of
     * results.</p> <p>To list subdivisions of a country, you must include both
     * <code>StartCountryCode</code> and <code>StartSubdivisionCode</code>.</p>
     */
    inline void SetStartSubdivisionCode(Aws::String&& value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode = value; }

    /**
     * <p>The code for the subdivision (for example, state or province) with which you
     * want to start listing locations that Amazon Route 53 supports for geolocation.
     * If Amazon Route 53 has already returned a page or more of results, if
     * <code>IsTruncated</code> is <code>true</code>, and if
     * <code>NextSubdivisionCode</code> from the previous response has a value, enter
     * that value in <code>StartSubdivisionCode</code> to return the next page of
     * results.</p> <p>To list subdivisions of a country, you must include both
     * <code>StartCountryCode</code> and <code>StartSubdivisionCode</code>.</p>
     */
    inline void SetStartSubdivisionCode(const char* value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode.assign(value); }

    /**
     * <p>The code for the subdivision (for example, state or province) with which you
     * want to start listing locations that Amazon Route 53 supports for geolocation.
     * If Amazon Route 53 has already returned a page or more of results, if
     * <code>IsTruncated</code> is <code>true</code>, and if
     * <code>NextSubdivisionCode</code> from the previous response has a value, enter
     * that value in <code>StartSubdivisionCode</code> to return the next page of
     * results.</p> <p>To list subdivisions of a country, you must include both
     * <code>StartCountryCode</code> and <code>StartSubdivisionCode</code>.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(const Aws::String& value) { SetStartSubdivisionCode(value); return *this;}

    /**
     * <p>The code for the subdivision (for example, state or province) with which you
     * want to start listing locations that Amazon Route 53 supports for geolocation.
     * If Amazon Route 53 has already returned a page or more of results, if
     * <code>IsTruncated</code> is <code>true</code>, and if
     * <code>NextSubdivisionCode</code> from the previous response has a value, enter
     * that value in <code>StartSubdivisionCode</code> to return the next page of
     * results.</p> <p>To list subdivisions of a country, you must include both
     * <code>StartCountryCode</code> and <code>StartSubdivisionCode</code>.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(Aws::String&& value) { SetStartSubdivisionCode(value); return *this;}

    /**
     * <p>The code for the subdivision (for example, state or province) with which you
     * want to start listing locations that Amazon Route 53 supports for geolocation.
     * If Amazon Route 53 has already returned a page or more of results, if
     * <code>IsTruncated</code> is <code>true</code>, and if
     * <code>NextSubdivisionCode</code> from the previous response has a value, enter
     * that value in <code>StartSubdivisionCode</code> to return the next page of
     * results.</p> <p>To list subdivisions of a country, you must include both
     * <code>StartCountryCode</code> and <code>StartSubdivisionCode</code>.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(const char* value) { SetStartSubdivisionCode(value); return *this;}

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>MaxItems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>MaxItems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>MaxItems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>MaxItems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>MaxItems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline ListGeoLocationsRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>MaxItems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline ListGeoLocationsRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>MaxItems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
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
