/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an EC2 Fleet or Spot Fleet event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EventInformation">AWS
   * API Reference</a></p>
   */
  class EventInformation
  {
  public:
    AWS_EC2_API EventInformation();
    AWS_EC2_API EventInformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EventInformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The description of the event.</p>
     */
    inline const Aws::String& GetEventDescription() const{ return m_eventDescription; }

    /**
     * <p>The description of the event.</p>
     */
    inline bool EventDescriptionHasBeenSet() const { return m_eventDescriptionHasBeenSet; }

    /**
     * <p>The description of the event.</p>
     */
    inline void SetEventDescription(const Aws::String& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = value; }

    /**
     * <p>The description of the event.</p>
     */
    inline void SetEventDescription(Aws::String&& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = std::move(value); }

    /**
     * <p>The description of the event.</p>
     */
    inline void SetEventDescription(const char* value) { m_eventDescriptionHasBeenSet = true; m_eventDescription.assign(value); }

    /**
     * <p>The description of the event.</p>
     */
    inline EventInformation& WithEventDescription(const Aws::String& value) { SetEventDescription(value); return *this;}

    /**
     * <p>The description of the event.</p>
     */
    inline EventInformation& WithEventDescription(Aws::String&& value) { SetEventDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the event.</p>
     */
    inline EventInformation& WithEventDescription(const char* value) { SetEventDescription(value); return *this;}


    /**
     * <p>The event.</p> <p> <code>error</code> events:</p> <ul> <li> <p>
     * <code>iamFleetRoleInvalid</code> - The EC2 Fleet or Spot Fleet does not have the
     * required permissions either to launch or terminate an instance.</p> </li> <li>
     * <p> <code>allLaunchSpecsTemporarilyBlacklisted</code> - None of the
     * configurations are valid, and several attempts to launch instances have failed.
     * For more information, see the description of the event.</p> </li> <li> <p>
     * <code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the
     * number of Spot Instances that you can launch.</p> </li> <li> <p>
     * <code>spotFleetRequestConfigurationInvalid</code> - The configuration is not
     * valid. For more information, see the description of the event.</p> </li> </ul>
     * <p> <code>fleetRequestChange</code> events:</p> <ul> <li> <p>
     * <code>active</code> - The EC2 Fleet or Spot Fleet request has been validated and
     * Amazon EC2 is attempting to maintain the target number of running instances.</p>
     * </li> <li> <p> <code>deleted</code> (EC2 Fleet) / <code>cancelled</code> (Spot
     * Fleet) - The EC2 Fleet is deleted or the Spot Fleet request is canceled and has
     * no running instances. The EC2 Fleet or Spot Fleet will be deleted two days after
     * its instances are terminated.</p> </li> <li> <p> <code>deleted_running</code>
     * (EC2 Fleet) / <code>cancelled_running</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and does not launch additional
     * instances. Its existing instances continue to run until they are interrupted or
     * terminated. The request remains in this state until all instances are
     * interrupted or terminated.</p> </li> <li> <p> <code>deleted_terminating</code>
     * (EC2 Fleet) / <code>cancelled_terminating</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and its instances are terminating.
     * The request remains in this state until all instances are terminated.</p> </li>
     * <li> <p> <code>expired</code> - The EC2 Fleet or Spot Fleet request has expired.
     * If the request was created with <code>TerminateInstancesWithExpiration</code>
     * set, a subsequent <code>terminated</code> event indicates that the instances are
     * terminated.</p> </li> <li> <p> <code>modify_in_progress</code> - The EC2 Fleet
     * or Spot Fleet request is being modified. The request remains in this state until
     * the modification is fully processed.</p> </li> <li> <p>
     * <code>modify_succeeded</code> - The EC2 Fleet or Spot Fleet request was
     * modified.</p> </li> <li> <p> <code>submitted</code> - The EC2 Fleet or Spot
     * Fleet request is being evaluated and Amazon EC2 is preparing to launch the
     * target number of instances.</p> </li> <li> <p> <code>progress</code> - The EC2
     * Fleet or Spot Fleet request is in the process of being fulfilled.</p> </li>
     * </ul> <p> <code>instanceChange</code> events:</p> <ul> <li> <p>
     * <code>launched</code> - A new instance was launched.</p> </li> <li> <p>
     * <code>terminated</code> - An instance was terminated by the user.</p> </li> <li>
     * <p> <code>termination_notified</code> - An instance termination notification was
     * sent when a Spot Instance was terminated by Amazon EC2 during scale-down, when
     * the target capacity of the fleet was modified down, for example, from a target
     * capacity of 4 to a target capacity of 3.</p> </li> </ul> <p>
     * <code>Information</code> events:</p> <ul> <li> <p>
     * <code>fleetProgressHalted</code> - The price in every launch specification is
     * not valid because it is below the Spot price (all the launch specifications have
     * produced <code>launchSpecUnusable</code> events). A launch specification might
     * become valid if the Spot price changes.</p> </li> <li> <p>
     * <code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid
     * and several attempts to launch instances have failed. For more information, see
     * the description of the event.</p> </li> <li> <p> <code>launchSpecUnusable</code>
     * - The price in a launch specification is not valid because it is below the Spot
     * price.</p> </li> <li> <p> <code>registerWithLoadBalancersFailed</code> - An
     * attempt to register instances with load balancers failed. For more information,
     * see the description of the event.</p> </li> </ul>
     */
    inline const Aws::String& GetEventSubType() const{ return m_eventSubType; }

    /**
     * <p>The event.</p> <p> <code>error</code> events:</p> <ul> <li> <p>
     * <code>iamFleetRoleInvalid</code> - The EC2 Fleet or Spot Fleet does not have the
     * required permissions either to launch or terminate an instance.</p> </li> <li>
     * <p> <code>allLaunchSpecsTemporarilyBlacklisted</code> - None of the
     * configurations are valid, and several attempts to launch instances have failed.
     * For more information, see the description of the event.</p> </li> <li> <p>
     * <code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the
     * number of Spot Instances that you can launch.</p> </li> <li> <p>
     * <code>spotFleetRequestConfigurationInvalid</code> - The configuration is not
     * valid. For more information, see the description of the event.</p> </li> </ul>
     * <p> <code>fleetRequestChange</code> events:</p> <ul> <li> <p>
     * <code>active</code> - The EC2 Fleet or Spot Fleet request has been validated and
     * Amazon EC2 is attempting to maintain the target number of running instances.</p>
     * </li> <li> <p> <code>deleted</code> (EC2 Fleet) / <code>cancelled</code> (Spot
     * Fleet) - The EC2 Fleet is deleted or the Spot Fleet request is canceled and has
     * no running instances. The EC2 Fleet or Spot Fleet will be deleted two days after
     * its instances are terminated.</p> </li> <li> <p> <code>deleted_running</code>
     * (EC2 Fleet) / <code>cancelled_running</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and does not launch additional
     * instances. Its existing instances continue to run until they are interrupted or
     * terminated. The request remains in this state until all instances are
     * interrupted or terminated.</p> </li> <li> <p> <code>deleted_terminating</code>
     * (EC2 Fleet) / <code>cancelled_terminating</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and its instances are terminating.
     * The request remains in this state until all instances are terminated.</p> </li>
     * <li> <p> <code>expired</code> - The EC2 Fleet or Spot Fleet request has expired.
     * If the request was created with <code>TerminateInstancesWithExpiration</code>
     * set, a subsequent <code>terminated</code> event indicates that the instances are
     * terminated.</p> </li> <li> <p> <code>modify_in_progress</code> - The EC2 Fleet
     * or Spot Fleet request is being modified. The request remains in this state until
     * the modification is fully processed.</p> </li> <li> <p>
     * <code>modify_succeeded</code> - The EC2 Fleet or Spot Fleet request was
     * modified.</p> </li> <li> <p> <code>submitted</code> - The EC2 Fleet or Spot
     * Fleet request is being evaluated and Amazon EC2 is preparing to launch the
     * target number of instances.</p> </li> <li> <p> <code>progress</code> - The EC2
     * Fleet or Spot Fleet request is in the process of being fulfilled.</p> </li>
     * </ul> <p> <code>instanceChange</code> events:</p> <ul> <li> <p>
     * <code>launched</code> - A new instance was launched.</p> </li> <li> <p>
     * <code>terminated</code> - An instance was terminated by the user.</p> </li> <li>
     * <p> <code>termination_notified</code> - An instance termination notification was
     * sent when a Spot Instance was terminated by Amazon EC2 during scale-down, when
     * the target capacity of the fleet was modified down, for example, from a target
     * capacity of 4 to a target capacity of 3.</p> </li> </ul> <p>
     * <code>Information</code> events:</p> <ul> <li> <p>
     * <code>fleetProgressHalted</code> - The price in every launch specification is
     * not valid because it is below the Spot price (all the launch specifications have
     * produced <code>launchSpecUnusable</code> events). A launch specification might
     * become valid if the Spot price changes.</p> </li> <li> <p>
     * <code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid
     * and several attempts to launch instances have failed. For more information, see
     * the description of the event.</p> </li> <li> <p> <code>launchSpecUnusable</code>
     * - The price in a launch specification is not valid because it is below the Spot
     * price.</p> </li> <li> <p> <code>registerWithLoadBalancersFailed</code> - An
     * attempt to register instances with load balancers failed. For more information,
     * see the description of the event.</p> </li> </ul>
     */
    inline bool EventSubTypeHasBeenSet() const { return m_eventSubTypeHasBeenSet; }

    /**
     * <p>The event.</p> <p> <code>error</code> events:</p> <ul> <li> <p>
     * <code>iamFleetRoleInvalid</code> - The EC2 Fleet or Spot Fleet does not have the
     * required permissions either to launch or terminate an instance.</p> </li> <li>
     * <p> <code>allLaunchSpecsTemporarilyBlacklisted</code> - None of the
     * configurations are valid, and several attempts to launch instances have failed.
     * For more information, see the description of the event.</p> </li> <li> <p>
     * <code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the
     * number of Spot Instances that you can launch.</p> </li> <li> <p>
     * <code>spotFleetRequestConfigurationInvalid</code> - The configuration is not
     * valid. For more information, see the description of the event.</p> </li> </ul>
     * <p> <code>fleetRequestChange</code> events:</p> <ul> <li> <p>
     * <code>active</code> - The EC2 Fleet or Spot Fleet request has been validated and
     * Amazon EC2 is attempting to maintain the target number of running instances.</p>
     * </li> <li> <p> <code>deleted</code> (EC2 Fleet) / <code>cancelled</code> (Spot
     * Fleet) - The EC2 Fleet is deleted or the Spot Fleet request is canceled and has
     * no running instances. The EC2 Fleet or Spot Fleet will be deleted two days after
     * its instances are terminated.</p> </li> <li> <p> <code>deleted_running</code>
     * (EC2 Fleet) / <code>cancelled_running</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and does not launch additional
     * instances. Its existing instances continue to run until they are interrupted or
     * terminated. The request remains in this state until all instances are
     * interrupted or terminated.</p> </li> <li> <p> <code>deleted_terminating</code>
     * (EC2 Fleet) / <code>cancelled_terminating</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and its instances are terminating.
     * The request remains in this state until all instances are terminated.</p> </li>
     * <li> <p> <code>expired</code> - The EC2 Fleet or Spot Fleet request has expired.
     * If the request was created with <code>TerminateInstancesWithExpiration</code>
     * set, a subsequent <code>terminated</code> event indicates that the instances are
     * terminated.</p> </li> <li> <p> <code>modify_in_progress</code> - The EC2 Fleet
     * or Spot Fleet request is being modified. The request remains in this state until
     * the modification is fully processed.</p> </li> <li> <p>
     * <code>modify_succeeded</code> - The EC2 Fleet or Spot Fleet request was
     * modified.</p> </li> <li> <p> <code>submitted</code> - The EC2 Fleet or Spot
     * Fleet request is being evaluated and Amazon EC2 is preparing to launch the
     * target number of instances.</p> </li> <li> <p> <code>progress</code> - The EC2
     * Fleet or Spot Fleet request is in the process of being fulfilled.</p> </li>
     * </ul> <p> <code>instanceChange</code> events:</p> <ul> <li> <p>
     * <code>launched</code> - A new instance was launched.</p> </li> <li> <p>
     * <code>terminated</code> - An instance was terminated by the user.</p> </li> <li>
     * <p> <code>termination_notified</code> - An instance termination notification was
     * sent when a Spot Instance was terminated by Amazon EC2 during scale-down, when
     * the target capacity of the fleet was modified down, for example, from a target
     * capacity of 4 to a target capacity of 3.</p> </li> </ul> <p>
     * <code>Information</code> events:</p> <ul> <li> <p>
     * <code>fleetProgressHalted</code> - The price in every launch specification is
     * not valid because it is below the Spot price (all the launch specifications have
     * produced <code>launchSpecUnusable</code> events). A launch specification might
     * become valid if the Spot price changes.</p> </li> <li> <p>
     * <code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid
     * and several attempts to launch instances have failed. For more information, see
     * the description of the event.</p> </li> <li> <p> <code>launchSpecUnusable</code>
     * - The price in a launch specification is not valid because it is below the Spot
     * price.</p> </li> <li> <p> <code>registerWithLoadBalancersFailed</code> - An
     * attempt to register instances with load balancers failed. For more information,
     * see the description of the event.</p> </li> </ul>
     */
    inline void SetEventSubType(const Aws::String& value) { m_eventSubTypeHasBeenSet = true; m_eventSubType = value; }

    /**
     * <p>The event.</p> <p> <code>error</code> events:</p> <ul> <li> <p>
     * <code>iamFleetRoleInvalid</code> - The EC2 Fleet or Spot Fleet does not have the
     * required permissions either to launch or terminate an instance.</p> </li> <li>
     * <p> <code>allLaunchSpecsTemporarilyBlacklisted</code> - None of the
     * configurations are valid, and several attempts to launch instances have failed.
     * For more information, see the description of the event.</p> </li> <li> <p>
     * <code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the
     * number of Spot Instances that you can launch.</p> </li> <li> <p>
     * <code>spotFleetRequestConfigurationInvalid</code> - The configuration is not
     * valid. For more information, see the description of the event.</p> </li> </ul>
     * <p> <code>fleetRequestChange</code> events:</p> <ul> <li> <p>
     * <code>active</code> - The EC2 Fleet or Spot Fleet request has been validated and
     * Amazon EC2 is attempting to maintain the target number of running instances.</p>
     * </li> <li> <p> <code>deleted</code> (EC2 Fleet) / <code>cancelled</code> (Spot
     * Fleet) - The EC2 Fleet is deleted or the Spot Fleet request is canceled and has
     * no running instances. The EC2 Fleet or Spot Fleet will be deleted two days after
     * its instances are terminated.</p> </li> <li> <p> <code>deleted_running</code>
     * (EC2 Fleet) / <code>cancelled_running</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and does not launch additional
     * instances. Its existing instances continue to run until they are interrupted or
     * terminated. The request remains in this state until all instances are
     * interrupted or terminated.</p> </li> <li> <p> <code>deleted_terminating</code>
     * (EC2 Fleet) / <code>cancelled_terminating</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and its instances are terminating.
     * The request remains in this state until all instances are terminated.</p> </li>
     * <li> <p> <code>expired</code> - The EC2 Fleet or Spot Fleet request has expired.
     * If the request was created with <code>TerminateInstancesWithExpiration</code>
     * set, a subsequent <code>terminated</code> event indicates that the instances are
     * terminated.</p> </li> <li> <p> <code>modify_in_progress</code> - The EC2 Fleet
     * or Spot Fleet request is being modified. The request remains in this state until
     * the modification is fully processed.</p> </li> <li> <p>
     * <code>modify_succeeded</code> - The EC2 Fleet or Spot Fleet request was
     * modified.</p> </li> <li> <p> <code>submitted</code> - The EC2 Fleet or Spot
     * Fleet request is being evaluated and Amazon EC2 is preparing to launch the
     * target number of instances.</p> </li> <li> <p> <code>progress</code> - The EC2
     * Fleet or Spot Fleet request is in the process of being fulfilled.</p> </li>
     * </ul> <p> <code>instanceChange</code> events:</p> <ul> <li> <p>
     * <code>launched</code> - A new instance was launched.</p> </li> <li> <p>
     * <code>terminated</code> - An instance was terminated by the user.</p> </li> <li>
     * <p> <code>termination_notified</code> - An instance termination notification was
     * sent when a Spot Instance was terminated by Amazon EC2 during scale-down, when
     * the target capacity of the fleet was modified down, for example, from a target
     * capacity of 4 to a target capacity of 3.</p> </li> </ul> <p>
     * <code>Information</code> events:</p> <ul> <li> <p>
     * <code>fleetProgressHalted</code> - The price in every launch specification is
     * not valid because it is below the Spot price (all the launch specifications have
     * produced <code>launchSpecUnusable</code> events). A launch specification might
     * become valid if the Spot price changes.</p> </li> <li> <p>
     * <code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid
     * and several attempts to launch instances have failed. For more information, see
     * the description of the event.</p> </li> <li> <p> <code>launchSpecUnusable</code>
     * - The price in a launch specification is not valid because it is below the Spot
     * price.</p> </li> <li> <p> <code>registerWithLoadBalancersFailed</code> - An
     * attempt to register instances with load balancers failed. For more information,
     * see the description of the event.</p> </li> </ul>
     */
    inline void SetEventSubType(Aws::String&& value) { m_eventSubTypeHasBeenSet = true; m_eventSubType = std::move(value); }

    /**
     * <p>The event.</p> <p> <code>error</code> events:</p> <ul> <li> <p>
     * <code>iamFleetRoleInvalid</code> - The EC2 Fleet or Spot Fleet does not have the
     * required permissions either to launch or terminate an instance.</p> </li> <li>
     * <p> <code>allLaunchSpecsTemporarilyBlacklisted</code> - None of the
     * configurations are valid, and several attempts to launch instances have failed.
     * For more information, see the description of the event.</p> </li> <li> <p>
     * <code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the
     * number of Spot Instances that you can launch.</p> </li> <li> <p>
     * <code>spotFleetRequestConfigurationInvalid</code> - The configuration is not
     * valid. For more information, see the description of the event.</p> </li> </ul>
     * <p> <code>fleetRequestChange</code> events:</p> <ul> <li> <p>
     * <code>active</code> - The EC2 Fleet or Spot Fleet request has been validated and
     * Amazon EC2 is attempting to maintain the target number of running instances.</p>
     * </li> <li> <p> <code>deleted</code> (EC2 Fleet) / <code>cancelled</code> (Spot
     * Fleet) - The EC2 Fleet is deleted or the Spot Fleet request is canceled and has
     * no running instances. The EC2 Fleet or Spot Fleet will be deleted two days after
     * its instances are terminated.</p> </li> <li> <p> <code>deleted_running</code>
     * (EC2 Fleet) / <code>cancelled_running</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and does not launch additional
     * instances. Its existing instances continue to run until they are interrupted or
     * terminated. The request remains in this state until all instances are
     * interrupted or terminated.</p> </li> <li> <p> <code>deleted_terminating</code>
     * (EC2 Fleet) / <code>cancelled_terminating</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and its instances are terminating.
     * The request remains in this state until all instances are terminated.</p> </li>
     * <li> <p> <code>expired</code> - The EC2 Fleet or Spot Fleet request has expired.
     * If the request was created with <code>TerminateInstancesWithExpiration</code>
     * set, a subsequent <code>terminated</code> event indicates that the instances are
     * terminated.</p> </li> <li> <p> <code>modify_in_progress</code> - The EC2 Fleet
     * or Spot Fleet request is being modified. The request remains in this state until
     * the modification is fully processed.</p> </li> <li> <p>
     * <code>modify_succeeded</code> - The EC2 Fleet or Spot Fleet request was
     * modified.</p> </li> <li> <p> <code>submitted</code> - The EC2 Fleet or Spot
     * Fleet request is being evaluated and Amazon EC2 is preparing to launch the
     * target number of instances.</p> </li> <li> <p> <code>progress</code> - The EC2
     * Fleet or Spot Fleet request is in the process of being fulfilled.</p> </li>
     * </ul> <p> <code>instanceChange</code> events:</p> <ul> <li> <p>
     * <code>launched</code> - A new instance was launched.</p> </li> <li> <p>
     * <code>terminated</code> - An instance was terminated by the user.</p> </li> <li>
     * <p> <code>termination_notified</code> - An instance termination notification was
     * sent when a Spot Instance was terminated by Amazon EC2 during scale-down, when
     * the target capacity of the fleet was modified down, for example, from a target
     * capacity of 4 to a target capacity of 3.</p> </li> </ul> <p>
     * <code>Information</code> events:</p> <ul> <li> <p>
     * <code>fleetProgressHalted</code> - The price in every launch specification is
     * not valid because it is below the Spot price (all the launch specifications have
     * produced <code>launchSpecUnusable</code> events). A launch specification might
     * become valid if the Spot price changes.</p> </li> <li> <p>
     * <code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid
     * and several attempts to launch instances have failed. For more information, see
     * the description of the event.</p> </li> <li> <p> <code>launchSpecUnusable</code>
     * - The price in a launch specification is not valid because it is below the Spot
     * price.</p> </li> <li> <p> <code>registerWithLoadBalancersFailed</code> - An
     * attempt to register instances with load balancers failed. For more information,
     * see the description of the event.</p> </li> </ul>
     */
    inline void SetEventSubType(const char* value) { m_eventSubTypeHasBeenSet = true; m_eventSubType.assign(value); }

    /**
     * <p>The event.</p> <p> <code>error</code> events:</p> <ul> <li> <p>
     * <code>iamFleetRoleInvalid</code> - The EC2 Fleet or Spot Fleet does not have the
     * required permissions either to launch or terminate an instance.</p> </li> <li>
     * <p> <code>allLaunchSpecsTemporarilyBlacklisted</code> - None of the
     * configurations are valid, and several attempts to launch instances have failed.
     * For more information, see the description of the event.</p> </li> <li> <p>
     * <code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the
     * number of Spot Instances that you can launch.</p> </li> <li> <p>
     * <code>spotFleetRequestConfigurationInvalid</code> - The configuration is not
     * valid. For more information, see the description of the event.</p> </li> </ul>
     * <p> <code>fleetRequestChange</code> events:</p> <ul> <li> <p>
     * <code>active</code> - The EC2 Fleet or Spot Fleet request has been validated and
     * Amazon EC2 is attempting to maintain the target number of running instances.</p>
     * </li> <li> <p> <code>deleted</code> (EC2 Fleet) / <code>cancelled</code> (Spot
     * Fleet) - The EC2 Fleet is deleted or the Spot Fleet request is canceled and has
     * no running instances. The EC2 Fleet or Spot Fleet will be deleted two days after
     * its instances are terminated.</p> </li> <li> <p> <code>deleted_running</code>
     * (EC2 Fleet) / <code>cancelled_running</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and does not launch additional
     * instances. Its existing instances continue to run until they are interrupted or
     * terminated. The request remains in this state until all instances are
     * interrupted or terminated.</p> </li> <li> <p> <code>deleted_terminating</code>
     * (EC2 Fleet) / <code>cancelled_terminating</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and its instances are terminating.
     * The request remains in this state until all instances are terminated.</p> </li>
     * <li> <p> <code>expired</code> - The EC2 Fleet or Spot Fleet request has expired.
     * If the request was created with <code>TerminateInstancesWithExpiration</code>
     * set, a subsequent <code>terminated</code> event indicates that the instances are
     * terminated.</p> </li> <li> <p> <code>modify_in_progress</code> - The EC2 Fleet
     * or Spot Fleet request is being modified. The request remains in this state until
     * the modification is fully processed.</p> </li> <li> <p>
     * <code>modify_succeeded</code> - The EC2 Fleet or Spot Fleet request was
     * modified.</p> </li> <li> <p> <code>submitted</code> - The EC2 Fleet or Spot
     * Fleet request is being evaluated and Amazon EC2 is preparing to launch the
     * target number of instances.</p> </li> <li> <p> <code>progress</code> - The EC2
     * Fleet or Spot Fleet request is in the process of being fulfilled.</p> </li>
     * </ul> <p> <code>instanceChange</code> events:</p> <ul> <li> <p>
     * <code>launched</code> - A new instance was launched.</p> </li> <li> <p>
     * <code>terminated</code> - An instance was terminated by the user.</p> </li> <li>
     * <p> <code>termination_notified</code> - An instance termination notification was
     * sent when a Spot Instance was terminated by Amazon EC2 during scale-down, when
     * the target capacity of the fleet was modified down, for example, from a target
     * capacity of 4 to a target capacity of 3.</p> </li> </ul> <p>
     * <code>Information</code> events:</p> <ul> <li> <p>
     * <code>fleetProgressHalted</code> - The price in every launch specification is
     * not valid because it is below the Spot price (all the launch specifications have
     * produced <code>launchSpecUnusable</code> events). A launch specification might
     * become valid if the Spot price changes.</p> </li> <li> <p>
     * <code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid
     * and several attempts to launch instances have failed. For more information, see
     * the description of the event.</p> </li> <li> <p> <code>launchSpecUnusable</code>
     * - The price in a launch specification is not valid because it is below the Spot
     * price.</p> </li> <li> <p> <code>registerWithLoadBalancersFailed</code> - An
     * attempt to register instances with load balancers failed. For more information,
     * see the description of the event.</p> </li> </ul>
     */
    inline EventInformation& WithEventSubType(const Aws::String& value) { SetEventSubType(value); return *this;}

    /**
     * <p>The event.</p> <p> <code>error</code> events:</p> <ul> <li> <p>
     * <code>iamFleetRoleInvalid</code> - The EC2 Fleet or Spot Fleet does not have the
     * required permissions either to launch or terminate an instance.</p> </li> <li>
     * <p> <code>allLaunchSpecsTemporarilyBlacklisted</code> - None of the
     * configurations are valid, and several attempts to launch instances have failed.
     * For more information, see the description of the event.</p> </li> <li> <p>
     * <code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the
     * number of Spot Instances that you can launch.</p> </li> <li> <p>
     * <code>spotFleetRequestConfigurationInvalid</code> - The configuration is not
     * valid. For more information, see the description of the event.</p> </li> </ul>
     * <p> <code>fleetRequestChange</code> events:</p> <ul> <li> <p>
     * <code>active</code> - The EC2 Fleet or Spot Fleet request has been validated and
     * Amazon EC2 is attempting to maintain the target number of running instances.</p>
     * </li> <li> <p> <code>deleted</code> (EC2 Fleet) / <code>cancelled</code> (Spot
     * Fleet) - The EC2 Fleet is deleted or the Spot Fleet request is canceled and has
     * no running instances. The EC2 Fleet or Spot Fleet will be deleted two days after
     * its instances are terminated.</p> </li> <li> <p> <code>deleted_running</code>
     * (EC2 Fleet) / <code>cancelled_running</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and does not launch additional
     * instances. Its existing instances continue to run until they are interrupted or
     * terminated. The request remains in this state until all instances are
     * interrupted or terminated.</p> </li> <li> <p> <code>deleted_terminating</code>
     * (EC2 Fleet) / <code>cancelled_terminating</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and its instances are terminating.
     * The request remains in this state until all instances are terminated.</p> </li>
     * <li> <p> <code>expired</code> - The EC2 Fleet or Spot Fleet request has expired.
     * If the request was created with <code>TerminateInstancesWithExpiration</code>
     * set, a subsequent <code>terminated</code> event indicates that the instances are
     * terminated.</p> </li> <li> <p> <code>modify_in_progress</code> - The EC2 Fleet
     * or Spot Fleet request is being modified. The request remains in this state until
     * the modification is fully processed.</p> </li> <li> <p>
     * <code>modify_succeeded</code> - The EC2 Fleet or Spot Fleet request was
     * modified.</p> </li> <li> <p> <code>submitted</code> - The EC2 Fleet or Spot
     * Fleet request is being evaluated and Amazon EC2 is preparing to launch the
     * target number of instances.</p> </li> <li> <p> <code>progress</code> - The EC2
     * Fleet or Spot Fleet request is in the process of being fulfilled.</p> </li>
     * </ul> <p> <code>instanceChange</code> events:</p> <ul> <li> <p>
     * <code>launched</code> - A new instance was launched.</p> </li> <li> <p>
     * <code>terminated</code> - An instance was terminated by the user.</p> </li> <li>
     * <p> <code>termination_notified</code> - An instance termination notification was
     * sent when a Spot Instance was terminated by Amazon EC2 during scale-down, when
     * the target capacity of the fleet was modified down, for example, from a target
     * capacity of 4 to a target capacity of 3.</p> </li> </ul> <p>
     * <code>Information</code> events:</p> <ul> <li> <p>
     * <code>fleetProgressHalted</code> - The price in every launch specification is
     * not valid because it is below the Spot price (all the launch specifications have
     * produced <code>launchSpecUnusable</code> events). A launch specification might
     * become valid if the Spot price changes.</p> </li> <li> <p>
     * <code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid
     * and several attempts to launch instances have failed. For more information, see
     * the description of the event.</p> </li> <li> <p> <code>launchSpecUnusable</code>
     * - The price in a launch specification is not valid because it is below the Spot
     * price.</p> </li> <li> <p> <code>registerWithLoadBalancersFailed</code> - An
     * attempt to register instances with load balancers failed. For more information,
     * see the description of the event.</p> </li> </ul>
     */
    inline EventInformation& WithEventSubType(Aws::String&& value) { SetEventSubType(std::move(value)); return *this;}

    /**
     * <p>The event.</p> <p> <code>error</code> events:</p> <ul> <li> <p>
     * <code>iamFleetRoleInvalid</code> - The EC2 Fleet or Spot Fleet does not have the
     * required permissions either to launch or terminate an instance.</p> </li> <li>
     * <p> <code>allLaunchSpecsTemporarilyBlacklisted</code> - None of the
     * configurations are valid, and several attempts to launch instances have failed.
     * For more information, see the description of the event.</p> </li> <li> <p>
     * <code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the
     * number of Spot Instances that you can launch.</p> </li> <li> <p>
     * <code>spotFleetRequestConfigurationInvalid</code> - The configuration is not
     * valid. For more information, see the description of the event.</p> </li> </ul>
     * <p> <code>fleetRequestChange</code> events:</p> <ul> <li> <p>
     * <code>active</code> - The EC2 Fleet or Spot Fleet request has been validated and
     * Amazon EC2 is attempting to maintain the target number of running instances.</p>
     * </li> <li> <p> <code>deleted</code> (EC2 Fleet) / <code>cancelled</code> (Spot
     * Fleet) - The EC2 Fleet is deleted or the Spot Fleet request is canceled and has
     * no running instances. The EC2 Fleet or Spot Fleet will be deleted two days after
     * its instances are terminated.</p> </li> <li> <p> <code>deleted_running</code>
     * (EC2 Fleet) / <code>cancelled_running</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and does not launch additional
     * instances. Its existing instances continue to run until they are interrupted or
     * terminated. The request remains in this state until all instances are
     * interrupted or terminated.</p> </li> <li> <p> <code>deleted_terminating</code>
     * (EC2 Fleet) / <code>cancelled_terminating</code> (Spot Fleet) - The EC2 Fleet is
     * deleted or the Spot Fleet request is canceled and its instances are terminating.
     * The request remains in this state until all instances are terminated.</p> </li>
     * <li> <p> <code>expired</code> - The EC2 Fleet or Spot Fleet request has expired.
     * If the request was created with <code>TerminateInstancesWithExpiration</code>
     * set, a subsequent <code>terminated</code> event indicates that the instances are
     * terminated.</p> </li> <li> <p> <code>modify_in_progress</code> - The EC2 Fleet
     * or Spot Fleet request is being modified. The request remains in this state until
     * the modification is fully processed.</p> </li> <li> <p>
     * <code>modify_succeeded</code> - The EC2 Fleet or Spot Fleet request was
     * modified.</p> </li> <li> <p> <code>submitted</code> - The EC2 Fleet or Spot
     * Fleet request is being evaluated and Amazon EC2 is preparing to launch the
     * target number of instances.</p> </li> <li> <p> <code>progress</code> - The EC2
     * Fleet or Spot Fleet request is in the process of being fulfilled.</p> </li>
     * </ul> <p> <code>instanceChange</code> events:</p> <ul> <li> <p>
     * <code>launched</code> - A new instance was launched.</p> </li> <li> <p>
     * <code>terminated</code> - An instance was terminated by the user.</p> </li> <li>
     * <p> <code>termination_notified</code> - An instance termination notification was
     * sent when a Spot Instance was terminated by Amazon EC2 during scale-down, when
     * the target capacity of the fleet was modified down, for example, from a target
     * capacity of 4 to a target capacity of 3.</p> </li> </ul> <p>
     * <code>Information</code> events:</p> <ul> <li> <p>
     * <code>fleetProgressHalted</code> - The price in every launch specification is
     * not valid because it is below the Spot price (all the launch specifications have
     * produced <code>launchSpecUnusable</code> events). A launch specification might
     * become valid if the Spot price changes.</p> </li> <li> <p>
     * <code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid
     * and several attempts to launch instances have failed. For more information, see
     * the description of the event.</p> </li> <li> <p> <code>launchSpecUnusable</code>
     * - The price in a launch specification is not valid because it is below the Spot
     * price.</p> </li> <li> <p> <code>registerWithLoadBalancersFailed</code> - An
     * attempt to register instances with load balancers failed. For more information,
     * see the description of the event.</p> </li> </ul>
     */
    inline EventInformation& WithEventSubType(const char* value) { SetEventSubType(value); return *this;}


    /**
     * <p>The ID of the instance. This information is available only for
     * <code>instanceChange</code> events.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance. This information is available only for
     * <code>instanceChange</code> events.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance. This information is available only for
     * <code>instanceChange</code> events.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance. This information is available only for
     * <code>instanceChange</code> events.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance. This information is available only for
     * <code>instanceChange</code> events.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance. This information is available only for
     * <code>instanceChange</code> events.</p>
     */
    inline EventInformation& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance. This information is available only for
     * <code>instanceChange</code> events.</p>
     */
    inline EventInformation& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance. This information is available only for
     * <code>instanceChange</code> events.</p>
     */
    inline EventInformation& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_eventDescription;
    bool m_eventDescriptionHasBeenSet = false;

    Aws::String m_eventSubType;
    bool m_eventSubTypeHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
