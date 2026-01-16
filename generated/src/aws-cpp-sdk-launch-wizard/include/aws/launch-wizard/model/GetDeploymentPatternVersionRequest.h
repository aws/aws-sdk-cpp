/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/LaunchWizardRequest.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LaunchWizard {
namespace Model {

/**
 */
class GetDeploymentPatternVersionRequest : public LaunchWizardRequest {
 public:
  AWS_LAUNCHWIZARD_API GetDeploymentPatternVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDeploymentPatternVersion"; }

  AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workload. You can use the <a
   * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloads.html">
   * <code>ListWorkloads</code> </a> operation to discover supported values for this
   * parameter.</p>
   */
  inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
  inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
  template <typename WorkloadNameT = Aws::String>
  void SetWorkloadName(WorkloadNameT&& value) {
    m_workloadNameHasBeenSet = true;
    m_workloadName = std::forward<WorkloadNameT>(value);
  }
  template <typename WorkloadNameT = Aws::String>
  GetDeploymentPatternVersionRequest& WithWorkloadName(WorkloadNameT&& value) {
    SetWorkloadName(std::forward<WorkloadNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deployment pattern. You can use the <a
   * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
   * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
   * values for this parameter.</p>
   */
  inline const Aws::String& GetDeploymentPatternName() const { return m_deploymentPatternName; }
  inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }
  template <typename DeploymentPatternNameT = Aws::String>
  void SetDeploymentPatternName(DeploymentPatternNameT&& value) {
    m_deploymentPatternNameHasBeenSet = true;
    m_deploymentPatternName = std::forward<DeploymentPatternNameT>(value);
  }
  template <typename DeploymentPatternNameT = Aws::String>
  GetDeploymentPatternVersionRequest& WithDeploymentPatternName(DeploymentPatternNameT&& value) {
    SetDeploymentPatternName(std::forward<DeploymentPatternNameT>(value));
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
  GetDeploymentPatternVersionRequest& WithDeploymentPatternVersionName(DeploymentPatternVersionNameT&& value) {
    SetDeploymentPatternVersionName(std::forward<DeploymentPatternVersionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workloadName;

  Aws::String m_deploymentPatternName;

  Aws::String m_deploymentPatternVersionName;
  bool m_workloadNameHasBeenSet = false;
  bool m_deploymentPatternNameHasBeenSet = false;
  bool m_deploymentPatternVersionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
