﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/GeoMatchSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_WAF_API CreateGeoMatchSetResult
  {
  public:
    CreateGeoMatchSetResult();
    CreateGeoMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGeoMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a>GeoMatchSet</a> returned in the <code>CreateGeoMatchSet</code>
     * response. The <code>GeoMatchSet</code> contains no
     * <code>GeoMatchConstraints</code>.</p>
     */
    inline const GeoMatchSet& GetGeoMatchSet() const{ return m_geoMatchSet; }

    /**
     * <p>The <a>GeoMatchSet</a> returned in the <code>CreateGeoMatchSet</code>
     * response. The <code>GeoMatchSet</code> contains no
     * <code>GeoMatchConstraints</code>.</p>
     */
    inline void SetGeoMatchSet(const GeoMatchSet& value) { m_geoMatchSet = value; }

    /**
     * <p>The <a>GeoMatchSet</a> returned in the <code>CreateGeoMatchSet</code>
     * response. The <code>GeoMatchSet</code> contains no
     * <code>GeoMatchConstraints</code>.</p>
     */
    inline void SetGeoMatchSet(GeoMatchSet&& value) { m_geoMatchSet = std::move(value); }

    /**
     * <p>The <a>GeoMatchSet</a> returned in the <code>CreateGeoMatchSet</code>
     * response. The <code>GeoMatchSet</code> contains no
     * <code>GeoMatchConstraints</code>.</p>
     */
    inline CreateGeoMatchSetResult& WithGeoMatchSet(const GeoMatchSet& value) { SetGeoMatchSet(value); return *this;}

    /**
     * <p>The <a>GeoMatchSet</a> returned in the <code>CreateGeoMatchSet</code>
     * response. The <code>GeoMatchSet</code> contains no
     * <code>GeoMatchConstraints</code>.</p>
     */
    inline CreateGeoMatchSetResult& WithGeoMatchSet(GeoMatchSet&& value) { SetGeoMatchSet(std::move(value)); return *this;}


    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateGeoMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateGeoMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateGeoMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateGeoMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateGeoMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateGeoMatchSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateGeoMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateGeoMatchSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateGeoMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateGeoMatchSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    GeoMatchSet m_geoMatchSet;

    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
