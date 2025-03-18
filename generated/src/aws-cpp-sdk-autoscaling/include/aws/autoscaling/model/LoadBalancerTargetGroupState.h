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
   * <p>Describes the state of a target group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LoadBalancerTargetGroupState">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTargetGroupState
  {
  public:
    AWS_AUTOSCALING_API LoadBalancerTargetGroupState() = default;
    AWS_AUTOSCALING_API LoadBalancerTargetGroupState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LoadBalancerTargetGroupState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetLoadBalancerTargetGroupARN() const { return m_loadBalancerTargetGroupARN; }
    inline bool LoadBalancerTargetGroupARNHasBeenSet() const { return m_loadBalancerTargetGroupARNHasBeenSet; }
    template<typename LoadBalancerTargetGroupARNT = Aws::String>
    void SetLoadBalancerTargetGroupARN(LoadBalancerTargetGroupARNT&& value) { m_loadBalancerTargetGroupARNHasBeenSet = true; m_loadBalancerTargetGroupARN = std::forward<LoadBalancerTargetGroupARNT>(value); }
    template<typename LoadBalancerTargetGroupARNT = Aws::String>
    LoadBalancerTargetGroupState& WithLoadBalancerTargetGroupARN(LoadBalancerTargetGroupARNT&& value) { SetLoadBalancerTargetGroupARN(std::forward<LoadBalancerTargetGroupARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the target group.</p> <ul> <li> <p> <code>Adding</code> - The
     * Auto Scaling instances are being registered with the target group.</p> </li>
     * <li> <p> <code>Added</code> - All Auto Scaling instances are registered with the
     * target group.</p> </li> <li> <p> <code>InService</code> - At least one Auto
     * Scaling instance passed an <code>ELB</code> health check.</p> </li> <li> <p>
     * <code>Removing</code> - The Auto Scaling instances are being deregistered from
     * the target group. If connection draining is enabled, Elastic Load Balancing
     * waits for in-flight requests to complete before deregistering the instances.</p>
     * </li> <li> <p> <code>Removed</code> - All Auto Scaling instances are
     * deregistered from the target group.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    LoadBalancerTargetGroupState& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerTargetGroupARN;
    bool m_loadBalancerTargetGroupARNHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
