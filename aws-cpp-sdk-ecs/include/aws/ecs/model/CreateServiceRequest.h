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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/ecs/model/LoadBalancer.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API CreateServiceRequest : public ECSRequest
  {
  public:
    CreateServiceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your service. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your service. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your service. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your service. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your service. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline CreateServiceRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your service. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline CreateServiceRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your service. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline CreateServiceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

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
    inline CreateServiceRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline CreateServiceRequest& WithServiceName(Aws::String&& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, hyphens, and underscores are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a region or across multiple regions.</p>
     */
    inline CreateServiceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used.</p>
     */
    inline CreateServiceRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used.</p>
     */
    inline CreateServiceRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run in your service. If a <code>revision</code> is not specified,
     * the latest <code>ACTIVE</code> revision is used.</p>
     */
    inline CreateServiceRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>A load balancer object representing the load balancer to use with your
     * service. Currently, you are limited to one load balancer per service. After you
     * create a service, the load balancer name, container name, and container port
     * specified in the service definition are immutable.</p> <p>For Elastic Load
     * Balancing Classic load balancers, this object must contain the load balancer
     * name, the container name (as it appears in a container definition), and the
     * container port to access from the load balancer. When a task from this service
     * is placed on a container instance, the container instance is registered with the
     * load balancer specified here.</p> <p>For Elastic Load Balancing Application load
     * balancers, this object must contain the load balancer target group ARN, the
     * container name (as it appears in a container definition), and the container port
     * to access from the load balancer. When a task from this service is placed on a
     * container instance, the container instance and port combination is registered as
     * a target in the target group specified here.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>A load balancer object representing the load balancer to use with your
     * service. Currently, you are limited to one load balancer per service. After you
     * create a service, the load balancer name, container name, and container port
     * specified in the service definition are immutable.</p> <p>For Elastic Load
     * Balancing Classic load balancers, this object must contain the load balancer
     * name, the container name (as it appears in a container definition), and the
     * container port to access from the load balancer. When a task from this service
     * is placed on a container instance, the container instance is registered with the
     * load balancer specified here.</p> <p>For Elastic Load Balancing Application load
     * balancers, this object must contain the load balancer target group ARN, the
     * container name (as it appears in a container definition), and the container port
     * to access from the load balancer. When a task from this service is placed on a
     * container instance, the container instance and port combination is registered as
     * a target in the target group specified here.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>A load balancer object representing the load balancer to use with your
     * service. Currently, you are limited to one load balancer per service. After you
     * create a service, the load balancer name, container name, and container port
     * specified in the service definition are immutable.</p> <p>For Elastic Load
     * Balancing Classic load balancers, this object must contain the load balancer
     * name, the container name (as it appears in a container definition), and the
     * container port to access from the load balancer. When a task from this service
     * is placed on a container instance, the container instance is registered with the
     * load balancer specified here.</p> <p>For Elastic Load Balancing Application load
     * balancers, this object must contain the load balancer target group ARN, the
     * container name (as it appears in a container definition), and the container port
     * to access from the load balancer. When a task from this service is placed on a
     * container instance, the container instance and port combination is registered as
     * a target in the target group specified here.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>A load balancer object representing the load balancer to use with your
     * service. Currently, you are limited to one load balancer per service. After you
     * create a service, the load balancer name, container name, and container port
     * specified in the service definition are immutable.</p> <p>For Elastic Load
     * Balancing Classic load balancers, this object must contain the load balancer
     * name, the container name (as it appears in a container definition), and the
     * container port to access from the load balancer. When a task from this service
     * is placed on a container instance, the container instance is registered with the
     * load balancer specified here.</p> <p>For Elastic Load Balancing Application load
     * balancers, this object must contain the load balancer target group ARN, the
     * container name (as it appears in a container definition), and the container port
     * to access from the load balancer. When a task from this service is placed on a
     * container instance, the container instance and port combination is registered as
     * a target in the target group specified here.</p>
     */
    inline CreateServiceRequest& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>A load balancer object representing the load balancer to use with your
     * service. Currently, you are limited to one load balancer per service. After you
     * create a service, the load balancer name, container name, and container port
     * specified in the service definition are immutable.</p> <p>For Elastic Load
     * Balancing Classic load balancers, this object must contain the load balancer
     * name, the container name (as it appears in a container definition), and the
     * container port to access from the load balancer. When a task from this service
     * is placed on a container instance, the container instance is registered with the
     * load balancer specified here.</p> <p>For Elastic Load Balancing Application load
     * balancers, this object must contain the load balancer target group ARN, the
     * container name (as it appears in a container definition), and the container port
     * to access from the load balancer. When a task from this service is placed on a
     * container instance, the container instance and port combination is registered as
     * a target in the target group specified here.</p>
     */
    inline CreateServiceRequest& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>A load balancer object representing the load balancer to use with your
     * service. Currently, you are limited to one load balancer per service. After you
     * create a service, the load balancer name, container name, and container port
     * specified in the service definition are immutable.</p> <p>For Elastic Load
     * Balancing Classic load balancers, this object must contain the load balancer
     * name, the container name (as it appears in a container definition), and the
     * container port to access from the load balancer. When a task from this service
     * is placed on a container instance, the container instance is registered with the
     * load balancer specified here.</p> <p>For Elastic Load Balancing Application load
     * balancers, this object must contain the load balancer target group ARN, the
     * container name (as it appears in a container definition), and the container port
     * to access from the load balancer. When a task from this service is placed on a
     * container instance, the container instance and port combination is registered as
     * a target in the target group specified here.</p>
     */
    inline CreateServiceRequest& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>A load balancer object representing the load balancer to use with your
     * service. Currently, you are limited to one load balancer per service. After you
     * create a service, the load balancer name, container name, and container port
     * specified in the service definition are immutable.</p> <p>For Elastic Load
     * Balancing Classic load balancers, this object must contain the load balancer
     * name, the container name (as it appears in a container definition), and the
     * container port to access from the load balancer. When a task from this service
     * is placed on a container instance, the container instance is registered with the
     * load balancer specified here.</p> <p>For Elastic Load Balancing Application load
     * balancers, this object must contain the load balancer target group ARN, the
     * container name (as it appears in a container definition), and the container port
     * to access from the load balancer. When a task from this service is placed on a
     * container instance, the container instance and port combination is registered as
     * a target in the target group specified here.</p>
     */
    inline CreateServiceRequest& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>The number of instantiations of the specified task definition to place and
     * keep running on your cluster.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }

    /**
     * <p>The number of instantiations of the specified task definition to place and
     * keep running on your cluster.</p>
     */
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }

    /**
     * <p>The number of instantiations of the specified task definition to place and
     * keep running on your cluster.</p>
     */
    inline CreateServiceRequest& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. Up to 32 ASCII characters are allowed.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. Up to 32 ASCII characters are allowed.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. Up to 32 ASCII characters are allowed.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. Up to 32 ASCII characters are allowed.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. Up to 32 ASCII characters are allowed.</p>
     */
    inline CreateServiceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. Up to 32 ASCII characters are allowed.</p>
     */
    inline CreateServiceRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. Up to 32 ASCII characters are allowed.</p>
     */
    inline CreateServiceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * required if you are using a load balancer with your service. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p> <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * Names and Paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * required if you are using a load balancer with your service. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p> <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * Names and Paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * required if you are using a load balancer with your service. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p> <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * Names and Paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * required if you are using a load balancer with your service. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p> <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * Names and Paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * required if you are using a load balancer with your service. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p> <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * Names and Paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline CreateServiceRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * required if you are using a load balancer with your service. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p> <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * Names and Paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline CreateServiceRequest& WithRole(Aws::String&& value) { SetRole(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * required if you are using a load balancer with your service. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p> <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * Names and Paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline CreateServiceRequest& WithRole(const char* value) { SetRole(value); return *this;}

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
    inline CreateServiceRequest& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline CreateServiceRequest& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;
    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet;
    int m_desiredCount;
    bool m_desiredCountHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    Aws::String m_role;
    bool m_roleHasBeenSet;
    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
