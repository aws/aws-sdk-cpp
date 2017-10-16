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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/GeoMatchSetSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{
  class AWS_WAF_API ListGeoMatchSetsResult
  {
  public:
    ListGeoMatchSetsResult();
    ListGeoMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGeoMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <code>GeoMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>GeoMatchSet</code> objects,
     * submit another <code>ListGeoMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>GeoMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>GeoMatchSet</code> objects,
     * submit another <code>ListGeoMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>GeoMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>GeoMatchSet</code> objects,
     * submit another <code>ListGeoMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>GeoMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>GeoMatchSet</code> objects,
     * submit another <code>ListGeoMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>GeoMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>GeoMatchSet</code> objects,
     * submit another <code>ListGeoMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListGeoMatchSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>GeoMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>GeoMatchSet</code> objects,
     * submit another <code>ListGeoMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListGeoMatchSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>GeoMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>GeoMatchSet</code> objects,
     * submit another <code>ListGeoMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListGeoMatchSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>GeoMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<GeoMatchSetSummary>& GetGeoMatchSets() const{ return m_geoMatchSets; }

    /**
     * <p>An array of <a>GeoMatchSetSummary</a> objects.</p>
     */
    inline void SetGeoMatchSets(const Aws::Vector<GeoMatchSetSummary>& value) { m_geoMatchSets = value; }

    /**
     * <p>An array of <a>GeoMatchSetSummary</a> objects.</p>
     */
    inline void SetGeoMatchSets(Aws::Vector<GeoMatchSetSummary>&& value) { m_geoMatchSets = std::move(value); }

    /**
     * <p>An array of <a>GeoMatchSetSummary</a> objects.</p>
     */
    inline ListGeoMatchSetsResult& WithGeoMatchSets(const Aws::Vector<GeoMatchSetSummary>& value) { SetGeoMatchSets(value); return *this;}

    /**
     * <p>An array of <a>GeoMatchSetSummary</a> objects.</p>
     */
    inline ListGeoMatchSetsResult& WithGeoMatchSets(Aws::Vector<GeoMatchSetSummary>&& value) { SetGeoMatchSets(std::move(value)); return *this;}

    /**
     * <p>An array of <a>GeoMatchSetSummary</a> objects.</p>
     */
    inline ListGeoMatchSetsResult& AddGeoMatchSets(const GeoMatchSetSummary& value) { m_geoMatchSets.push_back(value); return *this; }

    /**
     * <p>An array of <a>GeoMatchSetSummary</a> objects.</p>
     */
    inline ListGeoMatchSetsResult& AddGeoMatchSets(GeoMatchSetSummary&& value) { m_geoMatchSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<GeoMatchSetSummary> m_geoMatchSets;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
