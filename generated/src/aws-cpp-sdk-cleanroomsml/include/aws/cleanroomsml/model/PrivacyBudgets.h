/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/AccessBudget.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRoomsML {
namespace Model {

/**
 * <p>The privacy budget information that controls access to Clean Rooms ML input
 * channels.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/PrivacyBudgets">AWS
 * API Reference</a></p>
 */
class PrivacyBudgets {
 public:
  AWS_CLEANROOMSML_API PrivacyBudgets() = default;
  AWS_CLEANROOMSML_API PrivacyBudgets(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API PrivacyBudgets& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of access budgets that apply to resources associated with this Clean
   * Rooms ML input channel.</p>
   */
  inline const Aws::Vector<AccessBudget>& GetAccessBudgets() const { return m_accessBudgets; }
  inline bool AccessBudgetsHasBeenSet() const { return m_accessBudgetsHasBeenSet; }
  template <typename AccessBudgetsT = Aws::Vector<AccessBudget>>
  void SetAccessBudgets(AccessBudgetsT&& value) {
    m_accessBudgetsHasBeenSet = true;
    m_accessBudgets = std::forward<AccessBudgetsT>(value);
  }
  template <typename AccessBudgetsT = Aws::Vector<AccessBudget>>
  PrivacyBudgets& WithAccessBudgets(AccessBudgetsT&& value) {
    SetAccessBudgets(std::forward<AccessBudgetsT>(value));
    return *this;
  }
  template <typename AccessBudgetsT = AccessBudget>
  PrivacyBudgets& AddAccessBudgets(AccessBudgetsT&& value) {
    m_accessBudgetsHasBeenSet = true;
    m_accessBudgets.emplace_back(std::forward<AccessBudgetsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AccessBudget> m_accessBudgets;
  bool m_accessBudgetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
