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
#include <aws/alexaforbusiness/model/BusinessReportContentRange.h>
#include <aws/alexaforbusiness/model/BusinessReportRecurrence.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API CreateBusinessReportScheduleRequest : public AlexaForBusinessRequest
  {
  public:
    CreateBusinessReportScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBusinessReportSchedule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateBusinessReportScheduleRequest& WithScheduleName(const Aws::String& value) { SetScheduleName(value); return *this;}

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline CreateBusinessReportScheduleRequest& WithScheduleName(Aws::String&& value) { SetScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name identifier of the schedule.</p>
     */
    inline CreateBusinessReportScheduleRequest& WithScheduleName(const char* value) { SetScheduleName(value); return *this;}


    /**
     * <p>The S3 bucket name of the output reports. If this isn't specified, the report
     * can be retrieved from a download link by calling ListBusinessReportSchedule.
     * </p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The S3 bucket name of the output reports. If this isn't specified, the report
     * can be retrieved from a download link by calling ListBusinessReportSchedule.
     * </p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The S3 bucket name of the output reports. If this isn't specified, the report
     * can be retrieved from a download link by calling ListBusinessReportSchedule.
     * </p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The S3 bucket name of the output reports. If this isn't specified, the report
     * can be retrieved from a download link by calling ListBusinessReportSchedule.
     * </p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The S3 bucket name of the output reports. If this isn't specified, the report
     * can be retrieved from a download link by calling ListBusinessReportSchedule.
     * </p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The S3 bucket name of the output reports. If this isn't specified, the report
     * can be retrieved from a download link by calling ListBusinessReportSchedule.
     * </p>
     */
    inline CreateBusinessReportScheduleRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket name of the output reports. If this isn't specified, the report
     * can be retrieved from a download link by calling ListBusinessReportSchedule.
     * </p>
     */
    inline CreateBusinessReportScheduleRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket name of the output reports. If this isn't specified, the report
     * can be retrieved from a download link by calling ListBusinessReportSchedule.
     * </p>
     */
    inline CreateBusinessReportScheduleRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


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
    inline CreateBusinessReportScheduleRequest& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline CreateBusinessReportScheduleRequest& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 key where the report is delivered.</p>
     */
    inline CreateBusinessReportScheduleRequest& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


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
    inline CreateBusinessReportScheduleRequest& WithFormat(const BusinessReportFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the generated report (individual CSV files or zipped files of
     * individual files).</p>
     */
    inline CreateBusinessReportScheduleRequest& WithFormat(BusinessReportFormat&& value) { SetFormat(std::move(value)); return *this;}


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
    inline CreateBusinessReportScheduleRequest& WithContentRange(const BusinessReportContentRange& value) { SetContentRange(value); return *this;}

    /**
     * <p>The content range of the reports.</p>
     */
    inline CreateBusinessReportScheduleRequest& WithContentRange(BusinessReportContentRange&& value) { SetContentRange(std::move(value)); return *this;}


    /**
     * <p>The recurrence of the reports. If this isn't specified, the report will only
     * be delivered one time when the API is called. </p>
     */
    inline const BusinessReportRecurrence& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>The recurrence of the reports. If this isn't specified, the report will only
     * be delivered one time when the API is called. </p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>The recurrence of the reports. If this isn't specified, the report will only
     * be delivered one time when the API is called. </p>
     */
    inline void SetRecurrence(const BusinessReportRecurrence& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The recurrence of the reports. If this isn't specified, the report will only
     * be delivered one time when the API is called. </p>
     */
    inline void SetRecurrence(BusinessReportRecurrence&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>The recurrence of the reports. If this isn't specified, the report will only
     * be delivered one time when the API is called. </p>
     */
    inline CreateBusinessReportScheduleRequest& WithRecurrence(const BusinessReportRecurrence& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The recurrence of the reports. If this isn't specified, the report will only
     * be delivered one time when the API is called. </p>
     */
    inline CreateBusinessReportScheduleRequest& WithRecurrence(BusinessReportRecurrence&& value) { SetRecurrence(std::move(value)); return *this;}


    /**
     * <p>The client request token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The client request token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The client request token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The client request token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The client request token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The client request token.</p>
     */
    inline CreateBusinessReportScheduleRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The client request token.</p>
     */
    inline CreateBusinessReportScheduleRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The client request token.</p>
     */
    inline CreateBusinessReportScheduleRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

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

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
