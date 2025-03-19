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
    AWS_AUTOSCALING_API LoadBalancerState() = default;
    AWS_AUTOSCALING_API LoadBalancerState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LoadBalancerState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    LoadBalancerState& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    LoadBalancerState& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
