﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>A regional grouping of one or more container instances on which you can run
   * task requests. Each account receives a default cluster the first time you use
   * the Amazon ECS service, but you may also create other clusters. Clusters may
   * contain more than one instance type simultaneously.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Cluster">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Cluster
  {
  public:
    Cluster();
    Cluster(const Aws::Utils::Json::JsonValue& jsonValue);
    Cluster& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the cluster,
     * the AWS account ID of the cluster owner, the <code>cluster</code> namespace, and
     * then the cluster name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:cluster/<i>test</i>
     * </code>..</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the cluster,
     * the AWS account ID of the cluster owner, the <code>cluster</code> namespace, and
     * then the cluster name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:cluster/<i>test</i>
     * </code>..</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the cluster,
     * the AWS account ID of the cluster owner, the <code>cluster</code> namespace, and
     * then the cluster name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:cluster/<i>test</i>
     * </code>..</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the cluster,
     * the AWS account ID of the cluster owner, the <code>cluster</code> namespace, and
     * then the cluster name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:cluster/<i>test</i>
     * </code>..</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the cluster,
     * the AWS account ID of the cluster owner, the <code>cluster</code> namespace, and
     * then the cluster name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:cluster/<i>test</i>
     * </code>..</p>
     */
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the cluster,
     * the AWS account ID of the cluster owner, the <code>cluster</code> namespace, and
     * then the cluster name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:cluster/<i>test</i>
     * </code>..</p>
     */
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the cluster,
     * the AWS account ID of the cluster owner, the <code>cluster</code> namespace, and
     * then the cluster name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:cluster/<i>test</i>
     * </code>..</p>
     */
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>A user-generated string that you use to identify your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>A user-generated string that you use to identify your cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>A user-generated string that you use to identify your cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>A user-generated string that you use to identify your cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>A user-generated string that you use to identify your cluster.</p>
     */
    inline Cluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>A user-generated string that you use to identify your cluster.</p>
     */
    inline Cluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>A user-generated string that you use to identify your cluster.</p>
     */
    inline Cluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The status of the cluster. The valid values are <code>ACTIVE</code> or
     * <code>INACTIVE</code>. <code>ACTIVE</code> indicates that you can register
     * container instances with the cluster and the associated instances can accept
     * tasks.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the cluster. The valid values are <code>ACTIVE</code> or
     * <code>INACTIVE</code>. <code>ACTIVE</code> indicates that you can register
     * container instances with the cluster and the associated instances can accept
     * tasks.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the cluster. The valid values are <code>ACTIVE</code> or
     * <code>INACTIVE</code>. <code>ACTIVE</code> indicates that you can register
     * container instances with the cluster and the associated instances can accept
     * tasks.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the cluster. The valid values are <code>ACTIVE</code> or
     * <code>INACTIVE</code>. <code>ACTIVE</code> indicates that you can register
     * container instances with the cluster and the associated instances can accept
     * tasks.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the cluster. The valid values are <code>ACTIVE</code> or
     * <code>INACTIVE</code>. <code>ACTIVE</code> indicates that you can register
     * container instances with the cluster and the associated instances can accept
     * tasks.</p>
     */
    inline Cluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the cluster. The valid values are <code>ACTIVE</code> or
     * <code>INACTIVE</code>. <code>ACTIVE</code> indicates that you can register
     * container instances with the cluster and the associated instances can accept
     * tasks.</p>
     */
    inline Cluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the cluster. The valid values are <code>ACTIVE</code> or
     * <code>INACTIVE</code>. <code>ACTIVE</code> indicates that you can register
     * container instances with the cluster and the associated instances can accept
     * tasks.</p>
     */
    inline Cluster& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The number of container instances registered into the cluster.</p>
     */
    inline int GetRegisteredContainerInstancesCount() const{ return m_registeredContainerInstancesCount; }

    /**
     * <p>The number of container instances registered into the cluster.</p>
     */
    inline void SetRegisteredContainerInstancesCount(int value) { m_registeredContainerInstancesCountHasBeenSet = true; m_registeredContainerInstancesCount = value; }

    /**
     * <p>The number of container instances registered into the cluster.</p>
     */
    inline Cluster& WithRegisteredContainerInstancesCount(int value) { SetRegisteredContainerInstancesCount(value); return *this;}


    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state.</p>
     */
    inline int GetRunningTasksCount() const{ return m_runningTasksCount; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state.</p>
     */
    inline void SetRunningTasksCount(int value) { m_runningTasksCountHasBeenSet = true; m_runningTasksCount = value; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state.</p>
     */
    inline Cluster& WithRunningTasksCount(int value) { SetRunningTasksCount(value); return *this;}


    /**
     * <p>The number of tasks in the cluster that are in the <code>PENDING</code>
     * state.</p>
     */
    inline int GetPendingTasksCount() const{ return m_pendingTasksCount; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>PENDING</code>
     * state.</p>
     */
    inline void SetPendingTasksCount(int value) { m_pendingTasksCountHasBeenSet = true; m_pendingTasksCount = value; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>PENDING</code>
     * state.</p>
     */
    inline Cluster& WithPendingTasksCount(int value) { SetPendingTasksCount(value); return *this;}


    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with
     * <a>ListServices</a>.</p>
     */
    inline int GetActiveServicesCount() const{ return m_activeServicesCount; }

    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with
     * <a>ListServices</a>.</p>
     */
    inline void SetActiveServicesCount(int value) { m_activeServicesCountHasBeenSet = true; m_activeServicesCount = value; }

    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with
     * <a>ListServices</a>.</p>
     */
    inline Cluster& WithActiveServicesCount(int value) { SetActiveServicesCount(value); return *this;}


    /**
     * <p>Additional information about your clusters that are separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>RunningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline const Aws::Vector<KeyValuePair>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Additional information about your clusters that are separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>RunningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline void SetStatistics(const Aws::Vector<KeyValuePair>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>Additional information about your clusters that are separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>RunningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline void SetStatistics(Aws::Vector<KeyValuePair>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>Additional information about your clusters that are separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>RunningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline Cluster& WithStatistics(const Aws::Vector<KeyValuePair>& value) { SetStatistics(value); return *this;}

    /**
     * <p>Additional information about your clusters that are separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>RunningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline Cluster& WithStatistics(Aws::Vector<KeyValuePair>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p>Additional information about your clusters that are separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>RunningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline Cluster& AddStatistics(const KeyValuePair& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>Additional information about your clusters that are separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>RunningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline Cluster& AddStatistics(KeyValuePair&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    int m_registeredContainerInstancesCount;
    bool m_registeredContainerInstancesCountHasBeenSet;

    int m_runningTasksCount;
    bool m_runningTasksCountHasBeenSet;

    int m_pendingTasksCount;
    bool m_pendingTasksCountHasBeenSet;

    int m_activeServicesCount;
    bool m_activeServicesCountHasBeenSet;

    Aws::Vector<KeyValuePair> m_statistics;
    bool m_statisticsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
