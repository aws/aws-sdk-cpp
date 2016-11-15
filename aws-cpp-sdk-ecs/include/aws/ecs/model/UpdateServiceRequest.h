/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/DeploymentConfiguration.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API UpdateServiceRequest : public ECSRequest
  {
  public:
    UpdateServiceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline UpdateServiceRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline UpdateServiceRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline UpdateServiceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>The name of the service to update.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The name of the service to update.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the service to update.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the service to update.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The name of the service to update.</p>
     */
    inline UpdateServiceRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The name of the service to update.</p>
     */
    inline UpdateServiceRequest& WithService(Aws::String&& value) { SetService(value); return *this;}

    /**
     * <p>The name of the service to update.</p>
     */
    inline UpdateServiceRequest& WithService(const char* value) { SetService(value); return *this;}

    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }

    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p>
     */
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }

    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p>
     */
    inline UpdateServiceRequest& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used. If you modify the task
     * definition with <code>UpdateService</code>, Amazon ECS spawns a task with the
     * new version of the task definition and then stops an old task after the new
     * version is running.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used. If you modify the task
     * definition with <code>UpdateService</code>, Amazon ECS spawns a task with the
     * new version of the task definition and then stops an old task after the new
     * version is running.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used. If you modify the task
     * definition with <code>UpdateService</code>, Amazon ECS spawns a task with the
     * new version of the task definition and then stops an old task after the new
     * version is running.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used. If you modify the task
     * definition with <code>UpdateService</code>, Amazon ECS spawns a task with the
     * new version of the task definition and then stops an old task after the new
     * version is running.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used. If you modify the task
     * definition with <code>UpdateService</code>, Amazon ECS spawns a task with the
     * new version of the task definition and then stops an old task after the new
     * version is running.</p>
     */
    inline UpdateServiceRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used. If you modify the task
     * definition with <code>UpdateService</code>, Amazon ECS spawns a task with the
     * new version of the task definition and then stops an old task after the new
     * version is running.</p>
     */
    inline UpdateServiceRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used. If you modify the task
     * definition with <code>UpdateService</code>, Amazon ECS spawns a task with the
     * new version of the task definition and then stops an old task after the new
     * version is running.</p>
     */
    inline UpdateServiceRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline void SetDeploymentConfiguration(const DeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline void SetDeploymentConfiguration(DeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline UpdateServiceRequest& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline UpdateServiceRequest& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_service;
    bool m_serviceHasBeenSet;
    int m_desiredCount;
    bool m_desiredCountHasBeenSet;
    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;
    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
