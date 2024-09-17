/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateTrailResponse">AWS
   * API Reference</a></p>
   */
  class UpdateTrailResult
  {
  public:
    AWS_CLOUDTRAIL_API UpdateTrailResult();
    AWS_CLOUDTRAIL_API UpdateTrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API UpdateTrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the name of the trail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateTrailResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateTrailResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateTrailResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketName.assign(value); }
    inline UpdateTrailResult& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline UpdateTrailResult& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline UpdateTrailResult& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/get-and-view-cloudtrail-log-files.html#cloudtrail-find-log-files">Finding
     * Your IAM Log Files</a>.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefix = value; }
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefix = std::move(value); }
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefix.assign(value); }
    inline UpdateTrailResult& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}
    inline UpdateTrailResult& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}
    inline UpdateTrailResult& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The following is the format of a
     * topic ARN.</p> <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline const Aws::String& GetSnsTopicARN() const{ return m_snsTopicARN; }
    inline void SetSnsTopicARN(const Aws::String& value) { m_snsTopicARN = value; }
    inline void SetSnsTopicARN(Aws::String&& value) { m_snsTopicARN = std::move(value); }
    inline void SetSnsTopicARN(const char* value) { m_snsTopicARN.assign(value); }
    inline UpdateTrailResult& WithSnsTopicARN(const Aws::String& value) { SetSnsTopicARN(value); return *this;}
    inline UpdateTrailResult& WithSnsTopicARN(Aws::String&& value) { SetSnsTopicARN(std::move(value)); return *this;}
    inline UpdateTrailResult& WithSnsTopicARN(const char* value) { SetSnsTopicARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail is publishing events from global services such as
     * IAM to the log files.</p>
     */
    inline bool GetIncludeGlobalServiceEvents() const{ return m_includeGlobalServiceEvents; }
    inline void SetIncludeGlobalServiceEvents(bool value) { m_includeGlobalServiceEvents = value; }
    inline UpdateTrailResult& WithIncludeGlobalServiceEvents(bool value) { SetIncludeGlobalServiceEvents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail exists in one Region or in all Regions.</p>
     */
    inline bool GetIsMultiRegionTrail() const{ return m_isMultiRegionTrail; }
    inline void SetIsMultiRegionTrail(bool value) { m_isMultiRegionTrail = value; }
    inline UpdateTrailResult& WithIsMultiRegionTrail(bool value) { SetIsMultiRegionTrail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the trail that was updated. The following is the format
     * of a trail ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }
    inline void SetTrailARN(const Aws::String& value) { m_trailARN = value; }
    inline void SetTrailARN(Aws::String&& value) { m_trailARN = std::move(value); }
    inline void SetTrailARN(const char* value) { m_trailARN.assign(value); }
    inline UpdateTrailResult& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}
    inline UpdateTrailResult& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}
    inline UpdateTrailResult& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether log file integrity validation is enabled.</p>
     */
    inline bool GetLogFileValidationEnabled() const{ return m_logFileValidationEnabled; }
    inline void SetLogFileValidationEnabled(bool value) { m_logFileValidationEnabled = value; }
    inline UpdateTrailResult& WithLogFileValidationEnabled(bool value) { SetLogFileValidationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the log group to which CloudTrail
     * logs are delivered.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArn = value; }
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArn.assign(value); }
    inline UpdateTrailResult& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}
    inline UpdateTrailResult& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}
    inline UpdateTrailResult& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const{ return m_cloudWatchLogsRoleArn; }
    inline void SetCloudWatchLogsRoleArn(const Aws::String& value) { m_cloudWatchLogsRoleArn = value; }
    inline void SetCloudWatchLogsRoleArn(Aws::String&& value) { m_cloudWatchLogsRoleArn = std::move(value); }
    inline void SetCloudWatchLogsRoleArn(const char* value) { m_cloudWatchLogsRoleArn.assign(value); }
    inline UpdateTrailResult& WithCloudWatchLogsRoleArn(const Aws::String& value) { SetCloudWatchLogsRoleArn(value); return *this;}
    inline UpdateTrailResult& WithCloudWatchLogsRoleArn(Aws::String&& value) { SetCloudWatchLogsRoleArn(std::move(value)); return *this;}
    inline UpdateTrailResult& WithCloudWatchLogsRoleArn(const char* value) { SetCloudWatchLogsRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline UpdateTrailResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline UpdateTrailResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline UpdateTrailResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline bool GetIsOrganizationTrail() const{ return m_isOrganizationTrail; }
    inline void SetIsOrganizationTrail(bool value) { m_isOrganizationTrail = value; }
    inline UpdateTrailResult& WithIsOrganizationTrail(bool value) { SetIsOrganizationTrail(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_s3BucketName;

    Aws::String m_s3KeyPrefix;

    Aws::String m_snsTopicARN;

    bool m_includeGlobalServiceEvents;

    bool m_isMultiRegionTrail;

    Aws::String m_trailARN;

    bool m_logFileValidationEnabled;

    Aws::String m_cloudWatchLogsLogGroupArn;

    Aws::String m_cloudWatchLogsRoleArn;

    Aws::String m_kmsKeyId;

    bool m_isOrganizationTrail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
