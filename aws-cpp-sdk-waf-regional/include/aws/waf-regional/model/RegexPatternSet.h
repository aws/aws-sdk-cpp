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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The <code>RegexPatternSet</code> specifies the regular expression (regex)
   * pattern that you want AWS WAF to search for, such as <code>B[a@]dB[o0]t</code>.
   * You can then configure AWS WAF to reject those requests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexPatternSet">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API RegexPatternSet
  {
  public:
    RegexPatternSet();
    RegexPatternSet(Aws::Utils::Json::JsonView jsonValue);
    RegexPatternSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline const Aws::String& GetRegexPatternSetId() const{ return m_regexPatternSetId; }

    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline bool RegexPatternSetIdHasBeenSet() const { return m_regexPatternSetIdHasBeenSet; }

    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(const Aws::String& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = value; }

    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(Aws::String&& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = std::move(value); }

    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(const char* value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId.assign(value); }

    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexPatternSet& WithRegexPatternSetId(const Aws::String& value) { SetRegexPatternSetId(value); return *this;}

    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexPatternSet& WithRegexPatternSetId(Aws::String&& value) { SetRegexPatternSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the <code>RegexPatternSet</code>. You use
     * <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code>
     * is returned by <a>CreateRegexPatternSet</a> and by
     * <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexPatternSet& WithRegexPatternSetId(const char* value) { SetRegexPatternSetId(value); return *this;}


    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline RegexPatternSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline RegexPatternSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline RegexPatternSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegexPatternStrings() const{ return m_regexPatternStrings; }

    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline bool RegexPatternStringsHasBeenSet() const { return m_regexPatternStringsHasBeenSet; }

    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline void SetRegexPatternStrings(const Aws::Vector<Aws::String>& value) { m_regexPatternStringsHasBeenSet = true; m_regexPatternStrings = value; }

    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline void SetRegexPatternStrings(Aws::Vector<Aws::String>&& value) { m_regexPatternStringsHasBeenSet = true; m_regexPatternStrings = std::move(value); }

    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline RegexPatternSet& WithRegexPatternStrings(const Aws::Vector<Aws::String>& value) { SetRegexPatternStrings(value); return *this;}

    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline RegexPatternSet& WithRegexPatternStrings(Aws::Vector<Aws::String>&& value) { SetRegexPatternStrings(std::move(value)); return *this;}

    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline RegexPatternSet& AddRegexPatternStrings(const Aws::String& value) { m_regexPatternStringsHasBeenSet = true; m_regexPatternStrings.push_back(value); return *this; }

    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline RegexPatternSet& AddRegexPatternStrings(Aws::String&& value) { m_regexPatternStringsHasBeenSet = true; m_regexPatternStrings.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the regular expression (regex) patterns that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline RegexPatternSet& AddRegexPatternStrings(const char* value) { m_regexPatternStringsHasBeenSet = true; m_regexPatternStrings.push_back(value); return *this; }

  private:

    Aws::String m_regexPatternSetId;
    bool m_regexPatternSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_regexPatternStrings;
    bool m_regexPatternStringsHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
