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
 * <p>The requirements for running a Runtime Monitoring custom detection rule on
 * Amazon ECS with the Fargate launch type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectionRuleEcsFargateRequirements">AWS
 * API Reference</a></p>
 */
class DetectionRuleEcsFargateRequirements {
 public:
  AWS_GUARDDUTY_API DetectionRuleEcsFargateRequirements() = default;
  AWS_GUARDDUTY_API DetectionRuleEcsFargateRequirements(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API DetectionRuleEcsFargateRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum GuardDuty agent version required to run the rule on Amazon ECS
   * with the Fargate launch type.</p>
   */
  inline const Aws::String& GetMinAgentVersion() const { return m_minAgentVersion; }
  inline bool MinAgentVersionHasBeenSet() const { return m_minAgentVersionHasBeenSet; }
  template <typename MinAgentVersionT = Aws::String>
  void SetMinAgentVersion(MinAgentVersionT&& value) {
    m_minAgentVersionHasBeenSet = true;
    m_minAgentVersion = std::forward<MinAgentVersionT>(value);
  }
  template <typename MinAgentVersionT = Aws::String>
  DetectionRuleEcsFargateRequirements& WithMinAgentVersion(MinAgentVersionT&& value) {
    SetMinAgentVersion(std::forward<MinAgentVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_minAgentVersion;
  bool m_minAgentVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
