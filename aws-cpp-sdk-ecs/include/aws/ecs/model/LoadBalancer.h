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
   * <p>Details on a load balancer that is used with a service.</p>
   */
  class AWS_ECS_API LoadBalancer
  {
  public:
    LoadBalancer();
    LoadBalancer(const Aws::Utils::Json::JsonValue& jsonValue);
    LoadBalancer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group associated with a service.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group associated with a service.</p>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group associated with a service.</p>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group associated with a service.</p>
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group associated with a service.</p>
     */
    inline LoadBalancer& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group associated with a service.</p>
     */
    inline LoadBalancer& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the Elastic Load Balancing target
     * group associated with a service.</p>
     */
    inline LoadBalancer& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
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
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container (as it appears in a container definition) to
     * associate with the load balancer.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

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
    inline LoadBalancer& WithContainerName(Aws::String&& value) { SetContainerName(value); return *this;}

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
