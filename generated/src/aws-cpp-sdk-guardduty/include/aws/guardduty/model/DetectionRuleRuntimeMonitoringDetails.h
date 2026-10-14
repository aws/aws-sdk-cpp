/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DetectionRuleRuntimePlatforms.h>

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
 * <p>Contains Runtime Monitoring-specific details for a custom detection
 * rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectionRuleRuntimeMonitoringDetails">AWS
 * API Reference</a></p>
 */
class DetectionRuleRuntimeMonitoringDetails {
 public:
  AWS_GUARDDUTY_API DetectionRuleRuntimeMonitoringDetails() = default;
  AWS_GUARDDUTY_API DetectionRuleRuntimeMonitoringDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API DetectionRuleRuntimeMonitoringDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The platforms on which the rule can run. The presence of a platform member
   * indicates that the rule is supported on that platform; the absence of a member
   * indicates that the rule cannot run on that platform at any agent version.</p>
   */
  inline const DetectionRuleRuntimePlatforms& GetPlatforms() const { return m_platforms; }
  inline bool PlatformsHasBeenSet() const { return m_platformsHasBeenSet; }
  template <typename PlatformsT = DetectionRuleRuntimePlatforms>
  void SetPlatforms(PlatformsT&& value) {
    m_platformsHasBeenSet = true;
    m_platforms = std::forward<PlatformsT>(value);
  }
  template <typename PlatformsT = DetectionRuleRuntimePlatforms>
  DetectionRuleRuntimeMonitoringDetails& WithPlatforms(PlatformsT&& value) {
    SetPlatforms(std::forward<PlatformsT>(value));
    return *this;
  }
  ///@}
 private:
  DetectionRuleRuntimePlatforms m_platforms;
  bool m_platformsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
