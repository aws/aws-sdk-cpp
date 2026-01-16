/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/LaunchWizardRequest.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LaunchWizard {
namespace Model {

/**
 */
class UpdateDeploymentRequest : public LaunchWizardRequest {
 public:
  AWS_LAUNCHWIZARD_API UpdateDeploymentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDeployment"; }

  AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
  inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
  template <typename DeploymentIdT = Aws::String>
  void SetDeploymentId(DeploymentIdT&& value) {
    m_deploymentIdHasBeenSet = true;
    m_deploymentId = std::forward<DeploymentIdT>(value);
  }
  template <typename DeploymentIdT = Aws::String>
  UpdateDeploymentRequest& WithDeploymentId(DeploymentIdT&& value) {
    SetDeploymentId(std::forward<DeploymentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settings specified for the deployment. These settings define how to
   * deploy and configure your resources created by the deployment. For more
   * information about the specifications required for creating a deployment for a
   * SAP workload, see <a
   * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications-sap.html">SAP
   * deployment specifications</a>. To retrieve the specifications required to create
   * a deployment for other workloads, use the <a
   * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_GetWorkloadDeploymentPattern.html">
   * <code>GetWorkloadDeploymentPattern</code> </a> operation.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetSpecifications() const { return m_specifications; }
  inline bool SpecificationsHasBeenSet() const { return m_specificationsHasBeenSet; }
  template <typename SpecificationsT = Aws::Map<Aws::String, Aws::String>>
  void SetSpecifications(SpecificationsT&& value) {
    m_specificationsHasBeenSet = true;
    m_specifications = std::forward<SpecificationsT>(value);
  }
  template <typename SpecificationsT = Aws::Map<Aws::String, Aws::String>>
  UpdateDeploymentRequest& WithSpecifications(SpecificationsT&& value) {
    SetSpecifications(std::forward<SpecificationsT>(value));
    return *this;
  }
  template <typename SpecificationsKeyT = Aws::String, typename SpecificationsValueT = Aws::String>
  UpdateDeploymentRequest& AddSpecifications(SpecificationsKeyT&& key, SpecificationsValueT&& value) {
    m_specificationsHasBeenSet = true;
    m_specifications.emplace(std::forward<SpecificationsKeyT>(key), std::forward<SpecificationsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workload version.</p>
   */
  inline const Aws::String& GetWorkloadVersionName() const { return m_workloadVersionName; }
  inline bool WorkloadVersionNameHasBeenSet() const { return m_workloadVersionNameHasBeenSet; }
  template <typename WorkloadVersionNameT = Aws::String>
  void SetWorkloadVersionName(WorkloadVersionNameT&& value) {
    m_workloadVersionNameHasBeenSet = true;
    m_workloadVersionName = std::forward<WorkloadVersionNameT>(value);
  }
  template <typename WorkloadVersionNameT = Aws::String>
  UpdateDeploymentRequest& WithWorkloadVersionName(WorkloadVersionNameT&& value) {
    SetWorkloadVersionName(std::forward<WorkloadVersionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deployment pattern version.</p>
   */
  inline const Aws::String& GetDeploymentPatternVersionName() const { return m_deploymentPatternVersionName; }
  inline bool DeploymentPatternVersionNameHasBeenSet() const { return m_deploymentPatternVersionNameHasBeenSet; }
  template <typename DeploymentPatternVersionNameT = Aws::String>
  void SetDeploymentPatternVersionName(DeploymentPatternVersionNameT&& value) {
    m_deploymentPatternVersionNameHasBeenSet = true;
    m_deploymentPatternVersionName = std::forward<DeploymentPatternVersionNameT>(value);
  }
  template <typename DeploymentPatternVersionNameT = Aws::String>
  UpdateDeploymentRequest& WithDeploymentPatternVersionName(DeploymentPatternVersionNameT&& value) {
    SetDeploymentPatternVersionName(std::forward<DeploymentPatternVersionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline UpdateDeploymentRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Forces the update even if validation warnings are present.</p>
   */
  inline bool GetForce() const { return m_force; }
  inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
  inline void SetForce(bool value) {
    m_forceHasBeenSet = true;
    m_force = value;
  }
  inline UpdateDeploymentRequest& WithForce(bool value) {
    SetForce(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_deploymentId;

  Aws::Map<Aws::String, Aws::String> m_specifications;

  Aws::String m_workloadVersionName;

  Aws::String m_deploymentPatternVersionName;

  bool m_dryRun{false};

  bool m_force{false};
  bool m_deploymentIdHasBeenSet = false;
  bool m_specificationsHasBeenSet = false;
  bool m_workloadVersionNameHasBeenSet = false;
  bool m_deploymentPatternVersionNameHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_forceHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
