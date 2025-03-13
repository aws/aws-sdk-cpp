/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/model/TargetHealthStateEnum.h>
#include <aws/elasticloadbalancingv2/model/TargetHealthReasonEnum.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about the current health of a target.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/TargetHealth">AWS
   * API Reference</a></p>
   */
  class TargetHealth
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API TargetHealth() = default;
    AWS_ELASTICLOADBALANCINGV2_API TargetHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TargetHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the target.</p>
     */
    inline TargetHealthStateEnum GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TargetHealthStateEnum value) { m_stateHasBeenSet = true; m_state = value; }
    inline TargetHealth& WithState(TargetHealthStateEnum value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code.</p> <p>If the target state is <code>healthy</code>, a reason
     * code is not provided.</p> <p>If the target state is <code>initial</code>, the
     * reason code can be one of the following values:</p> <ul> <li> <p>
     * <code>Elb.RegistrationInProgress</code> - The target is in the process of being
     * registered with the load balancer.</p> </li> <li> <p>
     * <code>Elb.InitialHealthChecking</code> - The load balancer is still sending the
     * target the minimum number of health checks required to determine its health
     * status.</p> </li> </ul> <p>If the target state is <code>unhealthy</code>, the
     * reason code can be one of the following values:</p> <ul> <li> <p>
     * <code>Target.ResponseCodeMismatch</code> - The health checks did not return an
     * expected HTTP code. Applies only to Application Load Balancers and Gateway Load
     * Balancers.</p> </li> <li> <p> <code>Target.Timeout</code> - The health check
     * requests timed out. Applies only to Application Load Balancers and Gateway Load
     * Balancers.</p> </li> <li> <p> <code>Target.FailedHealthChecks</code> - The load
     * balancer received an error while establishing a connection to the target or the
     * target response was malformed.</p> </li> <li> <p> <code>Elb.InternalError</code>
     * - The health checks failed due to an internal error. Applies only to Application
     * Load Balancers.</p> </li> </ul> <p>If the target state is <code>unused</code>,
     * the reason code can be one of the following values:</p> <ul> <li> <p>
     * <code>Target.NotRegistered</code> - The target is not registered with the target
     * group.</p> </li> <li> <p> <code>Target.NotInUse</code> - The target group is not
     * used by any load balancer or the target is in an Availability Zone that is not
     * enabled for its load balancer.</p> </li> <li> <p>
     * <code>Target.InvalidState</code> - The target is in the stopped or terminated
     * state.</p> </li> <li> <p> <code>Target.IpUnusable</code> - The target IP address
     * is reserved for use by a load balancer.</p> </li> </ul> <p>If the target state
     * is <code>draining</code>, the reason code can be the following value:</p> <ul>
     * <li> <p> <code>Target.DeregistrationInProgress</code> - The target is in the
     * process of being deregistered and the deregistration delay period has not
     * expired.</p> </li> </ul> <p>If the target state is <code>unavailable</code>, the
     * reason code can be the following value:</p> <ul> <li> <p>
     * <code>Target.HealthCheckDisabled</code> - Health checks are disabled for the
     * target group. Applies only to Application Load Balancers.</p> </li> <li> <p>
     * <code>Elb.InternalError</code> - Target health is unavailable due to an internal
     * error. Applies only to Network Load Balancers.</p> </li> </ul>
     */
    inline TargetHealthReasonEnum GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(TargetHealthReasonEnum value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline TargetHealth& WithReason(TargetHealthReasonEnum value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TargetHealth& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    TargetHealthStateEnum m_state{TargetHealthStateEnum::NOT_SET};
    bool m_stateHasBeenSet = false;

    TargetHealthReasonEnum m_reason{TargetHealthReasonEnum::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
