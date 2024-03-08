/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_ARCZONALSHIFT_API UpdatePracticeRunConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePracticeRunConfiguration"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


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
    inline const Aws::Vector<Aws::String>& GetBlockedDates() const{ return m_blockedDates; }

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
    inline bool BlockedDatesHasBeenSet() const { return m_blockedDatesHasBeenSet; }

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
    inline void SetBlockedDates(const Aws::Vector<Aws::String>& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = value; }

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
    inline void SetBlockedDates(Aws::Vector<Aws::String>&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = std::move(value); }

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
    inline UpdatePracticeRunConfigurationRequest& WithBlockedDates(const Aws::Vector<Aws::String>& value) { SetBlockedDates(value); return *this;}

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
    inline UpdatePracticeRunConfigurationRequest& WithBlockedDates(Aws::Vector<Aws::String>&& value) { SetBlockedDates(std::move(value)); return *this;}

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
    inline UpdatePracticeRunConfigurationRequest& AddBlockedDates(const Aws::String& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(value); return *this; }

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
    inline UpdatePracticeRunConfigurationRequest& AddBlockedDates(Aws::String&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(std::move(value)); return *this; }

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
    inline UpdatePracticeRunConfigurationRequest& AddBlockedDates(const char* value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(value); return *this; }


    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedWindows() const{ return m_blockedWindows; }

    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline bool BlockedWindowsHasBeenSet() const { return m_blockedWindowsHasBeenSet; }

    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline void SetBlockedWindows(const Aws::Vector<Aws::String>& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = value; }

    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline void SetBlockedWindows(Aws::Vector<Aws::String>&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = std::move(value); }

    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithBlockedWindows(const Aws::Vector<Aws::String>& value) { SetBlockedWindows(value); return *this;}

    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithBlockedWindows(Aws::Vector<Aws::String>&& value) { SetBlockedWindows(std::move(value)); return *this;}

    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& AddBlockedWindows(const Aws::String& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(value); return *this; }

    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& AddBlockedWindows(Aws::String&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(std::move(value)); return *this; }

    /**
     * <p>Add, change, or remove windows of days and times for when you can,
     * optionally, block Route 53 ARC from starting a practice run for a resource.</p>
     * <p>The format for blocked windows is: DAY:HH:SS-DAY:HH:SS. Keep in mind, when
     * you specify dates, that dates and times for practice runs are in UTC. Also, be
     * aware of potential time adjustments that might be required for daylight saving
     * time differences. Separate multiple blocked windows with spaces.</p> <p>For
     * example, say you run business report summaries three days a week. For this
     * scenario, you might set the following recurring days and times as blocked
     * windows, for example: <code>MON-20:30-21:30 WED-20:30-21:30
     * FRI-20:30-21:30</code>.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& AddBlockedWindows(const char* value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(value); return *this; }


    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarm that you optionally
     * specify as the blocking alarm for practice runs.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetBlockingAlarms() const{ return m_blockingAlarms; }

    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarm that you optionally
     * specify as the blocking alarm for practice runs.</p>
     */
    inline bool BlockingAlarmsHasBeenSet() const { return m_blockingAlarmsHasBeenSet; }

    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarm that you optionally
     * specify as the blocking alarm for practice runs.</p>
     */
    inline void SetBlockingAlarms(const Aws::Vector<ControlCondition>& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = value; }

    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarm that you optionally
     * specify as the blocking alarm for practice runs.</p>
     */
    inline void SetBlockingAlarms(Aws::Vector<ControlCondition>&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = std::move(value); }

    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarm that you optionally
     * specify as the blocking alarm for practice runs.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithBlockingAlarms(const Aws::Vector<ControlCondition>& value) { SetBlockingAlarms(value); return *this;}

    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarm that you optionally
     * specify as the blocking alarm for practice runs.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithBlockingAlarms(Aws::Vector<ControlCondition>&& value) { SetBlockingAlarms(std::move(value)); return *this;}

    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarm that you optionally
     * specify as the blocking alarm for practice runs.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& AddBlockingAlarms(const ControlCondition& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.push_back(value); return *this; }

    /**
     * <p>Add, change, or remove the Amazon CloudWatch alarm that you optionally
     * specify as the blocking alarm for practice runs.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& AddBlockingAlarms(ControlCondition&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify a new the Amazon CloudWatch alarm as the outcome alarm for practice
     * runs.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetOutcomeAlarms() const{ return m_outcomeAlarms; }

    /**
     * <p>Specify a new the Amazon CloudWatch alarm as the outcome alarm for practice
     * runs.</p>
     */
    inline bool OutcomeAlarmsHasBeenSet() const { return m_outcomeAlarmsHasBeenSet; }

    /**
     * <p>Specify a new the Amazon CloudWatch alarm as the outcome alarm for practice
     * runs.</p>
     */
    inline void SetOutcomeAlarms(const Aws::Vector<ControlCondition>& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = value; }

    /**
     * <p>Specify a new the Amazon CloudWatch alarm as the outcome alarm for practice
     * runs.</p>
     */
    inline void SetOutcomeAlarms(Aws::Vector<ControlCondition>&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = std::move(value); }

    /**
     * <p>Specify a new the Amazon CloudWatch alarm as the outcome alarm for practice
     * runs.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithOutcomeAlarms(const Aws::Vector<ControlCondition>& value) { SetOutcomeAlarms(value); return *this;}

    /**
     * <p>Specify a new the Amazon CloudWatch alarm as the outcome alarm for practice
     * runs.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithOutcomeAlarms(Aws::Vector<ControlCondition>&& value) { SetOutcomeAlarms(std::move(value)); return *this;}

    /**
     * <p>Specify a new the Amazon CloudWatch alarm as the outcome alarm for practice
     * runs.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& AddOutcomeAlarms(const ControlCondition& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.push_back(value); return *this; }

    /**
     * <p>Specify a new the Amazon CloudWatch alarm as the outcome alarm for practice
     * runs.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& AddOutcomeAlarms(ControlCondition&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource that you want to update the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline UpdatePracticeRunConfigurationRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_blockedDates;
    bool m_blockedDatesHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedWindows;
    bool m_blockedWindowsHasBeenSet = false;

    Aws::Vector<ControlCondition> m_blockingAlarms;
    bool m_blockingAlarmsHasBeenSet = false;

    Aws::Vector<ControlCondition> m_outcomeAlarms;
    bool m_outcomeAlarmsHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
