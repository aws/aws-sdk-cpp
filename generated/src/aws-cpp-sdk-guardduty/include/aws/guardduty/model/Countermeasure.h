/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CountermeasureAction.h>
#include <aws/guardduty/model/DefenseTactic.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains the actions that you can take for one defensive
 * tactic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Countermeasure">AWS
 * API Reference</a></p>
 */
class Countermeasure {
 public:
  AWS_GUARDDUTY_API Countermeasure() = default;
  AWS_GUARDDUTY_API Countermeasure(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Countermeasure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The defensive tactic. Possible values are <code>Isolate</code>,
   * <code>Evict</code>, <code>Restore</code>, <code>Harden</code>, and
   * <code>Detect</code>.</p>
   */
  inline DefenseTactic GetDefenseTactic() const { return m_defenseTactic; }
  inline bool DefenseTacticHasBeenSet() const { return m_defenseTacticHasBeenSet; }
  inline void SetDefenseTactic(DefenseTactic value) {
    m_defenseTacticHasBeenSet = true;
    m_defenseTactic = value;
  }
  inline Countermeasure& WithDefenseTactic(DefenseTactic value) {
    SetDefenseTactic(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions for the defensive tactic.</p>
   */
  inline const Aws::Vector<CountermeasureAction>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<CountermeasureAction>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<CountermeasureAction>>
  Countermeasure& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = CountermeasureAction>
  Countermeasure& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the countermeasure.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Countermeasure& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  DefenseTactic m_defenseTactic{DefenseTactic::NOT_SET};

  Aws::Vector<CountermeasureAction> m_actions;

  Aws::String m_description;
  bool m_defenseTacticHasBeenSet = false;
  bool m_actionsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
