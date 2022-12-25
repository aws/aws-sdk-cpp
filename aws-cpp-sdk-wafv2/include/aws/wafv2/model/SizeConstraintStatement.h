/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/FieldToMatch.h>
#include <aws/wafv2/model/ComparisonOperator.h>
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
   * <p>A rule statement that compares a number of bytes against the size of a
   * request component, using a comparison operator, such as greater than (&gt;) or
   * less than (&lt;). For example, you can use a size constraint statement to look
   * for query strings that are longer than 100 bytes. </p> <p>If you configure WAF
   * to inspect the request body, WAF inspects only the first 8192 bytes (8 KB). If
   * the request body for your web requests never exceeds 8192 bytes, you could use a
   * size constraint statement to block requests that have a request body greater
   * than 8192 bytes.</p> <p>If you choose URI for the value of Part of the request
   * to filter on, the slash (/) in the URI counts as one character. For example, the
   * URI <code>/logo.jpg</code> is nine characters long.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/SizeConstraintStatement">AWS
   * API Reference</a></p>
   */
  class SizeConstraintStatement
  {
  public:
    AWS_WAFV2_API SizeConstraintStatement();
    AWS_WAFV2_API SizeConstraintStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API SizeConstraintStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline const FieldToMatch& GetFieldToMatch() const{ return m_fieldToMatch; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline void SetFieldToMatch(const FieldToMatch& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = value; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline void SetFieldToMatch(FieldToMatch&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::move(value); }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline SizeConstraintStatement& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline SizeConstraintStatement& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


    /**
     * <p>The operator to use to compare the request part to the size setting. </p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The operator to use to compare the request part to the size setting. </p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The operator to use to compare the request part to the size setting. </p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The operator to use to compare the request part to the size setting. </p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The operator to use to compare the request part to the size setting. </p>
     */
    inline SizeConstraintStatement& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The operator to use to compare the request part to the size setting. </p>
     */
    inline SizeConstraintStatement& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>The size, in byte, to compare to the request part, after any
     * transformations.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size, in byte, to compare to the request part, after any
     * transformations.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size, in byte, to compare to the request part, after any
     * transformations.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size, in byte, to compare to the request part, after any
     * transformations.</p>
     */
    inline SizeConstraintStatement& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline const Aws::Vector<TextTransformation>& GetTextTransformations() const{ return m_textTransformations; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline bool TextTransformationsHasBeenSet() const { return m_textTransformationsHasBeenSet; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline void SetTextTransformations(const Aws::Vector<TextTransformation>& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = value; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline void SetTextTransformations(Aws::Vector<TextTransformation>&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = std::move(value); }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SizeConstraintStatement& WithTextTransformations(const Aws::Vector<TextTransformation>& value) { SetTextTransformations(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SizeConstraintStatement& WithTextTransformations(Aws::Vector<TextTransformation>&& value) { SetTextTransformations(std::move(value)); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SizeConstraintStatement& AddTextTransformations(const TextTransformation& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(value); return *this; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline SizeConstraintStatement& AddTextTransformations(TextTransformation&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(std::move(value)); return *this; }

  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
