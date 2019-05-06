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
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/SizeConstraintSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API UpdateSizeConstraintSetRequest : public WAFRequest
  {
  public:
    UpdateSizeConstraintSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSizeConstraintSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline const Aws::String& GetSizeConstraintSetId() const{ return m_sizeConstraintSetId; }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline bool SizeConstraintSetIdHasBeenSet() const { return m_sizeConstraintSetIdHasBeenSet; }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(const Aws::String& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = value; }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(Aws::String&& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = std::move(value); }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(const char* value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId.assign(value); }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline UpdateSizeConstraintSetRequest& WithSizeConstraintSetId(const Aws::String& value) { SetSizeConstraintSetId(value); return *this;}

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline UpdateSizeConstraintSetRequest& WithSizeConstraintSetId(Aws::String&& value) { SetSizeConstraintSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline UpdateSizeConstraintSetRequest& WithSizeConstraintSetId(const char* value) { SetSizeConstraintSetId(value); return *this;}


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
    inline UpdateSizeConstraintSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateSizeConstraintSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateSizeConstraintSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline const Aws::Vector<SizeConstraintSetUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(const Aws::Vector<SizeConstraintSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(Aws::Vector<SizeConstraintSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateSizeConstraintSetRequest& WithUpdates(const Aws::Vector<SizeConstraintSetUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateSizeConstraintSetRequest& WithUpdates(Aws::Vector<SizeConstraintSetUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateSizeConstraintSetRequest& AddUpdates(const SizeConstraintSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateSizeConstraintSetRequest& AddUpdates(SizeConstraintSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sizeConstraintSetId;
    bool m_sizeConstraintSetIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;

    Aws::Vector<SizeConstraintSetUpdate> m_updates;
    bool m_updatesHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
