/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/Threshold.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/ColumnSelector.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents a single data quality requirement that should be validated in the
   * scope of this dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Rule">AWS API
   * Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_GLUEDATABREW_API Rule();
    AWS_GLUEDATABREW_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline Rule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline Rule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline Rule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A value that specifies whether the rule is disabled. Once a rule is disabled,
     * a profile job will not validate it during a job run. Default value is false.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>A value that specifies whether the rule is disabled. Once a rule is disabled,
     * a profile job will not validate it during a job run. Default value is false.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>A value that specifies whether the rule is disabled. Once a rule is disabled,
     * a profile job will not validate it during a job run. Default value is false.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>A value that specifies whether the rule is disabled. Once a rule is disabled,
     * a profile job will not validate it during a job run. Default value is false.</p>
     */
    inline Rule& WithDisabled(bool value) { SetDisabled(value); return *this;}


    /**
     * <p>The expression which includes column references, condition names followed by
     * variable references, possibly grouped and combined with other conditions. For
     * example, <code>(:col1 starts_with :prefix1 or :col1 starts_with :prefix2) and
     * (:col1 ends_with :suffix1 or :col1 ends_with :suffix2)</code>. Column and value
     * references are substitution variables that should start with the ':' symbol.
     * Depending on the context, substitution variables' values can be either an actual
     * value or a column name. These values are defined in the SubstitutionMap. If a
     * CheckExpression starts with a column reference, then ColumnSelectors in the rule
     * should be null. If ColumnSelectors has been defined, then there should be no
     * column reference in the left side of a condition, for example, <code>is_between
     * :val1 and :val2</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/profile.data-quality-available-checks.html">Available
     * checks</a> </p>
     */
    inline const Aws::String& GetCheckExpression() const{ return m_checkExpression; }

    /**
     * <p>The expression which includes column references, condition names followed by
     * variable references, possibly grouped and combined with other conditions. For
     * example, <code>(:col1 starts_with :prefix1 or :col1 starts_with :prefix2) and
     * (:col1 ends_with :suffix1 or :col1 ends_with :suffix2)</code>. Column and value
     * references are substitution variables that should start with the ':' symbol.
     * Depending on the context, substitution variables' values can be either an actual
     * value or a column name. These values are defined in the SubstitutionMap. If a
     * CheckExpression starts with a column reference, then ColumnSelectors in the rule
     * should be null. If ColumnSelectors has been defined, then there should be no
     * column reference in the left side of a condition, for example, <code>is_between
     * :val1 and :val2</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/profile.data-quality-available-checks.html">Available
     * checks</a> </p>
     */
    inline bool CheckExpressionHasBeenSet() const { return m_checkExpressionHasBeenSet; }

    /**
     * <p>The expression which includes column references, condition names followed by
     * variable references, possibly grouped and combined with other conditions. For
     * example, <code>(:col1 starts_with :prefix1 or :col1 starts_with :prefix2) and
     * (:col1 ends_with :suffix1 or :col1 ends_with :suffix2)</code>. Column and value
     * references are substitution variables that should start with the ':' symbol.
     * Depending on the context, substitution variables' values can be either an actual
     * value or a column name. These values are defined in the SubstitutionMap. If a
     * CheckExpression starts with a column reference, then ColumnSelectors in the rule
     * should be null. If ColumnSelectors has been defined, then there should be no
     * column reference in the left side of a condition, for example, <code>is_between
     * :val1 and :val2</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/profile.data-quality-available-checks.html">Available
     * checks</a> </p>
     */
    inline void SetCheckExpression(const Aws::String& value) { m_checkExpressionHasBeenSet = true; m_checkExpression = value; }

    /**
     * <p>The expression which includes column references, condition names followed by
     * variable references, possibly grouped and combined with other conditions. For
     * example, <code>(:col1 starts_with :prefix1 or :col1 starts_with :prefix2) and
     * (:col1 ends_with :suffix1 or :col1 ends_with :suffix2)</code>. Column and value
     * references are substitution variables that should start with the ':' symbol.
     * Depending on the context, substitution variables' values can be either an actual
     * value or a column name. These values are defined in the SubstitutionMap. If a
     * CheckExpression starts with a column reference, then ColumnSelectors in the rule
     * should be null. If ColumnSelectors has been defined, then there should be no
     * column reference in the left side of a condition, for example, <code>is_between
     * :val1 and :val2</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/profile.data-quality-available-checks.html">Available
     * checks</a> </p>
     */
    inline void SetCheckExpression(Aws::String&& value) { m_checkExpressionHasBeenSet = true; m_checkExpression = std::move(value); }

    /**
     * <p>The expression which includes column references, condition names followed by
     * variable references, possibly grouped and combined with other conditions. For
     * example, <code>(:col1 starts_with :prefix1 or :col1 starts_with :prefix2) and
     * (:col1 ends_with :suffix1 or :col1 ends_with :suffix2)</code>. Column and value
     * references are substitution variables that should start with the ':' symbol.
     * Depending on the context, substitution variables' values can be either an actual
     * value or a column name. These values are defined in the SubstitutionMap. If a
     * CheckExpression starts with a column reference, then ColumnSelectors in the rule
     * should be null. If ColumnSelectors has been defined, then there should be no
     * column reference in the left side of a condition, for example, <code>is_between
     * :val1 and :val2</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/profile.data-quality-available-checks.html">Available
     * checks</a> </p>
     */
    inline void SetCheckExpression(const char* value) { m_checkExpressionHasBeenSet = true; m_checkExpression.assign(value); }

    /**
     * <p>The expression which includes column references, condition names followed by
     * variable references, possibly grouped and combined with other conditions. For
     * example, <code>(:col1 starts_with :prefix1 or :col1 starts_with :prefix2) and
     * (:col1 ends_with :suffix1 or :col1 ends_with :suffix2)</code>. Column and value
     * references are substitution variables that should start with the ':' symbol.
     * Depending on the context, substitution variables' values can be either an actual
     * value or a column name. These values are defined in the SubstitutionMap. If a
     * CheckExpression starts with a column reference, then ColumnSelectors in the rule
     * should be null. If ColumnSelectors has been defined, then there should be no
     * column reference in the left side of a condition, for example, <code>is_between
     * :val1 and :val2</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/profile.data-quality-available-checks.html">Available
     * checks</a> </p>
     */
    inline Rule& WithCheckExpression(const Aws::String& value) { SetCheckExpression(value); return *this;}

    /**
     * <p>The expression which includes column references, condition names followed by
     * variable references, possibly grouped and combined with other conditions. For
     * example, <code>(:col1 starts_with :prefix1 or :col1 starts_with :prefix2) and
     * (:col1 ends_with :suffix1 or :col1 ends_with :suffix2)</code>. Column and value
     * references are substitution variables that should start with the ':' symbol.
     * Depending on the context, substitution variables' values can be either an actual
     * value or a column name. These values are defined in the SubstitutionMap. If a
     * CheckExpression starts with a column reference, then ColumnSelectors in the rule
     * should be null. If ColumnSelectors has been defined, then there should be no
     * column reference in the left side of a condition, for example, <code>is_between
     * :val1 and :val2</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/profile.data-quality-available-checks.html">Available
     * checks</a> </p>
     */
    inline Rule& WithCheckExpression(Aws::String&& value) { SetCheckExpression(std::move(value)); return *this;}

    /**
     * <p>The expression which includes column references, condition names followed by
     * variable references, possibly grouped and combined with other conditions. For
     * example, <code>(:col1 starts_with :prefix1 or :col1 starts_with :prefix2) and
     * (:col1 ends_with :suffix1 or :col1 ends_with :suffix2)</code>. Column and value
     * references are substitution variables that should start with the ':' symbol.
     * Depending on the context, substitution variables' values can be either an actual
     * value or a column name. These values are defined in the SubstitutionMap. If a
     * CheckExpression starts with a column reference, then ColumnSelectors in the rule
     * should be null. If ColumnSelectors has been defined, then there should be no
     * column reference in the left side of a condition, for example, <code>is_between
     * :val1 and :val2</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/profile.data-quality-available-checks.html">Available
     * checks</a> </p>
     */
    inline Rule& WithCheckExpression(const char* value) { SetCheckExpression(value); return *this;}


    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSubstitutionMap() const{ return m_substitutionMap; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline bool SubstitutionMapHasBeenSet() const { return m_substitutionMapHasBeenSet; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline void SetSubstitutionMap(const Aws::Map<Aws::String, Aws::String>& value) { m_substitutionMapHasBeenSet = true; m_substitutionMap = value; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline void SetSubstitutionMap(Aws::Map<Aws::String, Aws::String>&& value) { m_substitutionMapHasBeenSet = true; m_substitutionMap = std::move(value); }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& WithSubstitutionMap(const Aws::Map<Aws::String, Aws::String>& value) { SetSubstitutionMap(value); return *this;}

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& WithSubstitutionMap(Aws::Map<Aws::String, Aws::String>&& value) { SetSubstitutionMap(std::move(value)); return *this;}

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& AddSubstitutionMap(const Aws::String& key, const Aws::String& value) { m_substitutionMapHasBeenSet = true; m_substitutionMap.emplace(key, value); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& AddSubstitutionMap(Aws::String&& key, const Aws::String& value) { m_substitutionMapHasBeenSet = true; m_substitutionMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& AddSubstitutionMap(const Aws::String& key, Aws::String&& value) { m_substitutionMapHasBeenSet = true; m_substitutionMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& AddSubstitutionMap(Aws::String&& key, Aws::String&& value) { m_substitutionMapHasBeenSet = true; m_substitutionMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& AddSubstitutionMap(const char* key, Aws::String&& value) { m_substitutionMapHasBeenSet = true; m_substitutionMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& AddSubstitutionMap(Aws::String&& key, const char* value) { m_substitutionMapHasBeenSet = true; m_substitutionMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline Rule& AddSubstitutionMap(const char* key, const char* value) { m_substitutionMapHasBeenSet = true; m_substitutionMap.emplace(key, value); return *this; }


    /**
     * <p>The threshold used with a non-aggregate check expression. Non-aggregate check
     * expressions will be applied to each row in a specific column, and the threshold
     * will be used to determine whether the validation succeeds.</p>
     */
    inline const Threshold& GetThreshold() const{ return m_threshold; }

    /**
     * <p>The threshold used with a non-aggregate check expression. Non-aggregate check
     * expressions will be applied to each row in a specific column, and the threshold
     * will be used to determine whether the validation succeeds.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The threshold used with a non-aggregate check expression. Non-aggregate check
     * expressions will be applied to each row in a specific column, and the threshold
     * will be used to determine whether the validation succeeds.</p>
     */
    inline void SetThreshold(const Threshold& value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The threshold used with a non-aggregate check expression. Non-aggregate check
     * expressions will be applied to each row in a specific column, and the threshold
     * will be used to determine whether the validation succeeds.</p>
     */
    inline void SetThreshold(Threshold&& value) { m_thresholdHasBeenSet = true; m_threshold = std::move(value); }

    /**
     * <p>The threshold used with a non-aggregate check expression. Non-aggregate check
     * expressions will be applied to each row in a specific column, and the threshold
     * will be used to determine whether the validation succeeds.</p>
     */
    inline Rule& WithThreshold(const Threshold& value) { SetThreshold(value); return *this;}

    /**
     * <p>The threshold used with a non-aggregate check expression. Non-aggregate check
     * expressions will be applied to each row in a specific column, and the threshold
     * will be used to determine whether the validation succeeds.</p>
     */
    inline Rule& WithThreshold(Threshold&& value) { SetThreshold(std::move(value)); return *this;}


    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline const Aws::Vector<ColumnSelector>& GetColumnSelectors() const{ return m_columnSelectors; }

    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline bool ColumnSelectorsHasBeenSet() const { return m_columnSelectorsHasBeenSet; }

    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline void SetColumnSelectors(const Aws::Vector<ColumnSelector>& value) { m_columnSelectorsHasBeenSet = true; m_columnSelectors = value; }

    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline void SetColumnSelectors(Aws::Vector<ColumnSelector>&& value) { m_columnSelectorsHasBeenSet = true; m_columnSelectors = std::move(value); }

    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline Rule& WithColumnSelectors(const Aws::Vector<ColumnSelector>& value) { SetColumnSelectors(value); return *this;}

    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline Rule& WithColumnSelectors(Aws::Vector<ColumnSelector>&& value) { SetColumnSelectors(std::move(value)); return *this;}

    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline Rule& AddColumnSelectors(const ColumnSelector& value) { m_columnSelectorsHasBeenSet = true; m_columnSelectors.push_back(value); return *this; }

    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline Rule& AddColumnSelectors(ColumnSelector&& value) { m_columnSelectorsHasBeenSet = true; m_columnSelectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    Aws::String m_checkExpression;
    bool m_checkExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_substitutionMap;
    bool m_substitutionMapHasBeenSet = false;

    Threshold m_threshold;
    bool m_thresholdHasBeenSet = false;

    Aws::Vector<ColumnSelector> m_columnSelectors;
    bool m_columnSelectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
