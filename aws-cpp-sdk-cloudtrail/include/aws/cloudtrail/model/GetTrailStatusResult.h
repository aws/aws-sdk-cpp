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
  class AWS_CLOUDTRAIL_API GetTrailStatusResult
  {
  public:
    GetTrailStatusResult();
    GetTrailStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTrailStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether the CloudTrail is currently logging AWS API calls.</p>
     */
    inline bool GetIsLogging() const{ return m_isLogging; }

    /**
     * <p>Whether the CloudTrail is currently logging AWS API calls.</p>
     */
    inline void SetIsLogging(bool value) { m_isLogging = value; }

    /**
     * <p>Whether the CloudTrail is currently logging AWS API calls.</p>
     */
    inline GetTrailStatusResult& WithIsLogging(bool value) { SetIsLogging(value); return *this;}


    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver log files to the designated bucket. For more information see the topic
     * <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline const Aws::String& GetLatestDeliveryError() const{ return m_latestDeliveryError; }

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver log files to the designated bucket. For more information see the topic
     * <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline void SetLatestDeliveryError(const Aws::String& value) { m_latestDeliveryError = value; }

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver log files to the designated bucket. For more information see the topic
     * <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline void SetLatestDeliveryError(Aws::String&& value) { m_latestDeliveryError = std::move(value); }

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver log files to the designated bucket. For more information see the topic
     * <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline void SetLatestDeliveryError(const char* value) { m_latestDeliveryError.assign(value); }

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver log files to the designated bucket. For more information see the topic
     * <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline GetTrailStatusResult& WithLatestDeliveryError(const Aws::String& value) { SetLatestDeliveryError(value); return *this;}

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver log files to the designated bucket. For more information see the topic
     * <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline GetTrailStatusResult& WithLatestDeliveryError(Aws::String&& value) { SetLatestDeliveryError(std::move(value)); return *this;}

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver log files to the designated bucket. For more information see the topic
     * <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline GetTrailStatusResult& WithLatestDeliveryError(const char* value) { SetLatestDeliveryError(value); return *this;}


    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline const Aws::String& GetLatestNotificationError() const{ return m_latestNotificationError; }

    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline void SetLatestNotificationError(const Aws::String& value) { m_latestNotificationError = value; }

    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline void SetLatestNotificationError(Aws::String&& value) { m_latestNotificationError = std::move(value); }

    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline void SetLatestNotificationError(const char* value) { m_latestNotificationError.assign(value); }

    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline GetTrailStatusResult& WithLatestNotificationError(const Aws::String& value) { SetLatestNotificationError(value); return *this;}

    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline GetTrailStatusResult& WithLatestNotificationError(Aws::String&& value) { SetLatestNotificationError(std::move(value)); return *this;}

    /**
     * <p>Displays any Amazon SNS error that CloudTrail encountered when attempting to
     * send a notification. For more information about Amazon SNS errors, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon SNS
     * Developer Guide</a>. </p>
     */
    inline GetTrailStatusResult& WithLatestNotificationError(const char* value) { SetLatestNotificationError(value); return *this;}


    /**
     * <p>Specifies the date and time that CloudTrail last delivered log files to an
     * account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestDeliveryTime() const{ return m_latestDeliveryTime; }

    /**
     * <p>Specifies the date and time that CloudTrail last delivered log files to an
     * account's Amazon S3 bucket.</p>
     */
    inline void SetLatestDeliveryTime(const Aws::Utils::DateTime& value) { m_latestDeliveryTime = value; }

    /**
     * <p>Specifies the date and time that CloudTrail last delivered log files to an
     * account's Amazon S3 bucket.</p>
     */
    inline void SetLatestDeliveryTime(Aws::Utils::DateTime&& value) { m_latestDeliveryTime = std::move(value); }

    /**
     * <p>Specifies the date and time that CloudTrail last delivered log files to an
     * account's Amazon S3 bucket.</p>
     */
    inline GetTrailStatusResult& WithLatestDeliveryTime(const Aws::Utils::DateTime& value) { SetLatestDeliveryTime(value); return *this;}

    /**
     * <p>Specifies the date and time that CloudTrail last delivered log files to an
     * account's Amazon S3 bucket.</p>
     */
    inline GetTrailStatusResult& WithLatestDeliveryTime(Aws::Utils::DateTime&& value) { SetLatestDeliveryTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the date and time of the most recent Amazon SNS notification that
     * CloudTrail has written a new log file to an account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestNotificationTime() const{ return m_latestNotificationTime; }

    /**
     * <p>Specifies the date and time of the most recent Amazon SNS notification that
     * CloudTrail has written a new log file to an account's Amazon S3 bucket.</p>
     */
    inline void SetLatestNotificationTime(const Aws::Utils::DateTime& value) { m_latestNotificationTime = value; }

    /**
     * <p>Specifies the date and time of the most recent Amazon SNS notification that
     * CloudTrail has written a new log file to an account's Amazon S3 bucket.</p>
     */
    inline void SetLatestNotificationTime(Aws::Utils::DateTime&& value) { m_latestNotificationTime = std::move(value); }

    /**
     * <p>Specifies the date and time of the most recent Amazon SNS notification that
     * CloudTrail has written a new log file to an account's Amazon S3 bucket.</p>
     */
    inline GetTrailStatusResult& WithLatestNotificationTime(const Aws::Utils::DateTime& value) { SetLatestNotificationTime(value); return *this;}

    /**
     * <p>Specifies the date and time of the most recent Amazon SNS notification that
     * CloudTrail has written a new log file to an account's Amazon S3 bucket.</p>
     */
    inline GetTrailStatusResult& WithLatestNotificationTime(Aws::Utils::DateTime&& value) { SetLatestNotificationTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the most recent date and time when CloudTrail started recording API
     * calls for an AWS account.</p>
     */
    inline const Aws::Utils::DateTime& GetStartLoggingTime() const{ return m_startLoggingTime; }

    /**
     * <p>Specifies the most recent date and time when CloudTrail started recording API
     * calls for an AWS account.</p>
     */
    inline void SetStartLoggingTime(const Aws::Utils::DateTime& value) { m_startLoggingTime = value; }

    /**
     * <p>Specifies the most recent date and time when CloudTrail started recording API
     * calls for an AWS account.</p>
     */
    inline void SetStartLoggingTime(Aws::Utils::DateTime&& value) { m_startLoggingTime = std::move(value); }

    /**
     * <p>Specifies the most recent date and time when CloudTrail started recording API
     * calls for an AWS account.</p>
     */
    inline GetTrailStatusResult& WithStartLoggingTime(const Aws::Utils::DateTime& value) { SetStartLoggingTime(value); return *this;}

    /**
     * <p>Specifies the most recent date and time when CloudTrail started recording API
     * calls for an AWS account.</p>
     */
    inline GetTrailStatusResult& WithStartLoggingTime(Aws::Utils::DateTime&& value) { SetStartLoggingTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the most recent date and time when CloudTrail stopped recording API
     * calls for an AWS account.</p>
     */
    inline const Aws::Utils::DateTime& GetStopLoggingTime() const{ return m_stopLoggingTime; }

    /**
     * <p>Specifies the most recent date and time when CloudTrail stopped recording API
     * calls for an AWS account.</p>
     */
    inline void SetStopLoggingTime(const Aws::Utils::DateTime& value) { m_stopLoggingTime = value; }

    /**
     * <p>Specifies the most recent date and time when CloudTrail stopped recording API
     * calls for an AWS account.</p>
     */
    inline void SetStopLoggingTime(Aws::Utils::DateTime&& value) { m_stopLoggingTime = std::move(value); }

    /**
     * <p>Specifies the most recent date and time when CloudTrail stopped recording API
     * calls for an AWS account.</p>
     */
    inline GetTrailStatusResult& WithStopLoggingTime(const Aws::Utils::DateTime& value) { SetStopLoggingTime(value); return *this;}

    /**
     * <p>Specifies the most recent date and time when CloudTrail stopped recording API
     * calls for an AWS account.</p>
     */
    inline GetTrailStatusResult& WithStopLoggingTime(Aws::Utils::DateTime&& value) { SetStopLoggingTime(std::move(value)); return *this;}


    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline const Aws::String& GetLatestCloudWatchLogsDeliveryError() const{ return m_latestCloudWatchLogsDeliveryError; }

    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline void SetLatestCloudWatchLogsDeliveryError(const Aws::String& value) { m_latestCloudWatchLogsDeliveryError = value; }

    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline void SetLatestCloudWatchLogsDeliveryError(Aws::String&& value) { m_latestCloudWatchLogsDeliveryError = std::move(value); }

    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline void SetLatestCloudWatchLogsDeliveryError(const char* value) { m_latestCloudWatchLogsDeliveryError.assign(value); }

    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryError(const Aws::String& value) { SetLatestCloudWatchLogsDeliveryError(value); return *this;}

    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryError(Aws::String&& value) { SetLatestCloudWatchLogsDeliveryError(std::move(value)); return *this;}

    /**
     * <p>Displays any CloudWatch Logs error that CloudTrail encountered when
     * attempting to deliver logs to CloudWatch Logs.</p>
     */
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryError(const char* value) { SetLatestCloudWatchLogsDeliveryError(value); return *this;}


    /**
     * <p>Displays the most recent date and time when CloudTrail delivered logs to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestCloudWatchLogsDeliveryTime() const{ return m_latestCloudWatchLogsDeliveryTime; }

    /**
     * <p>Displays the most recent date and time when CloudTrail delivered logs to
     * CloudWatch Logs.</p>
     */
    inline void SetLatestCloudWatchLogsDeliveryTime(const Aws::Utils::DateTime& value) { m_latestCloudWatchLogsDeliveryTime = value; }

    /**
     * <p>Displays the most recent date and time when CloudTrail delivered logs to
     * CloudWatch Logs.</p>
     */
    inline void SetLatestCloudWatchLogsDeliveryTime(Aws::Utils::DateTime&& value) { m_latestCloudWatchLogsDeliveryTime = std::move(value); }

    /**
     * <p>Displays the most recent date and time when CloudTrail delivered logs to
     * CloudWatch Logs.</p>
     */
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryTime(const Aws::Utils::DateTime& value) { SetLatestCloudWatchLogsDeliveryTime(value); return *this;}

    /**
     * <p>Displays the most recent date and time when CloudTrail delivered logs to
     * CloudWatch Logs.</p>
     */
    inline GetTrailStatusResult& WithLatestCloudWatchLogsDeliveryTime(Aws::Utils::DateTime&& value) { SetLatestCloudWatchLogsDeliveryTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the date and time that CloudTrail last delivered a digest file to
     * an account's Amazon S3 bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestDigestDeliveryTime() const{ return m_latestDigestDeliveryTime; }

    /**
     * <p>Specifies the date and time that CloudTrail last delivered a digest file to
     * an account's Amazon S3 bucket.</p>
     */
    inline void SetLatestDigestDeliveryTime(const Aws::Utils::DateTime& value) { m_latestDigestDeliveryTime = value; }

    /**
     * <p>Specifies the date and time that CloudTrail last delivered a digest file to
     * an account's Amazon S3 bucket.</p>
     */
    inline void SetLatestDigestDeliveryTime(Aws::Utils::DateTime&& value) { m_latestDigestDeliveryTime = std::move(value); }

    /**
     * <p>Specifies the date and time that CloudTrail last delivered a digest file to
     * an account's Amazon S3 bucket.</p>
     */
    inline GetTrailStatusResult& WithLatestDigestDeliveryTime(const Aws::Utils::DateTime& value) { SetLatestDigestDeliveryTime(value); return *this;}

    /**
     * <p>Specifies the date and time that CloudTrail last delivered a digest file to
     * an account's Amazon S3 bucket.</p>
     */
    inline GetTrailStatusResult& WithLatestDigestDeliveryTime(Aws::Utils::DateTime&& value) { SetLatestDigestDeliveryTime(std::move(value)); return *this;}


    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver a digest file to the designated bucket. For more information see the
     * topic <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline const Aws::String& GetLatestDigestDeliveryError() const{ return m_latestDigestDeliveryError; }

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver a digest file to the designated bucket. For more information see the
     * topic <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline void SetLatestDigestDeliveryError(const Aws::String& value) { m_latestDigestDeliveryError = value; }

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver a digest file to the designated bucket. For more information see the
     * topic <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline void SetLatestDigestDeliveryError(Aws::String&& value) { m_latestDigestDeliveryError = std::move(value); }

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver a digest file to the designated bucket. For more information see the
     * topic <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline void SetLatestDigestDeliveryError(const char* value) { m_latestDigestDeliveryError.assign(value); }

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver a digest file to the designated bucket. For more information see the
     * topic <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline GetTrailStatusResult& WithLatestDigestDeliveryError(const Aws::String& value) { SetLatestDigestDeliveryError(value); return *this;}

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver a digest file to the designated bucket. For more information see the
     * topic <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline GetTrailStatusResult& WithLatestDigestDeliveryError(Aws::String&& value) { SetLatestDigestDeliveryError(std::move(value)); return *this;}

    /**
     * <p>Displays any Amazon S3 error that CloudTrail encountered when attempting to
     * deliver a digest file to the designated bucket. For more information see the
     * topic <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html">Error
     * Responses</a> in the Amazon S3 API Reference. </p> <note> <p>This error occurs
     * only when there is a problem with the destination S3 bucket and will not occur
     * for timeouts. To resolve the issue, create a new bucket and call
     * <code>UpdateTrail</code> to specify the new bucket, or fix the existing objects
     * so that CloudTrail can again write to the bucket.</p> </note>
     */
    inline GetTrailStatusResult& WithLatestDigestDeliveryError(const char* value) { SetLatestDigestDeliveryError(value); return *this;}


    /**
     * <p>This field is deprecated.</p>
     */
    inline const Aws::String& GetLatestDeliveryAttemptTime() const{ return m_latestDeliveryAttemptTime; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestDeliveryAttemptTime(const Aws::String& value) { m_latestDeliveryAttemptTime = value; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestDeliveryAttemptTime(Aws::String&& value) { m_latestDeliveryAttemptTime = std::move(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestDeliveryAttemptTime(const char* value) { m_latestDeliveryAttemptTime.assign(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestDeliveryAttemptTime(const Aws::String& value) { SetLatestDeliveryAttemptTime(value); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestDeliveryAttemptTime(Aws::String&& value) { SetLatestDeliveryAttemptTime(std::move(value)); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestDeliveryAttemptTime(const char* value) { SetLatestDeliveryAttemptTime(value); return *this;}


    /**
     * <p>This field is deprecated.</p>
     */
    inline const Aws::String& GetLatestNotificationAttemptTime() const{ return m_latestNotificationAttemptTime; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestNotificationAttemptTime(const Aws::String& value) { m_latestNotificationAttemptTime = value; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestNotificationAttemptTime(Aws::String&& value) { m_latestNotificationAttemptTime = std::move(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestNotificationAttemptTime(const char* value) { m_latestNotificationAttemptTime.assign(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestNotificationAttemptTime(const Aws::String& value) { SetLatestNotificationAttemptTime(value); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestNotificationAttemptTime(Aws::String&& value) { SetLatestNotificationAttemptTime(std::move(value)); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestNotificationAttemptTime(const char* value) { SetLatestNotificationAttemptTime(value); return *this;}


    /**
     * <p>This field is deprecated.</p>
     */
    inline const Aws::String& GetLatestNotificationAttemptSucceeded() const{ return m_latestNotificationAttemptSucceeded; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestNotificationAttemptSucceeded(const Aws::String& value) { m_latestNotificationAttemptSucceeded = value; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestNotificationAttemptSucceeded(Aws::String&& value) { m_latestNotificationAttemptSucceeded = std::move(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestNotificationAttemptSucceeded(const char* value) { m_latestNotificationAttemptSucceeded.assign(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestNotificationAttemptSucceeded(const Aws::String& value) { SetLatestNotificationAttemptSucceeded(value); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestNotificationAttemptSucceeded(Aws::String&& value) { SetLatestNotificationAttemptSucceeded(std::move(value)); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestNotificationAttemptSucceeded(const char* value) { SetLatestNotificationAttemptSucceeded(value); return *this;}


    /**
     * <p>This field is deprecated.</p>
     */
    inline const Aws::String& GetLatestDeliveryAttemptSucceeded() const{ return m_latestDeliveryAttemptSucceeded; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestDeliveryAttemptSucceeded(const Aws::String& value) { m_latestDeliveryAttemptSucceeded = value; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestDeliveryAttemptSucceeded(Aws::String&& value) { m_latestDeliveryAttemptSucceeded = std::move(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetLatestDeliveryAttemptSucceeded(const char* value) { m_latestDeliveryAttemptSucceeded.assign(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestDeliveryAttemptSucceeded(const Aws::String& value) { SetLatestDeliveryAttemptSucceeded(value); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestDeliveryAttemptSucceeded(Aws::String&& value) { SetLatestDeliveryAttemptSucceeded(std::move(value)); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithLatestDeliveryAttemptSucceeded(const char* value) { SetLatestDeliveryAttemptSucceeded(value); return *this;}


    /**
     * <p>This field is deprecated.</p>
     */
    inline const Aws::String& GetTimeLoggingStarted() const{ return m_timeLoggingStarted; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetTimeLoggingStarted(const Aws::String& value) { m_timeLoggingStarted = value; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetTimeLoggingStarted(Aws::String&& value) { m_timeLoggingStarted = std::move(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetTimeLoggingStarted(const char* value) { m_timeLoggingStarted.assign(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithTimeLoggingStarted(const Aws::String& value) { SetTimeLoggingStarted(value); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithTimeLoggingStarted(Aws::String&& value) { SetTimeLoggingStarted(std::move(value)); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithTimeLoggingStarted(const char* value) { SetTimeLoggingStarted(value); return *this;}


    /**
     * <p>This field is deprecated.</p>
     */
    inline const Aws::String& GetTimeLoggingStopped() const{ return m_timeLoggingStopped; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetTimeLoggingStopped(const Aws::String& value) { m_timeLoggingStopped = value; }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetTimeLoggingStopped(Aws::String&& value) { m_timeLoggingStopped = std::move(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline void SetTimeLoggingStopped(const char* value) { m_timeLoggingStopped.assign(value); }

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithTimeLoggingStopped(const Aws::String& value) { SetTimeLoggingStopped(value); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithTimeLoggingStopped(Aws::String&& value) { SetTimeLoggingStopped(std::move(value)); return *this;}

    /**
     * <p>This field is deprecated.</p>
     */
    inline GetTrailStatusResult& WithTimeLoggingStopped(const char* value) { SetTimeLoggingStopped(value); return *this;}

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
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
