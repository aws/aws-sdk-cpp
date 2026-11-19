/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/OrgSourceDeploymentState.h>
#include <aws/devops-agent/model/SourceAccountType.h>
#include <aws/devops-agent/model/SourceAwsOrgUnit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for Amazon Web Services Organization-wide source account
 * integration. Use this configuration to monitor Amazon Web Services resources
 * across multiple accounts within an organization or within targeted
 * organizational units.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SourceAwsOrgConfiguration">AWS
 * API Reference</a></p>
 */
class SourceAwsOrgConfiguration {
 public:
  AWS_DEVOPSAGENT_API SourceAwsOrgConfiguration() = default;
  AWS_DEVOPSAGENT_API SourceAwsOrgConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SourceAwsOrgConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The account type for this configuration. For Amazon Web Services
   * Organization-level configurations, this value is <code>source</code>.</p>
   */
  inline SourceAccountType GetAccountType() const { return m_accountType; }
  inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }
  inline void SetAccountType(SourceAccountType value) {
    m_accountTypeHasBeenSet = true;
    m_accountType = value;
  }
  inline SourceAwsOrgConfiguration& WithAccountType(SourceAccountType value) {
    SetAccountType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational units within the Amazon Web Services Organization that are
   * targeted for source monitoring.</p>
   */
  inline const SourceAwsOrgUnit& GetOrganizationalUnit() const { return m_organizationalUnit; }
  inline bool OrganizationalUnitHasBeenSet() const { return m_organizationalUnitHasBeenSet; }
  template <typename OrganizationalUnitT = SourceAwsOrgUnit>
  void SetOrganizationalUnit(OrganizationalUnitT&& value) {
    m_organizationalUnitHasBeenSet = true;
    m_organizationalUnit = std::forward<OrganizationalUnitT>(value);
  }
  template <typename OrganizationalUnitT = SourceAwsOrgUnit>
  SourceAwsOrgConfiguration& WithOrganizationalUnit(OrganizationalUnitT&& value) {
    SetOrganizationalUnit(std::forward<OrganizationalUnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current deployment state of the Amazon Web Services Organization-wide
   * source configuration.</p>
   */
  inline const OrgSourceDeploymentState& GetDeploymentState() const { return m_deploymentState; }
  inline bool DeploymentStateHasBeenSet() const { return m_deploymentStateHasBeenSet; }
  template <typename DeploymentStateT = OrgSourceDeploymentState>
  void SetDeploymentState(DeploymentStateT&& value) {
    m_deploymentStateHasBeenSet = true;
    m_deploymentState = std::forward<DeploymentStateT>(value);
  }
  template <typename DeploymentStateT = OrgSourceDeploymentState>
  SourceAwsOrgConfiguration& WithDeploymentState(DeploymentStateT&& value) {
    SetDeploymentState(std::forward<DeploymentStateT>(value));
    return *this;
  }
  ///@}
 private:
  SourceAccountType m_accountType{SourceAccountType::NOT_SET};

  SourceAwsOrgUnit m_organizationalUnit;

  OrgSourceDeploymentState m_deploymentState;
  bool m_accountTypeHasBeenSet = false;
  bool m_organizationalUnitHasBeenSet = false;
  bool m_deploymentStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
