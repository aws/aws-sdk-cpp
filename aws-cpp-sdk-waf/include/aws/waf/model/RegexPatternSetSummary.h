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
   * <p>Returned by <a>ListRegexPatternSets</a>. Each
   * <code>RegexPatternSetSummary</code> object includes the <code>Name</code> and
   * <code>RegexPatternSetId</code> for one <a>RegexPatternSet</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RegexPatternSetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API RegexPatternSetSummary
  {
  public:
    RegexPatternSetSummary();
    RegexPatternSetSummary(Aws::Utils::Json::JsonView jsonValue);
    RegexPatternSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p>
     * <code>RegexPatternSetId</code> is returned by <a>CreateRegexPatternSet</a> and
     * by <a>ListRegexPatternSets</a>.</p>
     */
    inline const Aws::String& GetRegexPatternSetId() const{ return m_regexPatternSetId; }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p>
     * <code>RegexPatternSetId</code> is returned by <a>CreateRegexPatternSet</a> and
     * by <a>ListRegexPatternSets</a>.</p>
     */
    inline bool RegexPatternSetIdHasBeenSet() const { return m_regexPatternSetIdHasBeenSet; }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p>
     * <code>RegexPatternSetId</code> is returned by <a>CreateRegexPatternSet</a> and
     * by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(const Aws::String& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = value; }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p>
     * <code>RegexPatternSetId</code> is returned by <a>CreateRegexPatternSet</a> and
     * by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(Aws::String&& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = std::move(value); }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p>
     * <code>RegexPatternSetId</code> is returned by <a>CreateRegexPatternSet</a> and
     * by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(const char* value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId.assign(value); }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p>
     * <code>RegexPatternSetId</code> is returned by <a>CreateRegexPatternSet</a> and
     * by <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexPatternSetSummary& WithRegexPatternSetId(const Aws::String& value) { SetRegexPatternSetId(value); return *this;}

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p>
     * <code>RegexPatternSetId</code> is returned by <a>CreateRegexPatternSet</a> and
     * by <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexPatternSetSummary& WithRegexPatternSetId(Aws::String&& value) { SetRegexPatternSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code>, update a <code>RegexPatternSet</code>, remove a
     * <code>RegexPatternSet</code> from a <code>RegexMatchSet</code>, and delete a
     * <code>RegexPatternSet</code> from AWS WAF.</p> <p>
     * <code>RegexPatternSetId</code> is returned by <a>CreateRegexPatternSet</a> and
     * by <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexPatternSetSummary& WithRegexPatternSetId(const char* value) { SetRegexPatternSetId(value); return *this;}


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
    inline RegexPatternSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline RegexPatternSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>RegexPatternSet</a>. You can't
     * change <code>Name</code> after you create a <code>RegexPatternSet</code>.</p>
     */
    inline RegexPatternSetSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_regexPatternSetId;
    bool m_regexPatternSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
