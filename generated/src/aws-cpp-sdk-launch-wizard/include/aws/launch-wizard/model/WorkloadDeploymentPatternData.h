/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/model/WorkloadDeploymentPatternStatus.h>
#include <aws/launch-wizard/model/DeploymentSpecificationsField.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LaunchWizard
{
namespace Model
{

  /**
   * <p>The data that details a workload deployment pattern.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/WorkloadDeploymentPatternData">AWS
   * API Reference</a></p>
   */
  class WorkloadDeploymentPatternData
  {
  public:
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternData();
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the deployment pattern.</p>
     */
    inline const Aws::String& GetDeploymentPatternName() const{ return m_deploymentPatternName; }
    inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }
    inline void SetDeploymentPatternName(const Aws::String& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = value; }
    inline void SetDeploymentPatternName(Aws::String&& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = std::move(value); }
    inline void SetDeploymentPatternName(const char* value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName.assign(value); }
    inline WorkloadDeploymentPatternData& WithDeploymentPatternName(const Aws::String& value) { SetDeploymentPatternName(value); return *this;}
    inline WorkloadDeploymentPatternData& WithDeploymentPatternName(Aws::String&& value) { SetDeploymentPatternName(std::move(value)); return *this;}
    inline WorkloadDeploymentPatternData& WithDeploymentPatternName(const char* value) { SetDeploymentPatternName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the deployment pattern.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WorkloadDeploymentPatternData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkloadDeploymentPatternData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkloadDeploymentPatternData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the deployment pattern.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline WorkloadDeploymentPatternData& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline WorkloadDeploymentPatternData& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline WorkloadDeploymentPatternData& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
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
    inline const Aws::Vector<DeploymentSpecificationsField>& GetSpecifications() const{ return m_specifications; }
    inline bool SpecificationsHasBeenSet() const { return m_specificationsHasBeenSet; }
    inline void SetSpecifications(const Aws::Vector<DeploymentSpecificationsField>& value) { m_specificationsHasBeenSet = true; m_specifications = value; }
    inline void SetSpecifications(Aws::Vector<DeploymentSpecificationsField>&& value) { m_specificationsHasBeenSet = true; m_specifications = std::move(value); }
    inline WorkloadDeploymentPatternData& WithSpecifications(const Aws::Vector<DeploymentSpecificationsField>& value) { SetSpecifications(value); return *this;}
    inline WorkloadDeploymentPatternData& WithSpecifications(Aws::Vector<DeploymentSpecificationsField>&& value) { SetSpecifications(std::move(value)); return *this;}
    inline WorkloadDeploymentPatternData& AddSpecifications(const DeploymentSpecificationsField& value) { m_specificationsHasBeenSet = true; m_specifications.push_back(value); return *this; }
    inline WorkloadDeploymentPatternData& AddSpecifications(DeploymentSpecificationsField&& value) { m_specificationsHasBeenSet = true; m_specifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the deployment pattern.</p>
     */
    inline const WorkloadDeploymentPatternStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkloadDeploymentPatternStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkloadDeploymentPatternStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkloadDeploymentPatternData& WithStatus(const WorkloadDeploymentPatternStatus& value) { SetStatus(value); return *this;}
    inline WorkloadDeploymentPatternData& WithStatus(WorkloadDeploymentPatternStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the deployment pattern.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline WorkloadDeploymentPatternData& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline WorkloadDeploymentPatternData& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline WorkloadDeploymentPatternData& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workload name of the deployment pattern.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }
    inline WorkloadDeploymentPatternData& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}
    inline WorkloadDeploymentPatternData& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}
    inline WorkloadDeploymentPatternData& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workload version name of the deployment pattern.</p>
     */
    inline const Aws::String& GetWorkloadVersionName() const{ return m_workloadVersionName; }
    inline bool WorkloadVersionNameHasBeenSet() const { return m_workloadVersionNameHasBeenSet; }
    inline void SetWorkloadVersionName(const Aws::String& value) { m_workloadVersionNameHasBeenSet = true; m_workloadVersionName = value; }
    inline void SetWorkloadVersionName(Aws::String&& value) { m_workloadVersionNameHasBeenSet = true; m_workloadVersionName = std::move(value); }
    inline void SetWorkloadVersionName(const char* value) { m_workloadVersionNameHasBeenSet = true; m_workloadVersionName.assign(value); }
    inline WorkloadDeploymentPatternData& WithWorkloadVersionName(const Aws::String& value) { SetWorkloadVersionName(value); return *this;}
    inline WorkloadDeploymentPatternData& WithWorkloadVersionName(Aws::String&& value) { SetWorkloadVersionName(std::move(value)); return *this;}
    inline WorkloadDeploymentPatternData& WithWorkloadVersionName(const char* value) { SetWorkloadVersionName(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentPatternName;
    bool m_deploymentPatternNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<DeploymentSpecificationsField> m_specifications;
    bool m_specificationsHasBeenSet = false;

    WorkloadDeploymentPatternStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_workloadVersionName;
    bool m_workloadVersionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
