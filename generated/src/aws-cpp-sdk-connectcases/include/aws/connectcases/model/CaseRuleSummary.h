/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/RuleType.h>
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
   * <p>Summary information of this case rule. In the Amazon Connect admin website,
   * case rules are known as <i>case field conditions</i>. For more information about
   * case field conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseRuleSummary">AWS
   * API Reference</a></p>
   */
  class CaseRuleSummary
  {
  public:
    AWS_CONNECTCASES_API CaseRuleSummary();
    AWS_CONNECTCASES_API CaseRuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CaseRuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the case rule. </p>
     */
    inline const Aws::String& GetCaseRuleArn() const{ return m_caseRuleArn; }
    inline bool CaseRuleArnHasBeenSet() const { return m_caseRuleArnHasBeenSet; }
    inline void SetCaseRuleArn(const Aws::String& value) { m_caseRuleArnHasBeenSet = true; m_caseRuleArn = value; }
    inline void SetCaseRuleArn(Aws::String&& value) { m_caseRuleArnHasBeenSet = true; m_caseRuleArn = std::move(value); }
    inline void SetCaseRuleArn(const char* value) { m_caseRuleArnHasBeenSet = true; m_caseRuleArn.assign(value); }
    inline CaseRuleSummary& WithCaseRuleArn(const Aws::String& value) { SetCaseRuleArn(value); return *this;}
    inline CaseRuleSummary& WithCaseRuleArn(Aws::String&& value) { SetCaseRuleArn(std::move(value)); return *this;}
    inline CaseRuleSummary& WithCaseRuleArn(const char* value) { SetCaseRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const{ return m_caseRuleId; }
    inline bool CaseRuleIdHasBeenSet() const { return m_caseRuleIdHasBeenSet; }
    inline void SetCaseRuleId(const Aws::String& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = value; }
    inline void SetCaseRuleId(Aws::String&& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = std::move(value); }
    inline void SetCaseRuleId(const char* value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId.assign(value); }
    inline CaseRuleSummary& WithCaseRuleId(const Aws::String& value) { SetCaseRuleId(value); return *this;}
    inline CaseRuleSummary& WithCaseRuleId(Aws::String&& value) { SetCaseRuleId(std::move(value)); return *this;}
    inline CaseRuleSummary& WithCaseRuleId(const char* value) { SetCaseRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of a case rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CaseRuleSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CaseRuleSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CaseRuleSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the case rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CaseRuleSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CaseRuleSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CaseRuleSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Possible types for a rule.</p>
     */
    inline const RuleType& GetRuleType() const{ return m_ruleType; }
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
    inline void SetRuleType(const RuleType& value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }
    inline void SetRuleType(RuleType&& value) { m_ruleTypeHasBeenSet = true; m_ruleType = std::move(value); }
    inline CaseRuleSummary& WithRuleType(const RuleType& value) { SetRuleType(value); return *this;}
    inline CaseRuleSummary& WithRuleType(RuleType&& value) { SetRuleType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseRuleArn;
    bool m_caseRuleArnHasBeenSet = false;

    Aws::String m_caseRuleId;
    bool m_caseRuleIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleType m_ruleType;
    bool m_ruleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
