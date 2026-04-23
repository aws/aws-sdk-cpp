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
   * <p>Describes the state of a target group.</p> <p>If you attach a target group to
   * an existing Auto Scaling group, the initial state is <code>Adding</code>. The
   * state transitions to <code>Added</code> after all Auto Scaling instances are
   * registered with the target group. If Elastic Load Balancing health checks are
   * enabled, the state transitions to <code>InService</code> after at least one Auto
   * Scaling instance passes the health check. If EC2 health checks are enabled
   * instead, the target group remains in the <code>Added</code> state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LoadBalancerTargetGroupState">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API LoadBalancerTargetGroupState
  {
  public:
    LoadBalancerTargetGroupState();
    LoadBalancerTargetGroupState(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadBalancerTargetGroupState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetLoadBalancerTargetGroupARN() const{ return m_loadBalancerTargetGroupARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline bool LoadBalancerTargetGroupARNHasBeenSet() const { return m_loadBalancerTargetGroupARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetLoadBalancerTargetGroupARN(const Aws::String& value) { m_loadBalancerTargetGroupARNHasBeenSet = true; m_loadBalancerTargetGroupARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetLoadBalancerTargetGroupARN(Aws::String&& value) { m_loadBalancerTargetGroupARNHasBeenSet = true; m_loadBalancerTargetGroupARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetLoadBalancerTargetGroupARN(const char* value) { m_loadBalancerTargetGroupARNHasBeenSet = true; m_loadBalancerTargetGroupARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline LoadBalancerTargetGroupState& WithLoadBalancerTargetGroupARN(const Aws::String& value) { SetLoadBalancerTargetGroupARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline LoadBalancerTargetGroupState& WithLoadBalancerTargetGroupARN(Aws::String&& value) { SetLoadBalancerTargetGroupARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline LoadBalancerTargetGroupState& WithLoadBalancerTargetGroupARN(const char* value) { SetLoadBalancerTargetGroupARN(value); return *this;}


    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an ELB health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an ELB health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an ELB health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an ELB health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an ELB health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an ELB health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline LoadBalancerTargetGroupState& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an ELB health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline LoadBalancerTargetGroupState& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an ELB health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline LoadBalancerTargetGroupState& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_loadBalancerTargetGroupARN;
    bool m_loadBalancerTargetGroupARNHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
