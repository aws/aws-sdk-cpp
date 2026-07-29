/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/TaskConfiguration.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Request structure for UpdateTask operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateTaskRequest">AWS
 * API Reference</a></p>
 */
class UpdateTaskRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API UpdateTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTask"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  UpdateTaskRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the task to update.</p>
   */
  inline const Aws::String& GetTaskName() const { return m_taskName; }
  inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
  template <typename TaskNameT = Aws::String>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::String>
  UpdateTaskRequest& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the task.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateTaskRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated task execution configuration.</p>
   */
  inline const TaskConfiguration& GetTaskConfiguration() const { return m_taskConfiguration; }
  inline bool TaskConfigurationHasBeenSet() const { return m_taskConfigurationHasBeenSet; }
  template <typename TaskConfigurationT = TaskConfiguration>
  void SetTaskConfiguration(TaskConfigurationT&& value) {
    m_taskConfigurationHasBeenSet = true;
    m_taskConfiguration = std::forward<TaskConfigurationT>(value);
  }
  template <typename TaskConfigurationT = TaskConfiguration>
  UpdateTaskRequest& WithTaskConfiguration(TaskConfigurationT&& value) {
    SetTaskConfiguration(std::forward<TaskConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_taskName;

  Aws::String m_description;

  TaskConfiguration m_taskConfiguration;
  bool m_workspaceNameHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_taskConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
