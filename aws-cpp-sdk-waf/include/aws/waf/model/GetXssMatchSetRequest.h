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
   * <p>A request to get an <a>XssMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetXssMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API GetXssMatchSetRequest : public WAFRequest
  {
  public:
    GetXssMatchSetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * get. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and by
     * <a>ListXssMatchSets</a>.</p>
     */
    inline const Aws::String& GetXssMatchSetId() const{ return m_xssMatchSetId; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * get. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and by
     * <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const Aws::String& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = value; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * get. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and by
     * <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(Aws::String&& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = value; }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * get. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and by
     * <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const char* value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId.assign(value); }

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * get. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and by
     * <a>ListXssMatchSets</a>.</p>
     */
    inline GetXssMatchSetRequest& WithXssMatchSetId(const Aws::String& value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * get. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and by
     * <a>ListXssMatchSets</a>.</p>
     */
    inline GetXssMatchSetRequest& WithXssMatchSetId(Aws::String&& value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * get. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and by
     * <a>ListXssMatchSets</a>.</p>
     */
    inline GetXssMatchSetRequest& WithXssMatchSetId(const char* value) { SetXssMatchSetId(value); return *this;}

  private:
    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
