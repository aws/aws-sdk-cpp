/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AlertState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Trigger conditions for a notification rule. {@code stateValues} entries
 * combine with OR semantics; empty / omitted = any state.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/NotificationTrigger">AWS
 * API Reference</a></p>
 */
class NotificationTrigger {
 public:
  AWS_CLOUDWATCHOMNI_API NotificationTrigger() = default;
  AWS_CLOUDWATCHOMNI_API NotificationTrigger(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API NotificationTrigger& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Alert state(s) that trigger this rule. Empty / omitted = any state.</p>
   */
  inline const Aws::Vector<AlertState>& GetStateValues() const { return m_stateValues; }
  inline bool StateValuesHasBeenSet() const { return m_stateValuesHasBeenSet; }
  template <typename StateValuesT = Aws::Vector<AlertState>>
  void SetStateValues(StateValuesT&& value) {
    m_stateValuesHasBeenSet = true;
    m_stateValues = std::forward<StateValuesT>(value);
  }
  template <typename StateValuesT = Aws::Vector<AlertState>>
  NotificationTrigger& WithStateValues(StateValuesT&& value) {
    SetStateValues(std::forward<StateValuesT>(value));
    return *this;
  }
  inline NotificationTrigger& AddStateValues(AlertState value) {
    m_stateValuesHasBeenSet = true;
    m_stateValues.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AlertState> m_stateValues;
  bool m_stateValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
