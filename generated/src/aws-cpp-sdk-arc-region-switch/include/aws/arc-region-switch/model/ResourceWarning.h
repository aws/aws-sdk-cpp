/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/MinimalWorkflow.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/ResourceWarningStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Represents a warning about a resource in a Region switch plan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ResourceWarning">AWS
   * API Reference</a></p>
   */
  class ResourceWarning
  {
  public:
    AWS_ARCREGIONSWITCH_API ResourceWarning() = default;
    AWS_ARCREGIONSWITCH_API ResourceWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API ResourceWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The workflow for the resource warning.</p>
     */
    inline const MinimalWorkflow& GetWorkflow() const { return m_workflow; }
    inline bool WorkflowHasBeenSet() const { return m_workflowHasBeenSet; }
    template<typename WorkflowT = MinimalWorkflow>
    void SetWorkflow(WorkflowT&& value) { m_workflowHasBeenSet = true; m_workflow = std::forward<WorkflowT>(value); }
    template<typename WorkflowT = MinimalWorkflow>
    ResourceWarning& WithWorkflow(WorkflowT&& value) { SetWorkflow(std::forward<WorkflowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for the resource warning.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ResourceWarning& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step for the resource warning.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    ResourceWarning& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ResourceWarning& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource warning.</p>
     */
    inline ResourceWarningStatus GetWarningStatus() const { return m_warningStatus; }
    inline bool WarningStatusHasBeenSet() const { return m_warningStatusHasBeenSet; }
    inline void SetWarningStatus(ResourceWarningStatus value) { m_warningStatusHasBeenSet = true; m_warningStatus = value; }
    inline ResourceWarning& WithWarningStatus(ResourceWarningStatus value) { SetWarningStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the warning was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetWarningUpdatedTime() const { return m_warningUpdatedTime; }
    inline bool WarningUpdatedTimeHasBeenSet() const { return m_warningUpdatedTimeHasBeenSet; }
    template<typename WarningUpdatedTimeT = Aws::Utils::DateTime>
    void SetWarningUpdatedTime(WarningUpdatedTimeT&& value) { m_warningUpdatedTimeHasBeenSet = true; m_warningUpdatedTime = std::forward<WarningUpdatedTimeT>(value); }
    template<typename WarningUpdatedTimeT = Aws::Utils::DateTime>
    ResourceWarning& WithWarningUpdatedTime(WarningUpdatedTimeT&& value) { SetWarningUpdatedTime(std::forward<WarningUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warning message about what needs to be corrected.</p>
     */
    inline const Aws::String& GetWarningMessage() const { return m_warningMessage; }
    inline bool WarningMessageHasBeenSet() const { return m_warningMessageHasBeenSet; }
    template<typename WarningMessageT = Aws::String>
    void SetWarningMessage(WarningMessageT&& value) { m_warningMessageHasBeenSet = true; m_warningMessage = std::forward<WarningMessageT>(value); }
    template<typename WarningMessageT = Aws::String>
    ResourceWarning& WithWarningMessage(WarningMessageT&& value) { SetWarningMessage(std::forward<WarningMessageT>(value)); return *this;}
    ///@}
  private:

    MinimalWorkflow m_workflow;
    bool m_workflowHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceWarningStatus m_warningStatus{ResourceWarningStatus::NOT_SET};
    bool m_warningStatusHasBeenSet = false;

    Aws::Utils::DateTime m_warningUpdatedTime{};
    bool m_warningUpdatedTimeHasBeenSet = false;

    Aws::String m_warningMessage;
    bool m_warningMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
