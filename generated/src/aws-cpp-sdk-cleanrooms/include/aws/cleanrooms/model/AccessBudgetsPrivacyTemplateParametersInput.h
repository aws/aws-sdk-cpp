/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/BudgetParameter.h>
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
namespace CleanRooms {
namespace Model {

/**
 * <p>Input parameters for privacy budget templates that support access budgets
 * functionality, enabling enhanced budget management capabilities.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AccessBudgetsPrivacyTemplateParametersInput">AWS
 * API Reference</a></p>
 */
class AccessBudgetsPrivacyTemplateParametersInput {
 public:
  AWS_CLEANROOMS_API AccessBudgetsPrivacyTemplateParametersInput() = default;
  AWS_CLEANROOMS_API AccessBudgetsPrivacyTemplateParametersInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AccessBudgetsPrivacyTemplateParametersInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of budget parameters that define the access budget configuration for
   * the privacy template.</p>
   */
  inline const Aws::Vector<BudgetParameter>& GetBudgetParameters() const { return m_budgetParameters; }
  inline bool BudgetParametersHasBeenSet() const { return m_budgetParametersHasBeenSet; }
  template <typename BudgetParametersT = Aws::Vector<BudgetParameter>>
  void SetBudgetParameters(BudgetParametersT&& value) {
    m_budgetParametersHasBeenSet = true;
    m_budgetParameters = std::forward<BudgetParametersT>(value);
  }
  template <typename BudgetParametersT = Aws::Vector<BudgetParameter>>
  AccessBudgetsPrivacyTemplateParametersInput& WithBudgetParameters(BudgetParametersT&& value) {
    SetBudgetParameters(std::forward<BudgetParametersT>(value));
    return *this;
  }
  template <typename BudgetParametersT = BudgetParameter>
  AccessBudgetsPrivacyTemplateParametersInput& AddBudgetParameters(BudgetParametersT&& value) {
    m_budgetParametersHasBeenSet = true;
    m_budgetParameters.emplace_back(std::forward<BudgetParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource associated with this privacy
   * budget template.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  AccessBudgetsPrivacyTemplateParametersInput& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BudgetParameter> m_budgetParameters;
  bool m_budgetParametersHasBeenSet = false;

  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
