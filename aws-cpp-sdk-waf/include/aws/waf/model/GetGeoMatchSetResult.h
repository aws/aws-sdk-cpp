/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/GeoMatchSet.h>
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
  class GetGeoMatchSetResult
  {
  public:
    AWS_WAF_API GetGeoMatchSetResult();
    AWS_WAF_API GetGeoMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetGeoMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace WAF
} // namespace Aws
