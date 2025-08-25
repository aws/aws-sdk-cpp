/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/X12ValidationRule.h>
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
   * <p>Contains configuration options for X12 EDI validation. This structure allows
   * you to specify custom validation rules that will be applied during EDI document
   * processing, including element length constraints, code list modifications, and
   * element requirement changes. These validation options provide flexibility to
   * accommodate trading partner-specific requirements while maintaining EDI
   * compliance. The validation rules are applied in addition to standard X12
   * validation to ensure documents meet both standard and custom
   * requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12ValidationOptions">AWS
   * API Reference</a></p>
   */
  class X12ValidationOptions
  {
  public:
    AWS_B2BI_API X12ValidationOptions() = default;
    AWS_B2BI_API X12ValidationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12ValidationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a list of validation rules to apply during EDI document processing.
     * These rules can include code list modifications, element length constraints, and
     * element requirement changes.</p>
     */
    inline const Aws::Vector<X12ValidationRule>& GetValidationRules() const { return m_validationRules; }
    inline bool ValidationRulesHasBeenSet() const { return m_validationRulesHasBeenSet; }
    template<typename ValidationRulesT = Aws::Vector<X12ValidationRule>>
    void SetValidationRules(ValidationRulesT&& value) { m_validationRulesHasBeenSet = true; m_validationRules = std::forward<ValidationRulesT>(value); }
    template<typename ValidationRulesT = Aws::Vector<X12ValidationRule>>
    X12ValidationOptions& WithValidationRules(ValidationRulesT&& value) { SetValidationRules(std::forward<ValidationRulesT>(value)); return *this;}
    template<typename ValidationRulesT = X12ValidationRule>
    X12ValidationOptions& AddValidationRules(ValidationRulesT&& value) { m_validationRulesHasBeenSet = true; m_validationRules.emplace_back(std::forward<ValidationRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<X12ValidationRule> m_validationRules;
    bool m_validationRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
