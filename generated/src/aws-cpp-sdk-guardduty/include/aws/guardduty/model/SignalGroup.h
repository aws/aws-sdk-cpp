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
 * <p>Contains information about a group of runtime signals that have the same
 * finding type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SignalGroup">AWS
 * API Reference</a></p>
 */
class SignalGroup {
 public:
  AWS_GUARDDUTY_API SignalGroup() = default;
  AWS_GUARDDUTY_API SignalGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API SignalGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The finding type of the group.</p>
   */
  inline const Aws::String& GetFindingType() const { return m_findingType; }
  inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
  template <typename FindingTypeT = Aws::String>
  void SetFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType = std::forward<FindingTypeT>(value);
  }
  template <typename FindingTypeT = Aws::String>
  SignalGroup& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity score of the signals in the group, from 0 to 10.</p>
   */
  inline double GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(double value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline SignalGroup& WithSeverity(double value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of signals in the group.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline SignalGroup& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingType;

  double m_severity{0.0};

  long long m_count{0};
  bool m_findingTypeHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
