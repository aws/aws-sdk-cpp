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
   * <p>Returned by <a>ListRegexMatchSets</a>. Each <code>RegexMatchSetSummary</code>
   * object includes the <code>Name</code> and <code>RegexMatchSetId</code> for one
   * <a>RegexMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API RegexMatchSetSummary
  {
  public:
    RegexMatchSetSummary();
    RegexMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    RegexMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline const Aws::String& GetRegexMatchSetId() const{ return m_regexMatchSetId; }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline bool RegexMatchSetIdHasBeenSet() const { return m_regexMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(const Aws::String& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = value; }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(Aws::String&& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = std::move(value); }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(const char* value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId.assign(value); }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline RegexMatchSetSummary& WithRegexMatchSetId(const Aws::String& value) { SetRegexMatchSetId(value); return *this;}

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline RegexMatchSetSummary& WithRegexMatchSetId(Aws::String&& value) { SetRegexMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline RegexMatchSetSummary& WithRegexMatchSetId(const char* value) { SetRegexMatchSetId(value); return *this;}


    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline RegexMatchSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline RegexMatchSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline RegexMatchSetSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_regexMatchSetId;
    bool m_regexMatchSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
