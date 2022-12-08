/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Returned by
   * <a>ListRegexPatternSets</a>. Each <code>RegexPatternSetSummary</code> object
   * includes the <code>Name</code> and <code>RegexPatternSetId</code> for one
   * <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexPatternSetSummary">AWS
   * API Reference</a></p>
   */
  class RegexPatternSetSummary
  {
  public:
    AWS_WAFREGIONAL_API RegexPatternSetSummary();
    AWS_WAFREGIONAL_API RegexPatternSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RegexPatternSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_regexPatternSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
