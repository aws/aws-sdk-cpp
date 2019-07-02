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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/UsageReportSchedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/LastReportGenerationExecutionError.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes information about the usage report subscription.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UsageReportSubscription">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API UsageReportSubscription
  {
  public:
    UsageReportSubscription();
    UsageReportSubscription(Aws::Utils::Json::JsonView jsonValue);
    UsageReportSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline UsageReportSubscription& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline UsageReportSubscription& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline UsageReportSubscription& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline const UsageReportSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline void SetSchedule(const UsageReportSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline void SetSchedule(UsageReportSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline UsageReportSubscription& WithSchedule(const UsageReportSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline UsageReportSubscription& WithSchedule(UsageReportSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The time when the last usage report was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedReportDate() const{ return m_lastGeneratedReportDate; }

    /**
     * <p>The time when the last usage report was generated.</p>
     */
    inline bool LastGeneratedReportDateHasBeenSet() const { return m_lastGeneratedReportDateHasBeenSet; }

    /**
     * <p>The time when the last usage report was generated.</p>
     */
    inline void SetLastGeneratedReportDate(const Aws::Utils::DateTime& value) { m_lastGeneratedReportDateHasBeenSet = true; m_lastGeneratedReportDate = value; }

    /**
     * <p>The time when the last usage report was generated.</p>
     */
    inline void SetLastGeneratedReportDate(Aws::Utils::DateTime&& value) { m_lastGeneratedReportDateHasBeenSet = true; m_lastGeneratedReportDate = std::move(value); }

    /**
     * <p>The time when the last usage report was generated.</p>
     */
    inline UsageReportSubscription& WithLastGeneratedReportDate(const Aws::Utils::DateTime& value) { SetLastGeneratedReportDate(value); return *this;}

    /**
     * <p>The time when the last usage report was generated.</p>
     */
    inline UsageReportSubscription& WithLastGeneratedReportDate(Aws::Utils::DateTime&& value) { SetLastGeneratedReportDate(std::move(value)); return *this;}


    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline const Aws::Vector<LastReportGenerationExecutionError>& GetSubscriptionErrors() const{ return m_subscriptionErrors; }

    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline bool SubscriptionErrorsHasBeenSet() const { return m_subscriptionErrorsHasBeenSet; }

    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline void SetSubscriptionErrors(const Aws::Vector<LastReportGenerationExecutionError>& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors = value; }

    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline void SetSubscriptionErrors(Aws::Vector<LastReportGenerationExecutionError>&& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors = std::move(value); }

    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline UsageReportSubscription& WithSubscriptionErrors(const Aws::Vector<LastReportGenerationExecutionError>& value) { SetSubscriptionErrors(value); return *this;}

    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline UsageReportSubscription& WithSubscriptionErrors(Aws::Vector<LastReportGenerationExecutionError>&& value) { SetSubscriptionErrors(std::move(value)); return *this;}

    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline UsageReportSubscription& AddSubscriptionErrors(const LastReportGenerationExecutionError& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors.push_back(value); return *this; }

    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline UsageReportSubscription& AddSubscriptionErrors(LastReportGenerationExecutionError&& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    UsageReportSchedule m_schedule;
    bool m_scheduleHasBeenSet;

    Aws::Utils::DateTime m_lastGeneratedReportDate;
    bool m_lastGeneratedReportDateHasBeenSet;

    Aws::Vector<LastReportGenerationExecutionError> m_subscriptionErrors;
    bool m_subscriptionErrorsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
