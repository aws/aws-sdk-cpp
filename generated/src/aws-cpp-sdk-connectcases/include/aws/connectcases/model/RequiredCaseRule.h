/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/BooleanCondition.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Required rule type, used to indicate whether a field is required. In the
   * Amazon Connect admin website, case rules are known as <i>case field
   * conditions</i>. For more information about case field conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RequiredCaseRule">AWS
   * API Reference</a></p>
   */
  class RequiredCaseRule
  {
  public:
    AWS_CONNECTCASES_API RequiredCaseRule() = default;
    AWS_CONNECTCASES_API RequiredCaseRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API RequiredCaseRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of conditions for the required rule; the first condition to evaluate to
     * true dictates the value of the rule.</p>
     */
    inline const Aws::Vector<BooleanCondition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<BooleanCondition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<BooleanCondition>>
    RequiredCaseRule& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = BooleanCondition>
    RequiredCaseRule& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of the rule (that is, whether the field is required) should none of
     * the conditions evaluate to true.</p>
     */
    inline bool GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(bool value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline RequiredCaseRule& WithDefaultValue(bool value) { SetDefaultValue(value); return *this;}
    ///@}
  private:

    Aws::Vector<BooleanCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    bool m_defaultValue{false};
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
