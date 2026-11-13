/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/SignalGroup.h>

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
 * <p>Contains a summary of runtime signals.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RuntimeSignals">AWS
 * API Reference</a></p>
 */
class RuntimeSignals {
 public:
  AWS_GUARDDUTY_API RuntimeSignals() = default;
  AWS_GUARDDUTY_API RuntimeSignals(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API RuntimeSignals& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The runtime signals, grouped by finding type.</p>
   */
  inline const Aws::Vector<SignalGroup>& GetSignalGroups() const { return m_signalGroups; }
  inline bool SignalGroupsHasBeenSet() const { return m_signalGroupsHasBeenSet; }
  template <typename SignalGroupsT = Aws::Vector<SignalGroup>>
  void SetSignalGroups(SignalGroupsT&& value) {
    m_signalGroupsHasBeenSet = true;
    m_signalGroups = std::forward<SignalGroupsT>(value);
  }
  template <typename SignalGroupsT = Aws::Vector<SignalGroup>>
  RuntimeSignals& WithSignalGroups(SignalGroupsT&& value) {
    SetSignalGroups(std::forward<SignalGroupsT>(value));
    return *this;
  }
  template <typename SignalGroupsT = SignalGroup>
  RuntimeSignals& AddSignalGroups(SignalGroupsT&& value) {
    m_signalGroupsHasBeenSet = true;
    m_signalGroups.emplace_back(std::forward<SignalGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A key observation about the runtime signals.</p>
   */
  inline const Aws::String& GetKeyObservation() const { return m_keyObservation; }
  inline bool KeyObservationHasBeenSet() const { return m_keyObservationHasBeenSet; }
  template <typename KeyObservationT = Aws::String>
  void SetKeyObservation(KeyObservationT&& value) {
    m_keyObservationHasBeenSet = true;
    m_keyObservation = std::forward<KeyObservationT>(value);
  }
  template <typename KeyObservationT = Aws::String>
  RuntimeSignals& WithKeyObservation(KeyObservationT&& value) {
    SetKeyObservation(std::forward<KeyObservationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SignalGroup> m_signalGroups;

  Aws::String m_keyObservation;
  bool m_signalGroupsHasBeenSet = false;
  bool m_keyObservationHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
