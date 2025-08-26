/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-zonal-shift/model/ControlCondition.h>
#include <utility>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

  /**
   */
  class CreatePracticeRunConfigurationRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API CreatePracticeRunConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePracticeRunConfiguration"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the resource that Amazon Web Services shifts traffic for
     * with a practice run zonal shift. The identifier is the Amazon Resource Name
     * (ARN) for the resource.</p> <p>Amazon Application Recovery Controller currently
     * supports enabling the following resources for zonal shift and zonal
     * autoshift:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.ec2-auto-scaling-groups.html">Amazon
     * EC2 Auto Scaling groups</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.eks.html">Amazon
     * Elastic Kubernetes Service</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.app-load-balancers.html">Application
     * Load Balancer</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.network-load-balancers.html">Network
     * Load Balancer</a> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    CreatePracticeRunConfigurationRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally, you can block ARC from starting practice runs for specific
     * windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you could set the following
     * recurring days and times as blocked windows, for example:
     * <code>Mon:00:00-Mon:10:00 Wed-20:30-Wed:21:30 Fri-20:30-Fri:21:30</code>.</p>
     *  <p>The <code>blockedWindows</code> have to start and end on the same
     * day. Windows that span multiple days aren't supported.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetBlockedWindows() const { return m_blockedWindows; }
    inline bool BlockedWindowsHasBeenSet() const { return m_blockedWindowsHasBeenSet; }
    template<typename BlockedWindowsT = Aws::Vector<Aws::String>>
    void SetBlockedWindows(BlockedWindowsT&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = std::forward<BlockedWindowsT>(value); }
    template<typename BlockedWindowsT = Aws::Vector<Aws::String>>
    CreatePracticeRunConfigurationRequest& WithBlockedWindows(BlockedWindowsT&& value) { SetBlockedWindows(std::forward<BlockedWindowsT>(value)); return *this;}
    template<typename BlockedWindowsT = Aws::String>
    CreatePracticeRunConfigurationRequest& AddBlockedWindows(BlockedWindowsT&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.emplace_back(std::forward<BlockedWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optionally, you can block ARC from starting practice runs for a resource on
     * specific calendar dates.</p> <p>The format for blocked dates is: YYYY-MM-DD.
     * Keep in mind, when you specify dates, that dates and times for practice runs are
     * in UTC. Separate multiple blocked dates with spaces.</p> <p>For example, if you
     * have an application update scheduled to launch on May 1, 2024, and you don't
     * want practice runs to shift traffic away at that time, you could set a blocked
     * date for <code>2024-05-01</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedDates() const { return m_blockedDates; }
    inline bool BlockedDatesHasBeenSet() const { return m_blockedDatesHasBeenSet; }
    template<typename BlockedDatesT = Aws::Vector<Aws::String>>
    void SetBlockedDates(BlockedDatesT&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = std::forward<BlockedDatesT>(value); }
    template<typename BlockedDatesT = Aws::Vector<Aws::String>>
    CreatePracticeRunConfigurationRequest& WithBlockedDates(BlockedDatesT&& value) { SetBlockedDates(std::forward<BlockedDatesT>(value)); return *this;}
    template<typename BlockedDatesT = Aws::String>
    CreatePracticeRunConfigurationRequest& AddBlockedDates(BlockedDatesT&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.emplace_back(std::forward<BlockedDatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <i>Blocking alarms</i> for practice runs are optional alarms that you can
     * specify that block practice runs when one or more of the alarms is in an
     * <code>ALARM</code> state.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetBlockingAlarms() const { return m_blockingAlarms; }
    inline bool BlockingAlarmsHasBeenSet() const { return m_blockingAlarmsHasBeenSet; }
    template<typename BlockingAlarmsT = Aws::Vector<ControlCondition>>
    void SetBlockingAlarms(BlockingAlarmsT&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = std::forward<BlockingAlarmsT>(value); }
    template<typename BlockingAlarmsT = Aws::Vector<ControlCondition>>
    CreatePracticeRunConfigurationRequest& WithBlockingAlarms(BlockingAlarmsT&& value) { SetBlockingAlarms(std::forward<BlockingAlarmsT>(value)); return *this;}
    template<typename BlockingAlarmsT = ControlCondition>
    CreatePracticeRunConfigurationRequest& AddBlockingAlarms(BlockingAlarmsT&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.emplace_back(std::forward<BlockingAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optionally, you can allow ARC to start practice runs for specific windows of
     * days and times. </p> <p>The format for allowed windows is: DAY:HH:SS-DAY:HH:SS.
     * Keep in mind, when you specify dates, that dates and times for practice runs are
     * in UTC. Also, be aware of potential time adjustments that might be required for
     * daylight saving time differences. Separate multiple allowed windows with
     * spaces.</p> <p>For example, say you want to allow practice runs only on
     * Wednesdays and Fridays from noon to 5 p.m. For this scenario, you could set the
     * following recurring days and times as allowed windows, for example:
     * <code>Wed-12:00-Wed:17:00 Fri-12:00-Fri:17:00</code>.</p>  <p>The
     * <code>allowedWindows</code> have to start and end on the same day. Windows that
     * span multiple days aren't supported.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAllowedWindows() const { return m_allowedWindows; }
    inline bool AllowedWindowsHasBeenSet() const { return m_allowedWindowsHasBeenSet; }
    template<typename AllowedWindowsT = Aws::Vector<Aws::String>>
    void SetAllowedWindows(AllowedWindowsT&& value) { m_allowedWindowsHasBeenSet = true; m_allowedWindows = std::forward<AllowedWindowsT>(value); }
    template<typename AllowedWindowsT = Aws::Vector<Aws::String>>
    CreatePracticeRunConfigurationRequest& WithAllowedWindows(AllowedWindowsT&& value) { SetAllowedWindows(std::forward<AllowedWindowsT>(value)); return *this;}
    template<typename AllowedWindowsT = Aws::String>
    CreatePracticeRunConfigurationRequest& AddAllowedWindows(AllowedWindowsT&& value) { m_allowedWindowsHasBeenSet = true; m_allowedWindows.emplace_back(std::forward<AllowedWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <i>Outcome alarms</i> for practice runs are alarms that you specify that end
     * a practice run when one or more of the alarms is in an <code>ALARM</code>
     * state.</p> <p>Configure one or more of these alarms to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each practice run. You should configure these alarms to go into an
     * <code>ALARM</code> state if you want to stop a zonal shift, to let traffic for
     * the resource return to the original Availability Zone.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetOutcomeAlarms() const { return m_outcomeAlarms; }
    inline bool OutcomeAlarmsHasBeenSet() const { return m_outcomeAlarmsHasBeenSet; }
    template<typename OutcomeAlarmsT = Aws::Vector<ControlCondition>>
    void SetOutcomeAlarms(OutcomeAlarmsT&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = std::forward<OutcomeAlarmsT>(value); }
    template<typename OutcomeAlarmsT = Aws::Vector<ControlCondition>>
    CreatePracticeRunConfigurationRequest& WithOutcomeAlarms(OutcomeAlarmsT&& value) { SetOutcomeAlarms(std::forward<OutcomeAlarmsT>(value)); return *this;}
    template<typename OutcomeAlarmsT = ControlCondition>
    CreatePracticeRunConfigurationRequest& AddOutcomeAlarms(OutcomeAlarmsT&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.emplace_back(std::forward<OutcomeAlarmsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedWindows;
    bool m_blockedWindowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedDates;
    bool m_blockedDatesHasBeenSet = false;

    Aws::Vector<ControlCondition> m_blockingAlarms;
    bool m_blockingAlarmsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedWindows;
    bool m_allowedWindowsHasBeenSet = false;

    Aws::Vector<ControlCondition> m_outcomeAlarms;
    bool m_outcomeAlarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
