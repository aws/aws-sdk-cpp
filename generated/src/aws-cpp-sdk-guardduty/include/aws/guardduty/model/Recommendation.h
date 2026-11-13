/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ActionPriority.h>
#include <aws/guardduty/model/RecommendationCategory.h>

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
 * <p>Contains a recommended action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Recommendation">AWS
 * API Reference</a></p>
 */
class Recommendation {
 public:
  AWS_GUARDDUTY_API Recommendation() = default;
  AWS_GUARDDUTY_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A short title for the recommendation.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  Recommendation& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the recommendation.</p>
   */
  inline const Aws::String& GetRationale() const { return m_rationale; }
  inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }
  template <typename RationaleT = Aws::String>
  void SetRationale(RationaleT&& value) {
    m_rationaleHasBeenSet = true;
    m_rationale = std::forward<RationaleT>(value);
  }
  template <typename RationaleT = Aws::String>
  Recommendation& WithRationale(RationaleT&& value) {
    SetRationale(std::forward<RationaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the recommendation. Possible values are
   * <code>ENABLE_PROTECTION</code>, <code>FURTHER_INVESTIGATION</code>,
   * <code>SUPPRESSION_RULE</code>, <code>HARDENING</code>, and
   * <code>MONITORING</code>.</p>
   */
  inline RecommendationCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(RecommendationCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline Recommendation& WithCategory(RecommendationCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the recommendation. Possible values are
   * <code>IMMEDIATE</code>, <code>SHORT_TERM</code>, and <code>STRATEGIC</code>.</p>
   */
  inline ActionPriority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(ActionPriority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline Recommendation& WithPriority(ActionPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CLI commands that you can run to carry out the recommendation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCliCommands() const { return m_cliCommands; }
  inline bool CliCommandsHasBeenSet() const { return m_cliCommandsHasBeenSet; }
  template <typename CliCommandsT = Aws::Vector<Aws::String>>
  void SetCliCommands(CliCommandsT&& value) {
    m_cliCommandsHasBeenSet = true;
    m_cliCommands = std::forward<CliCommandsT>(value);
  }
  template <typename CliCommandsT = Aws::Vector<Aws::String>>
  Recommendation& WithCliCommands(CliCommandsT&& value) {
    SetCliCommands(std::forward<CliCommandsT>(value));
    return *this;
  }
  template <typename CliCommandsT = Aws::String>
  Recommendation& AddCliCommands(CliCommandsT&& value) {
    m_cliCommandsHasBeenSet = true;
    m_cliCommands.emplace_back(std::forward<CliCommandsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_rationale;

  RecommendationCategory m_category{RecommendationCategory::NOT_SET};

  ActionPriority m_priority{ActionPriority::NOT_SET};

  Aws::Vector<Aws::String> m_cliCommands;
  bool m_titleHasBeenSet = false;
  bool m_rationaleHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_cliCommandsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
