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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/Deployment.h>
#include <aws/ecs/model/ServiceEvent.h>

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
   * <p>Details on a service within a cluster</p>
   */
  class AWS_ECS_API Service
  {
  public:
    Service();
    Service(const Aws::Utils::Json::JsonValue& jsonValue);
    Service& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the service. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the service,
     * the AWS account ID of the service owner, the <code>service</code> namespace, and
     * then the service name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:service/<i>my-service</i>
     * </code>.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the service. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the service,
     * the AWS account ID of the service owner, the <code>service</code> namespace, and
     * then the service name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:service/<i>my-service</i>
     * </code>.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the service. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the service,
     * the AWS account ID of the service owner, the <code>service</code> namespace, and
     * then the service name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:service/<i>my-service</i>
     * </code>.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the service. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the service,
     * the AWS account ID of the service owner, the <code>service</code> namespace, and
     * then the service name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:service/<i>my-service</i>
     * </code>.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the service. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the service,
     * the AWS account ID of the service owner, the <code>service</code> namespace, and
     * then the service name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:service/<i>my-service</i>
     * </code>.</p>
     */
    inline Service& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the service. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the service,
     * the AWS account ID of the service owner, the <code>service</code> namespace, and
     * then the service name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:service/<i>my-service</i>
     * </code>.</p>
     */
    inline Service& WithServiceArn(Aws::String&& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the service. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the service,
     * the AWS account ID of the service owner, the <code>service</code> namespace, and
     * then the service name. For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>012345678910</i>:service/<i>my-service</i>
     * </code>.</p>
     */
    inline Service& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline Service& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline Service& WithServiceName(Aws::String&& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline Service& WithServiceName(const char* value) { SetServiceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the service.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the service.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the service.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the service.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the service.</p>
     */
    inline Service& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the service.</p>
     */
    inline Service& WithClusterArn(Aws::String&& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the service.</p>
     */
    inline Service& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}

    /**
     * <p>A list of Elastic Load Balancing load balancer objects, containing the load
     * balancer name, the container name (as it appears in a container definition), and
     * the container port to access from the load balancer.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>A list of Elastic Load Balancing load balancer objects, containing the load
     * balancer name, the container name (as it appears in a container definition), and
     * the container port to access from the load balancer.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>A list of Elastic Load Balancing load balancer objects, containing the load
     * balancer name, the container name (as it appears in a container definition), and
     * the container port to access from the load balancer.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>A list of Elastic Load Balancing load balancer objects, containing the load
     * balancer name, the container name (as it appears in a container definition), and
     * the container port to access from the load balancer.</p>
     */
    inline Service& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>A list of Elastic Load Balancing load balancer objects, containing the load
     * balancer name, the container name (as it appears in a container definition), and
     * the container port to access from the load balancer.</p>
     */
    inline Service& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>A list of Elastic Load Balancing load balancer objects, containing the load
     * balancer name, the container name (as it appears in a container definition), and
     * the container port to access from the load balancer.</p>
     */
    inline Service& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>A list of Elastic Load Balancing load balancer objects, containing the load
     * balancer name, the container name (as it appears in a container definition), and
     * the container port to access from the load balancer.</p>
     */
    inline Service& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>The status of the service. The valid values are <code>ACTIVE</code>,
     * <code>DRAINING</code>, or <code>INACTIVE</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service. The valid values are <code>ACTIVE</code>,
     * <code>DRAINING</code>, or <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service. The valid values are <code>ACTIVE</code>,
     * <code>DRAINING</code>, or <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service. The valid values are <code>ACTIVE</code>,
     * <code>DRAINING</code>, or <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the service. The valid values are <code>ACTIVE</code>,
     * <code>DRAINING</code>, or <code>INACTIVE</code>.</p>
     */
    inline Service& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service. The valid values are <code>ACTIVE</code>,
     * <code>DRAINING</code>, or <code>INACTIVE</code>.</p>
     */
    inline Service& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service. The valid values are <code>ACTIVE</code>,
     * <code>DRAINING</code>, or <code>INACTIVE</code>.</p>
     */
    inline Service& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>The desired number of instantiations of the task definition to keep running
     * on the service. This value is specified when the service is created with
     * <a>CreateService</a>, and it can be modified with <a>UpdateService</a>.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }

    /**
     * <p>The desired number of instantiations of the task definition to keep running
     * on the service. This value is specified when the service is created with
     * <a>CreateService</a>, and it can be modified with <a>UpdateService</a>.</p>
     */
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }

    /**
     * <p>The desired number of instantiations of the task definition to keep running
     * on the service. This value is specified when the service is created with
     * <a>CreateService</a>, and it can be modified with <a>UpdateService</a>.</p>
     */
    inline Service& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}

    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state.</p>
     */
    inline int GetRunningCount() const{ return m_runningCount; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state.</p>
     */
    inline void SetRunningCount(int value) { m_runningCountHasBeenSet = true; m_runningCount = value; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state.</p>
     */
    inline Service& WithRunningCount(int value) { SetRunningCount(value); return *this;}

    /**
     * <p>The number of tasks in the cluster that are in the <code>PENDING</code>
     * state.</p>
     */
    inline int GetPendingCount() const{ return m_pendingCount; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>PENDING</code>
     * state.</p>
     */
    inline void SetPendingCount(int value) { m_pendingCountHasBeenSet = true; m_pendingCount = value; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>PENDING</code>
     * state.</p>
     */
    inline Service& WithPendingCount(int value) { SetPendingCount(value); return *this;}

    /**
     * <p>The task definition to use for tasks in the service. This value is specified
     * when the service is created with <a>CreateService</a>, and it can be modified
     * with <a>UpdateService</a>.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The task definition to use for tasks in the service. This value is specified
     * when the service is created with <a>CreateService</a>, and it can be modified
     * with <a>UpdateService</a>.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The task definition to use for tasks in the service. This value is specified
     * when the service is created with <a>CreateService</a>, and it can be modified
     * with <a>UpdateService</a>.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The task definition to use for tasks in the service. This value is specified
     * when the service is created with <a>CreateService</a>, and it can be modified
     * with <a>UpdateService</a>.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The task definition to use for tasks in the service. This value is specified
     * when the service is created with <a>CreateService</a>, and it can be modified
     * with <a>UpdateService</a>.</p>
     */
    inline Service& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The task definition to use for tasks in the service. This value is specified
     * when the service is created with <a>CreateService</a>, and it can be modified
     * with <a>UpdateService</a>.</p>
     */
    inline Service& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The task definition to use for tasks in the service. This value is specified
     * when the service is created with <a>CreateService</a>, and it can be modified
     * with <a>UpdateService</a>.</p>
     */
    inline Service& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

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
    inline Service& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline Service& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(value); return *this;}

    /**
     * <p>The current state of deployments for the service.</p>
     */
    inline const Aws::Vector<Deployment>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>The current state of deployments for the service.</p>
     */
    inline void SetDeployments(const Aws::Vector<Deployment>& value) { m_deploymentsHasBeenSet = true; m_deployments = value; }

    /**
     * <p>The current state of deployments for the service.</p>
     */
    inline void SetDeployments(Aws::Vector<Deployment>&& value) { m_deploymentsHasBeenSet = true; m_deployments = value; }

    /**
     * <p>The current state of deployments for the service.</p>
     */
    inline Service& WithDeployments(const Aws::Vector<Deployment>& value) { SetDeployments(value); return *this;}

    /**
     * <p>The current state of deployments for the service.</p>
     */
    inline Service& WithDeployments(Aws::Vector<Deployment>&& value) { SetDeployments(value); return *this;}

    /**
     * <p>The current state of deployments for the service.</p>
     */
    inline Service& AddDeployments(const Deployment& value) { m_deploymentsHasBeenSet = true; m_deployments.push_back(value); return *this; }

    /**
     * <p>The current state of deployments for the service.</p>
     */
    inline Service& AddDeployments(Deployment&& value) { m_deploymentsHasBeenSet = true; m_deployments.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the service
     * that allows the Amazon ECS container agent to register container instances with
     * an Elastic Load Balancing load balancer.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the service
     * that allows the Amazon ECS container agent to register container instances with
     * an Elastic Load Balancing load balancer.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the service
     * that allows the Amazon ECS container agent to register container instances with
     * an Elastic Load Balancing load balancer.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the service
     * that allows the Amazon ECS container agent to register container instances with
     * an Elastic Load Balancing load balancer.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the service
     * that allows the Amazon ECS container agent to register container instances with
     * an Elastic Load Balancing load balancer.</p>
     */
    inline Service& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the service
     * that allows the Amazon ECS container agent to register container instances with
     * an Elastic Load Balancing load balancer.</p>
     */
    inline Service& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the service
     * that allows the Amazon ECS container agent to register container instances with
     * an Elastic Load Balancing load balancer.</p>
     */
    inline Service& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <p>The event stream for your service. A maximum of 100 of the latest events are
     * displayed.</p>
     */
    inline const Aws::Vector<ServiceEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>The event stream for your service. A maximum of 100 of the latest events are
     * displayed.</p>
     */
    inline void SetEvents(const Aws::Vector<ServiceEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The event stream for your service. A maximum of 100 of the latest events are
     * displayed.</p>
     */
    inline void SetEvents(Aws::Vector<ServiceEvent>&& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The event stream for your service. A maximum of 100 of the latest events are
     * displayed.</p>
     */
    inline Service& WithEvents(const Aws::Vector<ServiceEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>The event stream for your service. A maximum of 100 of the latest events are
     * displayed.</p>
     */
    inline Service& WithEvents(Aws::Vector<ServiceEvent>&& value) { SetEvents(value); return *this;}

    /**
     * <p>The event stream for your service. A maximum of 100 of the latest events are
     * displayed.</p>
     */
    inline Service& AddEvents(const ServiceEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The event stream for your service. A maximum of 100 of the latest events are
     * displayed.</p>
     */
    inline Service& AddEvents(ServiceEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The Unix timestamp for when the service was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp for when the service was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp for when the service was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp for when the service was created.</p>
     */
    inline Service& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the service was created.</p>
     */
    inline Service& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(value); return *this;}

  private:
    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet;
    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet;
    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    int m_desiredCount;
    bool m_desiredCountHasBeenSet;
    int m_runningCount;
    bool m_runningCountHasBeenSet;
    int m_pendingCount;
    bool m_pendingCountHasBeenSet;
    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;
    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet;
    Aws::Vector<Deployment> m_deployments;
    bool m_deploymentsHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    Aws::Vector<ServiceEvent> m_events;
    bool m_eventsHasBeenSet;
    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
