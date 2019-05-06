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
   * <p>A request to delete a <a>SqlInjectionMatchSet</a> from AWS WAF.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSqlInjectionMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API DeleteSqlInjectionMatchSetRequest : public WAFRegionalRequest
  {
  public:
    DeleteSqlInjectionMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSqlInjectionMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to delete. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline const Aws::String& GetSqlInjectionMatchSetId() const{ return m_sqlInjectionMatchSetId; }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to delete. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline bool SqlInjectionMatchSetIdHasBeenSet() const { return m_sqlInjectionMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to delete. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(const Aws::String& value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId = value; }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to delete. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(Aws::String&& value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId = std::move(value); }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to delete. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(const char* value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId.assign(value); }

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to delete. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline DeleteSqlInjectionMatchSetRequest& WithSqlInjectionMatchSetId(const Aws::String& value) { SetSqlInjectionMatchSetId(value); return *this;}

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to delete. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline DeleteSqlInjectionMatchSetRequest& WithSqlInjectionMatchSetId(Aws::String&& value) { SetSqlInjectionMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to delete. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline DeleteSqlInjectionMatchSetRequest& WithSqlInjectionMatchSetId(const char* value) { SetSqlInjectionMatchSetId(value); return *this;}


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
    inline DeleteSqlInjectionMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteSqlInjectionMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteSqlInjectionMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_sqlInjectionMatchSetId;
    bool m_sqlInjectionMatchSetIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
