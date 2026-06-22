/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormValidationFindingItem.h>
#include <aws/connect/model/EvaluationFormValidationFindingSeverity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about a finding from the evaluation form validation process. Each
 * finding identifies a structural issue or quality improvement opportunity for the
 * evaluation form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormValidationFinding">AWS
 * API Reference</a></p>
 */
class EvaluationFormValidationFinding {
 public:
  AWS_CONNECT_API EvaluationFormValidationFinding() = default;
  AWS_CONNECT_API EvaluationFormValidationFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormValidationFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A code that identifies the type of validation issue found.</p>
   */
  inline const Aws::String& GetIssueCode() const { return m_issueCode; }
  inline bool IssueCodeHasBeenSet() const { return m_issueCodeHasBeenSet; }
  template <typename IssueCodeT = Aws::String>
  void SetIssueCode(IssueCodeT&& value) {
    m_issueCodeHasBeenSet = true;
    m_issueCode = std::forward<IssueCodeT>(value);
  }
  template <typename IssueCodeT = Aws::String>
  EvaluationFormValidationFinding& WithIssueCode(IssueCodeT&& value) {
    SetIssueCode(std::forward<IssueCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of evaluation form items affected by this finding.</p>
   */
  inline const Aws::Vector<EvaluationFormValidationFindingItem>& GetItems() const { return m_items; }
  inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
  template <typename ItemsT = Aws::Vector<EvaluationFormValidationFindingItem>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<EvaluationFormValidationFindingItem>>
  EvaluationFormValidationFinding& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = EvaluationFormValidationFindingItem>
  EvaluationFormValidationFinding& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the validation issue.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  EvaluationFormValidationFinding& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A suggested fix for the validation issue.</p>
   */
  inline const Aws::String& GetSuggestion() const { return m_suggestion; }
  inline bool SuggestionHasBeenSet() const { return m_suggestionHasBeenSet; }
  template <typename SuggestionT = Aws::String>
  void SetSuggestion(SuggestionT&& value) {
    m_suggestionHasBeenSet = true;
    m_suggestion = std::forward<SuggestionT>(value);
  }
  template <typename SuggestionT = Aws::String>
  EvaluationFormValidationFinding& WithSuggestion(SuggestionT&& value) {
    SetSuggestion(std::forward<SuggestionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the finding. Valid values: <code>WARNING</code>,
   * <code>ERROR</code>.</p>
   */
  inline EvaluationFormValidationFindingSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(EvaluationFormValidationFindingSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline EvaluationFormValidationFinding& WithSeverity(EvaluationFormValidationFindingSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_issueCode;

  Aws::Vector<EvaluationFormValidationFindingItem> m_items;

  Aws::String m_description;

  Aws::String m_suggestion;

  EvaluationFormValidationFindingSeverity m_severity{EvaluationFormValidationFindingSeverity::NOT_SET};
  bool m_issueCodeHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_suggestionHasBeenSet = false;
  bool m_severityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
