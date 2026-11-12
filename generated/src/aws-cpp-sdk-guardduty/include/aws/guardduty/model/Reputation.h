/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains reputation information about a threat indicator.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Reputation">AWS
 * API Reference</a></p>
 */
class Reputation {
 public:
  AWS_GUARDDUTY_API Reputation() = default;
  AWS_GUARDDUTY_API Reputation(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Reputation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reputation of the indicator at the time of the finding.</p>
   */
  inline const Aws::String& GetFindingTimeDisposition() const { return m_findingTimeDisposition; }
  inline bool FindingTimeDispositionHasBeenSet() const { return m_findingTimeDispositionHasBeenSet; }
  template <typename FindingTimeDispositionT = Aws::String>
  void SetFindingTimeDisposition(FindingTimeDispositionT&& value) {
    m_findingTimeDispositionHasBeenSet = true;
    m_findingTimeDisposition = std::forward<FindingTimeDispositionT>(value);
  }
  template <typename FindingTimeDispositionT = Aws::String>
  Reputation& WithFindingTimeDisposition(FindingTimeDispositionT&& value) {
    SetFindingTimeDisposition(std::forward<FindingTimeDispositionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current reputation of the indicator.</p>
   */
  inline const Aws::String& GetCurrentDisposition() const { return m_currentDisposition; }
  inline bool CurrentDispositionHasBeenSet() const { return m_currentDispositionHasBeenSet; }
  template <typename CurrentDispositionT = Aws::String>
  void SetCurrentDisposition(CurrentDispositionT&& value) {
    m_currentDispositionHasBeenSet = true;
    m_currentDisposition = std::forward<CurrentDispositionT>(value);
  }
  template <typename CurrentDispositionT = Aws::String>
  Reputation& WithCurrentDisposition(CurrentDispositionT&& value) {
    SetCurrentDisposition(std::forward<CurrentDispositionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comparison of the reputation at the time of the finding with the current
   * reputation.</p>
   */
  inline const Aws::String& GetReputationComparison() const { return m_reputationComparison; }
  inline bool ReputationComparisonHasBeenSet() const { return m_reputationComparisonHasBeenSet; }
  template <typename ReputationComparisonT = Aws::String>
  void SetReputationComparison(ReputationComparisonT&& value) {
    m_reputationComparisonHasBeenSet = true;
    m_reputationComparison = std::forward<ReputationComparisonT>(value);
  }
  template <typename ReputationComparisonT = Aws::String>
  Reputation& WithReputationComparison(ReputationComparisonT&& value) {
    SetReputationComparison(std::forward<ReputationComparisonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingTimeDisposition;

  Aws::String m_currentDisposition;

  Aws::String m_reputationComparison;
  bool m_findingTimeDispositionHasBeenSet = false;
  bool m_currentDispositionHasBeenSet = false;
  bool m_reputationComparisonHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
