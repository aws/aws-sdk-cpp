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
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternData() = default;
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the deployment pattern.</p>
     */
    inline const Aws::String& GetDeploymentPatternName() const { return m_deploymentPatternName; }
    inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }
    template<typename DeploymentPatternNameT = Aws::String>
    void SetDeploymentPatternName(DeploymentPatternNameT&& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = std::forward<DeploymentPatternNameT>(value); }
    template<typename DeploymentPatternNameT = Aws::String>
    WorkloadDeploymentPatternData& WithDeploymentPatternName(DeploymentPatternNameT&& value) { SetDeploymentPatternName(std::forward<DeploymentPatternNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the deployment pattern.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkloadDeploymentPatternData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the deployment pattern.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    WorkloadDeploymentPatternData& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
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
    inline const Aws::Vector<DeploymentSpecificationsField>& GetSpecifications() const { return m_specifications; }
    inline bool SpecificationsHasBeenSet() const { return m_specificationsHasBeenSet; }
    template<typename SpecificationsT = Aws::Vector<DeploymentSpecificationsField>>
    void SetSpecifications(SpecificationsT&& value) { m_specificationsHasBeenSet = true; m_specifications = std::forward<SpecificationsT>(value); }
    template<typename SpecificationsT = Aws::Vector<DeploymentSpecificationsField>>
    WorkloadDeploymentPatternData& WithSpecifications(SpecificationsT&& value) { SetSpecifications(std::forward<SpecificationsT>(value)); return *this;}
    template<typename SpecificationsT = DeploymentSpecificationsField>
    WorkloadDeploymentPatternData& AddSpecifications(SpecificationsT&& value) { m_specificationsHasBeenSet = true; m_specifications.emplace_back(std::forward<SpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkloadDeploymentPatternStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkloadDeploymentPatternData& WithStatus(WorkloadDeploymentPatternStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the deployment pattern.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    WorkloadDeploymentPatternData& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workload name of the deployment pattern.</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    WorkloadDeploymentPatternData& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workload version name of the deployment pattern.</p>
     */
    inline const Aws::String& GetWorkloadVersionName() const { return m_workloadVersionName; }
    inline bool WorkloadVersionNameHasBeenSet() const { return m_workloadVersionNameHasBeenSet; }
    template<typename WorkloadVersionNameT = Aws::String>
    void SetWorkloadVersionName(WorkloadVersionNameT&& value) { m_workloadVersionNameHasBeenSet = true; m_workloadVersionName = std::forward<WorkloadVersionNameT>(value); }
    template<typename WorkloadVersionNameT = Aws::String>
    WorkloadDeploymentPatternData& WithWorkloadVersionName(WorkloadVersionNameT&& value) { SetWorkloadVersionName(std::forward<WorkloadVersionNameT>(value)); return *this;}
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

    WorkloadDeploymentPatternStatus m_status{WorkloadDeploymentPatternStatus::NOT_SET};
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
