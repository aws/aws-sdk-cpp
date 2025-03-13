/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An association representing a case rule acting upon a field. In the Amazon
   * Connect admin website, case rules are known as <i>case field conditions</i>. For
   * more information about case field conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/TemplateRule">AWS
   * API Reference</a></p>
   */
  class TemplateRule
  {
  public:
    AWS_CONNECTCASES_API TemplateRule() = default;
    AWS_CONNECTCASES_API TemplateRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API TemplateRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const { return m_caseRuleId; }
    inline bool CaseRuleIdHasBeenSet() const { return m_caseRuleIdHasBeenSet; }
    template<typename CaseRuleIdT = Aws::String>
    void SetCaseRuleId(CaseRuleIdT&& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = std::forward<CaseRuleIdT>(value); }
    template<typename CaseRuleIdT = Aws::String>
    TemplateRule& WithCaseRuleId(CaseRuleIdT&& value) { SetCaseRuleId(std::forward<CaseRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    TemplateRule& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseRuleId;
    bool m_caseRuleIdHasBeenSet = false;

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
