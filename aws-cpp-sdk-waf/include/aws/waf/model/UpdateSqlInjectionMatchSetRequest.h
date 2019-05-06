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
#include <aws/waf/model/SqlInjectionMatchSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   * <p>A request to update a <a>SqlInjectionMatchSet</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateSqlInjectionMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API UpdateSqlInjectionMatchSetRequest : public WAFRequest
  {
  public:
    UpdateSqlInjectionMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSqlInjectionMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the
     * <code>SqlInjectionMatchSet</code> that you want to update.
     * <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline const Aws::String& GetSqlInjectionMatchSetId() const{ return m_sqlInjectionMatchSetId; }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the
     * <code>SqlInjectionMatchSet</code> that you want to update.
     * <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline bool SqlInjectionMatchSetIdHasBeenSet() const { return m_sqlInjectionMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the
     * <code>SqlInjectionMatchSet</code> that you want to update.
     * <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(const Aws::String& value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId = value; }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the
     * <code>SqlInjectionMatchSet</code> that you want to update.
     * <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(Aws::String&& value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId = std::move(value); }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the
     * <code>SqlInjectionMatchSet</code> that you want to update.
     * <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(const char* value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId.assign(value); }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the
     * <code>SqlInjectionMatchSet</code> that you want to update.
     * <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline UpdateSqlInjectionMatchSetRequest& WithSqlInjectionMatchSetId(const Aws::String& value) { SetSqlInjectionMatchSetId(value); return *this;}

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the
     * <code>SqlInjectionMatchSet</code> that you want to update.
     * <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline UpdateSqlInjectionMatchSetRequest& WithSqlInjectionMatchSetId(Aws::String&& value) { SetSqlInjectionMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the
     * <code>SqlInjectionMatchSet</code> that you want to update.
     * <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline UpdateSqlInjectionMatchSetRequest& WithSqlInjectionMatchSetId(const char* value) { SetSqlInjectionMatchSetId(value); return *this;}


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
    inline UpdateSqlInjectionMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateSqlInjectionMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateSqlInjectionMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    /**
     * <p>An array of <code>SqlInjectionMatchSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SqlInjectionMatchSet</a>. For more information,
     * see the applicable data types:</p> <ul> <li> <p>
     * <a>SqlInjectionMatchSetUpdate</a>: Contains <code>Action</code> and
     * <code>SqlInjectionMatchTuple</code> </p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline const Aws::Vector<SqlInjectionMatchSetUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>SqlInjectionMatchSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SqlInjectionMatchSet</a>. For more information,
     * see the applicable data types:</p> <ul> <li> <p>
     * <a>SqlInjectionMatchSetUpdate</a>: Contains <code>Action</code> and
     * <code>SqlInjectionMatchTuple</code> </p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>An array of <code>SqlInjectionMatchSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SqlInjectionMatchSet</a>. For more information,
     * see the applicable data types:</p> <ul> <li> <p>
     * <a>SqlInjectionMatchSetUpdate</a>: Contains <code>Action</code> and
     * <code>SqlInjectionMatchTuple</code> </p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(const Aws::Vector<SqlInjectionMatchSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>SqlInjectionMatchSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SqlInjectionMatchSet</a>. For more information,
     * see the applicable data types:</p> <ul> <li> <p>
     * <a>SqlInjectionMatchSetUpdate</a>: Contains <code>Action</code> and
     * <code>SqlInjectionMatchTuple</code> </p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(Aws::Vector<SqlInjectionMatchSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>An array of <code>SqlInjectionMatchSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SqlInjectionMatchSet</a>. For more information,
     * see the applicable data types:</p> <ul> <li> <p>
     * <a>SqlInjectionMatchSetUpdate</a>: Contains <code>Action</code> and
     * <code>SqlInjectionMatchTuple</code> </p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateSqlInjectionMatchSetRequest& WithUpdates(const Aws::Vector<SqlInjectionMatchSetUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>SqlInjectionMatchSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SqlInjectionMatchSet</a>. For more information,
     * see the applicable data types:</p> <ul> <li> <p>
     * <a>SqlInjectionMatchSetUpdate</a>: Contains <code>Action</code> and
     * <code>SqlInjectionMatchTuple</code> </p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateSqlInjectionMatchSetRequest& WithUpdates(Aws::Vector<SqlInjectionMatchSetUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>An array of <code>SqlInjectionMatchSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SqlInjectionMatchSet</a>. For more information,
     * see the applicable data types:</p> <ul> <li> <p>
     * <a>SqlInjectionMatchSetUpdate</a>: Contains <code>Action</code> and
     * <code>SqlInjectionMatchTuple</code> </p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateSqlInjectionMatchSetRequest& AddUpdates(const SqlInjectionMatchSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>SqlInjectionMatchSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SqlInjectionMatchSet</a>. For more information,
     * see the applicable data types:</p> <ul> <li> <p>
     * <a>SqlInjectionMatchSetUpdate</a>: Contains <code>Action</code> and
     * <code>SqlInjectionMatchTuple</code> </p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Contains <code>FieldToMatch</code> and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateSqlInjectionMatchSetRequest& AddUpdates(SqlInjectionMatchSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sqlInjectionMatchSetId;
    bool m_sqlInjectionMatchSetIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;

    Aws::Vector<SqlInjectionMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
