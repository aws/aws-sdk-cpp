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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/GeoLocationDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type containing the response information for the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListGeoLocationsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListGeoLocationsResult
  {
  public:
    ListGeoLocationsResult();
    ListGeoLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListGeoLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline const Aws::Vector<GeoLocationDetails>& GetGeoLocationDetailsList() const{ return m_geoLocationDetailsList; }

    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline void SetGeoLocationDetailsList(const Aws::Vector<GeoLocationDetails>& value) { m_geoLocationDetailsList = value; }

    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline void SetGeoLocationDetailsList(Aws::Vector<GeoLocationDetails>&& value) { m_geoLocationDetailsList = std::move(value); }

    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline ListGeoLocationsResult& WithGeoLocationDetailsList(const Aws::Vector<GeoLocationDetails>& value) { SetGeoLocationDetailsList(value); return *this;}

    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline ListGeoLocationsResult& WithGeoLocationDetailsList(Aws::Vector<GeoLocationDetails>&& value) { SetGeoLocationDetailsList(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline ListGeoLocationsResult& AddGeoLocationDetailsList(const GeoLocationDetails& value) { m_geoLocationDetailsList.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline ListGeoLocationsResult& AddGeoLocationDetailsList(GeoLocationDetails&& value) { m_geoLocationDetailsList.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether more locations remain to be listed after the
     * last location in this response. If so, the value of <code>IsTruncated</code> is
     * <code>true</code>. To get more values, submit another request and include the
     * values of <code>NextContinentCode</code>, <code>NextCountryCode</code>, and
     * <code>NextSubdivisionCode</code> in the <code>startcontinentcode</code>,
     * <code>startcountrycode</code>, and <code>startsubdivisioncode</code>, as
     * applicable.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A value that indicates whether more locations remain to be listed after the
     * last location in this response. If so, the value of <code>IsTruncated</code> is
     * <code>true</code>. To get more values, submit another request and include the
     * values of <code>NextContinentCode</code>, <code>NextCountryCode</code>, and
     * <code>NextSubdivisionCode</code> in the <code>startcontinentcode</code>,
     * <code>startcountrycode</code>, and <code>startsubdivisioncode</code>, as
     * applicable.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A value that indicates whether more locations remain to be listed after the
     * last location in this response. If so, the value of <code>IsTruncated</code> is
     * <code>true</code>. To get more values, submit another request and include the
     * values of <code>NextContinentCode</code>, <code>NextCountryCode</code>, and
     * <code>NextSubdivisionCode</code> in the <code>startcontinentcode</code>,
     * <code>startcountrycode</code>, and <code>startsubdivisioncode</code>, as
     * applicable.</p>
     */
    inline ListGeoLocationsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextContinentCode() const{ return m_nextContinentCode; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextContinentCode(const Aws::String& value) { m_nextContinentCode = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextContinentCode(Aws::String&& value) { m_nextContinentCode = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextContinentCode(const char* value) { m_nextContinentCode.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextContinentCode(const Aws::String& value) { SetNextContinentCode(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextContinentCode(Aws::String&& value) { SetNextContinentCode(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextContinentCode(const char* value) { SetNextContinentCode(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextCountryCode() const{ return m_nextCountryCode; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextCountryCode(const Aws::String& value) { m_nextCountryCode = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextCountryCode(Aws::String&& value) { m_nextCountryCode = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextCountryCode(const char* value) { m_nextCountryCode.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextCountryCode(const Aws::String& value) { SetNextCountryCode(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextCountryCode(Aws::String&& value) { SetNextCountryCode(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextCountryCode(const char* value) { SetNextCountryCode(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextSubdivisionCode() const{ return m_nextSubdivisionCode; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextSubdivisionCode(const Aws::String& value) { m_nextSubdivisionCode = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextSubdivisionCode(Aws::String&& value) { m_nextSubdivisionCode = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline void SetNextSubdivisionCode(const char* value) { m_nextSubdivisionCode.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextSubdivisionCode(const Aws::String& value) { SetNextSubdivisionCode(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextSubdivisionCode(Aws::String&& value) { SetNextSubdivisionCode(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline ListGeoLocationsResult& WithNextSubdivisionCode(const char* value) { SetNextSubdivisionCode(value); return *this;}


    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline ListGeoLocationsResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline ListGeoLocationsResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline ListGeoLocationsResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::Vector<GeoLocationDetails> m_geoLocationDetailsList;

    bool m_isTruncated;

    Aws::String m_nextContinentCode;

    Aws::String m_nextCountryCode;

    Aws::String m_nextSubdivisionCode;

    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
