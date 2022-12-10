/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>A request to get a list of geographic locations that Amazon Route 53 supports
   * for geolocation resource record sets. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListGeoLocationsRequest">AWS
   * API Reference</a></p>
   */
  class ListGeoLocationsRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListGeoLocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGeoLocations"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Route 53 has already returned
     * a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>startcontinentcode</code> to return the next page of
     * results.</p> <p>Include <code>startcontinentcode</code> only if you want to list
     * continents. Don't include <code>startcontinentcode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline const Aws::String& GetStartContinentCode() const{ return m_startContinentCode; }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Route 53 has already returned
     * a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>startcontinentcode</code> to return the next page of
     * results.</p> <p>Include <code>startcontinentcode</code> only if you want to list
     * continents. Don't include <code>startcontinentcode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline bool StartContinentCodeHasBeenSet() const { return m_startContinentCodeHasBeenSet; }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Route 53 has already returned
     * a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>startcontinentcode</code> to return the next page of
     * results.</p> <p>Include <code>startcontinentcode</code> only if you want to list
     * continents. Don't include <code>startcontinentcode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline void SetStartContinentCode(const Aws::String& value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode = value; }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Route 53 has already returned
     * a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>startcontinentcode</code> to return the next page of
     * results.</p> <p>Include <code>startcontinentcode</code> only if you want to list
     * continents. Don't include <code>startcontinentcode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline void SetStartContinentCode(Aws::String&& value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode = std::move(value); }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Route 53 has already returned
     * a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>startcontinentcode</code> to return the next page of
     * results.</p> <p>Include <code>startcontinentcode</code> only if you want to list
     * continents. Don't include <code>startcontinentcode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline void SetStartContinentCode(const char* value) { m_startContinentCodeHasBeenSet = true; m_startContinentCode.assign(value); }

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Route 53 has already returned
     * a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>startcontinentcode</code> to return the next page of
     * results.</p> <p>Include <code>startcontinentcode</code> only if you want to list
     * continents. Don't include <code>startcontinentcode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(const Aws::String& value) { SetStartContinentCode(value); return *this;}

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Route 53 has already returned
     * a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>startcontinentcode</code> to return the next page of
     * results.</p> <p>Include <code>startcontinentcode</code> only if you want to list
     * continents. Don't include <code>startcontinentcode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(Aws::String&& value) { SetStartContinentCode(std::move(value)); return *this;}

    /**
     * <p>The code for the continent with which you want to start listing locations
     * that Amazon Route 53 supports for geolocation. If Route 53 has already returned
     * a page or more of results, if <code>IsTruncated</code> is true, and if
     * <code>NextContinentCode</code> from the previous response has a value, enter
     * that value in <code>startcontinentcode</code> to return the next page of
     * results.</p> <p>Include <code>startcontinentcode</code> only if you want to list
     * continents. Don't include <code>startcontinentcode</code> when you're listing
     * countries or countries with their subdivisions.</p>
     */
    inline ListGeoLocationsRequest& WithStartContinentCode(const char* value) { SetStartContinentCode(value); return *this;}


    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Route 53 has already returned a
     * page or more of results, if <code>IsTruncated</code> is <code>true</code>, and
     * if <code>NextCountryCode</code> from the previous response has a value, enter
     * that value in <code>startcountrycode</code> to return the next page of
     * results.</p>
     */
    inline const Aws::String& GetStartCountryCode() const{ return m_startCountryCode; }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Route 53 has already returned a
     * page or more of results, if <code>IsTruncated</code> is <code>true</code>, and
     * if <code>NextCountryCode</code> from the previous response has a value, enter
     * that value in <code>startcountrycode</code> to return the next page of
     * results.</p>
     */
    inline bool StartCountryCodeHasBeenSet() const { return m_startCountryCodeHasBeenSet; }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Route 53 has already returned a
     * page or more of results, if <code>IsTruncated</code> is <code>true</code>, and
     * if <code>NextCountryCode</code> from the previous response has a value, enter
     * that value in <code>startcountrycode</code> to return the next page of
     * results.</p>
     */
    inline void SetStartCountryCode(const Aws::String& value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode = value; }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Route 53 has already returned a
     * page or more of results, if <code>IsTruncated</code> is <code>true</code>, and
     * if <code>NextCountryCode</code> from the previous response has a value, enter
     * that value in <code>startcountrycode</code> to return the next page of
     * results.</p>
     */
    inline void SetStartCountryCode(Aws::String&& value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode = std::move(value); }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Route 53 has already returned a
     * page or more of results, if <code>IsTruncated</code> is <code>true</code>, and
     * if <code>NextCountryCode</code> from the previous response has a value, enter
     * that value in <code>startcountrycode</code> to return the next page of
     * results.</p>
     */
    inline void SetStartCountryCode(const char* value) { m_startCountryCodeHasBeenSet = true; m_startCountryCode.assign(value); }

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Route 53 has already returned a
     * page or more of results, if <code>IsTruncated</code> is <code>true</code>, and
     * if <code>NextCountryCode</code> from the previous response has a value, enter
     * that value in <code>startcountrycode</code> to return the next page of
     * results.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(const Aws::String& value) { SetStartCountryCode(value); return *this;}

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Route 53 has already returned a
     * page or more of results, if <code>IsTruncated</code> is <code>true</code>, and
     * if <code>NextCountryCode</code> from the previous response has a value, enter
     * that value in <code>startcountrycode</code> to return the next page of
     * results.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(Aws::String&& value) { SetStartCountryCode(std::move(value)); return *this;}

    /**
     * <p>The code for the country with which you want to start listing locations that
     * Amazon Route 53 supports for geolocation. If Route 53 has already returned a
     * page or more of results, if <code>IsTruncated</code> is <code>true</code>, and
     * if <code>NextCountryCode</code> from the previous response has a value, enter
     * that value in <code>startcountrycode</code> to return the next page of
     * results.</p>
     */
    inline ListGeoLocationsRequest& WithStartCountryCode(const char* value) { SetStartCountryCode(value); return *this;}


    /**
     * <p>The code for the state of the United States with which you want to start
     * listing locations that Amazon Route 53 supports for geolocation. If Route 53 has
     * already returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextSubdivisionCode</code> from the previous
     * response has a value, enter that value in <code>startsubdivisioncode</code> to
     * return the next page of results.</p> <p>To list subdivisions (U.S. states), you
     * must include both <code>startcountrycode</code> and
     * <code>startsubdivisioncode</code>.</p>
     */
    inline const Aws::String& GetStartSubdivisionCode() const{ return m_startSubdivisionCode; }

    /**
     * <p>The code for the state of the United States with which you want to start
     * listing locations that Amazon Route 53 supports for geolocation. If Route 53 has
     * already returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextSubdivisionCode</code> from the previous
     * response has a value, enter that value in <code>startsubdivisioncode</code> to
     * return the next page of results.</p> <p>To list subdivisions (U.S. states), you
     * must include both <code>startcountrycode</code> and
     * <code>startsubdivisioncode</code>.</p>
     */
    inline bool StartSubdivisionCodeHasBeenSet() const { return m_startSubdivisionCodeHasBeenSet; }

    /**
     * <p>The code for the state of the United States with which you want to start
     * listing locations that Amazon Route 53 supports for geolocation. If Route 53 has
     * already returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextSubdivisionCode</code> from the previous
     * response has a value, enter that value in <code>startsubdivisioncode</code> to
     * return the next page of results.</p> <p>To list subdivisions (U.S. states), you
     * must include both <code>startcountrycode</code> and
     * <code>startsubdivisioncode</code>.</p>
     */
    inline void SetStartSubdivisionCode(const Aws::String& value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode = value; }

    /**
     * <p>The code for the state of the United States with which you want to start
     * listing locations that Amazon Route 53 supports for geolocation. If Route 53 has
     * already returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextSubdivisionCode</code> from the previous
     * response has a value, enter that value in <code>startsubdivisioncode</code> to
     * return the next page of results.</p> <p>To list subdivisions (U.S. states), you
     * must include both <code>startcountrycode</code> and
     * <code>startsubdivisioncode</code>.</p>
     */
    inline void SetStartSubdivisionCode(Aws::String&& value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode = std::move(value); }

    /**
     * <p>The code for the state of the United States with which you want to start
     * listing locations that Amazon Route 53 supports for geolocation. If Route 53 has
     * already returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextSubdivisionCode</code> from the previous
     * response has a value, enter that value in <code>startsubdivisioncode</code> to
     * return the next page of results.</p> <p>To list subdivisions (U.S. states), you
     * must include both <code>startcountrycode</code> and
     * <code>startsubdivisioncode</code>.</p>
     */
    inline void SetStartSubdivisionCode(const char* value) { m_startSubdivisionCodeHasBeenSet = true; m_startSubdivisionCode.assign(value); }

    /**
     * <p>The code for the state of the United States with which you want to start
     * listing locations that Amazon Route 53 supports for geolocation. If Route 53 has
     * already returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextSubdivisionCode</code> from the previous
     * response has a value, enter that value in <code>startsubdivisioncode</code> to
     * return the next page of results.</p> <p>To list subdivisions (U.S. states), you
     * must include both <code>startcountrycode</code> and
     * <code>startsubdivisioncode</code>.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(const Aws::String& value) { SetStartSubdivisionCode(value); return *this;}

    /**
     * <p>The code for the state of the United States with which you want to start
     * listing locations that Amazon Route 53 supports for geolocation. If Route 53 has
     * already returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextSubdivisionCode</code> from the previous
     * response has a value, enter that value in <code>startsubdivisioncode</code> to
     * return the next page of results.</p> <p>To list subdivisions (U.S. states), you
     * must include both <code>startcountrycode</code> and
     * <code>startsubdivisioncode</code>.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(Aws::String&& value) { SetStartSubdivisionCode(std::move(value)); return *this;}

    /**
     * <p>The code for the state of the United States with which you want to start
     * listing locations that Amazon Route 53 supports for geolocation. If Route 53 has
     * already returned a page or more of results, if <code>IsTruncated</code> is
     * <code>true</code>, and if <code>NextSubdivisionCode</code> from the previous
     * response has a value, enter that value in <code>startsubdivisioncode</code> to
     * return the next page of results.</p> <p>To list subdivisions (U.S. states), you
     * must include both <code>startcountrycode</code> and
     * <code>startsubdivisioncode</code>.</p>
     */
    inline ListGeoLocationsRequest& WithStartSubdivisionCode(const char* value) { SetStartSubdivisionCode(value); return *this;}


    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>maxitems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>maxitems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>maxitems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>maxitems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>maxitems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>maxitems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline ListGeoLocationsRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>maxitems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline ListGeoLocationsRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>(Optional) The maximum number of geolocations to be included in the response
     * body for this request. If more than <code>maxitems</code> geolocations remain to
     * be listed, then the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>.</p>
     */
    inline ListGeoLocationsRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_startContinentCode;
    bool m_startContinentCodeHasBeenSet = false;

    Aws::String m_startCountryCode;
    bool m_startCountryCodeHasBeenSet = false;

    Aws::String m_startSubdivisionCode;
    bool m_startSubdivisionCodeHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
