/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudTrail
{
namespace Model
{
  /**
   * <p>Returns the objects or data listed below if successful. Otherwise, returns an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrailStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetTrailStatusResult
  {
  public:
    AWS_CLOUDTRAIL_API GetTrailStatusResult();
    AWS_CLOUDTRAIL_API GetTrailStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetTrailStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether the CloudTrail trail is currently logging Amazon Web Services API
     * calls.</p>
     */
    inline bool GetIsLogging() const{ return m_isLogging; }
    inline void SetIsLogging(bool value) { m_isLogging = value; }
    inline GetTrailStatusResult& WithIsLogging(bool value) { SetIsLogging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver log files to the designated bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p>  <p>This error occurs
     * only when there is a problem with the destination S3 bucket, and does not occur
     * for requests that time out. To resolve the issue, fix the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/create-s3-bucket-policy-for-cloudtrail.html">bucket
     * policy</a> so that CloudTrail can write to the bucket; or create a new bucket
     * and call <code>UpdateTrail</code> to specify the new bucket.</p> 
     */
    inline const Aws::String& GetLatestDeliveryError() const{ return m_latestDeliveryError; }
    inline void SetLatestDeliveryError(const Aws::String& value) { m_latestDeliveryError = value; }
    inline void SetLatestDeliveryError(Aws::String&& value) { m_latestDeliveryError = std::move(value); }
    inline void SetLatestDeliveryError(const char* value) { m_latestDeliveryError.assign(value); }
    inline GetTrailStatusResult& WithLatestDeliveryError(const Aws::String& value) { SetLatestDeliveryError(value); return *this;}
    inline GetTrailStatusResult& WithLatestDeliveryError(Aws::String&& value) { SetLatestDeliveryError(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithLatestDeliveryError(const char* value) { SetLatestDeliveryError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline const Aws::String& GetLatestNotificationError() const{ return m_latestNotificationError; }
    inline void SetLatestNotificationError(const Aws::String& value) { m_latestNotificationError = value; }
    inline void SetLatestNotificationError(Aws::String&& value) { m_latestNotificationError = std::move(value); }
    inline void SetLatestNotificationError(const char* value) { m_latestNotificationError.assign(value); }
    inline GetTrailStatusResult& WithLatestNotificationError(const Aws::String& value) { SetLatestNotificationError(value); return *this;}
    inline GetTrailStatusResult& WithLatestNotificationError(Aws::String&& value) { SetLatestNotificationError(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithLatestNotificationError(const char* value) { SetLatestNotificationError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date and time that CloudTrail last delivered log files to an
     * account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestDeliveryTime() const{ return m_latestDeliveryTime; }
    inline void SetLatestDeliveryTime(const Aws::Utils::DateTime& value) { m_latestDeliveryTime = value; }
    inline void SetLatestDeliveryTime(Aws::Utils::DateTime&& value) { m_latestDeliveryTime = std::move(value); }
    inline GetTrailStatusResult& WithLatestDeliveryTime(const Aws::Utils::DateTime& value) { SetLatestDeliveryTime(value); return *this;}
    inline GetTrailStatusResult& WithLatestDeliveryTime(Aws::Utils::DateTime&& value) { SetLatestDeliveryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date and time of the most recent Amazon SNS notification that
     * CloudTrail has written a new log file to an account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestNotificationTime() const{ return m_latestNotificationTime; }
    inline void SetLatestNotificationTime(const Aws::Utils::DateTime& value) { m_latestNotificationTime = value; }
    inline void SetLatestNotificationTime(Aws::Utils::DateTime&& value) { m_latestNotificationTime = std::move(value); }
    inline GetTrailStatusResult& WithLatestNotificationTime(const Aws::Utils::DateTime& value) { SetLatestNotificationTime(value); return *this;}
    inline GetTrailStatusResult& WithLatestNotificationTime(Aws::Utils::DateTime&& value) { SetLatestNotificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the most recent date and time when CloudTrail started recording API
     * calls for an Amazon Web Services account.</p>
     */
    inline const Aws::Utils::DateTime& GetStartLoggingTime() const{ return m_startLoggingTime; }
    inline void SetStartLoggingTime(const Aws::Utils::DateTime& value) { m_startLoggingTime = value; }
    inline void SetStartLoggingTime(Aws::Utils::DateTime&& value) { m_startLoggingTime = std::move(value); }
    inline GetTrailStatusResult& WithStartLoggingTime(const Aws::Utils::DateTime& value) { SetStartLoggingTime(value); return *this;}
    inline GetTrailStatusResult& WithStartLoggingTime(Aws::Utils::DateTime&& value) { SetStartLoggingTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the most recent date and time when CloudTrail stopped recording API
     * calls for an Amazon Web Services account.</p>
     */
    inline const Aws::Utils::DateTime& GetStopLoggingTime() const{ return m_stopLoggingTime; }
    inline void SetStopLoggingTime(const Aws::Utils::DateTime& value) { m_stopLoggingTime = value; }
    inline void SetStopLoggingTime(Aws::Utils::DateTime&& value) { m_stopLoggingTime = std::move(value); }
    inline GetTrailStatusResult& WithStopLoggingTime(const Aws::Utils::DateTime& value) { SetStopLoggingTime(value); return *this;}
    inline GetTrailStatusResult& WithStopLoggingTime(Aws::Utils::DateTime&& value) { SetStopLoggingTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline const Aws::String& GetLatestCloudWatchLogsDeliveryError() const{ return m_latestCloudWatchLogsDeliveryError; }
    inline void SetLatestCloudWatchLogsDeliveryError(const Aws::String& value) { m_latestCloudWatchLogsDeliveryError = value; }
    inline void SetLatestCloudWatchLogsDeliveryError(Aws::String&& value) { m_latestCloudWatchLogsDeliveryError = std::move(value); }
    inline void SetLatestCloudWatchLogsDeliveryError(const char* value) { m_latestCloudWatchLogsDeliveryError.assign(value); }
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryError(const Aws::String& value) { SetLatestCloudWatchLogsDeliveryError(value); return *this;}
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryError(Aws::String&& value) { SetLatestCloudWatchLogsDeliveryError(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryError(const char* value) { SetLatestCloudWatchLogsDeliveryError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the most recent date and time when CloudTrail delivered logs to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestCloudWatchLogsDeliveryTime() const{ return m_latestCloudWatchLogsDeliveryTime; }
    inline void SetLatestCloudWatchLogsDeliveryTime(const Aws::Utils::DateTime& value) { m_latestCloudWatchLogsDeliveryTime = value; }
    inline void SetLatestCloudWatchLogsDeliveryTime(Aws::Utils::DateTime&& value) { m_latestCloudWatchLogsDeliveryTime = std::move(value); }
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryTime(const Aws::Utils::DateTime& value) { SetLatestCloudWatchLogsDeliveryTime(value); return *this;}
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryTime(Aws::Utils::DateTime&& value) { SetLatestCloudWatchLogsDeliveryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date and time that CloudTrail last delivered a digest file to
     * an account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestDigestDeliveryTime() const{ return m_latestDigestDeliveryTime; }
    inline void SetLatestDigestDeliveryTime(const Aws::Utils::DateTime& value) { m_latestDigestDeliveryTime = value; }
    inline void SetLatestDigestDeliveryTime(Aws::Utils::DateTime&& value) { m_latestDigestDeliveryTime = std::move(value); }
    inline GetTrailStatusResult& WithLatestDigestDeliveryTime(const Aws::Utils::DateTime& value) { SetLatestDigestDeliveryTime(value); return *this;}
    inline GetTrailStatusResult& WithLatestDigestDeliveryTime(Aws::Utils::DateTime&& value) { SetLatestDigestDeliveryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver a digest file to the designated bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p>  <p>This error occurs
     * only when there is a problem with the destination S3 bucket, and does not occur
     * for requests that time out. To resolve the issue, fix the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/create-s3-bucket-policy-for-cloudtrail.html">bucket
     * policy</a> so that CloudTrail can write to the bucket; or create a new bucket
     * and call <code>UpdateTrail</code> to specify the new bucket.</p> 
     */
    inline const Aws::String& GetLatestDigestDeliveryError() const{ return m_latestDigestDeliveryError; }
    inline void SetLatestDigestDeliveryError(const Aws::String& value) { m_latestDigestDeliveryError = value; }
    inline void SetLatestDigestDeliveryError(Aws::String&& value) { m_latestDigestDeliveryError = std::move(value); }
    inline void SetLatestDigestDeliveryError(const char* value) { m_latestDigestDeliveryError.assign(value); }
    inline GetTrailStatusResult& WithLatestDigestDeliveryError(const Aws::String& value) { SetLatestDigestDeliveryError(value); return *this;}
    inline GetTrailStatusResult& WithLatestDigestDeliveryError(Aws::String&& value) { SetLatestDigestDeliveryError(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithLatestDigestDeliveryError(const char* value) { SetLatestDigestDeliveryError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetLatestDeliveryAttemptTime() const{ return m_latestDeliveryAttemptTime; }
    inline void SetLatestDeliveryAttemptTime(const Aws::String& value) { m_latestDeliveryAttemptTime = value; }
    inline void SetLatestDeliveryAttemptTime(Aws::String&& value) { m_latestDeliveryAttemptTime = std::move(value); }
    inline void SetLatestDeliveryAttemptTime(const char* value) { m_latestDeliveryAttemptTime.assign(value); }
    inline GetTrailStatusResult& WithLatestDeliveryAttemptTime(const Aws::String& value) { SetLatestDeliveryAttemptTime(value); return *this;}
    inline GetTrailStatusResult& WithLatestDeliveryAttemptTime(Aws::String&& value) { SetLatestDeliveryAttemptTime(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithLatestDeliveryAttemptTime(const char* value) { SetLatestDeliveryAttemptTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetLatestNotificationAttemptTime() const{ return m_latestNotificationAttemptTime; }
    inline void SetLatestNotificationAttemptTime(const Aws::String& value) { m_latestNotificationAttemptTime = value; }
    inline void SetLatestNotificationAttemptTime(Aws::String&& value) { m_latestNotificationAttemptTime = std::move(value); }
    inline void SetLatestNotificationAttemptTime(const char* value) { m_latestNotificationAttemptTime.assign(value); }
    inline GetTrailStatusResult& WithLatestNotificationAttemptTime(const Aws::String& value) { SetLatestNotificationAttemptTime(value); return *this;}
    inline GetTrailStatusResult& WithLatestNotificationAttemptTime(Aws::String&& value) { SetLatestNotificationAttemptTime(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithLatestNotificationAttemptTime(const char* value) { SetLatestNotificationAttemptTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetLatestNotificationAttemptSucceeded() const{ return m_latestNotificationAttemptSucceeded; }
    inline void SetLatestNotificationAttemptSucceeded(const Aws::String& value) { m_latestNotificationAttemptSucceeded = value; }
    inline void SetLatestNotificationAttemptSucceeded(Aws::String&& value) { m_latestNotificationAttemptSucceeded = std::move(value); }
    inline void SetLatestNotificationAttemptSucceeded(const char* value) { m_latestNotificationAttemptSucceeded.assign(value); }
    inline GetTrailStatusResult& WithLatestNotificationAttemptSucceeded(const Aws::String& value) { SetLatestNotificationAttemptSucceeded(value); return *this;}
    inline GetTrailStatusResult& WithLatestNotificationAttemptSucceeded(Aws::String&& value) { SetLatestNotificationAttemptSucceeded(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithLatestNotificationAttemptSucceeded(const char* value) { SetLatestNotificationAttemptSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetLatestDeliveryAttemptSucceeded() const{ return m_latestDeliveryAttemptSucceeded; }
    inline void SetLatestDeliveryAttemptSucceeded(const Aws::String& value) { m_latestDeliveryAttemptSucceeded = value; }
    inline void SetLatestDeliveryAttemptSucceeded(Aws::String&& value) { m_latestDeliveryAttemptSucceeded = std::move(value); }
    inline void SetLatestDeliveryAttemptSucceeded(const char* value) { m_latestDeliveryAttemptSucceeded.assign(value); }
    inline GetTrailStatusResult& WithLatestDeliveryAttemptSucceeded(const Aws::String& value) { SetLatestDeliveryAttemptSucceeded(value); return *this;}
    inline GetTrailStatusResult& WithLatestDeliveryAttemptSucceeded(Aws::String&& value) { SetLatestDeliveryAttemptSucceeded(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithLatestDeliveryAttemptSucceeded(const char* value) { SetLatestDeliveryAttemptSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetTimeLoggingStarted() const{ return m_timeLoggingStarted; }
    inline void SetTimeLoggingStarted(const Aws::String& value) { m_timeLoggingStarted = value; }
    inline void SetTimeLoggingStarted(Aws::String&& value) { m_timeLoggingStarted = std::move(value); }
    inline void SetTimeLoggingStarted(const char* value) { m_timeLoggingStarted.assign(value); }
    inline GetTrailStatusResult& WithTimeLoggingStarted(const Aws::String& value) { SetTimeLoggingStarted(value); return *this;}
    inline GetTrailStatusResult& WithTimeLoggingStarted(Aws::String&& value) { SetTimeLoggingStarted(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithTimeLoggingStarted(const char* value) { SetTimeLoggingStarted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetTimeLoggingStopped() const{ return m_timeLoggingStopped; }
    inline void SetTimeLoggingStopped(const Aws::String& value) { m_timeLoggingStopped = value; }
    inline void SetTimeLoggingStopped(Aws::String&& value) { m_timeLoggingStopped = std::move(value); }
    inline void SetTimeLoggingStopped(const char* value) { m_timeLoggingStopped.assign(value); }
    inline GetTrailStatusResult& WithTimeLoggingStopped(const Aws::String& value) { SetTimeLoggingStopped(value); return *this;}
    inline GetTrailStatusResult& WithTimeLoggingStopped(Aws::String&& value) { SetTimeLoggingStopped(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithTimeLoggingStopped(const char* value) { SetTimeLoggingStopped(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTrailStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTrailStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTrailStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_isLogging;

    Aws::String m_latestDeliveryError;

    Aws::String m_latestNotificationError;

    Aws::Utils::DateTime m_latestDeliveryTime;

    Aws::Utils::DateTime m_latestNotificationTime;

    Aws::Utils::DateTime m_startLoggingTime;

    Aws::Utils::DateTime m_stopLoggingTime;

    Aws::String m_latestCloudWatchLogsDeliveryError;

    Aws::Utils::DateTime m_latestCloudWatchLogsDeliveryTime;

    Aws::Utils::DateTime m_latestDigestDeliveryTime;

    Aws::String m_latestDigestDeliveryError;

    Aws::String m_latestDeliveryAttemptTime;

    Aws::String m_latestNotificationAttemptTime;

    Aws::String m_latestNotificationAttemptSucceeded;

    Aws::String m_latestDeliveryAttemptSucceeded;

    Aws::String m_timeLoggingStarted;

    Aws::String m_timeLoggingStopped;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
