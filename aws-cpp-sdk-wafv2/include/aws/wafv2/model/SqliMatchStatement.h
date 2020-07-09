/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/FieldToMatch.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/TextTransformation.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>Attackers sometimes insert malicious
   * SQL code into web requests in an effort to extract data from your database. To
   * allow or block web requests that appear to contain malicious SQL code, create
   * one or more SQL injection match conditions. An SQL injection match condition
   * identifies the part of web requests, such as the URI or the query string, that
   * you want AWS WAF to inspect. Later in the process, when you create a web ACL,
   * you specify whether to allow or block requests that appear to contain malicious
   * SQL code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/SqliMatchStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API SqliMatchStatement
  {
  public:
    SqliMatchStatement();
    SqliMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    SqliMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The part of a web request that you want AWS WAF to inspect. For more
     * information, see <a>FieldToMatch</a>. </p>
     */
    inline const FieldToMatch& GetFieldToMatch() const{ return m_fieldToMatch; }

    /**
     * <p>The part of a web request that you want AWS WAF to inspect. For more
     * information, see <a>FieldToMatch</a>. </p>
     */
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }

    /**
     * <p>The part of a web request that you want AWS WAF to inspect. For more
     * information, see <a>FieldToMatch</a>. </p>
     */
    inline void SetFieldToMatch(const FieldToMatch& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = value; }

    /**
     * <p>The part of a web request that you want AWS WAF to inspect. For more
     * information, see <a>FieldToMatch</a>. </p>
     */
    inline void SetFieldToMatch(FieldToMatch&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::move(value); }

    /**
     * <p>The part of a web request that you want AWS WAF to inspect. For more
     * information, see <a>FieldToMatch</a>. </p>
     */
    inline SqliMatchStatement& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>The part of a web request that you want AWS WAF to inspect. For more
     * information, see <a>FieldToMatch</a>. </p>
     */
    inline SqliMatchStatement& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, AWS WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline const Aws::Vector<TextTransformation>& GetTextTransformations() const{ return m_textTransformations; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, AWS WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline bool TextTransformationsHasBeenSet() const { return m_textTransformationsHasBeenSet; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, AWS WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline void SetTextTransformations(const Aws::Vector<TextTransformation>& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = value; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, AWS WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline void SetTextTransformations(Aws::Vector<TextTransformation>&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = std::move(value); }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, AWS WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SqliMatchStatement& WithTextTransformations(const Aws::Vector<TextTransformation>& value) { SetTextTransformations(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, AWS WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SqliMatchStatement& WithTextTransformations(Aws::Vector<TextTransformation>&& value) { SetTextTransformations(std::move(value)); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, AWS WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SqliMatchStatement& AddTextTransformations(const TextTransformation& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(value); return *this; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, AWS WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SqliMatchStatement& AddTextTransformations(TextTransformation&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(std::move(value)); return *this; }

  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
