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
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API GetRegexMatchSetRequest : public WAFRequest
  {
  public:
    GetRegexMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRegexMatchSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * get. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline const Aws::String& GetRegexMatchSetId() const{ return m_regexMatchSetId; }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * get. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline bool RegexMatchSetIdHasBeenSet() const { return m_regexMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * get. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(const Aws::String& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = value; }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * get. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(Aws::String&& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = std::move(value); }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * get. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(const char* value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId.assign(value); }

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * get. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline GetRegexMatchSetRequest& WithRegexMatchSetId(const Aws::String& value) { SetRegexMatchSetId(value); return *this;}

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * get. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline GetRegexMatchSetRequest& WithRegexMatchSetId(Aws::String&& value) { SetRegexMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * get. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline GetRegexMatchSetRequest& WithRegexMatchSetId(const char* value) { SetRegexMatchSetId(value); return *this;}

  private:

    Aws::String m_regexMatchSetId;
    bool m_regexMatchSetIdHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
