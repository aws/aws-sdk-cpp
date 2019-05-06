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
#include <aws/waf-regional/model/XssMatchSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>A request to update an <a>XssMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateXssMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API UpdateXssMatchSetRequest : public WAFRegionalRequest
  {
  public:
    UpdateXssMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateXssMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>XssMatchSetId</code> of the <code>XssMatchSet</code> that you want
     * to update. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a>
     * and by <a>ListXssMatchSets</a>.</p>
     */
    inline const Aws::String& GetXssMatchSetId() const{ return m_xssMatchSetId; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <code>XssMatchSet</code> that you want
     * to update. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a>
     * and by <a>ListXssMatchSets</a>.</p>
     */
    inline bool XssMatchSetIdHasBeenSet() const { return m_xssMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <code>XssMatchSet</code> that you want
     * to update. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a>
     * and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const Aws::String& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = value; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <code>XssMatchSet</code> that you want
     * to update. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a>
     * and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(Aws::String&& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = std::move(value); }

    /**
     * <p>The <code>XssMatchSetId</code> of the <code>XssMatchSet</code> that you want
     * to update. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a>
     * and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const char* value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId.assign(value); }

    /**
     * <p>The <code>XssMatchSetId</code> of the <code>XssMatchSet</code> that you want
     * to update. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a>
     * and by <a>ListXssMatchSets</a>.</p>
     */
    inline UpdateXssMatchSetRequest& WithXssMatchSetId(const Aws::String& value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>The <code>XssMatchSetId</code> of the <code>XssMatchSet</code> that you want
     * to update. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a>
     * and by <a>ListXssMatchSets</a>.</p>
     */
    inline UpdateXssMatchSetRequest& WithXssMatchSetId(Aws::String&& value) { SetXssMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>XssMatchSetId</code> of the <code>XssMatchSet</code> that you want
     * to update. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a>
     * and by <a>ListXssMatchSets</a>.</p>
     */
    inline UpdateXssMatchSetRequest& WithXssMatchSetId(const char* value) { SetXssMatchSetId(value); return *this;}


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
    inline UpdateXssMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateXssMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateXssMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    /**
     * <p>An array of <code>XssMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>XssMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>XssMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>XssMatchTuple</code> </p> </li> <li> <p>
     * <a>XssMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline const Aws::Vector<XssMatchSetUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>XssMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>XssMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>XssMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>XssMatchTuple</code> </p> </li> <li> <p>
     * <a>XssMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>An array of <code>XssMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>XssMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>XssMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>XssMatchTuple</code> </p> </li> <li> <p>
     * <a>XssMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(const Aws::Vector<XssMatchSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>XssMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>XssMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>XssMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>XssMatchTuple</code> </p> </li> <li> <p>
     * <a>XssMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(Aws::Vector<XssMatchSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>An array of <code>XssMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>XssMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>XssMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>XssMatchTuple</code> </p> </li> <li> <p>
     * <a>XssMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateXssMatchSetRequest& WithUpdates(const Aws::Vector<XssMatchSetUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>XssMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>XssMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>XssMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>XssMatchTuple</code> </p> </li> <li> <p>
     * <a>XssMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateXssMatchSetRequest& WithUpdates(Aws::Vector<XssMatchSetUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>An array of <code>XssMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>XssMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>XssMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>XssMatchTuple</code> </p> </li> <li> <p>
     * <a>XssMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateXssMatchSetRequest& AddUpdates(const XssMatchSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>XssMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>XssMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>XssMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>XssMatchTuple</code> </p> </li> <li> <p>
     * <a>XssMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateXssMatchSetRequest& AddUpdates(XssMatchSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;

    Aws::Vector<XssMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
