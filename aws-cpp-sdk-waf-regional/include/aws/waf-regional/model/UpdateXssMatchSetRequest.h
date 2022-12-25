/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateXssMatchSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API UpdateXssMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateXssMatchSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_xssMatchSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::Vector<XssMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
