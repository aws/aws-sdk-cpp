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
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API CreateUsageReportSubscriptionResult
  {
  public:
    CreateUsageReportSubscriptionResult();
    CreateUsageReportSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateUsageReportSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketName = value; }

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketName = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketName.assign(value); }

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline CreateUsageReportSubscriptionResult& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline CreateUsageReportSubscriptionResult& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline CreateUsageReportSubscriptionResult& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline const UsageReportSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline void SetSchedule(const UsageReportSchedule& value) { m_schedule = value; }

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline void SetSchedule(UsageReportSchedule&& value) { m_schedule = std::move(value); }

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline CreateUsageReportSubscriptionResult& WithSchedule(const UsageReportSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline CreateUsageReportSubscriptionResult& WithSchedule(UsageReportSchedule&& value) { SetSchedule(std::move(value)); return *this;}

  private:

    Aws::String m_s3BucketName;

    UsageReportSchedule m_schedule;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
