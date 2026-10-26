/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/FixedModeScheduleActionStartSettings.h>

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
 * <p>Holds the typed start settings that determine when a schedule action runs.
 * Currently, only fixed mode is supported. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ScheduleActionStartConfiguration">AWS
 * API Reference</a></p>
 */
class ScheduleActionStartConfiguration {
 public:
  AWS_ELEMENTALINFERENCE_API ScheduleActionStartConfiguration() = default;
  AWS_ELEMENTALINFERENCE_API ScheduleActionStartConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ScheduleActionStartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start settings type for an action that runs once, at a fixed time.</p>
   */
  inline const FixedModeScheduleActionStartSettings& GetFixedModeScheduleActionStartSettings() const {
    return m_fixedModeScheduleActionStartSettings;
  }
  inline bool FixedModeScheduleActionStartSettingsHasBeenSet() const { return m_fixedModeScheduleActionStartSettingsHasBeenSet; }
  template <typename FixedModeScheduleActionStartSettingsT = FixedModeScheduleActionStartSettings>
  void SetFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettingsT&& value) {
    m_fixedModeScheduleActionStartSettingsHasBeenSet = true;
    m_fixedModeScheduleActionStartSettings = std::forward<FixedModeScheduleActionStartSettingsT>(value);
  }
  template <typename FixedModeScheduleActionStartSettingsT = FixedModeScheduleActionStartSettings>
  ScheduleActionStartConfiguration& WithFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettingsT&& value) {
    SetFixedModeScheduleActionStartSettings(std::forward<FixedModeScheduleActionStartSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  FixedModeScheduleActionStartSettings m_fixedModeScheduleActionStartSettings;
  bool m_fixedModeScheduleActionStartSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
