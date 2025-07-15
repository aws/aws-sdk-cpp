/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/AdvancedConfiguration.h>
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
   * <p>The load balancer configuration to use with a service or task set.</p>
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
    AWS_ECS_API LoadBalancer() = default;
    AWS_ECS_API LoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API LoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an Application Load Balancer or Network Load
     * Balancer. </p> <p>For services using the <code>ECS</code> deployment controller,
     * you can specify one or multiple target groups. For more information, see <a
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
    inline const Aws::String& GetTargetGroupArn() const { return m_targetGroupArn; }
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
    template<typename TargetGroupArnT = Aws::String>
    void SetTargetGroupArn(TargetGroupArnT&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::forward<TargetGroupArnT>(value); }
    template<typename TargetGroupArnT = Aws::String>
    LoadBalancer& WithTargetGroupArn(TargetGroupArnT&& value) { SetTargetGroupArn(std::forward<TargetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>If you are using an Application Load Balancer or a Network Load
     * Balancer the load balancer name parameter should be omitted.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    LoadBalancer& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p> <p>You need to specify the container name
     * when configuring the target group for an Amazon ECS load balancer.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    LoadBalancer& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they're launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline int GetContainerPort() const { return m_containerPort; }
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }
    inline LoadBalancer& WithContainerPort(int value) { SetContainerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The advanced settings for the load balancer used in blue/green deployments.
     * Specify the alternate target group, listener rules, and IAM role required for
     * traffic shifting during blue/green deployments.</p>
     */
    inline const AdvancedConfiguration& GetAdvancedConfiguration() const { return m_advancedConfiguration; }
    inline bool AdvancedConfigurationHasBeenSet() const { return m_advancedConfigurationHasBeenSet; }
    template<typename AdvancedConfigurationT = AdvancedConfiguration>
    void SetAdvancedConfiguration(AdvancedConfigurationT&& value) { m_advancedConfigurationHasBeenSet = true; m_advancedConfiguration = std::forward<AdvancedConfigurationT>(value); }
    template<typename AdvancedConfigurationT = AdvancedConfiguration>
    LoadBalancer& WithAdvancedConfiguration(AdvancedConfigurationT&& value) { SetAdvancedConfiguration(std::forward<AdvancedConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort{0};
    bool m_containerPortHasBeenSet = false;

    AdvancedConfiguration m_advancedConfiguration;
    bool m_advancedConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
