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
    AWS_CONNECTCASES_API CaseRuleSummary() = default;
    AWS_CONNECTCASES_API CaseRuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CaseRuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the case rule. </p>
     */
    inline const Aws::String& GetCaseRuleArn() const { return m_caseRuleArn; }
    inline bool CaseRuleArnHasBeenSet() const { return m_caseRuleArnHasBeenSet; }
    template<typename CaseRuleArnT = Aws::String>
    void SetCaseRuleArn(CaseRuleArnT&& value) { m_caseRuleArnHasBeenSet = true; m_caseRuleArn = std::forward<CaseRuleArnT>(value); }
    template<typename CaseRuleArnT = Aws::String>
    CaseRuleSummary& WithCaseRuleArn(CaseRuleArnT&& value) { SetCaseRuleArn(std::forward<CaseRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const { return m_caseRuleId; }
    inline bool CaseRuleIdHasBeenSet() const { return m_caseRuleIdHasBeenSet; }
    template<typename CaseRuleIdT = Aws::String>
    void SetCaseRuleId(CaseRuleIdT&& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = std::forward<CaseRuleIdT>(value); }
    template<typename CaseRuleIdT = Aws::String>
    CaseRuleSummary& WithCaseRuleId(CaseRuleIdT&& value) { SetCaseRuleId(std::forward<CaseRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of a case rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CaseRuleSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the case rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CaseRuleSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Possible types for a rule.</p>
     */
    inline RuleType GetRuleType() const { return m_ruleType; }
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
    inline void SetRuleType(RuleType value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }
    inline CaseRuleSummary& WithRuleType(RuleType value) { SetRuleType(value); return *this;}
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

    RuleType m_ruleType{RuleType::NOT_SET};
    bool m_ruleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
