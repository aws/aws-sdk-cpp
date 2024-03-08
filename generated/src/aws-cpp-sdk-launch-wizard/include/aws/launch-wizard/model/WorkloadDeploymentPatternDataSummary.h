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
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternDataSummary();
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline const Aws::String& GetDeploymentPatternName() const{ return m_deploymentPatternName; }

    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }

    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline void SetDeploymentPatternName(const Aws::String& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = value; }

    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline void SetDeploymentPatternName(Aws::String&& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = std::move(value); }

    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline void SetDeploymentPatternName(const char* value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName.assign(value); }

    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDeploymentPatternName(const Aws::String& value) { SetDeploymentPatternName(value); return *this;}

    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDeploymentPatternName(Aws::String&& value) { SetDeploymentPatternName(std::move(value)); return *this;}

    /**
     * <p>The name of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDeploymentPatternName(const char* value) { SetDeploymentPatternName(value); return *this;}


    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The status of a workload deployment pattern.</p>
     */
    inline const WorkloadDeploymentPatternStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a workload deployment pattern.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a workload deployment pattern.</p>
     */
    inline void SetStatus(const WorkloadDeploymentPatternStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a workload deployment pattern.</p>
     */
    inline void SetStatus(WorkloadDeploymentPatternStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithStatus(const WorkloadDeploymentPatternStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a workload deployment pattern.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithStatus(WorkloadDeploymentPatternStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message about a workload deployment pattern's status.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    /**
     * <p>The name of the workload.</p>
     */
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    /**
     * <p>The name of the workload.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    /**
     * <p>The name of the workload.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    /**
     * <p>The name of the workload.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline const Aws::String& GetWorkloadVersionName() const{ return m_workloadVersionName; }

    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline bool WorkloadVersionNameHasBeenSet() const { return m_workloadVersionNameHasBeenSet; }

    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline void SetWorkloadVersionName(const Aws::String& value) { m_workloadVersionNameHasBeenSet = true; m_workloadVersionName = value; }

    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline void SetWorkloadVersionName(Aws::String&& value) { m_workloadVersionNameHasBeenSet = true; m_workloadVersionName = std::move(value); }

    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline void SetWorkloadVersionName(const char* value) { m_workloadVersionNameHasBeenSet = true; m_workloadVersionName.assign(value); }

    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithWorkloadVersionName(const Aws::String& value) { SetWorkloadVersionName(value); return *this;}

    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithWorkloadVersionName(Aws::String&& value) { SetWorkloadVersionName(std::move(value)); return *this;}

    /**
     * <p>The name of the workload deployment pattern version.</p>
     */
    inline WorkloadDeploymentPatternDataSummary& WithWorkloadVersionName(const char* value) { SetWorkloadVersionName(value); return *this;}

  private:

    Aws::String m_deploymentPatternName;
    bool m_deploymentPatternNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

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
