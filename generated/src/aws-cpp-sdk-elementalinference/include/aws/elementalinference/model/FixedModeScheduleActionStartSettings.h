/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

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
 * <p>Sets the time at which a schedule action runs once. This is a type of
 * ScheduleActionStartConfiguration. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FixedModeScheduleActionStartSettings">AWS
 * API Reference</a></p>
 */
class FixedModeScheduleActionStartSettings {
 public:
  AWS_ELEMENTALINFERENCE_API FixedModeScheduleActionStartSettings() = default;
  AWS_ELEMENTALINFERENCE_API FixedModeScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FixedModeScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The UTC time at which the action runs. Specify the time in whole seconds. For
   * the range of times that you can specify, see the AWS Elemental Inference User
   * Guide. </p> <p>This time is approximate. The change can take a few minutes to
   * take effect on the media that the feed is processing. </p>
   */
  inline const Aws::Utils::DateTime& GetScheduledAt() const { return m_scheduledAt; }
  inline bool ScheduledAtHasBeenSet() const { return m_scheduledAtHasBeenSet; }
  template <typename ScheduledAtT = Aws::Utils::DateTime>
  void SetScheduledAt(ScheduledAtT&& value) {
    m_scheduledAtHasBeenSet = true;
    m_scheduledAt = std::forward<ScheduledAtT>(value);
  }
  template <typename ScheduledAtT = Aws::Utils::DateTime>
  FixedModeScheduleActionStartSettings& WithScheduledAt(ScheduledAtT&& value) {
    SetScheduledAt(std::forward<ScheduledAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_scheduledAt{};
  bool m_scheduledAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
