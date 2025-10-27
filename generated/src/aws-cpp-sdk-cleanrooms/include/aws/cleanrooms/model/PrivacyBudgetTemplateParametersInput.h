/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AccessBudgetsPrivacyTemplateParametersInput.h>
#include <aws/cleanrooms/model/DifferentialPrivacyTemplateParametersInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>The epsilon and noise parameters that you want to use for the privacy budget
 * template.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyBudgetTemplateParametersInput">AWS
 * API Reference</a></p>
 */
class PrivacyBudgetTemplateParametersInput {
 public:
  AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput() = default;
  AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API PrivacyBudgetTemplateParametersInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An object that specifies the epsilon and noise parameters.</p>
   */
  inline const DifferentialPrivacyTemplateParametersInput& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
  inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
  template <typename DifferentialPrivacyT = DifferentialPrivacyTemplateParametersInput>
  void SetDifferentialPrivacy(DifferentialPrivacyT&& value) {
    m_differentialPrivacyHasBeenSet = true;
    m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value);
  }
  template <typename DifferentialPrivacyT = DifferentialPrivacyTemplateParametersInput>
  PrivacyBudgetTemplateParametersInput& WithDifferentialPrivacy(DifferentialPrivacyT&& value) {
    SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Access budget configuration for the privacy budget template input, enabling
   * integration with access budget functionality.</p>
   */
  inline const AccessBudgetsPrivacyTemplateParametersInput& GetAccessBudget() const { return m_accessBudget; }
  inline bool AccessBudgetHasBeenSet() const { return m_accessBudgetHasBeenSet; }
  template <typename AccessBudgetT = AccessBudgetsPrivacyTemplateParametersInput>
  void SetAccessBudget(AccessBudgetT&& value) {
    m_accessBudgetHasBeenSet = true;
    m_accessBudget = std::forward<AccessBudgetT>(value);
  }
  template <typename AccessBudgetT = AccessBudgetsPrivacyTemplateParametersInput>
  PrivacyBudgetTemplateParametersInput& WithAccessBudget(AccessBudgetT&& value) {
    SetAccessBudget(std::forward<AccessBudgetT>(value));
    return *this;
  }
  ///@}
 private:
  DifferentialPrivacyTemplateParametersInput m_differentialPrivacy;
  bool m_differentialPrivacyHasBeenSet = false;

  AccessBudgetsPrivacyTemplateParametersInput m_accessBudget;
  bool m_accessBudgetHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
