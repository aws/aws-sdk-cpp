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
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/BusinessReportFormat.h>
#include <aws/alexaforbusiness/model/BusinessReportRecurrence.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API UpdateBusinessReportScheduleRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateBusinessReportScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBusinessReportSchedule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateBusinessReportScheduleRequest& WithScheduleArn(const Aws::String& value) { SetScheduleArn(value); return *this;}

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithScheduleArn(Aws::String&& value) { SetScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithScheduleArn(const char* value) { SetScheduleArn(value); return *this;}


    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


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
    inline UpdateBusinessReportScheduleRequest& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


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
    inline UpdateBusinessReportScheduleRequest& WithFormat(const BusinessReportFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the generated report (individual CSV files or zipped files of
     * individual files).</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithFormat(BusinessReportFormat&& value) { SetFormat(std::move(value)); return *this;}


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
    inline UpdateBusinessReportScheduleRequest& WithScheduleName(const Aws::String& value) { SetScheduleName(value); return *this;}

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithScheduleName(Aws::String&& value) { SetScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithScheduleName(const char* value) { SetScheduleName(value); return *this;}


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
    inline UpdateBusinessReportScheduleRequest& WithRecurrence(const BusinessReportRecurrence& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The recurrence of the reports.</p>
     */
    inline UpdateBusinessReportScheduleRequest& WithRecurrence(BusinessReportRecurrence&& value) { SetRecurrence(std::move(value)); return *this;}

  private:

    Aws::String m_scheduleArn;
    bool m_scheduleArnHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet;

    BusinessReportFormat m_format;
    bool m_formatHasBeenSet;

    Aws::String m_scheduleName;
    bool m_scheduleNameHasBeenSet;

    BusinessReportRecurrence m_recurrence;
    bool m_recurrenceHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
