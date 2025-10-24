/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/BudgetParameter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Update parameters for privacy budget templates with access budgets
 * functionality, allowing modification of existing budget
 * configurations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AccessBudgetsPrivacyTemplateUpdateParameters">AWS
 * API Reference</a></p>
 */
class AccessBudgetsPrivacyTemplateUpdateParameters {
 public:
  AWS_CLEANROOMS_API AccessBudgetsPrivacyTemplateUpdateParameters() = default;
  AWS_CLEANROOMS_API AccessBudgetsPrivacyTemplateUpdateParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AccessBudgetsPrivacyTemplateUpdateParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Updated array of budget parameters for the access budget configuration.</p>
   */
  inline const Aws::Vector<BudgetParameter>& GetBudgetParameters() const { return m_budgetParameters; }
  inline bool BudgetParametersHasBeenSet() const { return m_budgetParametersHasBeenSet; }
  template <typename BudgetParametersT = Aws::Vector<BudgetParameter>>
  void SetBudgetParameters(BudgetParametersT&& value) {
    m_budgetParametersHasBeenSet = true;
    m_budgetParameters = std::forward<BudgetParametersT>(value);
  }
  template <typename BudgetParametersT = Aws::Vector<BudgetParameter>>
  AccessBudgetsPrivacyTemplateUpdateParameters& WithBudgetParameters(BudgetParametersT&& value) {
    SetBudgetParameters(std::forward<BudgetParametersT>(value));
    return *this;
  }
  template <typename BudgetParametersT = BudgetParameter>
  AccessBudgetsPrivacyTemplateUpdateParameters& AddBudgetParameters(BudgetParametersT&& value) {
    m_budgetParametersHasBeenSet = true;
    m_budgetParameters.emplace_back(std::forward<BudgetParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BudgetParameter> m_budgetParameters;
  bool m_budgetParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
