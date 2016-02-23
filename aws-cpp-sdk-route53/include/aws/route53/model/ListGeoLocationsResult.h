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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/GeoLocationDetails.h>

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
   * <p>A complex type that contains information about the geo locations that are
   * returned by the request and information about the response.</p>
   */
  class AWS_ROUTE53_API ListGeoLocationsResult
  {
  public:
    ListGeoLocationsResult();
    ListGeoLocationsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListGeoLocationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains information about the geo locations that are
     * returned by the request.</p>
     */
    inline const Aws::Vector<GeoLocationDetails>& GetGeoLocationDetailsList() const{ return m_geoLocationDetailsList; }

    /**
     * <p>A complex type that contains information about the geo locations that are
     * returned by the request.</p>
     */
    inline void SetGeoLocationDetailsList(const Aws::Vector<GeoLocationDetails>& value) { m_geoLocationDetailsList = value; }

    /**
     * <p>A complex type that contains information about the geo locations that are
     * returned by the request.</p>
     */
    inline void SetGeoLocationDetailsList(Aws::Vector<GeoLocationDetails>&& value) { m_geoLocationDetailsList = value; }

    /**
     * <p>A complex type that contains information about the geo locations that are
     * returned by the request.</p>
     */
    inline ListGeoLocationsResult& WithGeoLocationDetailsList(const Aws::Vector<GeoLocationDetails>& value) { SetGeoLocationDetailsList(value); return *this;}

    /**
     * <p>A complex type that contains information about the geo locations that are
     * returned by the request.</p>
     */
    inline ListGeoLocationsResult& WithGeoLocationDetailsList(Aws::Vector<GeoLocationDetails>&& value) { SetGeoLocationDetailsList(value); return *this;}

    /**
     * <p>A complex type that contains information about the geo locations that are
     * returned by the request.</p>
     */
    inline ListGeoLocationsResult& AddGeoLocationDetailsList(const GeoLocationDetails& value) { m_geoLocationDetailsList.push_back(value); return *this; }

    /**
     * <p>A complex type that contains information about the geo locations that are
     * returned by the request.</p>
     */
    inline ListGeoLocationsResult& AddGeoLocationDetailsList(GeoLocationDetails&& value) { m_geoLocationDetailsList.push_back(value); return *this; }

    /**
     * <p>A flag that indicates whether there are more geo locations to be listed. If
     * your results were truncated, you can make a follow-up request for the next page
     * of results by using the values included in the
     * <a>ListGeoLocationsResponse$NextContinentCode</a>,
     * <a>ListGeoLocationsResponse$NextCountryCode</a> and
     * <a>ListGeoLocationsResponse$NextSubdivisionCode</a> elements.</p> <p>Valid
     * Values: <code>true</code> | <code>false</code></p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more geo locations to be listed. If
     * your results were truncated, you can make a follow-up request for the next page
     * of results by using the values included in the
     * <a>ListGeoLocationsResponse$NextContinentCode</a>,
     * <a>ListGeoLocationsResponse$NextCountryCode</a> and
     * <a>ListGeoLocationsResponse$NextSubdivisionCode</a> elements.</p> <p>Valid
     * Values: <code>true</code> | <code>false</code></p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more geo locations to be listed. If
     * your results were truncated, you can make a follow-up request for the next page
     * of results by using the values included in the
     * <a>ListGeoLocationsResponse$NextContinentCode</a>,
     * <a>ListGeoLocationsResponse$NextCountryCode</a> and
     * <a>ListGeoLocationsResponse$NextSubdivisionCode</a> elements.</p> <p>Valid
     * Values: <code>true</code> | <code>false</code></p>
     */
    inline ListGeoLocationsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * <p>If the results were truncated, the continent code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is a continent location. </p>
     */
    inline const Aws::String& GetNextContinentCode() const{ return m_nextContinentCode; }

    /**
     * <p>If the results were truncated, the continent code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is a continent location. </p>
     */
    inline void SetNextContinentCode(const Aws::String& value) { m_nextContinentCode = value; }

    /**
     * <p>If the results were truncated, the continent code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is a continent location. </p>
     */
    inline void SetNextContinentCode(Aws::String&& value) { m_nextContinentCode = value; }

    /**
     * <p>If the results were truncated, the continent code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is a continent location. </p>
     */
    inline void SetNextContinentCode(const char* value) { m_nextContinentCode.assign(value); }

    /**
     * <p>If the results were truncated, the continent code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is a continent location. </p>
     */
    inline ListGeoLocationsResult& WithNextContinentCode(const Aws::String& value) { SetNextContinentCode(value); return *this;}

    /**
     * <p>If the results were truncated, the continent code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is a continent location. </p>
     */
    inline ListGeoLocationsResult& WithNextContinentCode(Aws::String&& value) { SetNextContinentCode(value); return *this;}

    /**
     * <p>If the results were truncated, the continent code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is a continent location. </p>
     */
    inline ListGeoLocationsResult& WithNextContinentCode(const char* value) { SetNextContinentCode(value); return *this;}

    /**
     * <p>If the results were truncated, the country code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is not a continent location. </p>
     */
    inline const Aws::String& GetNextCountryCode() const{ return m_nextCountryCode; }

    /**
     * <p>If the results were truncated, the country code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is not a continent location. </p>
     */
    inline void SetNextCountryCode(const Aws::String& value) { m_nextCountryCode = value; }

    /**
     * <p>If the results were truncated, the country code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is not a continent location. </p>
     */
    inline void SetNextCountryCode(Aws::String&& value) { m_nextCountryCode = value; }

    /**
     * <p>If the results were truncated, the country code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is not a continent location. </p>
     */
    inline void SetNextCountryCode(const char* value) { m_nextCountryCode.assign(value); }

    /**
     * <p>If the results were truncated, the country code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is not a continent location. </p>
     */
    inline ListGeoLocationsResult& WithNextCountryCode(const Aws::String& value) { SetNextCountryCode(value); return *this;}

    /**
     * <p>If the results were truncated, the country code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is not a continent location. </p>
     */
    inline ListGeoLocationsResult& WithNextCountryCode(Aws::String&& value) { SetNextCountryCode(value); return *this;}

    /**
     * <p>If the results were truncated, the country code of the next geo location in
     * the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location to
     * list is not a continent location. </p>
     */
    inline ListGeoLocationsResult& WithNextCountryCode(const char* value) { SetNextCountryCode(value); return *this;}

    /**
     * <p>If the results were truncated, the subdivision code of the next geo location
     * in the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location
     * has a subdivision. </p>
     */
    inline const Aws::String& GetNextSubdivisionCode() const{ return m_nextSubdivisionCode; }

    /**
     * <p>If the results were truncated, the subdivision code of the next geo location
     * in the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location
     * has a subdivision. </p>
     */
    inline void SetNextSubdivisionCode(const Aws::String& value) { m_nextSubdivisionCode = value; }

    /**
     * <p>If the results were truncated, the subdivision code of the next geo location
     * in the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location
     * has a subdivision. </p>
     */
    inline void SetNextSubdivisionCode(Aws::String&& value) { m_nextSubdivisionCode = value; }

    /**
     * <p>If the results were truncated, the subdivision code of the next geo location
     * in the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location
     * has a subdivision. </p>
     */
    inline void SetNextSubdivisionCode(const char* value) { m_nextSubdivisionCode.assign(value); }

    /**
     * <p>If the results were truncated, the subdivision code of the next geo location
     * in the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location
     * has a subdivision. </p>
     */
    inline ListGeoLocationsResult& WithNextSubdivisionCode(const Aws::String& value) { SetNextSubdivisionCode(value); return *this;}

    /**
     * <p>If the results were truncated, the subdivision code of the next geo location
     * in the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location
     * has a subdivision. </p>
     */
    inline ListGeoLocationsResult& WithNextSubdivisionCode(Aws::String&& value) { SetNextSubdivisionCode(value); return *this;}

    /**
     * <p>If the results were truncated, the subdivision code of the next geo location
     * in the list. This element is present only if
     * <a>ListGeoLocationsResponse$IsTruncated</a> is true and the next geo location
     * has a subdivision. </p>
     */
    inline ListGeoLocationsResult& WithNextSubdivisionCode(const char* value) { SetNextSubdivisionCode(value); return *this;}

    /**
     * <p>The maximum number of records you requested. The maximum value of
     * <code>MaxItems</code> is 100.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of records you requested. The maximum value of
     * <code>MaxItems</code> is 100.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of records you requested. The maximum value of
     * <code>MaxItems</code> is 100.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of records you requested. The maximum value of
     * <code>MaxItems</code> is 100.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The maximum number of records you requested. The maximum value of
     * <code>MaxItems</code> is 100.</p>
     */
    inline ListGeoLocationsResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of records you requested. The maximum value of
     * <code>MaxItems</code> is 100.</p>
     */
    inline ListGeoLocationsResult& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of records you requested. The maximum value of
     * <code>MaxItems</code> is 100.</p>
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