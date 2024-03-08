/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/CopyJobStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>This is a summary of copy jobs created or running within the most recent 30
   * days.</p> <p>The returned summary may contain the following: Region, Account,
   * State, RestourceType, MessageCategory, StartTime, EndTime, and Count of included
   * jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CopyJobSummary">AWS
   * API Reference</a></p>
   */
  class CopyJobSummary
  {
  public:
    AWS_BACKUP_API CopyJobSummary();
    AWS_BACKUP_API CopyJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API CopyJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This is the Amazon Web Services Regions within the job summary.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>This is the Amazon Web Services Regions within the job summary.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>This is the Amazon Web Services Regions within the job summary.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>This is the Amazon Web Services Regions within the job summary.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>This is the Amazon Web Services Regions within the job summary.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>This is the Amazon Web Services Regions within the job summary.</p>
     */
    inline CopyJobSummary& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>This is the Amazon Web Services Regions within the job summary.</p>
     */
    inline CopyJobSummary& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>This is the Amazon Web Services Regions within the job summary.</p>
     */
    inline CopyJobSummary& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline CopyJobSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline CopyJobSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline CopyJobSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>This value is job count for jobs with the specified state.</p>
     */
    inline const CopyJobStatus& GetState() const{ return m_state; }

    /**
     * <p>This value is job count for jobs with the specified state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>This value is job count for jobs with the specified state.</p>
     */
    inline void SetState(const CopyJobStatus& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>This value is job count for jobs with the specified state.</p>
     */
    inline void SetState(CopyJobStatus&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>This value is job count for jobs with the specified state.</p>
     */
    inline CopyJobSummary& WithState(const CopyJobStatus& value) { SetState(value); return *this;}

    /**
     * <p>This value is job count for jobs with the specified state.</p>
     */
    inline CopyJobSummary& WithState(CopyJobStatus&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types</p>
     */
    inline CopyJobSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types</p>
     */
    inline CopyJobSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types</p>
     */
    inline CopyJobSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings include <code>AccessDenied</code>, <code>Success</code>, and
     * <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline const Aws::String& GetMessageCategory() const{ return m_messageCategory; }

    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings include <code>AccessDenied</code>, <code>Success</code>, and
     * <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline bool MessageCategoryHasBeenSet() const { return m_messageCategoryHasBeenSet; }

    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings include <code>AccessDenied</code>, <code>Success</code>, and
     * <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline void SetMessageCategory(const Aws::String& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = value; }

    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings include <code>AccessDenied</code>, <code>Success</code>, and
     * <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline void SetMessageCategory(Aws::String&& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = std::move(value); }

    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings include <code>AccessDenied</code>, <code>Success</code>, and
     * <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline void SetMessageCategory(const char* value) { m_messageCategoryHasBeenSet = true; m_messageCategory.assign(value); }

    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings include <code>AccessDenied</code>, <code>Success</code>, and
     * <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline CopyJobSummary& WithMessageCategory(const Aws::String& value) { SetMessageCategory(value); return *this;}

    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings include <code>AccessDenied</code>, <code>Success</code>, and
     * <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline CopyJobSummary& WithMessageCategory(Aws::String&& value) { SetMessageCategory(std::move(value)); return *this;}

    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings include <code>AccessDenied</code>, <code>Success</code>, and
     * <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline CopyJobSummary& WithMessageCategory(const char* value) { SetMessageCategory(value); return *this;}


    /**
     * <p>The value as a number of jobs in a job summary.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The value as a number of jobs in a job summary.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The value as a number of jobs in a job summary.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The value as a number of jobs in a job summary.</p>
     */
    inline CopyJobSummary& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The value of time in number format of a job start time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The value of time in number format of a job start time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The value of time in number format of a job start time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The value of time in number format of a job start time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The value of time in number format of a job start time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CopyJobSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The value of time in number format of a job start time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CopyJobSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The value of time in number format of a job end time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The value of time in number format of a job end time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The value of time in number format of a job end time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The value of time in number format of a job end time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The value of time in number format of a job end time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CopyJobSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The value of time in number format of a job end time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CopyJobSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CopyJobStatus m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_messageCategory;
    bool m_messageCategoryHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
