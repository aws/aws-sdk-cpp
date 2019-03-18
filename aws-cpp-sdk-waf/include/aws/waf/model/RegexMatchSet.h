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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/RegexMatchTuple.h>
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
namespace WAF
{
namespace Model
{

  /**
   * <p>In a <a>GetRegexMatchSet</a> request, <code>RegexMatchSet</code> is a complex
   * type that contains the <code>RegexMatchSetId</code> and <code>Name</code> of a
   * <code>RegexMatchSet</code>, and the values that you specified when you updated
   * the <code>RegexMatchSet</code>.</p> <p> The values are contained in a
   * <code>RegexMatchTuple</code> object, which specify the parts of web requests
   * that you want AWS WAF to inspect and the values that you want AWS WAF to search
   * for. If a <code>RegexMatchSet</code> contains more than one
   * <code>RegexMatchTuple</code> object, a request needs to match the settings in
   * only one <code>ByteMatchTuple</code> to be considered a match.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RegexMatchSet">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API RegexMatchSet
  {
  public:
    RegexMatchSet();
    RegexMatchSet(Aws::Utils::Json::JsonView jsonValue);
    RegexMatchSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline const Aws::String& GetRegexMatchSetId() const{ return m_regexMatchSetId; }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline bool RegexMatchSetIdHasBeenSet() const { return m_regexMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(const Aws::String& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = value; }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(Aws::String&& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = std::move(value); }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline void SetRegexMatchSetId(const char* value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId.assign(value); }

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline RegexMatchSet& WithRegexMatchSetId(const Aws::String& value) { SetRegexMatchSetId(value); return *this;}

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline RegexMatchSet& WithRegexMatchSetId(Aws::String&& value) { SetRegexMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline RegexMatchSet& WithRegexMatchSetId(const char* value) { SetRegexMatchSetId(value); return *this;}


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
    inline RegexMatchSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline RegexMatchSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline RegexMatchSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline const Aws::Vector<RegexMatchTuple>& GetRegexMatchTuples() const{ return m_regexMatchTuples; }

    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline bool RegexMatchTuplesHasBeenSet() const { return m_regexMatchTuplesHasBeenSet; }

    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline void SetRegexMatchTuples(const Aws::Vector<RegexMatchTuple>& value) { m_regexMatchTuplesHasBeenSet = true; m_regexMatchTuples = value; }

    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline void SetRegexMatchTuples(Aws::Vector<RegexMatchTuple>&& value) { m_regexMatchTuplesHasBeenSet = true; m_regexMatchTuples = std::move(value); }

    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline RegexMatchSet& WithRegexMatchTuples(const Aws::Vector<RegexMatchTuple>& value) { SetRegexMatchTuples(value); return *this;}

    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline RegexMatchSet& WithRegexMatchTuples(Aws::Vector<RegexMatchTuple>&& value) { SetRegexMatchTuples(std::move(value)); return *this;}

    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline RegexMatchSet& AddRegexMatchTuples(const RegexMatchTuple& value) { m_regexMatchTuplesHasBeenSet = true; m_regexMatchTuples.push_back(value); return *this; }

    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline RegexMatchSet& AddRegexMatchTuples(RegexMatchTuple&& value) { m_regexMatchTuplesHasBeenSet = true; m_regexMatchTuples.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_regexMatchSetId;
    bool m_regexMatchSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<RegexMatchTuple> m_regexMatchTuples;
    bool m_regexMatchTuplesHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
