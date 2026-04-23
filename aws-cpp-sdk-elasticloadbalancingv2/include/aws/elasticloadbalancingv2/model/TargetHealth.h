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
  class AWS_ELASTICLOADBALANCINGV2_API TargetHealth
  {
  public:
    TargetHealth();
    TargetHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the target.</p>
     */
    inline const TargetHealthStateEnum& GetState() const{ return m_state; }

    /**
     * <p>The state of the target.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the target.</p>
     */
    inline void SetState(const TargetHealthStateEnum& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the target.</p>
     */
    inline void SetState(TargetHealthStateEnum&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the target.</p>
     */
    inline TargetHealth& WithState(const TargetHealthStateEnum& value) { SetState(value); return *this;}

    /**
     * <p>The state of the target.</p>
     */
    inline TargetHealth& WithState(TargetHealthStateEnum&& value) { SetState(std::move(value)); return *this;}


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
     * expected HTTP code.</p> </li> <li> <p> <code>Target.Timeout</code> - The health
     * check requests timed out.</p> </li> <li> <p>
     * <code>Target.FailedHealthChecks</code> - The health checks failed because the
     * connection to the target timed out, the target response was malformed, or the
     * target failed the health check for an unknown reason.</p> </li> <li> <p>
     * <code>Elb.InternalError</code> - The health checks failed due to an internal
     * error.</p> </li> </ul> <p>If the target state is <code>unused</code>, the reason
     * code can be one of the following values:</p> <ul> <li> <p>
     * <code>Target.NotRegistered</code> - The target is not registered with the target
     * group.</p> </li> <li> <p> <code>Target.NotInUse</code> - The target group is not
     * used by any load balancer or the target is in an Availability Zone that is not
     * enabled for its load balancer.</p> </li> <li> <p> <code>Target.IpUnusable</code>
     * - The target IP address is reserved for use by a load balancer.</p> </li> <li>
     * <p> <code>Target.InvalidState</code> - The target is in the stopped or
     * terminated state.</p> </li> </ul> <p>If the target state is
     * <code>draining</code>, the reason code can be the following value:</p> <ul> <li>
     * <p> <code>Target.DeregistrationInProgress</code> - The target is in the process
     * of being deregistered and the deregistration delay period has not expired.</p>
     * </li> </ul> <p>If the target state is <code>unavailable</code>, the reason code
     * can be the following value:</p> <ul> <li> <p>
     * <code>Target.HealthCheckDisabled</code> - Health checks are disabled for the
     * target group.</p> </li> </ul>
     */
    inline const TargetHealthReasonEnum& GetReason() const{ return m_reason; }

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
     * expected HTTP code.</p> </li> <li> <p> <code>Target.Timeout</code> - The health
     * check requests timed out.</p> </li> <li> <p>
     * <code>Target.FailedHealthChecks</code> - The health checks failed because the
     * connection to the target timed out, the target response was malformed, or the
     * target failed the health check for an unknown reason.</p> </li> <li> <p>
     * <code>Elb.InternalError</code> - The health checks failed due to an internal
     * error.</p> </li> </ul> <p>If the target state is <code>unused</code>, the reason
     * code can be one of the following values:</p> <ul> <li> <p>
     * <code>Target.NotRegistered</code> - The target is not registered with the target
     * group.</p> </li> <li> <p> <code>Target.NotInUse</code> - The target group is not
     * used by any load balancer or the target is in an Availability Zone that is not
     * enabled for its load balancer.</p> </li> <li> <p> <code>Target.IpUnusable</code>
     * - The target IP address is reserved for use by a load balancer.</p> </li> <li>
     * <p> <code>Target.InvalidState</code> - The target is in the stopped or
     * terminated state.</p> </li> </ul> <p>If the target state is
     * <code>draining</code>, the reason code can be the following value:</p> <ul> <li>
     * <p> <code>Target.DeregistrationInProgress</code> - The target is in the process
     * of being deregistered and the deregistration delay period has not expired.</p>
     * </li> </ul> <p>If the target state is <code>unavailable</code>, the reason code
     * can be the following value:</p> <ul> <li> <p>
     * <code>Target.HealthCheckDisabled</code> - Health checks are disabled for the
     * target group.</p> </li> </ul>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

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
     * expected HTTP code.</p> </li> <li> <p> <code>Target.Timeout</code> - The health
     * check requests timed out.</p> </li> <li> <p>
     * <code>Target.FailedHealthChecks</code> - The health checks failed because the
     * connection to the target timed out, the target response was malformed, or the
     * target failed the health check for an unknown reason.</p> </li> <li> <p>
     * <code>Elb.InternalError</code> - The health checks failed due to an internal
     * error.</p> </li> </ul> <p>If the target state is <code>unused</code>, the reason
     * code can be one of the following values:</p> <ul> <li> <p>
     * <code>Target.NotRegistered</code> - The target is not registered with the target
     * group.</p> </li> <li> <p> <code>Target.NotInUse</code> - The target group is not
     * used by any load balancer or the target is in an Availability Zone that is not
     * enabled for its load balancer.</p> </li> <li> <p> <code>Target.IpUnusable</code>
     * - The target IP address is reserved for use by a load balancer.</p> </li> <li>
     * <p> <code>Target.InvalidState</code> - The target is in the stopped or
     * terminated state.</p> </li> </ul> <p>If the target state is
     * <code>draining</code>, the reason code can be the following value:</p> <ul> <li>
     * <p> <code>Target.DeregistrationInProgress</code> - The target is in the process
     * of being deregistered and the deregistration delay period has not expired.</p>
     * </li> </ul> <p>If the target state is <code>unavailable</code>, the reason code
     * can be the following value:</p> <ul> <li> <p>
     * <code>Target.HealthCheckDisabled</code> - Health checks are disabled for the
     * target group.</p> </li> </ul>
     */
    inline void SetReason(const TargetHealthReasonEnum& value) { m_reasonHasBeenSet = true; m_reason = value; }

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
     * expected HTTP code.</p> </li> <li> <p> <code>Target.Timeout</code> - The health
     * check requests timed out.</p> </li> <li> <p>
     * <code>Target.FailedHealthChecks</code> - The health checks failed because the
     * connection to the target timed out, the target response was malformed, or the
     * target failed the health check for an unknown reason.</p> </li> <li> <p>
     * <code>Elb.InternalError</code> - The health checks failed due to an internal
     * error.</p> </li> </ul> <p>If the target state is <code>unused</code>, the reason
     * code can be one of the following values:</p> <ul> <li> <p>
     * <code>Target.NotRegistered</code> - The target is not registered with the target
     * group.</p> </li> <li> <p> <code>Target.NotInUse</code> - The target group is not
     * used by any load balancer or the target is in an Availability Zone that is not
     * enabled for its load balancer.</p> </li> <li> <p> <code>Target.IpUnusable</code>
     * - The target IP address is reserved for use by a load balancer.</p> </li> <li>
     * <p> <code>Target.InvalidState</code> - The target is in the stopped or
     * terminated state.</p> </li> </ul> <p>If the target state is
     * <code>draining</code>, the reason code can be the following value:</p> <ul> <li>
     * <p> <code>Target.DeregistrationInProgress</code> - The target is in the process
     * of being deregistered and the deregistration delay period has not expired.</p>
     * </li> </ul> <p>If the target state is <code>unavailable</code>, the reason code
     * can be the following value:</p> <ul> <li> <p>
     * <code>Target.HealthCheckDisabled</code> - Health checks are disabled for the
     * target group.</p> </li> </ul>
     */
    inline void SetReason(TargetHealthReasonEnum&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

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
     * expected HTTP code.</p> </li> <li> <p> <code>Target.Timeout</code> - The health
     * check requests timed out.</p> </li> <li> <p>
     * <code>Target.FailedHealthChecks</code> - The health checks failed because the
     * connection to the target timed out, the target response was malformed, or the
     * target failed the health check for an unknown reason.</p> </li> <li> <p>
     * <code>Elb.InternalError</code> - The health checks failed due to an internal
     * error.</p> </li> </ul> <p>If the target state is <code>unused</code>, the reason
     * code can be one of the following values:</p> <ul> <li> <p>
     * <code>Target.NotRegistered</code> - The target is not registered with the target
     * group.</p> </li> <li> <p> <code>Target.NotInUse</code> - The target group is not
     * used by any load balancer or the target is in an Availability Zone that is not
     * enabled for its load balancer.</p> </li> <li> <p> <code>Target.IpUnusable</code>
     * - The target IP address is reserved for use by a load balancer.</p> </li> <li>
     * <p> <code>Target.InvalidState</code> - The target is in the stopped or
     * terminated state.</p> </li> </ul> <p>If the target state is
     * <code>draining</code>, the reason code can be the following value:</p> <ul> <li>
     * <p> <code>Target.DeregistrationInProgress</code> - The target is in the process
     * of being deregistered and the deregistration delay period has not expired.</p>
     * </li> </ul> <p>If the target state is <code>unavailable</code>, the reason code
     * can be the following value:</p> <ul> <li> <p>
     * <code>Target.HealthCheckDisabled</code> - Health checks are disabled for the
     * target group.</p> </li> </ul>
     */
    inline TargetHealth& WithReason(const TargetHealthReasonEnum& value) { SetReason(value); return *this;}

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
     * expected HTTP code.</p> </li> <li> <p> <code>Target.Timeout</code> - The health
     * check requests timed out.</p> </li> <li> <p>
     * <code>Target.FailedHealthChecks</code> - The health checks failed because the
     * connection to the target timed out, the target response was malformed, or the
     * target failed the health check for an unknown reason.</p> </li> <li> <p>
     * <code>Elb.InternalError</code> - The health checks failed due to an internal
     * error.</p> </li> </ul> <p>If the target state is <code>unused</code>, the reason
     * code can be one of the following values:</p> <ul> <li> <p>
     * <code>Target.NotRegistered</code> - The target is not registered with the target
     * group.</p> </li> <li> <p> <code>Target.NotInUse</code> - The target group is not
     * used by any load balancer or the target is in an Availability Zone that is not
     * enabled for its load balancer.</p> </li> <li> <p> <code>Target.IpUnusable</code>
     * - The target IP address is reserved for use by a load balancer.</p> </li> <li>
     * <p> <code>Target.InvalidState</code> - The target is in the stopped or
     * terminated state.</p> </li> </ul> <p>If the target state is
     * <code>draining</code>, the reason code can be the following value:</p> <ul> <li>
     * <p> <code>Target.DeregistrationInProgress</code> - The target is in the process
     * of being deregistered and the deregistration delay period has not expired.</p>
     * </li> </ul> <p>If the target state is <code>unavailable</code>, the reason code
     * can be the following value:</p> <ul> <li> <p>
     * <code>Target.HealthCheckDisabled</code> - Health checks are disabled for the
     * target group.</p> </li> </ul>
     */
    inline TargetHealth& WithReason(TargetHealthReasonEnum&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline TargetHealth& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline TargetHealth& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the target health that provides additional details. If the
     * state is <code>healthy</code>, a description is not provided.</p>
     */
    inline TargetHealth& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    TargetHealthStateEnum m_state;
    bool m_stateHasBeenSet;

    TargetHealthReasonEnum m_reason;
    bool m_reasonHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
