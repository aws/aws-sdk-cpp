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
#include <aws/waf-regional/model/RegexMatchSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API UpdateRegexMatchSetRequest : public WAFRegionalRequest
  {
  public:
    UpdateRegexMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRegexMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline const Aws::String& GetRegexMatchSetId() const{ return m_regexMatchSetId; }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline bool RegexMatchSetIdHasBeenSet() const { return m_regexMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(const Aws::String& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = value; }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(Aws::String&& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = std::move(value); }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(const char* value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId.assign(value); }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& WithRegexMatchSetId(const Aws::String& value) { SetRegexMatchSetId(value); return *this;}

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& WithRegexMatchSetId(Aws::String&& value) { SetRegexMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& WithRegexMatchSetId(const char* value) { SetRegexMatchSetId(value); return *this;}


    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline const Aws::Vector<RegexMatchSetUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline void SetUpdates(const Aws::Vector<RegexMatchSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline void SetUpdates(Aws::Vector<RegexMatchSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& WithUpdates(const Aws::Vector<RegexMatchSetUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& WithUpdates(Aws::Vector<RegexMatchSetUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& AddUpdates(const RegexMatchSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& AddUpdates(RegexMatchSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }


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
    inline UpdateRegexMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRegexMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_regexMatchSetId;
    bool m_regexMatchSetIdHasBeenSet;

    Aws::Vector<RegexMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
