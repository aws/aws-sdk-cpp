﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API GetIPSetRequest : public WAFRequest
  {
  public:
    GetIPSetRequest();
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
    inline void SetIPSetId(const Aws::String& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }

    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to get.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline void SetIPSetId(Aws::String&& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }

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
    inline GetIPSetRequest& WithIPSetId(Aws::String&& value) { SetIPSetId(value); return *this;}

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
} // namespace WAF
} // namespace Aws
