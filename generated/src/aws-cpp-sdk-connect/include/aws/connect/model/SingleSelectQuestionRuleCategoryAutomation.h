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
    AWS_CONNECT_API SingleSelectQuestionRuleCategoryAutomation();
    AWS_CONNECT_API SingleSelectQuestionRuleCategoryAutomation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SingleSelectQuestionRuleCategoryAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomation& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomation& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p> The category name, as defined in Rules.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomation& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>The condition to apply for the automation option. If the condition is
     * <code>PRESENT</code>, then the option is applied when the contact data includes
     * the category. Similarly, if the condition is <code>NOT_PRESENT</code>, then the
     * option is applied when the contact data does not include the category.</p>
     */
    inline const SingleSelectQuestionRuleCategoryAutomationCondition& GetCondition() const{ return m_condition; }

    /**
     * <p>The condition to apply for the automation option. If the condition is
     * <code>PRESENT</code>, then the option is applied when the contact data includes
     * the category. Similarly, if the condition is <code>NOT_PRESENT</code>, then the
     * option is applied when the contact data does not include the category.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The condition to apply for the automation option. If the condition is
     * <code>PRESENT</code>, then the option is applied when the contact data includes
     * the category. Similarly, if the condition is <code>NOT_PRESENT</code>, then the
     * option is applied when the contact data does not include the category.</p>
     */
    inline void SetCondition(const SingleSelectQuestionRuleCategoryAutomationCondition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The condition to apply for the automation option. If the condition is
     * <code>PRESENT</code>, then the option is applied when the contact data includes
     * the category. Similarly, if the condition is <code>NOT_PRESENT</code>, then the
     * option is applied when the contact data does not include the category.</p>
     */
    inline void SetCondition(SingleSelectQuestionRuleCategoryAutomationCondition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The condition to apply for the automation option. If the condition is
     * <code>PRESENT</code>, then the option is applied when the contact data includes
     * the category. Similarly, if the condition is <code>NOT_PRESENT</code>, then the
     * option is applied when the contact data does not include the category.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomation& WithCondition(const SingleSelectQuestionRuleCategoryAutomationCondition& value) { SetCondition(value); return *this;}

    /**
     * <p>The condition to apply for the automation option. If the condition is
     * <code>PRESENT</code>, then the option is applied when the contact data includes
     * the category. Similarly, if the condition is <code>NOT_PRESENT</code>, then the
     * option is applied when the contact data does not include the category.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomation& WithCondition(SingleSelectQuestionRuleCategoryAutomationCondition&& value) { SetCondition(std::move(value)); return *this;}


    /**
     * <p>The identifier of the answer option.</p>
     */
    inline const Aws::String& GetOptionRefId() const{ return m_optionRefId; }

    /**
     * <p>The identifier of the answer option.</p>
     */
    inline bool OptionRefIdHasBeenSet() const { return m_optionRefIdHasBeenSet; }

    /**
     * <p>The identifier of the answer option.</p>
     */
    inline void SetOptionRefId(const Aws::String& value) { m_optionRefIdHasBeenSet = true; m_optionRefId = value; }

    /**
     * <p>The identifier of the answer option.</p>
     */
    inline void SetOptionRefId(Aws::String&& value) { m_optionRefIdHasBeenSet = true; m_optionRefId = std::move(value); }

    /**
     * <p>The identifier of the answer option.</p>
     */
    inline void SetOptionRefId(const char* value) { m_optionRefIdHasBeenSet = true; m_optionRefId.assign(value); }

    /**
     * <p>The identifier of the answer option.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomation& WithOptionRefId(const Aws::String& value) { SetOptionRefId(value); return *this;}

    /**
     * <p>The identifier of the answer option.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomation& WithOptionRefId(Aws::String&& value) { SetOptionRefId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the answer option.</p>
     */
    inline SingleSelectQuestionRuleCategoryAutomation& WithOptionRefId(const char* value) { SetOptionRefId(value); return *this;}

  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    SingleSelectQuestionRuleCategoryAutomationCondition m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_optionRefId;
    bool m_optionRefIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
