/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The load balancer configuration to use with a service or task set.</p> <p>For
   * specific notes and restrictions regarding the use of load balancers with
   * services and task sets, see the CreateService and CreateTaskSet actions.</p>
   * <p>When you add, update, or remove a load balancer configuration, Amazon ECS
   * starts a new deployment with the updated Elastic Load Balancing configuration.
   * This causes tasks to register to and deregister from load balancers.</p> <p>We
   * recommend that you verify this on a test environment before you update the
   * Elastic Load Balancing configuration. </p> <p>A service-linked role is required
   * for services that use multiple target groups. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using-service-linked-roles.html">Using
   * service-linked roles</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LoadBalancer">AWS
   * API Reference</a></p>
   */
  class LoadBalancer
  {
  public:
    AWS_ECS_API LoadBalancer();
    AWS_ECS_API LoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API LoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. If you're using a Classic Load Balancer, omit the target group
     * ARN.</p> <p>For services using the <code>ECS</code> deployment controller, you
     * can specify one or multiple target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Registering
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>For services using the
     * <code>CODE_DEPLOY</code> deployment controller, you're required to define two
     * target groups for the load balancer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Blue/green
     * deployment with CodeDeploy</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>If your service's task definition uses
     * the <code>awsvpc</code> network mode, you must choose <code>ip</code> as the
     * target type, not <code>instance</code>. Do this when creating your target groups
     * because tasks that use the <code>awsvpc</code> network mode are associated with
     * an elastic network interface, not an Amazon EC2 instance. This network mode is
     * required for the Fargate launch type.</p> 
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. If you're using a Classic Load Balancer, omit the target group
     * ARN.</p> <p>For services using the <code>ECS</code> deployment controller, you
     * can specify one or multiple target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Registering
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>For services using the
     * <code>CODE_DEPLOY</code> deployment controller, you're required to define two
     * target groups for the load balancer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Blue/green
     * deployment with CodeDeploy</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>If your service's task definition uses
     * the <code>awsvpc</code> network mode, you must choose <code>ip</code> as the
     * target type, not <code>instance</code>. Do this when creating your target groups
     * because tasks that use the <code>awsvpc</code> network mode are associated with
     * an elastic network interface, not an Amazon EC2 instance. This network mode is
     * required for the Fargate launch type.</p> 
     */
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. If you're using a Classic Load Balancer, omit the target group
     * ARN.</p> <p>For services using the <code>ECS</code> deployment controller, you
     * can specify one or multiple target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Registering
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>For services using the
     * <code>CODE_DEPLOY</code> deployment controller, you're required to define two
     * target groups for the load balancer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Blue/green
     * deployment with CodeDeploy</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>If your service's task definition uses
     * the <code>awsvpc</code> network mode, you must choose <code>ip</code> as the
     * target type, not <code>instance</code>. Do this when creating your target groups
     * because tasks that use the <code>awsvpc</code> network mode are associated with
     * an elastic network interface, not an Amazon EC2 instance. This network mode is
     * required for the Fargate launch type.</p> 
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. If you're using a Classic Load Balancer, omit the target group
     * ARN.</p> <p>For services using the <code>ECS</code> deployment controller, you
     * can specify one or multiple target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Registering
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>For services using the
     * <code>CODE_DEPLOY</code> deployment controller, you're required to define two
     * target groups for the load balancer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Blue/green
     * deployment with CodeDeploy</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>If your service's task definition uses
     * the <code>awsvpc</code> network mode, you must choose <code>ip</code> as the
     * target type, not <code>instance</code>. Do this when creating your target groups
     * because tasks that use the <code>awsvpc</code> network mode are associated with
     * an elastic network interface, not an Amazon EC2 instance. This network mode is
     * required for the Fargate launch type.</p> 
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. If you're using a Classic Load Balancer, omit the target group
     * ARN.</p> <p>For services using the <code>ECS</code> deployment controller, you
     * can specify one or multiple target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Registering
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>For services using the
     * <code>CODE_DEPLOY</code> deployment controller, you're required to define two
     * target groups for the load balancer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Blue/green
     * deployment with CodeDeploy</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>If your service's task definition uses
     * the <code>awsvpc</code> network mode, you must choose <code>ip</code> as the
     * target type, not <code>instance</code>. Do this when creating your target groups
     * because tasks that use the <code>awsvpc</code> network mode are associated with
     * an elastic network interface, not an Amazon EC2 instance. This network mode is
     * required for the Fargate launch type.</p> 
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. If you're using a Classic Load Balancer, omit the target group
     * ARN.</p> <p>For services using the <code>ECS</code> deployment controller, you
     * can specify one or multiple target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Registering
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>For services using the
     * <code>CODE_DEPLOY</code> deployment controller, you're required to define two
     * target groups for the load balancer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Blue/green
     * deployment with CodeDeploy</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>If your service's task definition uses
     * the <code>awsvpc</code> network mode, you must choose <code>ip</code> as the
     * target type, not <code>instance</code>. Do this when creating your target groups
     * because tasks that use the <code>awsvpc</code> network mode are associated with
     * an elastic network interface, not an Amazon EC2 instance. This network mode is
     * required for the Fargate launch type.</p> 
     */
    inline LoadBalancer& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. If you're using a Classic Load Balancer, omit the target group
     * ARN.</p> <p>For services using the <code>ECS</code> deployment controller, you
     * can specify one or multiple target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Registering
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>For services using the
     * <code>CODE_DEPLOY</code> deployment controller, you're required to define two
     * target groups for the load balancer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Blue/green
     * deployment with CodeDeploy</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>If your service's task definition uses
     * the <code>awsvpc</code> network mode, you must choose <code>ip</code> as the
     * target type, not <code>instance</code>. Do this when creating your target groups
     * because tasks that use the <code>awsvpc</code> network mode are associated with
     * an elastic network interface, not an Amazon EC2 instance. This network mode is
     * required for the Fargate launch type.</p> 
     */
    inline LoadBalancer& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. If you're using a Classic Load Balancer, omit the target group
     * ARN.</p> <p>For services using the <code>ECS</code> deployment controller, you
     * can specify one or multiple target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/register-multiple-targetgroups.html">Registering
     * multiple target groups with a service</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>For services using the
     * <code>CODE_DEPLOY</code> deployment controller, you're required to define two
     * target groups for the load balancer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Blue/green
     * deployment with CodeDeploy</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>If your service's task definition uses
     * the <code>awsvpc</code> network mode, you must choose <code>ip</code> as the
     * target type, not <code>instance</code>. Do this when creating your target groups
     * because tasks that use the <code>awsvpc</code> network mode are associated with
     * an elastic network interface, not an Amazon EC2 instance. This network mode is
     * required for the Fargate launch type.</p> 
     */
    inline LoadBalancer& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}


    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a Classic
     * Load Balancer. If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a Classic
     * Load Balancer. If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a Classic
     * Load Balancer. If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a Classic
     * Load Balancer. If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a Classic
     * Load Balancer. If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a Classic
     * Load Balancer. If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a Classic
     * Load Balancer. If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a Classic
     * Load Balancer. If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline LoadBalancer& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline LoadBalancer& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline LoadBalancer& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they're launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they're launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they're launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they're launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline LoadBalancer& WithContainerPort(int value) { SetContainerPort(value); return *this;}

  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
