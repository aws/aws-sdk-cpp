/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12CodeListValidationRule.h>
#include <aws/b2bi/model/X12ElementLengthValidationRule.h>
#include <aws/b2bi/model/X12ElementRequirementValidationRule.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Represents a single validation rule that can be applied during X12 EDI
   * processing. This is a union type that can contain one of several specific
   * validation rule types: code list validation rules for modifying allowed element
   * codes, element length validation rules for enforcing custom length constraints,
   * or element requirement validation rules for changing mandatory/optional status.
   * Each validation rule targets specific aspects of EDI document validation to
   * ensure compliance with trading partner requirements and business
   * rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12ValidationRule">AWS
   * API Reference</a></p>
   */
  class X12ValidationRule
  {
  public:
    AWS_B2BI_API X12ValidationRule() = default;
    AWS_B2BI_API X12ValidationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12ValidationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a code list validation rule that modifies the allowed code values
     * for a specific X12 element. This rule enables you to customize which codes are
     * considered valid for an element, allowing for trading partner-specific code
     * requirements.</p>
     */
    inline const X12CodeListValidationRule& GetCodeListValidationRule() const { return m_codeListValidationRule; }
    inline bool CodeListValidationRuleHasBeenSet() const { return m_codeListValidationRuleHasBeenSet; }
    template<typename CodeListValidationRuleT = X12CodeListValidationRule>
    void SetCodeListValidationRule(CodeListValidationRuleT&& value) { m_codeListValidationRuleHasBeenSet = true; m_codeListValidationRule = std::forward<CodeListValidationRuleT>(value); }
    template<typename CodeListValidationRuleT = X12CodeListValidationRule>
    X12ValidationRule& WithCodeListValidationRule(CodeListValidationRuleT&& value) { SetCodeListValidationRule(std::forward<CodeListValidationRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an element length validation rule that defines custom length
     * constraints for a specific X12 element. This rule allows you to enforce minimum
     * and maximum length requirements that may differ from the standard X12
     * specification.</p>
     */
    inline const X12ElementLengthValidationRule& GetElementLengthValidationRule() const { return m_elementLengthValidationRule; }
    inline bool ElementLengthValidationRuleHasBeenSet() const { return m_elementLengthValidationRuleHasBeenSet; }
    template<typename ElementLengthValidationRuleT = X12ElementLengthValidationRule>
    void SetElementLengthValidationRule(ElementLengthValidationRuleT&& value) { m_elementLengthValidationRuleHasBeenSet = true; m_elementLengthValidationRule = std::forward<ElementLengthValidationRuleT>(value); }
    template<typename ElementLengthValidationRuleT = X12ElementLengthValidationRule>
    X12ValidationRule& WithElementLengthValidationRule(ElementLengthValidationRuleT&& value) { SetElementLengthValidationRule(std::forward<ElementLengthValidationRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an element requirement validation rule that modifies whether a
     * specific X12 element is required or optional within a segment. This rule
     * provides flexibility to accommodate different trading partner requirements for
     * element presence.</p>
     */
    inline const X12ElementRequirementValidationRule& GetElementRequirementValidationRule() const { return m_elementRequirementValidationRule; }
    inline bool ElementRequirementValidationRuleHasBeenSet() const { return m_elementRequirementValidationRuleHasBeenSet; }
    template<typename ElementRequirementValidationRuleT = X12ElementRequirementValidationRule>
    void SetElementRequirementValidationRule(ElementRequirementValidationRuleT&& value) { m_elementRequirementValidationRuleHasBeenSet = true; m_elementRequirementValidationRule = std::forward<ElementRequirementValidationRuleT>(value); }
    template<typename ElementRequirementValidationRuleT = X12ElementRequirementValidationRule>
    X12ValidationRule& WithElementRequirementValidationRule(ElementRequirementValidationRuleT&& value) { SetElementRequirementValidationRule(std::forward<ElementRequirementValidationRuleT>(value)); return *this;}
    ///@}
  private:

    X12CodeListValidationRule m_codeListValidationRule;
    bool m_codeListValidationRuleHasBeenSet = false;

    X12ElementLengthValidationRule m_elementLengthValidationRule;
    bool m_elementLengthValidationRuleHasBeenSet = false;

    X12ElementRequirementValidationRule m_elementRequirementValidationRule;
    bool m_elementRequirementValidationRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
