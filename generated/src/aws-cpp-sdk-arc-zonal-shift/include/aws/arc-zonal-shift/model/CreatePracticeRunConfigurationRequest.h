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
  class CreatePracticeRunConfigurationRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API CreatePracticeRunConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePracticeRunConfiguration"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedDates() const{ return m_blockedDates; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline bool BlockedDatesHasBeenSet() const { return m_blockedDatesHasBeenSet; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline void SetBlockedDates(const Aws::Vector<Aws::String>& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = value; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline void SetBlockedDates(Aws::Vector<Aws::String>&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates = std::move(value); }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithBlockedDates(const Aws::Vector<Aws::String>& value) { SetBlockedDates(value); return *this;}

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithBlockedDates(Aws::Vector<Aws::String>&& value) { SetBlockedDates(std::move(value)); return *this;}

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& AddBlockedDates(const Aws::String& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(value); return *this; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& AddBlockedDates(Aws::String&& value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(std::move(value)); return *this; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for a
     * resource on specific calendar dates.</p> <p>The format for blocked dates is:
     * YYYY-MM-DD. Keep in mind, when you specify dates, that dates and times for
     * practice runs are in UTC. Separate multiple blocked dates with spaces.</p>
     * <p>For example, if you have an application update scheduled to launch on May 1,
     * 2024, and you don't want practice runs to shift traffic away at that time, you
     * could set a blocked date for <code>2024-05-01</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& AddBlockedDates(const char* value) { m_blockedDatesHasBeenSet = true; m_blockedDates.push_back(value); return *this; }


    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedWindows() const{ return m_blockedWindows; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline bool BlockedWindowsHasBeenSet() const { return m_blockedWindowsHasBeenSet; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline void SetBlockedWindows(const Aws::Vector<Aws::String>& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = value; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline void SetBlockedWindows(Aws::Vector<Aws::String>&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows = std::move(value); }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithBlockedWindows(const Aws::Vector<Aws::String>& value) { SetBlockedWindows(value); return *this;}

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithBlockedWindows(Aws::Vector<Aws::String>&& value) { SetBlockedWindows(std::move(value)); return *this;}

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& AddBlockedWindows(const Aws::String& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(value); return *this; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& AddBlockedWindows(Aws::String&& value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(std::move(value)); return *this; }

    /**
     * <p>Optionally, you can block Route 53 ARC from starting practice runs for
     * specific windows of days and times. </p> <p>The format for blocked windows is:
     * DAY:HH:SS-DAY:HH:SS. Keep in mind, when you specify dates, that dates and times
     * for practice runs are in UTC. Also, be aware of potential time adjustments that
     * might be required for daylight saving time differences. Separate multiple
     * blocked windows with spaces.</p> <p>For example, say you run business report
     * summaries three days a week. For this scenario, you might set the following
     * recurring days and times as blocked windows, for example: <code>MON-20:30-21:30
     * WED-20:30-21:30 FRI-20:30-21:30</code>.</p>
     */
    inline CreatePracticeRunConfigurationRequest& AddBlockedWindows(const char* value) { m_blockedWindowsHasBeenSet = true; m_blockedWindows.push_back(value); return *this; }


    /**
     * <p>An Amazon CloudWatch alarm that you can specify for zonal autoshift practice
     * runs. This alarm blocks Route 53 ARC from starting practice run zonal shifts,
     * and ends a practice run that's in progress, when the alarm is in an
     * <code>ALARM</code> state. </p>
     */
    inline const Aws::Vector<ControlCondition>& GetBlockingAlarms() const{ return m_blockingAlarms; }

    /**
     * <p>An Amazon CloudWatch alarm that you can specify for zonal autoshift practice
     * runs. This alarm blocks Route 53 ARC from starting practice run zonal shifts,
     * and ends a practice run that's in progress, when the alarm is in an
     * <code>ALARM</code> state. </p>
     */
    inline bool BlockingAlarmsHasBeenSet() const { return m_blockingAlarmsHasBeenSet; }

    /**
     * <p>An Amazon CloudWatch alarm that you can specify for zonal autoshift practice
     * runs. This alarm blocks Route 53 ARC from starting practice run zonal shifts,
     * and ends a practice run that's in progress, when the alarm is in an
     * <code>ALARM</code> state. </p>
     */
    inline void SetBlockingAlarms(const Aws::Vector<ControlCondition>& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = value; }

    /**
     * <p>An Amazon CloudWatch alarm that you can specify for zonal autoshift practice
     * runs. This alarm blocks Route 53 ARC from starting practice run zonal shifts,
     * and ends a practice run that's in progress, when the alarm is in an
     * <code>ALARM</code> state. </p>
     */
    inline void SetBlockingAlarms(Aws::Vector<ControlCondition>&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms = std::move(value); }

    /**
     * <p>An Amazon CloudWatch alarm that you can specify for zonal autoshift practice
     * runs. This alarm blocks Route 53 ARC from starting practice run zonal shifts,
     * and ends a practice run that's in progress, when the alarm is in an
     * <code>ALARM</code> state. </p>
     */
    inline CreatePracticeRunConfigurationRequest& WithBlockingAlarms(const Aws::Vector<ControlCondition>& value) { SetBlockingAlarms(value); return *this;}

    /**
     * <p>An Amazon CloudWatch alarm that you can specify for zonal autoshift practice
     * runs. This alarm blocks Route 53 ARC from starting practice run zonal shifts,
     * and ends a practice run that's in progress, when the alarm is in an
     * <code>ALARM</code> state. </p>
     */
    inline CreatePracticeRunConfigurationRequest& WithBlockingAlarms(Aws::Vector<ControlCondition>&& value) { SetBlockingAlarms(std::move(value)); return *this;}

    /**
     * <p>An Amazon CloudWatch alarm that you can specify for zonal autoshift practice
     * runs. This alarm blocks Route 53 ARC from starting practice run zonal shifts,
     * and ends a practice run that's in progress, when the alarm is in an
     * <code>ALARM</code> state. </p>
     */
    inline CreatePracticeRunConfigurationRequest& AddBlockingAlarms(const ControlCondition& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.push_back(value); return *this; }

    /**
     * <p>An Amazon CloudWatch alarm that you can specify for zonal autoshift practice
     * runs. This alarm blocks Route 53 ARC from starting practice run zonal shifts,
     * and ends a practice run that's in progress, when the alarm is in an
     * <code>ALARM</code> state. </p>
     */
    inline CreatePracticeRunConfigurationRequest& AddBlockingAlarms(ControlCondition&& value) { m_blockingAlarmsHasBeenSet = true; m_blockingAlarms.push_back(std::move(value)); return *this; }


    /**
     * <p>The <i>outcome alarm</i> for practice runs is a required Amazon CloudWatch
     * alarm that you specify that ends a practice run when the alarm is in an
     * <code>ALARM</code> state.</p> <p>Configure the alarm to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each weekly practice run. You should configure the alarm to go into an
     * <code>ALARM</code> state if your application is impacted by the zonal shift, and
     * you want to stop the zonal shift, to let traffic for the resource return to the
     * Availability Zone.</p>
     */
    inline const Aws::Vector<ControlCondition>& GetOutcomeAlarms() const{ return m_outcomeAlarms; }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is a required Amazon CloudWatch
     * alarm that you specify that ends a practice run when the alarm is in an
     * <code>ALARM</code> state.</p> <p>Configure the alarm to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each weekly practice run. You should configure the alarm to go into an
     * <code>ALARM</code> state if your application is impacted by the zonal shift, and
     * you want to stop the zonal shift, to let traffic for the resource return to the
     * Availability Zone.</p>
     */
    inline bool OutcomeAlarmsHasBeenSet() const { return m_outcomeAlarmsHasBeenSet; }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is a required Amazon CloudWatch
     * alarm that you specify that ends a practice run when the alarm is in an
     * <code>ALARM</code> state.</p> <p>Configure the alarm to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each weekly practice run. You should configure the alarm to go into an
     * <code>ALARM</code> state if your application is impacted by the zonal shift, and
     * you want to stop the zonal shift, to let traffic for the resource return to the
     * Availability Zone.</p>
     */
    inline void SetOutcomeAlarms(const Aws::Vector<ControlCondition>& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = value; }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is a required Amazon CloudWatch
     * alarm that you specify that ends a practice run when the alarm is in an
     * <code>ALARM</code> state.</p> <p>Configure the alarm to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each weekly practice run. You should configure the alarm to go into an
     * <code>ALARM</code> state if your application is impacted by the zonal shift, and
     * you want to stop the zonal shift, to let traffic for the resource return to the
     * Availability Zone.</p>
     */
    inline void SetOutcomeAlarms(Aws::Vector<ControlCondition>&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms = std::move(value); }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is a required Amazon CloudWatch
     * alarm that you specify that ends a practice run when the alarm is in an
     * <code>ALARM</code> state.</p> <p>Configure the alarm to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each weekly practice run. You should configure the alarm to go into an
     * <code>ALARM</code> state if your application is impacted by the zonal shift, and
     * you want to stop the zonal shift, to let traffic for the resource return to the
     * Availability Zone.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithOutcomeAlarms(const Aws::Vector<ControlCondition>& value) { SetOutcomeAlarms(value); return *this;}

    /**
     * <p>The <i>outcome alarm</i> for practice runs is a required Amazon CloudWatch
     * alarm that you specify that ends a practice run when the alarm is in an
     * <code>ALARM</code> state.</p> <p>Configure the alarm to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each weekly practice run. You should configure the alarm to go into an
     * <code>ALARM</code> state if your application is impacted by the zonal shift, and
     * you want to stop the zonal shift, to let traffic for the resource return to the
     * Availability Zone.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithOutcomeAlarms(Aws::Vector<ControlCondition>&& value) { SetOutcomeAlarms(std::move(value)); return *this;}

    /**
     * <p>The <i>outcome alarm</i> for practice runs is a required Amazon CloudWatch
     * alarm that you specify that ends a practice run when the alarm is in an
     * <code>ALARM</code> state.</p> <p>Configure the alarm to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each weekly practice run. You should configure the alarm to go into an
     * <code>ALARM</code> state if your application is impacted by the zonal shift, and
     * you want to stop the zonal shift, to let traffic for the resource return to the
     * Availability Zone.</p>
     */
    inline CreatePracticeRunConfigurationRequest& AddOutcomeAlarms(const ControlCondition& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.push_back(value); return *this; }

    /**
     * <p>The <i>outcome alarm</i> for practice runs is a required Amazon CloudWatch
     * alarm that you specify that ends a practice run when the alarm is in an
     * <code>ALARM</code> state.</p> <p>Configure the alarm to monitor the health of
     * your application when traffic is shifted away from an Availability Zone during
     * each weekly practice run. You should configure the alarm to go into an
     * <code>ALARM</code> state if your application is impacted by the zonal shift, and
     * you want to stop the zonal shift, to let traffic for the resource return to the
     * Availability Zone.</p>
     */
    inline CreatePracticeRunConfigurationRequest& AddOutcomeAlarms(ControlCondition&& value) { m_outcomeAlarmsHasBeenSet = true; m_outcomeAlarms.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the resource to shift away traffic for when a practice run
     * starts a zonal shift. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p> <p>At this time, supported resources are Network Load Balancers
     * and Application Load Balancers with cross-zone load balancing turned off.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier of the resource to shift away traffic for when a practice run
     * starts a zonal shift. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p> <p>At this time, supported resources are Network Load Balancers
     * and Application Load Balancers with cross-zone load balancing turned off.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the resource to shift away traffic for when a practice run
     * starts a zonal shift. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p> <p>At this time, supported resources are Network Load Balancers
     * and Application Load Balancers with cross-zone load balancing turned off.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The identifier of the resource to shift away traffic for when a practice run
     * starts a zonal shift. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p> <p>At this time, supported resources are Network Load Balancers
     * and Application Load Balancers with cross-zone load balancing turned off.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the resource to shift away traffic for when a practice run
     * starts a zonal shift. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p> <p>At this time, supported resources are Network Load Balancers
     * and Application Load Balancers with cross-zone load balancing turned off.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the resource to shift away traffic for when a practice run
     * starts a zonal shift. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p> <p>At this time, supported resources are Network Load Balancers
     * and Application Load Balancers with cross-zone load balancing turned off.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the resource to shift away traffic for when a practice run
     * starts a zonal shift. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p> <p>At this time, supported resources are Network Load Balancers
     * and Application Load Balancers with cross-zone load balancing turned off.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource to shift away traffic for when a practice run
     * starts a zonal shift. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p> <p>At this time, supported resources are Network Load Balancers
     * and Application Load Balancers with cross-zone load balancing turned off.</p>
     */
    inline CreatePracticeRunConfigurationRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}

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
