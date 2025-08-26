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
  class UpdatePracticeRunConfigurationRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API UpdatePracticeRunConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePracticeRunConfiguration"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    UpdatePracticeRunConfigurationRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block ARC from starting a practice run for a resource.</p> <p>The
     * format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when you
     * specify dates, that dates and times for practice runs are in UTC. Also, be aware
     * of potential time adjustments that might be required for daylight saving time
     * differences. Separate multiple blocked windows with spaces.</p> <p>For example,
     * say you run business report summaries three days a week. For this scenario, you
     * might set the following recurring days and times as blocked windows, for
     * example: <code>MON-20:30-21:30 WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedWindows() const { return m_blockedWindows; }
    inline bool BlockedWindowsHasBeenSet() const { return m_blockedWindowsHasBeenSet; }
    template<typename BlockedWindowsT = Aws::Vector<Aws::String>>
    void SetBlockedWindows(BlockedWindowsT&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = std::forward<BlockedWindowsT>(value); }
    template<typename BlockedWindowsT = Aws::Vector<Aws::String>>
    UpdatePracticeRunConfigurationRequest& WithBlockedWindows(BlockedWindowsT&& value) { SetBlockedWindows(std::forward<BlockedWindowsT>(value)); return *this;}
    template<typename BlockedWindowsT = Aws::String>
    UpdatePracticeRunConfigurationRequest& AddBlockedWindows(BlockedWindowsT&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.emplace_back(std::forward<BlockedWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Add, change, or remove blocked dates for a practice run in zonal
     * autoshift.</p> <p>Optionally, you can block practice runs for specific calendar
     * dates. The format for blocked dates is: YYYY-MM-DD. Keep in mind, when you
     * specify dates, that dates and times for practice runs are in UTC. Separate
     * multiple blocked dates with spaces.</p> <p>For example, if you have an
     * application update scheduled to launch on May 1, 2024, and you don't want
     * practice runs to shift traffic away at that time, you could set a blocked date
     * for <code>2024-05-01</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedDates() const { return m_blockedDates; }
    inline bool BlockedDatesHasBeenSet() const { return m_blockedDatesHasBeenSet; }
    template<typename BlockedDatesT = Aws::Vector<Aws::String>>
    void SetBlockedDates(BlockedDatesT&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = std::forward<BlockedDatesT>(value); }
    template<typename BlockedDatesT = Aws::Vector<Aws::String>>
    UpdatePracticeRunConfigurationRequest& WithBlockedDates(BlockedDatesT&& value) { SetBlockedDates(std::forward<BlockedDatesT>(value)); return *this;}
    template<typename BlockedDatesT = Aws::String>
    UpdatePracticeRunConfigurationRequest& AddBlockedDates(BlockedDatesT&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.emplace_back(std::forward<BlockedDatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarms that you optionally
     * specify as the blocking alarms for practice runs.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetBlockingAlarms() const { return m_blockingAlarms; }
    inline bool BlockingAlarmsHasBeenSet() const { return m_blockingAlarmsHasBeenSet; }
    template<typename BlockingAlarmsT = Aws::Vector<ControlCondition>>
    void SetBlockingAlarms(BlockingAlarmsT&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = std::forward<BlockingAlarmsT>(value); }
    template<typename BlockingAlarmsT = Aws::Vector<ControlCondition>>
    UpdatePracticeRunConfigurationRequest& WithBlockingAlarms(BlockingAlarmsT&& value) { SetBlockingAlarms(std::forward<BlockingAlarmsT>(value)); return *this;}
    template<typename BlockingAlarmsT = ControlCondition>
    UpdatePracticeRunConfigurationRequest& AddBlockingAlarms(BlockingAlarmsT&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.emplace_back(std::forward<BlockingAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, allow ARC to start a practice run for a resource.</p> <p>The format
     * for allowed windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify
     * dates, that dates and times for practice runs are in UTC. Also, be aware of
     * potential time adjustments that might be required for daylight saving time
     * differences. Separate multiple allowed windows with spaces.</p> <p>For example,
     * say you want to allow practice runs only on Wednesdays and Fridays from noon to
     * 5 p.m. For this scenario, you could set the following recurring days and times
     * as allowed windows, for example: <code>Wed-12:00-Wed:17:00
     * Fri-12:00-Fri:17:00</code>.</p>  <p>The <code>allowedWindows</code>
     * have to start and end on the same day. Windows that span multiple days aren't
     * supported.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAllowedWindows() const { return m_allowedWindows; }
    inline bool AllowedWindowsHasBeenSet() const { return m_allowedWindowsHasBeenSet; }
    template<typename AllowedWindowsT = Aws::Vector<Aws::String>>
    void SetAllowedWindows(AllowedWindowsT&& value) { m_allowedWindowsHasBeenSet = true; m_allowedWindows = std::forward<AllowedWindowsT>(value); }
    template<typename AllowedWindowsT = Aws::Vector<Aws::String>>
    UpdatePracticeRunConfigurationRequest& WithAllowedWindows(AllowedWindowsT&& value) { SetAllowedWindows(std::forward<AllowedWindowsT>(value)); return *this;}
    template<typename AllowedWindowsT = Aws::String>
    UpdatePracticeRunConfigurationRequest& AddAllowedWindows(AllowedWindowsT&& value) { m_allowedWindowsHasBeenSet = true; m_allowedWindows.emplace_back(std::forward<AllowedWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify one or more Amazon CloudWatch alarms as the outcome alarms for
     * practice runs.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetOutcomeAlarms() const { return m_outcomeAlarms; }
    inline bool OutcomeAlarmsHasBeenSet() const { return m_outcomeAlarmsHasBeenSet; }
    template<typename OutcomeAlarmsT = Aws::Vector<ControlCondition>>
    void SetOutcomeAlarms(OutcomeAlarmsT&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = std::forward<OutcomeAlarmsT>(value); }
    template<typename OutcomeAlarmsT = Aws::Vector<ControlCondition>>
    UpdatePracticeRunConfigurationRequest& WithOutcomeAlarms(OutcomeAlarmsT&& value) { SetOutcomeAlarms(std::forward<OutcomeAlarmsT>(value)); return *this;}
    template<typename OutcomeAlarmsT = ControlCondition>
    UpdatePracticeRunConfigurationRequest& AddOutcomeAlarms(OutcomeAlarmsT&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.emplace_back(std::forward<OutcomeAlarmsT>(value)); return *this; }
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
