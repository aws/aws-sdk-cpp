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
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API GetGeoMatchSetRequest : public WAFRegionalRequest
  {
  public:
    GetGeoMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGeoMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline const Aws::String& GetGeoMatchSetId() const{ return m_geoMatchSetId; }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline bool GeoMatchSetIdHasBeenSet() const { return m_geoMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(const Aws::String& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = value; }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(Aws::String&& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = std::move(value); }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(const char* value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId.assign(value); }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline GetGeoMatchSetRequest& WithGeoMatchSetId(const Aws::String& value) { SetGeoMatchSetId(value); return *this;}

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline GetGeoMatchSetRequest& WithGeoMatchSetId(Aws::String&& value) { SetGeoMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline GetGeoMatchSetRequest& WithGeoMatchSetId(const char* value) { SetGeoMatchSetId(value); return *this;}

  private:

    Aws::String m_geoMatchSetId;
    bool m_geoMatchSetIdHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
