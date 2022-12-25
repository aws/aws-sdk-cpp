/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class GetChangeTokenStatusRequest : public WAFRequest
  {
  public:
    AWS_WAF_API GetChangeTokenStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChangeTokenStatus"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The change token for which you want to get the status. This change token was
     * previously returned in the <code>GetChangeToken</code> response.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The change token for which you want to get the status. This change token was
     * previously returned in the <code>GetChangeToken</code> response.</p>
     */
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }

    /**
     * <p>The change token for which you want to get the status. This change token was
     * previously returned in the <code>GetChangeToken</code> response.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The change token for which you want to get the status. This change token was
     * previously returned in the <code>GetChangeToken</code> response.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }

    /**
     * <p>The change token for which you want to get the status. This change token was
     * previously returned in the <code>GetChangeToken</code> response.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The change token for which you want to get the status. This change token was
     * previously returned in the <code>GetChangeToken</code> response.</p>
     */
    inline GetChangeTokenStatusRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The change token for which you want to get the status. This change token was
     * previously returned in the <code>GetChangeToken</code> response.</p>
     */
    inline GetChangeTokenStatusRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The change token for which you want to get the status. This change token was
     * previously returned in the <code>GetChangeToken</code> response.</p>
     */
    inline GetChangeTokenStatusRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
