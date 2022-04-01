﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_WAFREGIONAL_API GetIPSetRequest : public WAFRegionalRequest
  {
  public:
    GetIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIPSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline const Aws::String& GetIPSetId() const{ return m_iPSetId; }

    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline bool IPSetIdHasBeenSet() const { return m_iPSetIdHasBeenSet; }

    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline void SetIPSetId(const Aws::String& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }

    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline void SetIPSetId(Aws::String&& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = std::move(value); }

    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline void SetIPSetId(const char* value) { m_iPSetIdHasBeenSet = true; m_iPSetId.assign(value); }

    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline GetIPSetRequest& WithIPSetId(const Aws::String& value) { SetIPSetId(value); return *this;}

    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline GetIPSetRequest& WithIPSetId(Aws::String&& value) { SetIPSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline GetIPSetRequest& WithIPSetId(const char* value) { SetIPSetId(value); return *this;}

  private:

    Aws::String m_iPSetId;
    bool m_iPSetIdHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
