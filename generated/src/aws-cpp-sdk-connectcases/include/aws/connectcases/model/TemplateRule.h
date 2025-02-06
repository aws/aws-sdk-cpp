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
    AWS_CONNECTCASES_API TemplateRule();
    AWS_CONNECTCASES_API TemplateRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API TemplateRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const{ return m_caseRuleId; }
    inline bool CaseRuleIdHasBeenSet() const { return m_caseRuleIdHasBeenSet; }
    inline void SetCaseRuleId(const Aws::String& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = value; }
    inline void SetCaseRuleId(Aws::String&& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = std::move(value); }
    inline void SetCaseRuleId(const char* value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId.assign(value); }
    inline TemplateRule& WithCaseRuleId(const Aws::String& value) { SetCaseRuleId(value); return *this;}
    inline TemplateRule& WithCaseRuleId(Aws::String&& value) { SetCaseRuleId(std::move(value)); return *this;}
    inline TemplateRule& WithCaseRuleId(const char* value) { SetCaseRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline TemplateRule& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline TemplateRule& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline TemplateRule& WithFieldId(const char* value) { SetFieldId(value); return *this;}
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
