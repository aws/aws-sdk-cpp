/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/FieldOptionsCaseRule.h>
#include <aws/connectcases/model/HiddenCaseRule.h>
#include <aws/connectcases/model/RequiredCaseRule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Represents what rule type should take place, under what conditions. In the
 * Amazon Connect admin website, case rules are known as <i>case field
 * conditions</i>. For more information about case field conditions, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
 * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseRuleDetails">AWS
 * API Reference</a></p>
 */
class CaseRuleDetails {
 public:
  AWS_CONNECTCASES_API CaseRuleDetails() = default;
  AWS_CONNECTCASES_API CaseRuleDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API CaseRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Required rule type, used to indicate whether a field is required.</p>
   */
  inline const RequiredCaseRule& GetRequired() const { return m_required; }
  inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
  template <typename RequiredT = RequiredCaseRule>
  void SetRequired(RequiredT&& value) {
    m_requiredHasBeenSet = true;
    m_required = std::forward<RequiredT>(value);
  }
  template <typename RequiredT = RequiredCaseRule>
  CaseRuleDetails& WithRequired(RequiredT&& value) {
    SetRequired(std::forward<RequiredT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Which options are available in a child field based on the selected value in a
   * parent field.</p>
   */
  inline const FieldOptionsCaseRule& GetFieldOptions() const { return m_fieldOptions; }
  inline bool FieldOptionsHasBeenSet() const { return m_fieldOptionsHasBeenSet; }
  template <typename FieldOptionsT = FieldOptionsCaseRule>
  void SetFieldOptions(FieldOptionsT&& value) {
    m_fieldOptionsHasBeenSet = true;
    m_fieldOptions = std::forward<FieldOptionsT>(value);
  }
  template <typename FieldOptionsT = FieldOptionsCaseRule>
  CaseRuleDetails& WithFieldOptions(FieldOptionsT&& value) {
    SetFieldOptions(std::forward<FieldOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether a field is visible, based on values in other fields.</p>
   */
  inline const HiddenCaseRule& GetHidden() const { return m_hidden; }
  inline bool HiddenHasBeenSet() const { return m_hiddenHasBeenSet; }
  template <typename HiddenT = HiddenCaseRule>
  void SetHidden(HiddenT&& value) {
    m_hiddenHasBeenSet = true;
    m_hidden = std::forward<HiddenT>(value);
  }
  template <typename HiddenT = HiddenCaseRule>
  CaseRuleDetails& WithHidden(HiddenT&& value) {
    SetHidden(std::forward<HiddenT>(value));
    return *this;
  }
  ///@}
 private:
  RequiredCaseRule m_required;

  FieldOptionsCaseRule m_fieldOptions;

  HiddenCaseRule m_hidden;
  bool m_requiredHasBeenSet = false;
  bool m_fieldOptionsHasBeenSet = false;
  bool m_hiddenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
