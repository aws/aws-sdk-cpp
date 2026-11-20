/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/OrganizationRuleMode.h>
#include <aws/compute-optimizer-automation/model/OrganizationTarget.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class PutOrganizationEnrollmentConfigurationRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API PutOrganizationEnrollmentConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutOrganizationEnrollmentConfiguration"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The account, organizational unit (OU), or organization root on which to
   * create or update the organization enrollment configuration. You can't specify
   * the management account. </p>
   */
  inline const OrganizationTarget& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = OrganizationTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = OrganizationTarget>
  PutOrganizationEnrollmentConfigurationRequest& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The organization rule mode to set on the target. An organization enrollment
   * configuration with either <code>AnyAllowed</code> or <code>NoneAllowed</code>
   * enables Automation for affected member accounts. <code>AnyAllowed</code> permits
   * organization rules to apply to those accounts, while <code>NoneAllowed</code>
   * doesn't. </p>
   */
  inline OrganizationRuleMode GetOrganizationRuleMode() const { return m_organizationRuleMode; }
  inline bool OrganizationRuleModeHasBeenSet() const { return m_organizationRuleModeHasBeenSet; }
  inline void SetOrganizationRuleMode(OrganizationRuleMode value) {
    m_organizationRuleModeHasBeenSet = true;
    m_organizationRuleMode = value;
  }
  inline PutOrganizationEnrollmentConfigurationRequest& WithOrganizationRuleMode(OrganizationRuleMode value) {
    SetOrganizationRuleMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A unique identifier to ensure idempotency of the request. </p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutOrganizationEnrollmentConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  OrganizationTarget m_target;

  OrganizationRuleMode m_organizationRuleMode{OrganizationRuleMode::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_targetHasBeenSet = false;
  bool m_organizationRuleModeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
