/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes the state of a Classic Load Balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LoadBalancerState">AWS
   * API Reference</a></p>
   */
  class LoadBalancerState
  {
  public:
    AWS_AUTOSCALING_API LoadBalancerState();
    AWS_AUTOSCALING_API LoadBalancerState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LoadBalancerState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <code>Adding</code> - The Auto Scaling instances are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All Auto Scaling
     * instances are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed an
     * <code>ELB</code> health check.</p> </li> <li> <p> <code>Removing</code> - The
     * Auto Scaling instances are being deregistered from the load balancer. If
     * connection draining is enabled, Elastic Load Balancing waits for in-flight
     * requests to complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the load
     * balancer.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The Auto Scaling instances are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All Auto Scaling
     * instances are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed an
     * <code>ELB</code> health check.</p> </li> <li> <p> <code>Removing</code> - The
     * Auto Scaling instances are being deregistered from the load balancer. If
     * connection draining is enabled, Elastic Load Balancing waits for in-flight
     * requests to complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the load
     * balancer.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The Auto Scaling instances are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All Auto Scaling
     * instances are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed an
     * <code>ELB</code> health check.</p> </li> <li> <p> <code>Removing</code> - The
     * Auto Scaling instances are being deregistered from the load balancer. If
     * connection draining is enabled, Elastic Load Balancing waits for in-flight
     * requests to complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the load
     * balancer.</p> </li> </ul>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The Auto Scaling instances are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All Auto Scaling
     * instances are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed an
     * <code>ELB</code> health check.</p> </li> <li> <p> <code>Removing</code> - The
     * Auto Scaling instances are being deregistered from the load balancer. If
     * connection draining is enabled, Elastic Load Balancing waits for in-flight
     * requests to complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the load
     * balancer.</p> </li> </ul>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The Auto Scaling instances are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All Auto Scaling
     * instances are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed an
     * <code>ELB</code> health check.</p> </li> <li> <p> <code>Removing</code> - The
     * Auto Scaling instances are being deregistered from the load balancer. If
     * connection draining is enabled, Elastic Load Balancing waits for in-flight
     * requests to complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the load
     * balancer.</p> </li> </ul>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The Auto Scaling instances are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All Auto Scaling
     * instances are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed an
     * <code>ELB</code> health check.</p> </li> <li> <p> <code>Removing</code> - The
     * Auto Scaling instances are being deregistered from the load balancer. If
     * connection draining is enabled, Elastic Load Balancing waits for in-flight
     * requests to complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the load
     * balancer.</p> </li> </ul>
     */
    inline LoadBalancerState& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The Auto Scaling instances are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All Auto Scaling
     * instances are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed an
     * <code>ELB</code> health check.</p> </li> <li> <p> <code>Removing</code> - The
     * Auto Scaling instances are being deregistered from the load balancer. If
     * connection draining is enabled, Elastic Load Balancing waits for in-flight
     * requests to complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the load
     * balancer.</p> </li> </ul>
     */
    inline LoadBalancerState& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>One of the following load balancer states:</p> <ul> <li> <p>
     * <code>Adding</code> - The Auto Scaling instances are being registered with the
     * load balancer.</p> </li> <li> <p> <code>Added</code> - All Auto Scaling
     * instances are registered with the load balancer.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed an
     * <code>ELB</code> health check.</p> </li> <li> <p> <code>Removing</code> - The
     * Auto Scaling instances are being deregistered from the load balancer. If
     * connection draining is enabled, Elastic Load Balancing waits for in-flight
     * requests to complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the load
     * balancer.</p> </li> </ul>
     */
    inline LoadBalancerState& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
