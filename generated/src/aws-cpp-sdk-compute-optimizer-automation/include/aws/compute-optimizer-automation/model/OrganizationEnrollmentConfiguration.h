/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/OrganizationRuleMode.h>
#include <aws/compute-optimizer-automation/model/OrganizationTargetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>An organization enrollment configuration sets the organization rule mode on
 * an account, organizational unit (OU), or the organization root and enables
 * Automation for affected member accounts that have opted in to Compute
 * Optimizer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/OrganizationEnrollmentConfiguration">AWS
 * API Reference</a></p>
 */
class OrganizationEnrollmentConfiguration {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationEnrollmentConfiguration() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationEnrollmentConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationEnrollmentConfiguration& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the account, organizational unit (OU), or organization root on
   * which the configuration is stored.</p>
   */
  inline const Aws::String& GetTargetId() const { return m_targetId; }
  inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
  template <typename TargetIdT = Aws::String>
  void SetTargetId(TargetIdT&& value) {
    m_targetIdHasBeenSet = true;
    m_targetId = std::forward<TargetIdT>(value);
  }
  template <typename TargetIdT = Aws::String>
  OrganizationEnrollmentConfiguration& WithTargetId(TargetIdT&& value) {
    SetTargetId(std::forward<TargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of target on which the configuration is stored.</p>
   */
  inline OrganizationTargetType GetTargetType() const { return m_targetType; }
  inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
  inline void SetTargetType(OrganizationTargetType value) {
    m_targetTypeHasBeenSet = true;
    m_targetType = value;
  }
  inline OrganizationEnrollmentConfiguration& WithTargetType(OrganizationTargetType value) {
    SetTargetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization rule mode set on the target by the organization enrollment
   * configuration.</p>
   */
  inline OrganizationRuleMode GetOrganizationRuleMode() const { return m_organizationRuleMode; }
  inline bool OrganizationRuleModeHasBeenSet() const { return m_organizationRuleModeHasBeenSet; }
  inline void SetOrganizationRuleMode(OrganizationRuleMode value) {
    m_organizationRuleModeHasBeenSet = true;
    m_organizationRuleMode = value;
  }
  inline OrganizationEnrollmentConfiguration& WithOrganizationRuleMode(OrganizationRuleMode value) {
    SetOrganizationRuleMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetId;

  OrganizationTargetType m_targetType{OrganizationTargetType::NOT_SET};

  OrganizationRuleMode m_organizationRuleMode{OrganizationRuleMode::NOT_SET};
  bool m_targetIdHasBeenSet = false;
  bool m_targetTypeHasBeenSet = false;
  bool m_organizationRuleModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
