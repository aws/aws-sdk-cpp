/*
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
   * <p>Details on a load balancer to be used with a service or task set.</p> <p>If
   * the service is using the <code>ECS</code> deployment controller, you are limited
   * to one load balancer or target group.</p> <p>If the service is using the
   * <code>CODE_DEPLOY</code> deployment controller, the service is required to use
   * either an Application Load Balancer or Network Load Balancer. When you are
   * creating an AWS CodeDeploy deployment group, you specify two target groups
   * (referred to as a <code>targetGroupPair</code>). Each target group binds to a
   * separate task set in the deployment. The load balancer can also have up to two
   * listeners, a required listener for production traffic and an optional listener
   * that allows you to test new revisions of the service before routing production
   * traffic to it.</p> <p>Services with tasks that use the <code>awsvpc</code>
   * network mode (for example, those with the Fargate launch type) only support
   * Application Load Balancers and Network Load Balancers. Classic Load Balancers
   * are not supported. Also, when you create any target groups for these services,
   * you must choose <code>ip</code> as the target type, not <code>instance</code>.
   * Tasks that use the <code>awsvpc</code> network mode are associated with an
   * elastic network interface, not an Amazon EC2 instance.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LoadBalancer">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API LoadBalancer
  {
  public:
    LoadBalancer();
    LoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    LoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an application load balancer or a network load
     * balancer. If you are using a classic load balancer this should be omitted.</p>
     * <p>For services using the <code>ECS</code> deployment controller, you are
     * limited to one target group. For services using the <code>CODE_DEPLOY</code>
     * deployment controller, you are required to define two target groups for the load
     * balancer.</p> <important> <p>If your service's task definition uses the
     * <code>awsvpc</code> network mode (which is required for the Fargate launch
     * type), you must choose <code>ip</code> as the target type, not
     * <code>instance</code>, because tasks that use the <code>awsvpc</code> network
     * mode are associated with an elastic network interface, not an Amazon EC2
     * instance.</p> </important>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an application load balancer or a network load
     * balancer. If you are using a classic load balancer this should be omitted.</p>
     * <p>For services using the <code>ECS</code> deployment controller, you are
     * limited to one target group. For services using the <code>CODE_DEPLOY</code>
     * deployment controller, you are required to define two target groups for the load
     * balancer.</p> <important> <p>If your service's task definition uses the
     * <code>awsvpc</code> network mode (which is required for the Fargate launch
     * type), you must choose <code>ip</code> as the target type, not
     * <code>instance</code>, because tasks that use the <code>awsvpc</code> network
     * mode are associated with an elastic network interface, not an Amazon EC2
     * instance.</p> </important>
     */
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an application load balancer or a network load
     * balancer. If you are using a classic load balancer this should be omitted.</p>
     * <p>For services using the <code>ECS</code> deployment controller, you are
     * limited to one target group. For services using the <code>CODE_DEPLOY</code>
     * deployment controller, you are required to define two target groups for the load
     * balancer.</p> <important> <p>If your service's task definition uses the
     * <code>awsvpc</code> network mode (which is required for the Fargate launch
     * type), you must choose <code>ip</code> as the target type, not
     * <code>instance</code>, because tasks that use the <code>awsvpc</code> network
     * mode are associated with an elastic network interface, not an Amazon EC2
     * instance.</p> </important>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an application load balancer or a network load
     * balancer. If you are using a classic load balancer this should be omitted.</p>
     * <p>For services using the <code>ECS</code> deployment controller, you are
     * limited to one target group. For services using the <code>CODE_DEPLOY</code>
     * deployment controller, you are required to define two target groups for the load
     * balancer.</p> <important> <p>If your service's task definition uses the
     * <code>awsvpc</code> network mode (which is required for the Fargate launch
     * type), you must choose <code>ip</code> as the target type, not
     * <code>instance</code>, because tasks that use the <code>awsvpc</code> network
     * mode are associated with an elastic network interface, not an Amazon EC2
     * instance.</p> </important>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an application load balancer or a network load
     * balancer. If you are using a classic load balancer this should be omitted.</p>
     * <p>For services using the <code>ECS</code> deployment controller, you are
     * limited to one target group. For services using the <code>CODE_DEPLOY</code>
     * deployment controller, you are required to define two target groups for the load
     * balancer.</p> <important> <p>If your service's task definition uses the
     * <code>awsvpc</code> network mode (which is required for the Fargate launch
     * type), you must choose <code>ip</code> as the target type, not
     * <code>instance</code>, because tasks that use the <code>awsvpc</code> network
     * mode are associated with an elastic network interface, not an Amazon EC2
     * instance.</p> </important>
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an application load balancer or a network load
     * balancer. If you are using a classic load balancer this should be omitted.</p>
     * <p>For services using the <code>ECS</code> deployment controller, you are
     * limited to one target group. For services using the <code>CODE_DEPLOY</code>
     * deployment controller, you are required to define two target groups for the load
     * balancer.</p> <important> <p>If your service's task definition uses the
     * <code>awsvpc</code> network mode (which is required for the Fargate launch
     * type), you must choose <code>ip</code> as the target type, not
     * <code>instance</code>, because tasks that use the <code>awsvpc</code> network
     * mode are associated with an elastic network interface, not an Amazon EC2
     * instance.</p> </important>
     */
    inline LoadBalancer& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an application load balancer or a network load
     * balancer. If you are using a classic load balancer this should be omitted.</p>
     * <p>For services using the <code>ECS</code> deployment controller, you are
     * limited to one target group. For services using the <code>CODE_DEPLOY</code>
     * deployment controller, you are required to define two target groups for the load
     * balancer.</p> <important> <p>If your service's task definition uses the
     * <code>awsvpc</code> network mode (which is required for the Fargate launch
     * type), you must choose <code>ip</code> as the target type, not
     * <code>instance</code>, because tasks that use the <code>awsvpc</code> network
     * mode are associated with an elastic network interface, not an Amazon EC2
     * instance.</p> </important>
     */
    inline LoadBalancer& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group or groups associated with a service or task set.</p> <p>A target group ARN
     * is only specified when using an application load balancer or a network load
     * balancer. If you are using a classic load balancer this should be omitted.</p>
     * <p>For services using the <code>ECS</code> deployment controller, you are
     * limited to one target group. For services using the <code>CODE_DEPLOY</code>
     * deployment controller, you are required to define two target groups for the load
     * balancer.</p> <important> <p>If your service's task definition uses the
     * <code>awsvpc</code> network mode (which is required for the Fargate launch
     * type), you must choose <code>ip</code> as the target type, not
     * <code>instance</code>, because tasks that use the <code>awsvpc</code> network
     * mode are associated with an elastic network interface, not an Amazon EC2
     * instance.</p> </important>
     */
    inline LoadBalancer& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}


    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a classic
     * load balancer. If you are using an application load balancer or a network load
     * balancer this should be omitted.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a classic
     * load balancer. If you are using an application load balancer or a network load
     * balancer this should be omitted.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a classic
     * load balancer. If you are using an application load balancer or a network load
     * balancer this should be omitted.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a classic
     * load balancer. If you are using an application load balancer or a network load
     * balancer this should be omitted.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a classic
     * load balancer. If you are using an application load balancer or a network load
     * balancer this should be omitted.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a classic
     * load balancer. If you are using an application load balancer or a network load
     * balancer this should be omitted.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a classic
     * load balancer. If you are using an application load balancer or a network load
     * balancer this should be omitted.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>A load balancer name is only specified when using a classic
     * load balancer. If you are using an application load balancer or a network load
     * balancer this should be omitted.</p>
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
     * correspond to a <code>containerPort</code> in the service's task definition.
     * Your container instances must allow ingress traffic on the <code>hostPort</code>
     * of the port mapping.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the service's task definition.
     * Your container instances must allow ingress traffic on the <code>hostPort</code>
     * of the port mapping.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the service's task definition.
     * Your container instances must allow ingress traffic on the <code>hostPort</code>
     * of the port mapping.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the service's task definition.
     * Your container instances must allow ingress traffic on the <code>hostPort</code>
     * of the port mapping.</p>
     */
    inline LoadBalancer& WithContainerPort(int value) { SetContainerPort(value); return *this;}

  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet;

    int m_containerPort;
    bool m_containerPortHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
