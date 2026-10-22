/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DetectionRuleEc2Requirements.h>
#include <aws/guardduty/model/DetectionRuleEcsFargateRequirements.h>
#include <aws/guardduty/model/DetectionRuleEksRequirements.h>

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
 * <p>The platforms on which a Runtime Monitoring custom detection rule can run. A
 * member's presence is the support statement: when present, the rule runs on that
 * platform and <code>minAgentVersion</code> is the minimum GuardDuty agent version
 * required there. When absent, the rule cannot run on that platform at any agent
 * version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectionRuleRuntimePlatforms">AWS
 * API Reference</a></p>
 */
class DetectionRuleRuntimePlatforms {
 public:
  AWS_GUARDDUTY_API DetectionRuleRuntimePlatforms() = default;
  AWS_GUARDDUTY_API DetectionRuleRuntimePlatforms(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API DetectionRuleRuntimePlatforms& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The requirements for running the rule on Amazon EKS.</p>
   */
  inline const DetectionRuleEksRequirements& GetEks() const { return m_eks; }
  inline bool EksHasBeenSet() const { return m_eksHasBeenSet; }
  template <typename EksT = DetectionRuleEksRequirements>
  void SetEks(EksT&& value) {
    m_eksHasBeenSet = true;
    m_eks = std::forward<EksT>(value);
  }
  template <typename EksT = DetectionRuleEksRequirements>
  DetectionRuleRuntimePlatforms& WithEks(EksT&& value) {
    SetEks(std::forward<EksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requirements for running the rule on Amazon EC2.</p>
   */
  inline const DetectionRuleEc2Requirements& GetEc2() const { return m_ec2; }
  inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }
  template <typename Ec2T = DetectionRuleEc2Requirements>
  void SetEc2(Ec2T&& value) {
    m_ec2HasBeenSet = true;
    m_ec2 = std::forward<Ec2T>(value);
  }
  template <typename Ec2T = DetectionRuleEc2Requirements>
  DetectionRuleRuntimePlatforms& WithEc2(Ec2T&& value) {
    SetEc2(std::forward<Ec2T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requirements for running the rule on Amazon ECS with the Fargate launch
   * type.</p>
   */
  inline const DetectionRuleEcsFargateRequirements& GetEcsFargate() const { return m_ecsFargate; }
  inline bool EcsFargateHasBeenSet() const { return m_ecsFargateHasBeenSet; }
  template <typename EcsFargateT = DetectionRuleEcsFargateRequirements>
  void SetEcsFargate(EcsFargateT&& value) {
    m_ecsFargateHasBeenSet = true;
    m_ecsFargate = std::forward<EcsFargateT>(value);
  }
  template <typename EcsFargateT = DetectionRuleEcsFargateRequirements>
  DetectionRuleRuntimePlatforms& WithEcsFargate(EcsFargateT&& value) {
    SetEcsFargate(std::forward<EcsFargateT>(value));
    return *this;
  }
  ///@}
 private:
  DetectionRuleEksRequirements m_eks;

  DetectionRuleEc2Requirements m_ec2;

  DetectionRuleEcsFargateRequirements m_ecsFargate;
  bool m_eksHasBeenSet = false;
  bool m_ec2HasBeenSet = false;
  bool m_ecsFargateHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
