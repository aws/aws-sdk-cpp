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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes the state of a Classic Load Balancer.</p> <p>If you specify a load
   * balancer when creating the Auto Scaling group, the state of the load balancer is
   * <code>InService</code>.</p> <p>If you attach a load balancer to an existing Auto
   * Scaling group, the initial state is <code>Adding</code>. The state transitions
   * to <code>Added</code> after all instances in the group are registered with the
   * load balancer. If Elastic Load Balancing health checks are enabled for the load
   * balancer, the state transitions to <code>InService</code> after at least one
   * instance in the group passes the health check. If EC2 health checks are enabled
   * instead, the load balancer remains in the <code>Added</code>
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LoadBalancerState">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API LoadBalancerState
  {
  public:
    LoadBalancerState();
    LoadBalancerState(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadBalancerState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancerState& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancerState& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancerState& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The instances in the group are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All instances in the
     * group are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one instance in the group passed an ELB health
     * check.</p> </li> <li> <p> <code>Removing</code> - The instances in the group are
     * being deregistered from the load balancer. If connection draining is enabled,
     * Elastic Load Balancing waits for in-flight requests to complete before
     * deregistering the instances.</p> </li> <li> <p> <code>Removed</code> - All
     * instances in the group are deregistered from the load balancer.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The instances in the group are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All instances in the
     * group are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one instance in the group passed an ELB health
     * check.</p> </li> <li> <p> <code>Removing</code> - The instances in the group are
     * being deregistered from the load balancer. If connection draining is enabled,
     * Elastic Load Balancing waits for in-flight requests to complete before
     * deregistering the instances.</p> </li> <li> <p> <code>Removed</code> - All
     * instances in the group are deregistered from the load balancer.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The instances in the group are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All instances in the
     * group are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one instance in the group passed an ELB health
     * check.</p> </li> <li> <p> <code>Removing</code> - The instances in the group are
     * being deregistered from the load balancer. If connection draining is enabled,
     * Elastic Load Balancing waits for in-flight requests to complete before
     * deregistering the instances.</p> </li> <li> <p> <code>Removed</code> - All
     * instances in the group are deregistered from the load balancer.</p> </li> </ul>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The instances in the group are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All instances in the
     * group are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one instance in the group passed an ELB health
     * check.</p> </li> <li> <p> <code>Removing</code> - The instances in the group are
     * being deregistered from the load balancer. If connection draining is enabled,
     * Elastic Load Balancing waits for in-flight requests to complete before
     * deregistering the instances.</p> </li> <li> <p> <code>Removed</code> - All
     * instances in the group are deregistered from the load balancer.</p> </li> </ul>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The instances in the group are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All instances in the
     * group are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one instance in the group passed an ELB health
     * check.</p> </li> <li> <p> <code>Removing</code> - The instances in the group are
     * being deregistered from the load balancer. If connection draining is enabled,
     * Elastic Load Balancing waits for in-flight requests to complete before
     * deregistering the instances.</p> </li> <li> <p> <code>Removed</code> - All
     * instances in the group are deregistered from the load balancer.</p> </li> </ul>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The instances in the group are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All instances in the
     * group are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one instance in the group passed an ELB health
     * check.</p> </li> <li> <p> <code>Removing</code> - The instances in the group are
     * being deregistered from the load balancer. If connection draining is enabled,
     * Elastic Load Balancing waits for in-flight requests to complete before
     * deregistering the instances.</p> </li> <li> <p> <code>Removed</code> - All
     * instances in the group are deregistered from the load balancer.</p> </li> </ul>
     */
    inline LoadBalancerState& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The instances in the group are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All instances in the
     * group are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one instance in the group passed an ELB health
     * check.</p> </li> <li> <p> <code>Removing</code> - The instances in the group are
     * being deregistered from the load balancer. If connection draining is enabled,
     * Elastic Load Balancing waits for in-flight requests to complete before
     * deregistering the instances.</p> </li> <li> <p> <code>Removed</code> - All
     * instances in the group are deregistered from the load balancer.</p> </li> </ul>
     */
    inline LoadBalancerState& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The instances in the group are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All instances in the
     * group are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one instance in the group passed an ELB health
     * check.</p> </li> <li> <p> <code>Removing</code> - The instances in the group are
     * being deregistered from the load balancer. If connection draining is enabled,
     * Elastic Load Balancing waits for in-flight requests to complete before
     * deregistering the instances.</p> </li> <li> <p> <code>Removed</code> - All
     * instances in the group are deregistered from the load balancer.</p> </li> </ul>
     */
    inline LoadBalancerState& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
