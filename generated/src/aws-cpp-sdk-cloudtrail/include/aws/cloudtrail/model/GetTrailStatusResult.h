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
    AWS_CLOUDTRAIL_API GetTrailStatusResult() = default;
    AWS_CLOUDTRAIL_API GetTrailStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetTrailStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether the CloudTrail trail is currently logging Amazon Web Services API
     * calls.</p>
     */
    inline bool GetIsLogging() const { return m_isLogging; }
    inline void SetIsLogging(bool value) { m_isLoggingHasBeenSet = true; m_isLogging = value; }
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
    inline const Aws::String& GetLatestDeliveryError() const { return m_latestDeliveryError; }
    template<typename LatestDeliveryErrorT = Aws::String>
    void SetLatestDeliveryError(LatestDeliveryErrorT&& value) { m_latestDeliveryErrorHasBeenSet = true; m_latestDeliveryError = std::forward<LatestDeliveryErrorT>(value); }
    template<typename LatestDeliveryErrorT = Aws::String>
    GetTrailStatusResult& WithLatestDeliveryError(LatestDeliveryErrorT&& value) { SetLatestDeliveryError(std::forward<LatestDeliveryErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline const Aws::String& GetLatestNotificationError() const { return m_latestNotificationError; }
    template<typename LatestNotificationErrorT = Aws::String>
    void SetLatestNotificationError(LatestNotificationErrorT&& value) { m_latestNotificationErrorHasBeenSet = true; m_latestNotificationError = std::forward<LatestNotificationErrorT>(value); }
    template<typename LatestNotificationErrorT = Aws::String>
    GetTrailStatusResult& WithLatestNotificationError(LatestNotificationErrorT&& value) { SetLatestNotificationError(std::forward<LatestNotificationErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date and time that CloudTrail last delivered log files to an
     * account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestDeliveryTime() const { return m_latestDeliveryTime; }
    template<typename LatestDeliveryTimeT = Aws::Utils::DateTime>
    void SetLatestDeliveryTime(LatestDeliveryTimeT&& value) { m_latestDeliveryTimeHasBeenSet = true; m_latestDeliveryTime = std::forward<LatestDeliveryTimeT>(value); }
    template<typename LatestDeliveryTimeT = Aws::Utils::DateTime>
    GetTrailStatusResult& WithLatestDeliveryTime(LatestDeliveryTimeT&& value) { SetLatestDeliveryTime(std::forward<LatestDeliveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date and time of the most recent Amazon SNS notification that
     * CloudTrail has written a new log file to an account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestNotificationTime() const { return m_latestNotificationTime; }
    template<typename LatestNotificationTimeT = Aws::Utils::DateTime>
    void SetLatestNotificationTime(LatestNotificationTimeT&& value) { m_latestNotificationTimeHasBeenSet = true; m_latestNotificationTime = std::forward<LatestNotificationTimeT>(value); }
    template<typename LatestNotificationTimeT = Aws::Utils::DateTime>
    GetTrailStatusResult& WithLatestNotificationTime(LatestNotificationTimeT&& value) { SetLatestNotificationTime(std::forward<LatestNotificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the most recent date and time when CloudTrail started recording API
     * calls for an Amazon Web Services account.</p>
     */
    inline const Aws::Utils::DateTime& GetStartLoggingTime() const { return m_startLoggingTime; }
    template<typename StartLoggingTimeT = Aws::Utils::DateTime>
    void SetStartLoggingTime(StartLoggingTimeT&& value) { m_startLoggingTimeHasBeenSet = true; m_startLoggingTime = std::forward<StartLoggingTimeT>(value); }
    template<typename StartLoggingTimeT = Aws::Utils::DateTime>
    GetTrailStatusResult& WithStartLoggingTime(StartLoggingTimeT&& value) { SetStartLoggingTime(std::forward<StartLoggingTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the most recent date and time when CloudTrail stopped recording API
     * calls for an Amazon Web Services account.</p>
     */
    inline const Aws::Utils::DateTime& GetStopLoggingTime() const { return m_stopLoggingTime; }
    template<typename StopLoggingTimeT = Aws::Utils::DateTime>
    void SetStopLoggingTime(StopLoggingTimeT&& value) { m_stopLoggingTimeHasBeenSet = true; m_stopLoggingTime = std::forward<StopLoggingTimeT>(value); }
    template<typename StopLoggingTimeT = Aws::Utils::DateTime>
    GetTrailStatusResult& WithStopLoggingTime(StopLoggingTimeT&& value) { SetStopLoggingTime(std::forward<StopLoggingTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline const Aws::String& GetLatestCloudWatchLogsDeliveryError() const { return m_latestCloudWatchLogsDeliveryError; }
    template<typename LatestCloudWatchLogsDeliveryErrorT = Aws::String>
    void SetLatestCloudWatchLogsDeliveryError(LatestCloudWatchLogsDeliveryErrorT&& value) { m_latestCloudWatchLogsDeliveryErrorHasBeenSet = true; m_latestCloudWatchLogsDeliveryError = std::forward<LatestCloudWatchLogsDeliveryErrorT>(value); }
    template<typename LatestCloudWatchLogsDeliveryErrorT = Aws::String>
    GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryError(LatestCloudWatchLogsDeliveryErrorT&& value) { SetLatestCloudWatchLogsDeliveryError(std::forward<LatestCloudWatchLogsDeliveryErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the most recent date and time when CloudTrail delivered logs to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestCloudWatchLogsDeliveryTime() const { return m_latestCloudWatchLogsDeliveryTime; }
    template<typename LatestCloudWatchLogsDeliveryTimeT = Aws::Utils::DateTime>
    void SetLatestCloudWatchLogsDeliveryTime(LatestCloudWatchLogsDeliveryTimeT&& value) { m_latestCloudWatchLogsDeliveryTimeHasBeenSet = true; m_latestCloudWatchLogsDeliveryTime = std::forward<LatestCloudWatchLogsDeliveryTimeT>(value); }
    template<typename LatestCloudWatchLogsDeliveryTimeT = Aws::Utils::DateTime>
    GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryTime(LatestCloudWatchLogsDeliveryTimeT&& value) { SetLatestCloudWatchLogsDeliveryTime(std::forward<LatestCloudWatchLogsDeliveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date and time that CloudTrail last delivered a digest file to
     * an account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestDigestDeliveryTime() const { return m_latestDigestDeliveryTime; }
    template<typename LatestDigestDeliveryTimeT = Aws::Utils::DateTime>
    void SetLatestDigestDeliveryTime(LatestDigestDeliveryTimeT&& value) { m_latestDigestDeliveryTimeHasBeenSet = true; m_latestDigestDeliveryTime = std::forward<LatestDigestDeliveryTimeT>(value); }
    template<typename LatestDigestDeliveryTimeT = Aws::Utils::DateTime>
    GetTrailStatusResult& WithLatestDigestDeliveryTime(LatestDigestDeliveryTimeT&& value) { SetLatestDigestDeliveryTime(std::forward<LatestDigestDeliveryTimeT>(value)); return *this;}
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
    inline const Aws::String& GetLatestDigestDeliveryError() const { return m_latestDigestDeliveryError; }
    template<typename LatestDigestDeliveryErrorT = Aws::String>
    void SetLatestDigestDeliveryError(LatestDigestDeliveryErrorT&& value) { m_latestDigestDeliveryErrorHasBeenSet = true; m_latestDigestDeliveryError = std::forward<LatestDigestDeliveryErrorT>(value); }
    template<typename LatestDigestDeliveryErrorT = Aws::String>
    GetTrailStatusResult& WithLatestDigestDeliveryError(LatestDigestDeliveryErrorT&& value) { SetLatestDigestDeliveryError(std::forward<LatestDigestDeliveryErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetLatestDeliveryAttemptTime() const { return m_latestDeliveryAttemptTime; }
    template<typename LatestDeliveryAttemptTimeT = Aws::String>
    void SetLatestDeliveryAttemptTime(LatestDeliveryAttemptTimeT&& value) { m_latestDeliveryAttemptTimeHasBeenSet = true; m_latestDeliveryAttemptTime = std::forward<LatestDeliveryAttemptTimeT>(value); }
    template<typename LatestDeliveryAttemptTimeT = Aws::String>
    GetTrailStatusResult& WithLatestDeliveryAttemptTime(LatestDeliveryAttemptTimeT&& value) { SetLatestDeliveryAttemptTime(std::forward<LatestDeliveryAttemptTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetLatestNotificationAttemptTime() const { return m_latestNotificationAttemptTime; }
    template<typename LatestNotificationAttemptTimeT = Aws::String>
    void SetLatestNotificationAttemptTime(LatestNotificationAttemptTimeT&& value) { m_latestNotificationAttemptTimeHasBeenSet = true; m_latestNotificationAttemptTime = std::forward<LatestNotificationAttemptTimeT>(value); }
    template<typename LatestNotificationAttemptTimeT = Aws::String>
    GetTrailStatusResult& WithLatestNotificationAttemptTime(LatestNotificationAttemptTimeT&& value) { SetLatestNotificationAttemptTime(std::forward<LatestNotificationAttemptTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetLatestNotificationAttemptSucceeded() const { return m_latestNotificationAttemptSucceeded; }
    template<typename LatestNotificationAttemptSucceededT = Aws::String>
    void SetLatestNotificationAttemptSucceeded(LatestNotificationAttemptSucceededT&& value) { m_latestNotificationAttemptSucceededHasBeenSet = true; m_latestNotificationAttemptSucceeded = std::forward<LatestNotificationAttemptSucceededT>(value); }
    template<typename LatestNotificationAttemptSucceededT = Aws::String>
    GetTrailStatusResult& WithLatestNotificationAttemptSucceeded(LatestNotificationAttemptSucceededT&& value) { SetLatestNotificationAttemptSucceeded(std::forward<LatestNotificationAttemptSucceededT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetLatestDeliveryAttemptSucceeded() const { return m_latestDeliveryAttemptSucceeded; }
    template<typename LatestDeliveryAttemptSucceededT = Aws::String>
    void SetLatestDeliveryAttemptSucceeded(LatestDeliveryAttemptSucceededT&& value) { m_latestDeliveryAttemptSucceededHasBeenSet = true; m_latestDeliveryAttemptSucceeded = std::forward<LatestDeliveryAttemptSucceededT>(value); }
    template<typename LatestDeliveryAttemptSucceededT = Aws::String>
    GetTrailStatusResult& WithLatestDeliveryAttemptSucceeded(LatestDeliveryAttemptSucceededT&& value) { SetLatestDeliveryAttemptSucceeded(std::forward<LatestDeliveryAttemptSucceededT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetTimeLoggingStarted() const { return m_timeLoggingStarted; }
    template<typename TimeLoggingStartedT = Aws::String>
    void SetTimeLoggingStarted(TimeLoggingStartedT&& value) { m_timeLoggingStartedHasBeenSet = true; m_timeLoggingStarted = std::forward<TimeLoggingStartedT>(value); }
    template<typename TimeLoggingStartedT = Aws::String>
    GetTrailStatusResult& WithTimeLoggingStarted(TimeLoggingStartedT&& value) { SetTimeLoggingStarted(std::forward<TimeLoggingStartedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer in use.</p>
     */
    inline const Aws::String& GetTimeLoggingStopped() const { return m_timeLoggingStopped; }
    template<typename TimeLoggingStoppedT = Aws::String>
    void SetTimeLoggingStopped(TimeLoggingStoppedT&& value) { m_timeLoggingStoppedHasBeenSet = true; m_timeLoggingStopped = std::forward<TimeLoggingStoppedT>(value); }
    template<typename TimeLoggingStoppedT = Aws::String>
    GetTrailStatusResult& WithTimeLoggingStopped(TimeLoggingStoppedT&& value) { SetTimeLoggingStopped(std::forward<TimeLoggingStoppedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTrailStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isLogging{false};
    bool m_isLoggingHasBeenSet = false;

    Aws::String m_latestDeliveryError;
    bool m_latestDeliveryErrorHasBeenSet = false;

    Aws::String m_latestNotificationError;
    bool m_latestNotificationErrorHasBeenSet = false;

    Aws::Utils::DateTime m_latestDeliveryTime{};
    bool m_latestDeliveryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestNotificationTime{};
    bool m_latestNotificationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startLoggingTime{};
    bool m_startLoggingTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopLoggingTime{};
    bool m_stopLoggingTimeHasBeenSet = false;

    Aws::String m_latestCloudWatchLogsDeliveryError;
    bool m_latestCloudWatchLogsDeliveryErrorHasBeenSet = false;

    Aws::Utils::DateTime m_latestCloudWatchLogsDeliveryTime{};
    bool m_latestCloudWatchLogsDeliveryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestDigestDeliveryTime{};
    bool m_latestDigestDeliveryTimeHasBeenSet = false;

    Aws::String m_latestDigestDeliveryError;
    bool m_latestDigestDeliveryErrorHasBeenSet = false;

    Aws::String m_latestDeliveryAttemptTime;
    bool m_latestDeliveryAttemptTimeHasBeenSet = false;

    Aws::String m_latestNotificationAttemptTime;
    bool m_latestNotificationAttemptTimeHasBeenSet = false;

    Aws::String m_latestNotificationAttemptSucceeded;
    bool m_latestNotificationAttemptSucceededHasBeenSet = false;

    Aws::String m_latestDeliveryAttemptSucceeded;
    bool m_latestDeliveryAttemptSucceededHasBeenSet = false;

    Aws::String m_timeLoggingStarted;
    bool m_timeLoggingStartedHasBeenSet = false;

    Aws::String m_timeLoggingStopped;
    bool m_timeLoggingStoppedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
