/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateUsageReportSubscriptionResult
  {
  public:
    AWS_APPSTREAM_API CreateUsageReportSubscriptionResult() = default;
    AWS_APPSTREAM_API CreateUsageReportSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateUsageReportSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    CreateUsageReportSubscriptionResult& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline UsageReportSchedule GetSchedule() const { return m_schedule; }
    inline void SetSchedule(UsageReportSchedule value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline CreateUsageReportSubscriptionResult& WithSchedule(UsageReportSchedule value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateUsageReportSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    UsageReportSchedule m_schedule{UsageReportSchedule::NOT_SET};
    bool m_scheduleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
