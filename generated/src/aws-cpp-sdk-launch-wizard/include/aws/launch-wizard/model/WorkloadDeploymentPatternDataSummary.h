/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/model/WorkloadDeploymentPatternStatus.h>
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
   * <p>Describes a workload deployment pattern.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/WorkloadDeploymentPatternDataSummary">AWS
   * API Reference</a></p>
   */
  class WorkloadDeploymentPatternDataSummary
  {
  public:
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternDataSummary() = default;
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline const Aws::String& GetDeploymentPatternName() const { return m_deploymentPatternName; }
    inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }
    template<typename DeploymentPatternNameT = Aws::String>
    void SetDeploymentPatternName(DeploymentPatternNameT&& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = std::forward<DeploymentPatternNameT>(value); }
    template<typename DeploymentPatternNameT = Aws::String>
    WorkloadDeploymentPatternDataSummary& WithDeploymentPatternName(DeploymentPatternNameT&& value) { SetDeploymentPatternName(std::forward<DeploymentPatternNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkloadDeploymentPatternDataSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    WorkloadDeploymentPatternDataSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkloadDeploymentPatternStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkloadDeploymentPatternDataSummary& WithStatus(WorkloadDeploymentPatternStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    WorkloadDeploymentPatternDataSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    WorkloadDeploymentPatternDataSummary& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline const Aws::String& GetWorkloadVersionName() const { return m_workloadVersionName; }
    inline bool WorkloadVersionNameHasBeenSet() const { return m_workloadVersionNameHasBeenSet; }
    template<typename WorkloadVersionNameT = Aws::String>
    void SetWorkloadVersionName(WorkloadVersionNameT&& value) { m_workloadVersionNameHasBeenSet = true; m_workloadVersionName = std::forward<WorkloadVersionNameT>(value); }
    template<typename WorkloadVersionNameT = Aws::String>
    WorkloadDeploymentPatternDataSummary& WithWorkloadVersionName(WorkloadVersionNameT&& value) { SetWorkloadVersionName(std::forward<WorkloadVersionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentPatternName;
    bool m_deploymentPatternNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

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
