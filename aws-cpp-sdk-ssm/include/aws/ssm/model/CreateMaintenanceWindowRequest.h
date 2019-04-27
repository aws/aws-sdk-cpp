﻿/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateMaintenanceWindowRequest : public SSMRequest
  {
  public:
    CreateMaintenanceWindowRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMaintenanceWindow"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline CreateMaintenanceWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline CreateMaintenanceWindowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline CreateMaintenanceWindowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline CreateMaintenanceWindowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline CreateMaintenanceWindowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline CreateMaintenanceWindowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become active. StartDate allows you to delay activation of
     * the Maintenance Window until the specified future date.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become active. StartDate allows you to delay activation of
     * the Maintenance Window until the specified future date.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become active. StartDate allows you to delay activation of
     * the Maintenance Window until the specified future date.</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become active. StartDate allows you to delay activation of
     * the Maintenance Window until the specified future date.</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become active. StartDate allows you to delay activation of
     * the Maintenance Window until the specified future date.</p>
     */
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become active. StartDate allows you to delay activation of
     * the Maintenance Window until the specified future date.</p>
     */
    inline CreateMaintenanceWindowRequest& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become active. StartDate allows you to delay activation of
     * the Maintenance Window until the specified future date.</p>
     */
    inline CreateMaintenanceWindowRequest& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become active. StartDate allows you to delay activation of
     * the Maintenance Window until the specified future date.</p>
     */
    inline CreateMaintenanceWindowRequest& WithStartDate(const char* value) { SetStartDate(value); return *this;}


    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become inactive. EndDate allows you to set a date and time
     * in the future when the Maintenance Window will no longer run.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become inactive. EndDate allows you to set a date and time
     * in the future when the Maintenance Window will no longer run.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become inactive. EndDate allows you to set a date and time
     * in the future when the Maintenance Window will no longer run.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become inactive. EndDate allows you to set a date and time
     * in the future when the Maintenance Window will no longer run.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become inactive. EndDate allows you to set a date and time
     * in the future when the Maintenance Window will no longer run.</p>
     */
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become inactive. EndDate allows you to set a date and time
     * in the future when the Maintenance Window will no longer run.</p>
     */
    inline CreateMaintenanceWindowRequest& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become inactive. EndDate allows you to set a date and time
     * in the future when the Maintenance Window will no longer run.</p>
     */
    inline CreateMaintenanceWindowRequest& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * Maintenance Window to become inactive. EndDate allows you to set a date and time
     * in the future when the Maintenance Window will no longer run.</p>
     */
    inline CreateMaintenanceWindowRequest& WithEndDate(const char* value) { SetEndDate(value); return *this;}


    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline CreateMaintenanceWindowRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline CreateMaintenanceWindowRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline CreateMaintenanceWindowRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>The time zone that the scheduled Maintenance Window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline const Aws::String& GetScheduleTimezone() const{ return m_scheduleTimezone; }

    /**
     * <p>The time zone that the scheduled Maintenance Window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline bool ScheduleTimezoneHasBeenSet() const { return m_scheduleTimezoneHasBeenSet; }

    /**
     * <p>The time zone that the scheduled Maintenance Window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline void SetScheduleTimezone(const Aws::String& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = value; }

    /**
     * <p>The time zone that the scheduled Maintenance Window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline void SetScheduleTimezone(Aws::String&& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = std::move(value); }

    /**
     * <p>The time zone that the scheduled Maintenance Window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline void SetScheduleTimezone(const char* value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone.assign(value); }

    /**
     * <p>The time zone that the scheduled Maintenance Window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline CreateMaintenanceWindowRequest& WithScheduleTimezone(const Aws::String& value) { SetScheduleTimezone(value); return *this;}

    /**
     * <p>The time zone that the scheduled Maintenance Window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline CreateMaintenanceWindowRequest& WithScheduleTimezone(Aws::String&& value) { SetScheduleTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone that the scheduled Maintenance Window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline CreateMaintenanceWindowRequest& WithScheduleTimezone(const char* value) { SetScheduleTimezone(value); return *this;}


    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline CreateMaintenanceWindowRequest& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline bool CutoffHasBeenSet() const { return m_cutoffHasBeenSet; }

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline void SetCutoff(int value) { m_cutoffHasBeenSet = true; m_cutoff = value; }

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline CreateMaintenanceWindowRequest& WithCutoff(int value) { SetCutoff(value); return *this;}


    /**
     * <p>Enables a Maintenance Window task to run on managed instances, even if you
     * have not registered those instances as targets. If enabled, then you must
     * specify the unregistered instances (by instance ID) when you register a task
     * with the Maintenance Window </p> <p>If you don't enable this option, then you
     * must specify previously-registered targets when you register a task with the
     * Maintenance Window. </p>
     */
    inline bool GetAllowUnassociatedTargets() const{ return m_allowUnassociatedTargets; }

    /**
     * <p>Enables a Maintenance Window task to run on managed instances, even if you
     * have not registered those instances as targets. If enabled, then you must
     * specify the unregistered instances (by instance ID) when you register a task
     * with the Maintenance Window </p> <p>If you don't enable this option, then you
     * must specify previously-registered targets when you register a task with the
     * Maintenance Window. </p>
     */
    inline bool AllowUnassociatedTargetsHasBeenSet() const { return m_allowUnassociatedTargetsHasBeenSet; }

    /**
     * <p>Enables a Maintenance Window task to run on managed instances, even if you
     * have not registered those instances as targets. If enabled, then you must
     * specify the unregistered instances (by instance ID) when you register a task
     * with the Maintenance Window </p> <p>If you don't enable this option, then you
     * must specify previously-registered targets when you register a task with the
     * Maintenance Window. </p>
     */
    inline void SetAllowUnassociatedTargets(bool value) { m_allowUnassociatedTargetsHasBeenSet = true; m_allowUnassociatedTargets = value; }

    /**
     * <p>Enables a Maintenance Window task to run on managed instances, even if you
     * have not registered those instances as targets. If enabled, then you must
     * specify the unregistered instances (by instance ID) when you register a task
     * with the Maintenance Window </p> <p>If you don't enable this option, then you
     * must specify previously-registered targets when you register a task with the
     * Maintenance Window. </p>
     */
    inline CreateMaintenanceWindowRequest& WithAllowUnassociatedTargets(bool value) { SetAllowUnassociatedTargets(value); return *this;}


    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreateMaintenanceWindowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreateMaintenanceWindowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreateMaintenanceWindowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Maintenance Window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key name/value pairs:</p>
     * <ul> <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing Maintenance Window, use the <a>AddTagsToResource</a>
     * action.</p> </note>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Maintenance Window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key name/value pairs:</p>
     * <ul> <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing Maintenance Window, use the <a>AddTagsToResource</a>
     * action.</p> </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Maintenance Window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key name/value pairs:</p>
     * <ul> <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing Maintenance Window, use the <a>AddTagsToResource</a>
     * action.</p> </note>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Maintenance Window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key name/value pairs:</p>
     * <ul> <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing Maintenance Window, use the <a>AddTagsToResource</a>
     * action.</p> </note>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Maintenance Window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key name/value pairs:</p>
     * <ul> <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing Maintenance Window, use the <a>AddTagsToResource</a>
     * action.</p> </note>
     */
    inline CreateMaintenanceWindowRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Maintenance Window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key name/value pairs:</p>
     * <ul> <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing Maintenance Window, use the <a>AddTagsToResource</a>
     * action.</p> </note>
     */
    inline CreateMaintenanceWindowRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Maintenance Window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key name/value pairs:</p>
     * <ul> <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing Maintenance Window, use the <a>AddTagsToResource</a>
     * action.</p> </note>
     */
    inline CreateMaintenanceWindowRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Maintenance Window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key name/value pairs:</p>
     * <ul> <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing Maintenance Window, use the <a>AddTagsToResource</a>
     * action.</p> </note>
     */
    inline CreateMaintenanceWindowRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet;

    Aws::String m_scheduleTimezone;
    bool m_scheduleTimezoneHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    int m_cutoff;
    bool m_cutoffHasBeenSet;

    bool m_allowUnassociatedTargets;
    bool m_allowUnassociatedTargetsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
