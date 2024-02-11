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
    AWS_LAUNCHWIZARD_API CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline const Aws::String& GetDeploymentPatternName() const{ return m_deploymentPatternName; }

    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }

    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline void SetDeploymentPatternName(const Aws::String& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = value; }

    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline void SetDeploymentPatternName(Aws::String&& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = std::move(value); }

    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline void SetDeploymentPatternName(const char* value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName.assign(value); }

    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline CreateDeploymentRequest& WithDeploymentPatternName(const Aws::String& value) { SetDeploymentPatternName(value); return *this;}

    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline CreateDeploymentRequest& WithDeploymentPatternName(Aws::String&& value) { SetDeploymentPatternName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment pattern supported by a given workload. You can use
     * the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter. </p>
     */
    inline CreateDeploymentRequest& WithDeploymentPatternName(const char* value) { SetDeploymentPatternName(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateDeploymentRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the deployment.</p>
     */
    inline CreateDeploymentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the deployment.</p>
     */
    inline CreateDeploymentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment.</p>
     */
    inline CreateDeploymentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSpecifications() const{ return m_specifications; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline bool SpecificationsHasBeenSet() const { return m_specificationsHasBeenSet; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline void SetSpecifications(const Aws::Map<Aws::String, Aws::String>& value) { m_specificationsHasBeenSet = true; m_specifications = value; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline void SetSpecifications(Aws::Map<Aws::String, Aws::String>&& value) { m_specificationsHasBeenSet = true; m_specifications = std::move(value); }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& WithSpecifications(const Aws::Map<Aws::String, Aws::String>& value) { SetSpecifications(value); return *this;}

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& WithSpecifications(Aws::Map<Aws::String, Aws::String>&& value) { SetSpecifications(std::move(value)); return *this;}

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& AddSpecifications(const Aws::String& key, const Aws::String& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(key, value); return *this; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& AddSpecifications(Aws::String&& key, const Aws::String& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(std::move(key), value); return *this; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& AddSpecifications(const Aws::String& key, Aws::String&& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& AddSpecifications(Aws::String&& key, Aws::String&& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& AddSpecifications(const char* key, Aws::String&& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& AddSpecifications(Aws::String&& key, const char* value) { m_specificationsHasBeenSet = true; m_specifications.emplace(std::move(key), value); return *this; }

    /**
     * <p>The settings specified for the deployment. For more information on the
     * specifications required for creating a deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline CreateDeploymentRequest& AddSpecifications(const char* key, const char* value) { m_specificationsHasBeenSet = true; m_specifications.emplace(key, value); return *this; }


    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter.</p>
     */
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter.</p>
     */
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter.</p>
     */
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter.</p>
     */
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter.</p>
     */
    inline CreateDeploymentRequest& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter.</p>
     */
    inline CreateDeploymentRequest& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    /**
     * <p>The name of the workload. You can use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
     * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
     * values for this parameter.</p>
     */
    inline CreateDeploymentRequest& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}

  private:

    Aws::String m_deploymentPatternName;
    bool m_deploymentPatternNameHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_specifications;
    bool m_specificationsHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
