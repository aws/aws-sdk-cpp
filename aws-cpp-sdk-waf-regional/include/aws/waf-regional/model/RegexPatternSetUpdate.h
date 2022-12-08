/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
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
   * endpoints for regional and global use. </p>  <p>In an
   * <a>UpdateRegexPatternSet</a> request, <code>RegexPatternSetUpdate</code>
   * specifies whether to insert or delete a <code>RegexPatternString</code> and
   * includes the settings for the <code>RegexPatternString</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexPatternSetUpdate">AWS
   * API Reference</a></p>
   */
  class RegexPatternSetUpdate
  {
  public:
    AWS_WAFREGIONAL_API RegexPatternSetUpdate();
    AWS_WAFREGIONAL_API RegexPatternSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RegexPatternSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to insert or delete a <code>RegexPatternString</code>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies whether to insert or delete a <code>RegexPatternString</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies whether to insert or delete a <code>RegexPatternString</code>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to insert or delete a <code>RegexPatternString</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies whether to insert or delete a <code>RegexPatternString</code>.</p>
     */
    inline RegexPatternSetUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether to insert or delete a <code>RegexPatternString</code>.</p>
     */
    inline RegexPatternSetUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the regular expression (regex) pattern that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline const Aws::String& GetRegexPatternString() const{ return m_regexPatternString; }

    /**
     * <p>Specifies the regular expression (regex) pattern that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline bool RegexPatternStringHasBeenSet() const { return m_regexPatternStringHasBeenSet; }

    /**
     * <p>Specifies the regular expression (regex) pattern that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline void SetRegexPatternString(const Aws::String& value) { m_regexPatternStringHasBeenSet = true; m_regexPatternString = value; }

    /**
     * <p>Specifies the regular expression (regex) pattern that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline void SetRegexPatternString(Aws::String&& value) { m_regexPatternStringHasBeenSet = true; m_regexPatternString = std::move(value); }

    /**
     * <p>Specifies the regular expression (regex) pattern that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline void SetRegexPatternString(const char* value) { m_regexPatternStringHasBeenSet = true; m_regexPatternString.assign(value); }

    /**
     * <p>Specifies the regular expression (regex) pattern that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline RegexPatternSetUpdate& WithRegexPatternString(const Aws::String& value) { SetRegexPatternString(value); return *this;}

    /**
     * <p>Specifies the regular expression (regex) pattern that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline RegexPatternSetUpdate& WithRegexPatternString(Aws::String&& value) { SetRegexPatternString(std::move(value)); return *this;}

    /**
     * <p>Specifies the regular expression (regex) pattern that you want AWS WAF to
     * search for, such as <code>B[a@]dB[o0]t</code>.</p>
     */
    inline RegexPatternSetUpdate& WithRegexPatternString(const char* value) { SetRegexPatternString(value); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_regexPatternString;
    bool m_regexPatternStringHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
