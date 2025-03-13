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
    AWS_GLUEDATABREW_API Rule() = default;
    AWS_GLUEDATABREW_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Rule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the rule is disabled. Once a rule is disabled,
     * a profile job will not validate it during a job run. Default value is false.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline Rule& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetCheckExpression() const { return m_checkExpression; }
    inline bool CheckExpressionHasBeenSet() const { return m_checkExpressionHasBeenSet; }
    template<typename CheckExpressionT = Aws::String>
    void SetCheckExpression(CheckExpressionT&& value) { m_checkExpressionHasBeenSet = true; m_checkExpression = std::forward<CheckExpressionT>(value); }
    template<typename CheckExpressionT = Aws::String>
    Rule& WithCheckExpression(CheckExpressionT&& value) { SetCheckExpression(std::forward<CheckExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map of substitution variable names to their values used in a check
     * expression. Variable names should start with a ':' (colon). Variable values can
     * either be actual values or column names. To differentiate between the two,
     * column names should be enclosed in backticks, for example, <code>":col1":
     * "`Column A`".</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSubstitutionMap() const { return m_substitutionMap; }
    inline bool SubstitutionMapHasBeenSet() const { return m_substitutionMapHasBeenSet; }
    template<typename SubstitutionMapT = Aws::Map<Aws::String, Aws::String>>
    void SetSubstitutionMap(SubstitutionMapT&& value) { m_substitutionMapHasBeenSet = true; m_substitutionMap = std::forward<SubstitutionMapT>(value); }
    template<typename SubstitutionMapT = Aws::Map<Aws::String, Aws::String>>
    Rule& WithSubstitutionMap(SubstitutionMapT&& value) { SetSubstitutionMap(std::forward<SubstitutionMapT>(value)); return *this;}
    template<typename SubstitutionMapKeyT = Aws::String, typename SubstitutionMapValueT = Aws::String>
    Rule& AddSubstitutionMap(SubstitutionMapKeyT&& key, SubstitutionMapValueT&& value) {
      m_substitutionMapHasBeenSet = true; m_substitutionMap.emplace(std::forward<SubstitutionMapKeyT>(key), std::forward<SubstitutionMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The threshold used with a non-aggregate check expression. Non-aggregate check
     * expressions will be applied to each row in a specific column, and the threshold
     * will be used to determine whether the validation succeeds.</p>
     */
    inline const Threshold& GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    template<typename ThresholdT = Threshold>
    void SetThreshold(ThresholdT&& value) { m_thresholdHasBeenSet = true; m_threshold = std::forward<ThresholdT>(value); }
    template<typename ThresholdT = Threshold>
    Rule& WithThreshold(ThresholdT&& value) { SetThreshold(std::forward<ThresholdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of column selectors. Selectors can be used to select columns using a
     * name or regular expression from the dataset. Rule will be applied to selected
     * columns.</p>
     */
    inline const Aws::Vector<ColumnSelector>& GetColumnSelectors() const { return m_columnSelectors; }
    inline bool ColumnSelectorsHasBeenSet() const { return m_columnSelectorsHasBeenSet; }
    template<typename ColumnSelectorsT = Aws::Vector<ColumnSelector>>
    void SetColumnSelectors(ColumnSelectorsT&& value) { m_columnSelectorsHasBeenSet = true; m_columnSelectors = std::forward<ColumnSelectorsT>(value); }
    template<typename ColumnSelectorsT = Aws::Vector<ColumnSelector>>
    Rule& WithColumnSelectors(ColumnSelectorsT&& value) { SetColumnSelectors(std::forward<ColumnSelectorsT>(value)); return *this;}
    template<typename ColumnSelectorsT = ColumnSelector>
    Rule& AddColumnSelectors(ColumnSelectorsT&& value) { m_columnSelectorsHasBeenSet = true; m_columnSelectors.emplace_back(std::forward<ColumnSelectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_disabled{false};
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
