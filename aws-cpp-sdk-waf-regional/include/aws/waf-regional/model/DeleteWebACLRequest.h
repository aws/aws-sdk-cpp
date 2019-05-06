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
  class AWS_WAFREGIONAL_API DeleteWebACLRequest : public WAFRegionalRequest
  {
  public:
    DeleteWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWebACL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to delete.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to delete.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to delete.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to delete.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to delete.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to delete.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline DeleteWebACLRequest& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to delete.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline DeleteWebACLRequest& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to delete.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline DeleteWebACLRequest& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


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
    inline DeleteWebACLRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteWebACLRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteWebACLRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
