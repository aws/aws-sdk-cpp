/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SingleSelectQuestionRuleCategoryAutomationCondition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the automation option based on a rule category for a single
   * select question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SingleSelectQuestionRuleCategoryAutomation">AWS
   * API Reference</a></p>
   */
  class SingleSelectQuestionRuleCategoryAutomation
  {
  public:
    AWS_CONNECT_API SingleSelectQuestionRuleCategoryAutomation() = default;
    AWS_CONNECT_API SingleSelectQuestionRuleCategoryAutomation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SingleSelectQuestionRuleCategoryAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    SingleSelectQuestionRuleCategoryAutomation& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition to apply for the automation option. If the condition is
     * <code>PRESENT</code>, then the option is applied when the contact data includes
     * the category. Similarly, if the condition is <code>NOT_PRESENT</code>, then the
     * option is applied when the contact data does not include the category.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomationCondition GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(SingleSelectQuestionRuleCategoryAutomationCondition value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline SingleSelectQuestionRuleCategoryAutomation& WithCondition(SingleSelectQuestionRuleCategoryAutomationCondition value) { SetCondition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the answer option.</p>
     */
    inline const Aws::String& GetOptionRefId() const { return m_optionRefId; }
    inline bool OptionRefIdHasBeenSet() const { return m_optionRefIdHasBeenSet; }
    template<typename OptionRefIdT = Aws::String>
    void SetOptionRefId(OptionRefIdT&& value) { m_optionRefIdHasBeenSet = true; m_optionRefId = std::forward<OptionRefIdT>(value); }
    template<typename OptionRefIdT = Aws::String>
    SingleSelectQuestionRuleCategoryAutomation& WithOptionRefId(OptionRefIdT&& value) { SetOptionRefId(std::forward<OptionRefIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    SingleSelectQuestionRuleCategoryAutomationCondition m_condition{SingleSelectQuestionRuleCategoryAutomationCondition::NOT_SET};
    bool m_conditionHasBeenSet = false;

    Aws::String m_optionRefId;
    bool m_optionRefIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
