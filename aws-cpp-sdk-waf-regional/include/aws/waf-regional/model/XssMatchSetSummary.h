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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>The <code>Id</code> and <code>Name</code> of an
   * <code>XssMatchSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/XssMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API XssMatchSetSummary
  {
  public:
    XssMatchSetSummary();
    XssMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    XssMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline const Aws::String& GetXssMatchSetId() const{ return m_xssMatchSetId; }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline bool XssMatchSetIdHasBeenSet() const { return m_xssMatchSetIdHasBeenSet; }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const Aws::String& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = value; }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(Aws::String&& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = std::move(value); }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const char* value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId.assign(value); }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSetSummary& WithXssMatchSetId(const Aws::String& value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSetSummary& WithXssMatchSetId(Aws::String&& value) { SetXssMatchSetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSetSummary& WithXssMatchSetId(const char* value) { SetXssMatchSetId(value); return *this;}


    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline XssMatchSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline XssMatchSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline XssMatchSetSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
