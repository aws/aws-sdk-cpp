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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/BusinessReportFormat.h>
#include <aws/alexaforbusiness/model/BusinessReportContentRange.h>
#include <aws/alexaforbusiness/model/BusinessReportRecurrence.h>
#include <aws/alexaforbusiness/model/BusinessReport.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The schedule of the usage report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/BusinessReportSchedule">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API BusinessReportSchedule
  {
  public:
    BusinessReportSchedule();
    BusinessReportSchedule(Aws::Utils::Json::JsonView jsonValue);
    BusinessReportSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline const Aws::String& GetScheduleArn() const{ return m_scheduleArn; }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline bool ScheduleArnHasBeenSet() const { return m_scheduleArnHasBeenSet; }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(const Aws::String& value) { m_scheduleArnHasBeenSet = true; m_scheduleArn = value; }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(Aws::String&& value) { m_scheduleArnHasBeenSet = true; m_scheduleArn = std::move(value); }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(const char* value) { m_scheduleArnHasBeenSet = true; m_scheduleArn.assign(value); }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline BusinessReportSchedule& WithScheduleArn(const Aws::String& value) { SetScheduleArn(value); return *this;}

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline BusinessReportSchedule& WithScheduleArn(Aws::String&& value) { SetScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline BusinessReportSchedule& WithScheduleArn(const char* value) { SetScheduleArn(value); return *this;}


    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline const Aws::String& GetScheduleName() const{ return m_scheduleName; }

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline bool ScheduleNameHasBeenSet() const { return m_scheduleNameHasBeenSet; }

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline void SetScheduleName(const Aws::String& value) { m_scheduleNameHasBeenSet = true; m_scheduleName = value; }

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline void SetScheduleName(Aws::String&& value) { m_scheduleNameHasBeenSet = true; m_scheduleName = std::move(value); }

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline void SetScheduleName(const char* value) { m_scheduleNameHasBeenSet = true; m_scheduleName.assign(value); }

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline BusinessReportSchedule& WithScheduleName(const Aws::String& value) { SetScheduleName(value); return *this;}

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline BusinessReportSchedule& WithScheduleName(Aws::String&& value) { SetScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline BusinessReportSchedule& WithScheduleName(const char* value) { SetScheduleName(value); return *this;}


    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline BusinessReportSchedule& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline BusinessReportSchedule& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline BusinessReportSchedule& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline BusinessReportSchedule& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline BusinessReportSchedule& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline BusinessReportSchedule& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


    /**
     * <p>The format of the generated report (individual CSV files or zipped files of
     * individual files).</p>
     */
    inline const BusinessReportFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the generated report (individual CSV files or zipped files of
     * individual files).</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the generated report (individual CSV files or zipped files of
     * individual files).</p>
     */
    inline void SetFormat(const BusinessReportFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the generated report (individual CSV files or zipped files of
     * individual files).</p>
     */
    inline void SetFormat(BusinessReportFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the generated report (individual CSV files or zipped files of
     * individual files).</p>
     */
    inline BusinessReportSchedule& WithFormat(const BusinessReportFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the generated report (individual CSV files or zipped files of
     * individual files).</p>
     */
    inline BusinessReportSchedule& WithFormat(BusinessReportFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The content range of the reports.</p>
     */
    inline const BusinessReportContentRange& GetContentRange() const{ return m_contentRange; }

    /**
     * <p>The content range of the reports.</p>
     */
    inline bool ContentRangeHasBeenSet() const { return m_contentRangeHasBeenSet; }

    /**
     * <p>The content range of the reports.</p>
     */
    inline void SetContentRange(const BusinessReportContentRange& value) { m_contentRangeHasBeenSet = true; m_contentRange = value; }

    /**
     * <p>The content range of the reports.</p>
     */
    inline void SetContentRange(BusinessReportContentRange&& value) { m_contentRangeHasBeenSet = true; m_contentRange = std::move(value); }

    /**
     * <p>The content range of the reports.</p>
     */
    inline BusinessReportSchedule& WithContentRange(const BusinessReportContentRange& value) { SetContentRange(value); return *this;}

    /**
     * <p>The content range of the reports.</p>
     */
    inline BusinessReportSchedule& WithContentRange(BusinessReportContentRange&& value) { SetContentRange(std::move(value)); return *this;}


    /**
     * <p>The recurrence of the reports.</p>
     */
    inline const BusinessReportRecurrence& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>The recurrence of the reports.</p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>The recurrence of the reports.</p>
     */
    inline void SetRecurrence(const BusinessReportRecurrence& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The recurrence of the reports.</p>
     */
    inline void SetRecurrence(BusinessReportRecurrence&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>The recurrence of the reports.</p>
     */
    inline BusinessReportSchedule& WithRecurrence(const BusinessReportRecurrence& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The recurrence of the reports.</p>
     */
    inline BusinessReportSchedule& WithRecurrence(BusinessReportRecurrence&& value) { SetRecurrence(std::move(value)); return *this;}


    /**
     * <p>The details of the last business report delivery for a specified time
     * interval.</p>
     */
    inline const BusinessReport& GetLastBusinessReport() const{ return m_lastBusinessReport; }

    /**
     * <p>The details of the last business report delivery for a specified time
     * interval.</p>
     */
    inline bool LastBusinessReportHasBeenSet() const { return m_lastBusinessReportHasBeenSet; }

    /**
     * <p>The details of the last business report delivery for a specified time
     * interval.</p>
     */
    inline void SetLastBusinessReport(const BusinessReport& value) { m_lastBusinessReportHasBeenSet = true; m_lastBusinessReport = value; }

    /**
     * <p>The details of the last business report delivery for a specified time
     * interval.</p>
     */
    inline void SetLastBusinessReport(BusinessReport&& value) { m_lastBusinessReportHasBeenSet = true; m_lastBusinessReport = std::move(value); }

    /**
     * <p>The details of the last business report delivery for a specified time
     * interval.</p>
     */
    inline BusinessReportSchedule& WithLastBusinessReport(const BusinessReport& value) { SetLastBusinessReport(value); return *this;}

    /**
     * <p>The details of the last business report delivery for a specified time
     * interval.</p>
     */
    inline BusinessReportSchedule& WithLastBusinessReport(BusinessReport&& value) { SetLastBusinessReport(std::move(value)); return *this;}

  private:

    Aws::String m_scheduleArn;
    bool m_scheduleArnHasBeenSet;

    Aws::String m_scheduleName;
    bool m_scheduleNameHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet;

    BusinessReportFormat m_format;
    bool m_formatHasBeenSet;

    BusinessReportContentRange m_contentRange;
    bool m_contentRangeHasBeenSet;

    BusinessReportRecurrence m_recurrence;
    bool m_recurrenceHasBeenSet;

    BusinessReport m_lastBusinessReport;
    bool m_lastBusinessReportHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
