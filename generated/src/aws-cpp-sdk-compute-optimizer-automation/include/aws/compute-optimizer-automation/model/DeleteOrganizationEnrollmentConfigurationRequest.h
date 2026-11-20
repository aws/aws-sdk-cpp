/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/OrganizationEnrollmentConfigurationType.h>
#include <aws/compute-optimizer-automation/model/OrganizationTarget.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class DeleteOrganizationEnrollmentConfigurationRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API DeleteOrganizationEnrollmentConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteOrganizationEnrollmentConfiguration"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The account, organizational unit (OU), or organization root whose
   * organization enrollment configuration you want to delete. </p>
   */
  inline const OrganizationTarget& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = OrganizationTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = OrganizationTarget>
  DeleteOrganizationEnrollmentConfigurationRequest& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The organization enrollment configuration types to delete from the target.
   * </p>
   */
  inline const Aws::Vector<OrganizationEnrollmentConfigurationType>& GetConfigurationTypes() const { return m_configurationTypes; }
  inline bool ConfigurationTypesHasBeenSet() const { return m_configurationTypesHasBeenSet; }
  template <typename ConfigurationTypesT = Aws::Vector<OrganizationEnrollmentConfigurationType>>
  void SetConfigurationTypes(ConfigurationTypesT&& value) {
    m_configurationTypesHasBeenSet = true;
    m_configurationTypes = std::forward<ConfigurationTypesT>(value);
  }
  template <typename ConfigurationTypesT = Aws::Vector<OrganizationEnrollmentConfigurationType>>
  DeleteOrganizationEnrollmentConfigurationRequest& WithConfigurationTypes(ConfigurationTypesT&& value) {
    SetConfigurationTypes(std::forward<ConfigurationTypesT>(value));
    return *this;
  }
  inline DeleteOrganizationEnrollmentConfigurationRequest& AddConfigurationTypes(OrganizationEnrollmentConfigurationType value) {
    m_configurationTypesHasBeenSet = true;
    m_configurationTypes.push_back(value);
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
  DeleteOrganizationEnrollmentConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  OrganizationTarget m_target;

  Aws::Vector<OrganizationEnrollmentConfigurationType> m_configurationTypes;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_targetHasBeenSet = false;
  bool m_configurationTypesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
