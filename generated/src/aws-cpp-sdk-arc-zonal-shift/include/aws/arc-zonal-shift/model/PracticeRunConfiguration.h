/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ControlCondition.h>
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
   * blocked windows for the practice run.</p> <p>You can update or delete a practice
   * run configuration. Before you delete a practice run configuration, you must
   * disable zonal autoshift for the resource. A practice run configuration is
   * required when zonal autoshift is enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/PracticeRunConfiguration">AWS
   * API Reference</a></p>
   */
  class PracticeRunConfiguration
  {
  public:
    AWS_ARCZONALSHIFT_API PracticeRunConfiguration();
    AWS_ARCZONALSHIFT_API PracticeRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API PracticeRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedDates() const{ return m_blockedDates; }

    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline bool BlockedDatesHasBeenSet() const { return m_blockedDatesHasBeenSet; }

    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline void SetBlockedDates(const Aws::Vector<Aws::String>& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = value; }

    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline void SetBlockedDates(Aws::Vector<Aws::String>&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = std::move(value); }

    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline PracticeRunConfiguration& WithBlockedDates(const Aws::Vector<Aws::String>& value) { SetBlockedDates(value); return *this;}

    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline PracticeRunConfiguration& WithBlockedDates(Aws::Vector<Aws::String>&& value) { SetBlockedDates(std::move(value)); return *this;}

    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline PracticeRunConfiguration& AddBlockedDates(const Aws::String& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(value); return *this; }

    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline PracticeRunConfiguration& AddBlockedDates(Aws::String&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of one or more dates that you can specify when Amazon Web Services
     * does not start practice runs for a resource.</p> <p>Specify blocked dates, in
     * UTC, in the format <code>YYYY-MM-DD</code>, separated by spaces. </p>
     */
    inline PracticeRunConfiguration& AddBlockedDates(const char* value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(value); return *this; }


    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedWindows() const{ return m_blockedWindows; }

    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline bool BlockedWindowsHasBeenSet() const { return m_blockedWindowsHasBeenSet; }

    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline void SetBlockedWindows(const Aws::Vector<Aws::String>& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = value; }

    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline void SetBlockedWindows(Aws::Vector<Aws::String>&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = std::move(value); }

    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline PracticeRunConfiguration& WithBlockedWindows(const Aws::Vector<Aws::String>& value) { SetBlockedWindows(value); return *this;}

    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline PracticeRunConfiguration& WithBlockedWindows(Aws::Vector<Aws::String>&& value) { SetBlockedWindows(std::move(value)); return *this;}

    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline PracticeRunConfiguration& AddBlockedWindows(const Aws::String& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(value); return *this; }

    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline PracticeRunConfiguration& AddBlockedWindows(Aws::String&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of one or more windows of days and times that you can block Route 53
     * ARC from starting practice runs for a resource.</p> <p>Specify the blocked
     * windows in UTC, using the format <code>DAY:HH:MM-DAY:HH:MM</code>, separated by
     * spaces. For example, <code>MON:18:30-MON:19:30 TUE:18:30-TUE:19:30</code>.</p>
     */
    inline PracticeRunConfiguration& AddBlockedWindows(const char* value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(value); return *this; }


    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetBlockingAlarms() const{ return m_blockingAlarms; }

    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline bool BlockingAlarmsHasBeenSet() const { return m_blockingAlarmsHasBeenSet; }

    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline void SetBlockingAlarms(const Aws::Vector<ControlCondition>& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = value; }

    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline void SetBlockingAlarms(Aws::Vector<ControlCondition>&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = std::move(value); }

    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline PracticeRunConfiguration& WithBlockingAlarms(const Aws::Vector<ControlCondition>& value) { SetBlockingAlarms(value); return *this;}

    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline PracticeRunConfiguration& WithBlockingAlarms(Aws::Vector<ControlCondition>&& value) { SetBlockingAlarms(std::move(value)); return *this;}

    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline PracticeRunConfiguration& AddBlockingAlarms(const ControlCondition& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.push_back(value); return *this; }

    /**
     * <p>The <i>blocking alarm</i> for practice runs is an optional alarm that you can
     * specify that blocks practice runs when the alarm is in an <code>ALARM</code>
     * state.</p>
     */
    inline PracticeRunConfiguration& AddBlockingAlarms(ControlCondition&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.push_back(std::move(value)); return *this; }


    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetOutcomeAlarms() const{ return m_outcomeAlarms; }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline bool OutcomeAlarmsHasBeenSet() const { return m_outcomeAlarmsHasBeenSet; }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline void SetOutcomeAlarms(const Aws::Vector<ControlCondition>& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = value; }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline void SetOutcomeAlarms(Aws::Vector<ControlCondition>&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = std::move(value); }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline PracticeRunConfiguration& WithOutcomeAlarms(const Aws::Vector<ControlCondition>& value) { SetOutcomeAlarms(value); return *this;}

    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline PracticeRunConfiguration& WithOutcomeAlarms(Aws::Vector<ControlCondition>&& value) { SetOutcomeAlarms(std::move(value)); return *this;}

    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline PracticeRunConfiguration& AddOutcomeAlarms(const ControlCondition& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.push_back(value); return *this; }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is an alarm that you specify that
     * ends a practice run when the alarm is in an <code>ALARM</code> state.</p>
     */
    inline PracticeRunConfiguration& AddOutcomeAlarms(ControlCondition&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_blockedDates;
    bool m_blockedDatesHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedWindows;
    bool m_blockedWindowsHasBeenSet = false;

    Aws::Vector<ControlCondition> m_blockingAlarms;
    bool m_blockingAlarmsHasBeenSet = false;

    Aws::Vector<ControlCondition> m_outcomeAlarms;
    bool m_outcomeAlarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
