/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/EcsTaskDetails.h>
#include <aws/guardduty/model/Tag.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the details of the ECS Cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EcsClusterDetails">AWS
   * API Reference</a></p>
   */
  class EcsClusterDetails
  {
  public:
    AWS_GUARDDUTY_API EcsClusterDetails() = default;
    AWS_GUARDDUTY_API EcsClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EcsClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EcsClusterDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EcsClusterDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    EcsClusterDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of services that are running on the cluster in an ACTIVE
     * state.</p>
     */
    inline int GetActiveServicesCount() const { return m_activeServicesCount; }
    inline bool ActiveServicesCountHasBeenSet() const { return m_activeServicesCountHasBeenSet; }
    inline void SetActiveServicesCount(int value) { m_activeServicesCountHasBeenSet = true; m_activeServicesCount = value; }
    inline EcsClusterDetails& WithActiveServicesCount(int value) { SetActiveServicesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of container instances registered into the cluster.</p>
     */
    inline int GetRegisteredContainerInstancesCount() const { return m_registeredContainerInstancesCount; }
    inline bool RegisteredContainerInstancesCountHasBeenSet() const { return m_registeredContainerInstancesCountHasBeenSet; }
    inline void SetRegisteredContainerInstancesCount(int value) { m_registeredContainerInstancesCountHasBeenSet = true; m_registeredContainerInstancesCount = value; }
    inline EcsClusterDetails& WithRegisteredContainerInstancesCount(int value) { SetRegisteredContainerInstancesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks in the cluster that are in the RUNNING state.</p>
     */
    inline int GetRunningTasksCount() const { return m_runningTasksCount; }
    inline bool RunningTasksCountHasBeenSet() const { return m_runningTasksCountHasBeenSet; }
    inline void SetRunningTasksCount(int value) { m_runningTasksCountHasBeenSet = true; m_runningTasksCount = value; }
    inline EcsClusterDetails& WithRunningTasksCount(int value) { SetRunningTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    EcsClusterDetails& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    EcsClusterDetails& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the details of the ECS Task.</p>
     */
    inline const EcsTaskDetails& GetTaskDetails() const { return m_taskDetails; }
    inline bool TaskDetailsHasBeenSet() const { return m_taskDetailsHasBeenSet; }
    template<typename TaskDetailsT = EcsTaskDetails>
    void SetTaskDetails(TaskDetailsT&& value) { m_taskDetailsHasBeenSet = true; m_taskDetails = std::forward<TaskDetailsT>(value); }
    template<typename TaskDetailsT = EcsTaskDetails>
    EcsClusterDetails& WithTaskDetails(TaskDetailsT&& value) { SetTaskDetails(std::forward<TaskDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_activeServicesCount{0};
    bool m_activeServicesCountHasBeenSet = false;

    int m_registeredContainerInstancesCount{0};
    bool m_registeredContainerInstancesCountHasBeenSet = false;

    int m_runningTasksCount{0};
    bool m_runningTasksCountHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EcsTaskDetails m_taskDetails;
    bool m_taskDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
