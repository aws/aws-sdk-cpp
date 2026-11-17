/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>The settings of the fixedInterval trigger, which runs the function once for
 * every intervalSeconds of content. A function that references media.transcript
 * must use this trigger. You can't use this trigger with a function that
 * references media.contextual. </p> <p>If the function references
 * media.transcript, specify subtitlingSettings. If the function references
 * media.clip, specify clippingSettings. Each run then receives the events that the
 * event clipping output reported during the interval, in media.clip.events.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FixedIntervalTrigger">AWS
 * API Reference</a></p>
 */
class FixedIntervalTrigger {
 public:
  AWS_ELEMENTALINFERENCE_API FixedIntervalTrigger() = default;
  AWS_ELEMENTALINFERENCE_API FixedIntervalTrigger(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FixedIntervalTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The amount of content, in seconds, between runs of the function. Valid range:
   * 1 to 60. For a function with eventBridgeDelivery set to ENABLED, the minimum is
   * 4. </p>
   */
  inline int GetIntervalSeconds() const { return m_intervalSeconds; }
  inline bool IntervalSecondsHasBeenSet() const { return m_intervalSecondsHasBeenSet; }
  inline void SetIntervalSeconds(int value) {
    m_intervalSecondsHasBeenSet = true;
    m_intervalSeconds = value;
  }
  inline FixedIntervalTrigger& WithIntervalSeconds(int value) {
    SetIntervalSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_intervalSeconds{0};
  bool m_intervalSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
