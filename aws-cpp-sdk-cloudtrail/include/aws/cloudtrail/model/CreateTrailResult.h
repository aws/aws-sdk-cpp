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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrailResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API CreateTrailResult
  {
  public:
    CreateTrailResult();
    CreateTrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateTrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the name of the trail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name of the trail.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Specifies the name of the trail.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Specifies the name of the trail.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Specifies the name of the trail.</p>
     */
    inline CreateTrailResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name of the trail.</p>
     */
    inline CreateTrailResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the trail.</p>
     */
    inline CreateTrailResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketName = value; }

    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketName = std::move(value); }

    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketName.assign(value); }

    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files.</p>
     */
    inline CreateTrailResult& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files.</p>
     */
    inline CreateTrailResult& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files.</p>
     */
    inline CreateTrailResult& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefix = value; }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefix = std::move(value); }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefix.assign(value); }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.</p>
     */
    inline CreateTrailResult& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.</p>
     */
    inline CreateTrailResult& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.</p>
     */
    inline CreateTrailResult& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline const Aws::String& GetSnsTopicARN() const{ return m_snsTopicARN; }

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline void SetSnsTopicARN(const Aws::String& value) { m_snsTopicARN = value; }

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline void SetSnsTopicARN(Aws::String&& value) { m_snsTopicARN = std::move(value); }

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline void SetSnsTopicARN(const char* value) { m_snsTopicARN.assign(value); }

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline CreateTrailResult& WithSnsTopicARN(const Aws::String& value) { SetSnsTopicARN(value); return *this;}

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline CreateTrailResult& WithSnsTopicARN(Aws::String&& value) { SetSnsTopicARN(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline CreateTrailResult& WithSnsTopicARN(const char* value) { SetSnsTopicARN(value); return *this;}


    /**
     * <p>Specifies whether the trail is publishing events from global services such as
     * IAM to the log files.</p>
     */
    inline bool GetIncludeGlobalServiceEvents() const{ return m_includeGlobalServiceEvents; }

    /**
     * <p>Specifies whether the trail is publishing events from global services such as
     * IAM to the log files.</p>
     */
    inline void SetIncludeGlobalServiceEvents(bool value) { m_includeGlobalServiceEvents = value; }

    /**
     * <p>Specifies whether the trail is publishing events from global services such as
     * IAM to the log files.</p>
     */
    inline CreateTrailResult& WithIncludeGlobalServiceEvents(bool value) { SetIncludeGlobalServiceEvents(value); return *this;}


    /**
     * <p>Specifies whether the trail exists in one region or in all regions.</p>
     */
    inline bool GetIsMultiRegionTrail() const{ return m_isMultiRegionTrail; }

    /**
     * <p>Specifies whether the trail exists in one region or in all regions.</p>
     */
    inline void SetIsMultiRegionTrail(bool value) { m_isMultiRegionTrail = value; }

    /**
     * <p>Specifies whether the trail exists in one region or in all regions.</p>
     */
    inline CreateTrailResult& WithIsMultiRegionTrail(bool value) { SetIsMultiRegionTrail(value); return *this;}


    /**
     * <p>Specifies the ARN of the trail that was created. The format of a trail ARN
     * is:</p> <p> <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>
     * </p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }

    /**
     * <p>Specifies the ARN of the trail that was created. The format of a trail ARN
     * is:</p> <p> <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>
     * </p>
     */
    inline void SetTrailARN(const Aws::String& value) { m_trailARN = value; }

    /**
     * <p>Specifies the ARN of the trail that was created. The format of a trail ARN
     * is:</p> <p> <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>
     * </p>
     */
    inline void SetTrailARN(Aws::String&& value) { m_trailARN = std::move(value); }

    /**
     * <p>Specifies the ARN of the trail that was created. The format of a trail ARN
     * is:</p> <p> <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>
     * </p>
     */
    inline void SetTrailARN(const char* value) { m_trailARN.assign(value); }

    /**
     * <p>Specifies the ARN of the trail that was created. The format of a trail ARN
     * is:</p> <p> <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>
     * </p>
     */
    inline CreateTrailResult& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}

    /**
     * <p>Specifies the ARN of the trail that was created. The format of a trail ARN
     * is:</p> <p> <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>
     * </p>
     */
    inline CreateTrailResult& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trail that was created. The format of a trail ARN
     * is:</p> <p> <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>
     * </p>
     */
    inline CreateTrailResult& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}


    /**
     * <p>Specifies whether log file integrity validation is enabled.</p>
     */
    inline bool GetLogFileValidationEnabled() const{ return m_logFileValidationEnabled; }

    /**
     * <p>Specifies whether log file integrity validation is enabled.</p>
     */
    inline void SetLogFileValidationEnabled(bool value) { m_logFileValidationEnabled = value; }

    /**
     * <p>Specifies whether log file integrity validation is enabled.</p>
     */
    inline CreateTrailResult& WithLogFileValidationEnabled(bool value) { SetLogFileValidationEnabled(value); return *this;}


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the log group to which CloudTrail
     * logs will be delivered.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the log group to which CloudTrail
     * logs will be delivered.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the log group to which CloudTrail
     * logs will be delivered.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the log group to which CloudTrail
     * logs will be delivered.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the log group to which CloudTrail
     * logs will be delivered.</p>
     */
    inline CreateTrailResult& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the log group to which CloudTrail
     * logs will be delivered.</p>
     */
    inline CreateTrailResult& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the log group to which CloudTrail
     * logs will be delivered.</p>
     */
    inline CreateTrailResult& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}


    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const{ return m_cloudWatchLogsRoleArn; }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(const Aws::String& value) { m_cloudWatchLogsRoleArn = value; }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(Aws::String&& value) { m_cloudWatchLogsRoleArn = std::move(value); }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(const char* value) { m_cloudWatchLogsRoleArn.assign(value); }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline CreateTrailResult& WithCloudWatchLogsRoleArn(const Aws::String& value) { SetCloudWatchLogsRoleArn(value); return *this;}

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline CreateTrailResult& WithCloudWatchLogsRoleArn(Aws::String&& value) { SetCloudWatchLogsRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline CreateTrailResult& WithCloudWatchLogsRoleArn(const char* value) { SetCloudWatchLogsRoleArn(value); return *this;}


    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline CreateTrailResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline CreateTrailResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline CreateTrailResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline bool GetIsOrganizationTrail() const{ return m_isOrganizationTrail; }

    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline void SetIsOrganizationTrail(bool value) { m_isOrganizationTrail = value; }

    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline CreateTrailResult& WithIsOrganizationTrail(bool value) { SetIsOrganizationTrail(value); return *this;}

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
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
