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
   * <p>A request to delete an <a>XssMatchSet</a> from AWS WAF.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteXssMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API DeleteXssMatchSetRequest : public WAFRegionalRequest
  {
  public:
    DeleteXssMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteXssMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * delete. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and
     * by <a>ListXssMatchSets</a>.</p>
     */
    inline const Aws::String& GetXssMatchSetId() const{ return m_xssMatchSetId; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * delete. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and
     * by <a>ListXssMatchSets</a>.</p>
     */
    inline bool XssMatchSetIdHasBeenSet() const { return m_xssMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * delete. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and
     * by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const Aws::String& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = value; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * delete. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and
     * by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(Aws::String&& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = std::move(value); }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * delete. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and
     * by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const char* value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId.assign(value); }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * delete. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and
     * by <a>ListXssMatchSets</a>.</p>
     */
    inline DeleteXssMatchSetRequest& WithXssMatchSetId(const Aws::String& value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * delete. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and
     * by <a>ListXssMatchSets</a>.</p>
     */
    inline DeleteXssMatchSetRequest& WithXssMatchSetId(Aws::String&& value) { SetXssMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * delete. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and
     * by <a>ListXssMatchSets</a>.</p>
     */
    inline DeleteXssMatchSetRequest& WithXssMatchSetId(const char* value) { SetXssMatchSetId(value); return *this;}


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
    inline DeleteXssMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteXssMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteXssMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
