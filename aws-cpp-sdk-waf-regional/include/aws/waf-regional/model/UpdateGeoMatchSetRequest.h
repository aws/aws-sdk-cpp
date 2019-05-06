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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/GeoMatchSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API UpdateGeoMatchSetRequest : public WAFRegionalRequest
  {
  public:
    UpdateGeoMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGeoMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline const Aws::String& GetGeoMatchSetId() const{ return m_geoMatchSetId; }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline bool GeoMatchSetIdHasBeenSet() const { return m_geoMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(const Aws::String& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = value; }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(Aws::String&& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = std::move(value); }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(const char* value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId.assign(value); }

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline UpdateGeoMatchSetRequest& WithGeoMatchSetId(const Aws::String& value) { SetGeoMatchSetId(value); return *this;}

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline UpdateGeoMatchSetRequest& WithGeoMatchSetId(Aws::String&& value) { SetGeoMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline UpdateGeoMatchSetRequest& WithGeoMatchSetId(const char* value) { SetGeoMatchSetId(value); return *this;}


    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateGeoMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateGeoMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateGeoMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline const Aws::Vector<GeoMatchSetUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline void SetUpdates(const Aws::Vector<GeoMatchSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline void SetUpdates(Aws::Vector<GeoMatchSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline UpdateGeoMatchSetRequest& WithUpdates(const Aws::Vector<GeoMatchSetUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline UpdateGeoMatchSetRequest& WithUpdates(Aws::Vector<GeoMatchSetUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline UpdateGeoMatchSetRequest& AddUpdates(const GeoMatchSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline UpdateGeoMatchSetRequest& AddUpdates(GeoMatchSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_geoMatchSetId;
    bool m_geoMatchSetIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;

    Aws::Vector<GeoMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
