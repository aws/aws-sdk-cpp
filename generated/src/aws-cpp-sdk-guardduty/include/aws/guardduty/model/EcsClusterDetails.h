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
    AWS_GUARDDUTY_API EcsClusterDetails();
    AWS_GUARDDUTY_API EcsClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EcsClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline EcsClusterDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline EcsClusterDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ECS Cluster.</p>
     */
    inline EcsClusterDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline EcsClusterDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline EcsClusterDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster.</p>
     */
    inline EcsClusterDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline EcsClusterDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline EcsClusterDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the ECS cluster.</p>
     */
    inline EcsClusterDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The number of services that are running on the cluster in an ACTIVE
     * state.</p>
     */
    inline int GetActiveServicesCount() const{ return m_activeServicesCount; }

    /**
     * <p>The number of services that are running on the cluster in an ACTIVE
     * state.</p>
     */
    inline bool ActiveServicesCountHasBeenSet() const { return m_activeServicesCountHasBeenSet; }

    /**
     * <p>The number of services that are running on the cluster in an ACTIVE
     * state.</p>
     */
    inline void SetActiveServicesCount(int value) { m_activeServicesCountHasBeenSet = true; m_activeServicesCount = value; }

    /**
     * <p>The number of services that are running on the cluster in an ACTIVE
     * state.</p>
     */
    inline EcsClusterDetails& WithActiveServicesCount(int value) { SetActiveServicesCount(value); return *this;}


    /**
     * <p>The number of container instances registered into the cluster.</p>
     */
    inline int GetRegisteredContainerInstancesCount() const{ return m_registeredContainerInstancesCount; }

    /**
     * <p>The number of container instances registered into the cluster.</p>
     */
    inline bool RegisteredContainerInstancesCountHasBeenSet() const { return m_registeredContainerInstancesCountHasBeenSet; }

    /**
     * <p>The number of container instances registered into the cluster.</p>
     */
    inline void SetRegisteredContainerInstancesCount(int value) { m_registeredContainerInstancesCountHasBeenSet = true; m_registeredContainerInstancesCount = value; }

    /**
     * <p>The number of container instances registered into the cluster.</p>
     */
    inline EcsClusterDetails& WithRegisteredContainerInstancesCount(int value) { SetRegisteredContainerInstancesCount(value); return *this;}


    /**
     * <p>The number of tasks in the cluster that are in the RUNNING state.</p>
     */
    inline int GetRunningTasksCount() const{ return m_runningTasksCount; }

    /**
     * <p>The number of tasks in the cluster that are in the RUNNING state.</p>
     */
    inline bool RunningTasksCountHasBeenSet() const { return m_runningTasksCountHasBeenSet; }

    /**
     * <p>The number of tasks in the cluster that are in the RUNNING state.</p>
     */
    inline void SetRunningTasksCount(int value) { m_runningTasksCountHasBeenSet = true; m_runningTasksCount = value; }

    /**
     * <p>The number of tasks in the cluster that are in the RUNNING state.</p>
     */
    inline EcsClusterDetails& WithRunningTasksCount(int value) { SetRunningTasksCount(value); return *this;}


    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline EcsClusterDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline EcsClusterDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline EcsClusterDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags of the ECS Cluster.</p>
     */
    inline EcsClusterDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains information about the details of the ECS Task.</p>
     */
    inline const EcsTaskDetails& GetTaskDetails() const{ return m_taskDetails; }

    /**
     * <p>Contains information about the details of the ECS Task.</p>
     */
    inline bool TaskDetailsHasBeenSet() const { return m_taskDetailsHasBeenSet; }

    /**
     * <p>Contains information about the details of the ECS Task.</p>
     */
    inline void SetTaskDetails(const EcsTaskDetails& value) { m_taskDetailsHasBeenSet = true; m_taskDetails = value; }

    /**
     * <p>Contains information about the details of the ECS Task.</p>
     */
    inline void SetTaskDetails(EcsTaskDetails&& value) { m_taskDetailsHasBeenSet = true; m_taskDetails = std::move(value); }

    /**
     * <p>Contains information about the details of the ECS Task.</p>
     */
    inline EcsClusterDetails& WithTaskDetails(const EcsTaskDetails& value) { SetTaskDetails(value); return *this;}

    /**
     * <p>Contains information about the details of the ECS Task.</p>
     */
    inline EcsClusterDetails& WithTaskDetails(EcsTaskDetails&& value) { SetTaskDetails(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_activeServicesCount;
    bool m_activeServicesCountHasBeenSet = false;

    int m_registeredContainerInstancesCount;
    bool m_registeredContainerInstancesCountHasBeenSet = false;

    int m_runningTasksCount;
    bool m_runningTasksCountHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EcsTaskDetails m_taskDetails;
    bool m_taskDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
