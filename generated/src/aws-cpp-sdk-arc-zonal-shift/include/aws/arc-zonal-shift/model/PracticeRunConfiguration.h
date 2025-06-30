/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-zonal-shift/model/ControlCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ARCZonalShift
{
namespace Model
{

  /**
   * <p>A practice run configuration for a resource includes the Amazon CloudWatch
   * alarms that you've specified for a practice run, as well as any blocked dates or
   * blocked windows for the practice run. When a resource has a practice run
   * configuration, ARC shifts traffic for the resource weekly for practice runs.</p>
   * <p>Practice runs are required for zonal autoshift. The zonal shifts that ARC
   * starts for practice runs help you to ensure that shifting away traffic from an
   * Availability Zone during an autoshift is safe for your application.</p> <p>You
   * can update or delete a practice run configuration. Before you delete a practice
   * run configuration, you must disable zonal autoshift for the resource. A practice
   * run configuration is required when zonal autoshift is enabled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/PracticeRunConfiguration">AWS
   * API Reference</a></p>
   */
  class PracticeRunConfiguration
  {
  public:
    AWS_ARCZONALSHIFT_API PracticeRunConfiguration() = default;
    AWS_ARCZONALSHIFT_API PracticeRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API PracticeRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetBlockingAlarms() const { return m_blockingAlarms; }
    inline bool BlockingAlarmsHasBeenSet() const { return m_blockingAlarmsHasBeenSet; }
    template<typename BlockingAlarmsT = Aws::Vector<ControlCondition>>
    void SetBlockingAlarms(BlockingAlarmsT&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = std::forward<BlockingAlarmsT>(value); }
    template<typename BlockingAlarmsT = Aws::Vector<ControlCondition>>
    PracticeRunConfiguration& WithBlockingAlarms(BlockingAlarmsT&& value) { SetBlockingAlarms(std::forward<BlockingAlarmsT>(value)); return *this;}
    template<typename BlockingAlarmsT = ControlCondition>
    PracticeRunConfiguration& AddBlockingAlarms(BlockingAlarmsT&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.emplace_back(std::forward<BlockingAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetOutcomeAlarms() const { return m_outcomeAlarms; }
    inline bool OutcomeAlarmsHasBeenSet() const { return m_outcomeAlarmsHasBeenSet; }
    template<typename OutcomeAlarmsT = Aws::Vector<ControlCondition>>
    void SetOutcomeAlarms(OutcomeAlarmsT&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = std::forward<OutcomeAlarmsT>(value); }
    template<typename OutcomeAlarmsT = Aws::Vector<ControlCondition>>
    PracticeRunConfiguration& WithOutcomeAlarms(OutcomeAlarmsT&& value) { SetOutcomeAlarms(std::forward<OutcomeAlarmsT>(value)); return *this;}
    template<typename OutcomeAlarmsT = ControlCondition>
    PracticeRunConfiguration& AddOutcomeAlarms(OutcomeAlarmsT&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.emplace_back(std::forward<OutcomeAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of one or more windows of days and times that you can block ARC from
     * starting practice runs for a resource.</p> <p>Specify the blocked windows in
     * UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by spaces. For
     * example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedWindows() const { return m_blockedWindows; }
    inline bool BlockedWindowsHasBeenSet() const { return m_blockedWindowsHasBeenSet; }
    template<typename BlockedWindowsT = Aws::Vector<Aws::String>>
    void SetBlockedWindows(BlockedWindowsT&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = std::forward<BlockedWindowsT>(value); }
    template<typename BlockedWindowsT = Aws::Vector<Aws::String>>
    PracticeRunConfiguration& WithBlockedWindows(BlockedWindowsT&& value) { SetBlockedWindows(std::forward<BlockedWindowsT>(value)); return *this;}
    template<typename BlockedWindowsT = Aws::String>
    PracticeRunConfiguration& AddBlockedWindows(BlockedWindowsT&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.emplace_back(std::forward<BlockedWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedDates() const { return m_blockedDates; }
    inline bool BlockedDatesHasBeenSet() const { return m_blockedDatesHasBeenSet; }
    template<typename BlockedDatesT = Aws::Vector<Aws::String>>
    void SetBlockedDates(BlockedDatesT&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = std::forward<BlockedDatesT>(value); }
    template<typename BlockedDatesT = Aws::Vector<Aws::String>>
    PracticeRunConfiguration& WithBlockedDates(BlockedDatesT&& value) { SetBlockedDates(std::forward<BlockedDatesT>(value)); return *this;}
    template<typename BlockedDatesT = Aws::String>
    PracticeRunConfiguration& AddBlockedDates(BlockedDatesT&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.emplace_back(std::forward<BlockedDatesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ControlCondition> m_blockingAlarms;
    bool m_blockingAlarmsHasBeenSet = false;

    Aws::Vector<ControlCondition> m_outcomeAlarms;
    bool m_outcomeAlarmsHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedWindows;
    bool m_blockedWindowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedDates;
    bool m_blockedDatesHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
