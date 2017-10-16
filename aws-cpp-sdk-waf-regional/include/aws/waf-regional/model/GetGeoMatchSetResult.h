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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/GeoMatchSet.h>
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
namespace WAFRegional
{
namespace Model
{
  class AWS_WAFREGIONAL_API GetGeoMatchSetResult
  {
  public:
    GetGeoMatchSetResult();
    GetGeoMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGeoMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>GeoMatchSet</a> that you specified in the
     * <code>GetGeoMatchSet</code> request. This includes the <code>Type</code>, which
     * for a <code>GeoMatchContraint</code> is always <code>Country</code>, as well as
     * the <code>Value</code>, which is the identifier for a specific country.</p>
     */
    inline const GeoMatchSet& GetGeoMatchSet() const{ return m_geoMatchSet; }

    /**
     * <p>Information about the <a>GeoMatchSet</a> that you specified in the
     * <code>GetGeoMatchSet</code> request. This includes the <code>Type</code>, which
     * for a <code>GeoMatchContraint</code> is always <code>Country</code>, as well as
     * the <code>Value</code>, which is the identifier for a specific country.</p>
     */
    inline void SetGeoMatchSet(const GeoMatchSet& value) { m_geoMatchSet = value; }

    /**
     * <p>Information about the <a>GeoMatchSet</a> that you specified in the
     * <code>GetGeoMatchSet</code> request. This includes the <code>Type</code>, which
     * for a <code>GeoMatchContraint</code> is always <code>Country</code>, as well as
     * the <code>Value</code>, which is the identifier for a specific country.</p>
     */
    inline void SetGeoMatchSet(GeoMatchSet&& value) { m_geoMatchSet = std::move(value); }

    /**
     * <p>Information about the <a>GeoMatchSet</a> that you specified in the
     * <code>GetGeoMatchSet</code> request. This includes the <code>Type</code>, which
     * for a <code>GeoMatchContraint</code> is always <code>Country</code>, as well as
     * the <code>Value</code>, which is the identifier for a specific country.</p>
     */
    inline GetGeoMatchSetResult& WithGeoMatchSet(const GeoMatchSet& value) { SetGeoMatchSet(value); return *this;}

    /**
     * <p>Information about the <a>GeoMatchSet</a> that you specified in the
     * <code>GetGeoMatchSet</code> request. This includes the <code>Type</code>, which
     * for a <code>GeoMatchContraint</code> is always <code>Country</code>, as well as
     * the <code>Value</code>, which is the identifier for a specific country.</p>
     */
    inline GetGeoMatchSetResult& WithGeoMatchSet(GeoMatchSet&& value) { SetGeoMatchSet(std::move(value)); return *this;}

  private:

    GeoMatchSet m_geoMatchSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
