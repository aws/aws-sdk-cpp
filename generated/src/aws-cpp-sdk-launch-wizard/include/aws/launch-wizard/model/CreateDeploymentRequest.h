/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/LaunchWizardRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{

  /**
   */
  class CreateDeploymentRequest : public LaunchWizardRequest
  {
  public:
    AWS_LAUNCHWIZARD_API CreateDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline const Aws::String& GetDeploymentPatternName() const { return m_deploymentPatternName; }
    inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }
    template<typename DeploymentPatternNameT = Aws::String>
    void SetDeploymentPatternName(DeploymentPatternNameT&& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = std::forward<DeploymentPatternNameT>(value); }
    template<typename DeploymentPatternNameT = Aws::String>
    CreateDeploymentRequest& WithDeploymentPatternName(DeploymentPatternNameT&& value) { SetDeploymentPatternName(std::forward<DeploymentPatternNameT>(value)); return *this;}
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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateDeploymentRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDeploymentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    template<typename SpecificationsT = Aws::Map<Aws::String, Aws::String>>
    void SetSpecifications(SpecificationsT&& value) { m_specificationsHasBeenSet = true; m_specifications = std::forward<SpecificationsT>(value); }
    template<typename SpecificationsT = Aws::Map<Aws::String, Aws::String>>
    CreateDeploymentRequest& WithSpecifications(SpecificationsT&& value) { SetSpecifications(std::forward<SpecificationsT>(value)); return *this;}
    template<typename SpecificationsKeyT = Aws::String, typename SpecificationsValueT = Aws::String>
    CreateDeploymentRequest& AddSpecifications(SpecificationsKeyT&& key, SpecificationsValueT&& value) {
      m_specificationsHasBeenSet = true; m_specifications.emplace(std::forward<SpecificationsKeyT>(key), std::forward<SpecificationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The tags to add to the deployment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDeploymentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDeploymentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloads.html">
     * <code>ListWorkloads</code> </a> operation to discover supported values for this
     * parameter.</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    CreateDeploymentRequest& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentPatternName;
    bool m_deploymentPatternNameHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_specifications;
    bool m_specificationsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
