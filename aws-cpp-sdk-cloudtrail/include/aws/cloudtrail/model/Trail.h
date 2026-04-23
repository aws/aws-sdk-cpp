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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>The settings for a trail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/Trail">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API Trail
  {
  public:
    Trail();
    Trail(Aws::Utils::Json::JsonView jsonValue);
    Trail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline Trail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline Trail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline Trail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/create_trail_naming_policy.html">Amazon
     * S3 Bucket Naming Requirements</a>.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/create_trail_naming_policy.html">Amazon
     * S3 Bucket Naming Requirements</a>.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/create_trail_naming_policy.html">Amazon
     * S3 Bucket Naming Requirements</a>.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/create_trail_naming_policy.html">Amazon
     * S3 Bucket Naming Requirements</a>.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/create_trail_naming_policy.html">Amazon
     * S3 Bucket Naming Requirements</a>.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/create_trail_naming_policy.html">Amazon
     * S3 Bucket Naming Requirements</a>.</p>
     */
    inline Trail& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/create_trail_naming_policy.html">Amazon
     * S3 Bucket Naming Requirements</a>.</p>
     */
    inline Trail& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/create_trail_naming_policy.html">Amazon
     * S3 Bucket Naming Requirements</a>.</p>
     */
    inline Trail& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.The maximum length is 200 characters.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.The maximum length is 200 characters.</p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.The maximum length is 200 characters.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.The maximum length is 200 characters.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.The maximum length is 200 characters.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.The maximum length is 200 characters.</p>
     */
    inline Trail& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.The maximum length is 200 characters.</p>
     */
    inline Trail& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-find-log-files.html">Finding
     * Your CloudTrail Log Files</a>.The maximum length is 200 characters.</p>
     */
    inline Trail& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


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
    inline bool SnsTopicARNHasBeenSet() const { return m_snsTopicARNHasBeenSet; }

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline void SetSnsTopicARN(const Aws::String& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = value; }

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline void SetSnsTopicARN(Aws::String&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = std::move(value); }

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline void SetSnsTopicARN(const char* value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN.assign(value); }

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline Trail& WithSnsTopicARN(const Aws::String& value) { SetSnsTopicARN(value); return *this;}

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline Trail& WithSnsTopicARN(Aws::String&& value) { SetSnsTopicARN(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The format of a topic ARN is:</p>
     * <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline Trail& WithSnsTopicARN(const char* value) { SetSnsTopicARN(value); return *this;}


    /**
     * <p>Set to <b>True</b> to include AWS API calls from AWS global services such as
     * IAM. Otherwise, <b>False</b>.</p>
     */
    inline bool GetIncludeGlobalServiceEvents() const{ return m_includeGlobalServiceEvents; }

    /**
     * <p>Set to <b>True</b> to include AWS API calls from AWS global services such as
     * IAM. Otherwise, <b>False</b>.</p>
     */
    inline bool IncludeGlobalServiceEventsHasBeenSet() const { return m_includeGlobalServiceEventsHasBeenSet; }

    /**
     * <p>Set to <b>True</b> to include AWS API calls from AWS global services such as
     * IAM. Otherwise, <b>False</b>.</p>
     */
    inline void SetIncludeGlobalServiceEvents(bool value) { m_includeGlobalServiceEventsHasBeenSet = true; m_includeGlobalServiceEvents = value; }

    /**
     * <p>Set to <b>True</b> to include AWS API calls from AWS global services such as
     * IAM. Otherwise, <b>False</b>.</p>
     */
    inline Trail& WithIncludeGlobalServiceEvents(bool value) { SetIncludeGlobalServiceEvents(value); return *this;}


    /**
     * <p>Specifies whether the trail belongs only to one region or exists in all
     * regions.</p>
     */
    inline bool GetIsMultiRegionTrail() const{ return m_isMultiRegionTrail; }

    /**
     * <p>Specifies whether the trail belongs only to one region or exists in all
     * regions.</p>
     */
    inline bool IsMultiRegionTrailHasBeenSet() const { return m_isMultiRegionTrailHasBeenSet; }

    /**
     * <p>Specifies whether the trail belongs only to one region or exists in all
     * regions.</p>
     */
    inline void SetIsMultiRegionTrail(bool value) { m_isMultiRegionTrailHasBeenSet = true; m_isMultiRegionTrail = value; }

    /**
     * <p>Specifies whether the trail belongs only to one region or exists in all
     * regions.</p>
     */
    inline Trail& WithIsMultiRegionTrail(bool value) { SetIsMultiRegionTrail(value); return *this;}


    /**
     * <p>The region in which the trail was created.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The region in which the trail was created.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>The region in which the trail was created.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>The region in which the trail was created.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>The region in which the trail was created.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>The region in which the trail was created.</p>
     */
    inline Trail& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The region in which the trail was created.</p>
     */
    inline Trail& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The region in which the trail was created.</p>
     */
    inline Trail& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline bool TrailARNHasBeenSet() const { return m_trailARNHasBeenSet; }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(const Aws::String& value) { m_trailARNHasBeenSet = true; m_trailARN = value; }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(Aws::String&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::move(value); }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(const char* value) { m_trailARNHasBeenSet = true; m_trailARN.assign(value); }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline Trail& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline Trail& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline Trail& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}


    /**
     * <p>Specifies whether log file validation is enabled.</p>
     */
    inline bool GetLogFileValidationEnabled() const{ return m_logFileValidationEnabled; }

    /**
     * <p>Specifies whether log file validation is enabled.</p>
     */
    inline bool LogFileValidationEnabledHasBeenSet() const { return m_logFileValidationEnabledHasBeenSet; }

    /**
     * <p>Specifies whether log file validation is enabled.</p>
     */
    inline void SetLogFileValidationEnabled(bool value) { m_logFileValidationEnabledHasBeenSet = true; m_logFileValidationEnabled = value; }

    /**
     * <p>Specifies whether log file validation is enabled.</p>
     */
    inline Trail& WithLogFileValidationEnabled(bool value) { SetLogFileValidationEnabled(value); return *this;}


    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }

    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }

    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = value; }

    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::move(value); }

    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn.assign(value); }

    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline Trail& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline Trail& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline Trail& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}


    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const{ return m_cloudWatchLogsRoleArn; }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(const Aws::String& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = value; }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(Aws::String&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::move(value); }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(const char* value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn.assign(value); }

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline Trail& WithCloudWatchLogsRoleArn(const Aws::String& value) { SetCloudWatchLogsRoleArn(value); return *this;}

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline Trail& WithCloudWatchLogsRoleArn(Aws::String&& value) { SetCloudWatchLogsRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline Trail& WithCloudWatchLogsRoleArn(const char* value) { SetCloudWatchLogsRoleArn(value); return *this;}


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
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline Trail& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline Trail& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the format:</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline Trail& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies if the trail has custom event selectors.</p>
     */
    inline bool GetHasCustomEventSelectors() const{ return m_hasCustomEventSelectors; }

    /**
     * <p>Specifies if the trail has custom event selectors.</p>
     */
    inline bool HasCustomEventSelectorsHasBeenSet() const { return m_hasCustomEventSelectorsHasBeenSet; }

    /**
     * <p>Specifies if the trail has custom event selectors.</p>
     */
    inline void SetHasCustomEventSelectors(bool value) { m_hasCustomEventSelectorsHasBeenSet = true; m_hasCustomEventSelectors = value; }

    /**
     * <p>Specifies if the trail has custom event selectors.</p>
     */
    inline Trail& WithHasCustomEventSelectors(bool value) { SetHasCustomEventSelectors(value); return *this;}


    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline bool GetIsOrganizationTrail() const{ return m_isOrganizationTrail; }

    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline bool IsOrganizationTrailHasBeenSet() const { return m_isOrganizationTrailHasBeenSet; }

    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline void SetIsOrganizationTrail(bool value) { m_isOrganizationTrailHasBeenSet = true; m_isOrganizationTrail = value; }

    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline Trail& WithIsOrganizationTrail(bool value) { SetIsOrganizationTrail(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet;

    Aws::String m_snsTopicARN;
    bool m_snsTopicARNHasBeenSet;

    bool m_includeGlobalServiceEvents;
    bool m_includeGlobalServiceEventsHasBeenSet;

    bool m_isMultiRegionTrail;
    bool m_isMultiRegionTrailHasBeenSet;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet;

    Aws::String m_trailARN;
    bool m_trailARNHasBeenSet;

    bool m_logFileValidationEnabled;
    bool m_logFileValidationEnabledHasBeenSet;

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet;

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    bool m_hasCustomEventSelectors;
    bool m_hasCustomEventSelectorsHasBeenSet;

    bool m_isOrganizationTrail;
    bool m_isOrganizationTrailHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
