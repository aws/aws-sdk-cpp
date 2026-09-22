/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/NotificationTarget.h>
#include <aws/cloudwatchomni/model/NotificationTrigger.h>
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
 * <p>Single notification rule: which transitions trigger this rule and where the
 * resulting notification should be sent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/NotificationRule">AWS
 * API Reference</a></p>
 */
class NotificationRule {
 public:
  AWS_CLOUDWATCHOMNI_API NotificationRule() = default;
  AWS_CLOUDWATCHOMNI_API NotificationRule(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API NotificationRule& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The conditions that trigger this notification rule.</p>
   */
  inline const NotificationTrigger& GetTrigger() const { return m_trigger; }
  inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
  template <typename TriggerT = NotificationTrigger>
  void SetTrigger(TriggerT&& value) {
    m_triggerHasBeenSet = true;
    m_trigger = std::forward<TriggerT>(value);
  }
  template <typename TriggerT = NotificationTrigger>
  NotificationRule& WithTrigger(TriggerT&& value) {
    SetTrigger(std::forward<TriggerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for notifications from this rule.</p>
   */
  inline const NotificationTarget& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = NotificationTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = NotificationTarget>
  NotificationRule& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}
 private:
  NotificationTrigger m_trigger;

  NotificationTarget m_target;
  bool m_triggerHasBeenSet = false;
  bool m_targetHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
