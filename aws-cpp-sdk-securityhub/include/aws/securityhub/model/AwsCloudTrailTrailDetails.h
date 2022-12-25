/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about a CloudTrail trail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudTrailTrailDetails">AWS
   * API Reference</a></p>
   */
  class AwsCloudTrailTrailDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCloudTrailTrailDetails();
    AWS_SECURITYHUB_API AwsCloudTrailTrailDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudTrailTrailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the log group that CloudTrail logs are delivered to.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }

    /**
     * <p>The ARN of the log group that CloudTrail logs are delivered to.</p>
     */
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the log group that CloudTrail logs are delivered to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = value; }

    /**
     * <p>The ARN of the log group that CloudTrail logs are delivered to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::move(value); }

    /**
     * <p>The ARN of the log group that CloudTrail logs are delivered to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn.assign(value); }

    /**
     * <p>The ARN of the log group that CloudTrail logs are delivered to.</p>
     */
    inline AwsCloudTrailTrailDetails& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

    /**
     * <p>The ARN of the log group that CloudTrail logs are delivered to.</p>
     */
    inline AwsCloudTrailTrailDetails& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the log group that CloudTrail logs are delivered to.</p>
     */
    inline AwsCloudTrailTrailDetails& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}


    /**
     * <p>The ARN of the role that the CloudWatch Events endpoint assumes when it
     * writes to the log group.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const{ return m_cloudWatchLogsRoleArn; }

    /**
     * <p>The ARN of the role that the CloudWatch Events endpoint assumes when it
     * writes to the log group.</p>
     */
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that the CloudWatch Events endpoint assumes when it
     * writes to the log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(const Aws::String& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = value; }

    /**
     * <p>The ARN of the role that the CloudWatch Events endpoint assumes when it
     * writes to the log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(Aws::String&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role that the CloudWatch Events endpoint assumes when it
     * writes to the log group.</p>
     */
    inline void SetCloudWatchLogsRoleArn(const char* value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn.assign(value); }

    /**
     * <p>The ARN of the role that the CloudWatch Events endpoint assumes when it
     * writes to the log group.</p>
     */
    inline AwsCloudTrailTrailDetails& WithCloudWatchLogsRoleArn(const Aws::String& value) { SetCloudWatchLogsRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that the CloudWatch Events endpoint assumes when it
     * writes to the log group.</p>
     */
    inline AwsCloudTrailTrailDetails& WithCloudWatchLogsRoleArn(Aws::String&& value) { SetCloudWatchLogsRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that the CloudWatch Events endpoint assumes when it
     * writes to the log group.</p>
     */
    inline AwsCloudTrailTrailDetails& WithCloudWatchLogsRoleArn(const char* value) { SetCloudWatchLogsRoleArn(value); return *this;}


    /**
     * <p>Indicates whether the trail has custom event selectors.</p>
     */
    inline bool GetHasCustomEventSelectors() const{ return m_hasCustomEventSelectors; }

    /**
     * <p>Indicates whether the trail has custom event selectors.</p>
     */
    inline bool HasCustomEventSelectorsHasBeenSet() const { return m_hasCustomEventSelectorsHasBeenSet; }

    /**
     * <p>Indicates whether the trail has custom event selectors.</p>
     */
    inline void SetHasCustomEventSelectors(bool value) { m_hasCustomEventSelectorsHasBeenSet = true; m_hasCustomEventSelectors = value; }

    /**
     * <p>Indicates whether the trail has custom event selectors.</p>
     */
    inline AwsCloudTrailTrailDetails& WithHasCustomEventSelectors(bool value) { SetHasCustomEventSelectors(value); return *this;}


    /**
     * <p>The Region where the trail was created.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The Region where the trail was created.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>The Region where the trail was created.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>The Region where the trail was created.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>The Region where the trail was created.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>The Region where the trail was created.</p>
     */
    inline AwsCloudTrailTrailDetails& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The Region where the trail was created.</p>
     */
    inline AwsCloudTrailTrailDetails& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The Region where the trail was created.</p>
     */
    inline AwsCloudTrailTrailDetails& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>Indicates whether the trail publishes events from global services such as IAM
     * to the log files.</p>
     */
    inline bool GetIncludeGlobalServiceEvents() const{ return m_includeGlobalServiceEvents; }

    /**
     * <p>Indicates whether the trail publishes events from global services such as IAM
     * to the log files.</p>
     */
    inline bool IncludeGlobalServiceEventsHasBeenSet() const { return m_includeGlobalServiceEventsHasBeenSet; }

    /**
     * <p>Indicates whether the trail publishes events from global services such as IAM
     * to the log files.</p>
     */
    inline void SetIncludeGlobalServiceEvents(bool value) { m_includeGlobalServiceEventsHasBeenSet = true; m_includeGlobalServiceEvents = value; }

    /**
     * <p>Indicates whether the trail publishes events from global services such as IAM
     * to the log files.</p>
     */
    inline AwsCloudTrailTrailDetails& WithIncludeGlobalServiceEvents(bool value) { SetIncludeGlobalServiceEvents(value); return *this;}


    /**
     * <p>Indicates whether the trail applies only to the current Region or to all
     * Regions.</p>
     */
    inline bool GetIsMultiRegionTrail() const{ return m_isMultiRegionTrail; }

    /**
     * <p>Indicates whether the trail applies only to the current Region or to all
     * Regions.</p>
     */
    inline bool IsMultiRegionTrailHasBeenSet() const { return m_isMultiRegionTrailHasBeenSet; }

    /**
     * <p>Indicates whether the trail applies only to the current Region or to all
     * Regions.</p>
     */
    inline void SetIsMultiRegionTrail(bool value) { m_isMultiRegionTrailHasBeenSet = true; m_isMultiRegionTrail = value; }

    /**
     * <p>Indicates whether the trail applies only to the current Region or to all
     * Regions.</p>
     */
    inline AwsCloudTrailTrailDetails& WithIsMultiRegionTrail(bool value) { SetIsMultiRegionTrail(value); return *this;}


    /**
     * <p>Whether the trail is created for all accounts in an organization in
     * Organizations, or only for the current Amazon Web Services account.</p>
     */
    inline bool GetIsOrganizationTrail() const{ return m_isOrganizationTrail; }

    /**
     * <p>Whether the trail is created for all accounts in an organization in
     * Organizations, or only for the current Amazon Web Services account.</p>
     */
    inline bool IsOrganizationTrailHasBeenSet() const { return m_isOrganizationTrailHasBeenSet; }

    /**
     * <p>Whether the trail is created for all accounts in an organization in
     * Organizations, or only for the current Amazon Web Services account.</p>
     */
    inline void SetIsOrganizationTrail(bool value) { m_isOrganizationTrailHasBeenSet = true; m_isOrganizationTrail = value; }

    /**
     * <p>Whether the trail is created for all accounts in an organization in
     * Organizations, or only for the current Amazon Web Services account.</p>
     */
    inline AwsCloudTrailTrailDetails& WithIsOrganizationTrail(bool value) { SetIsOrganizationTrail(value); return *this;}


    /**
     * <p>The KMS key ID to use to encrypt the logs.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key ID to use to encrypt the logs.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key ID to use to encrypt the logs.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key ID to use to encrypt the logs.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key ID to use to encrypt the logs.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key ID to use to encrypt the logs.</p>
     */
    inline AwsCloudTrailTrailDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key ID to use to encrypt the logs.</p>
     */
    inline AwsCloudTrailTrailDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key ID to use to encrypt the logs.</p>
     */
    inline AwsCloudTrailTrailDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Indicates whether CloudTrail log file validation is enabled.</p>
     */
    inline bool GetLogFileValidationEnabled() const{ return m_logFileValidationEnabled; }

    /**
     * <p>Indicates whether CloudTrail log file validation is enabled.</p>
     */
    inline bool LogFileValidationEnabledHasBeenSet() const { return m_logFileValidationEnabledHasBeenSet; }

    /**
     * <p>Indicates whether CloudTrail log file validation is enabled.</p>
     */
    inline void SetLogFileValidationEnabled(bool value) { m_logFileValidationEnabledHasBeenSet = true; m_logFileValidationEnabled = value; }

    /**
     * <p>Indicates whether CloudTrail log file validation is enabled.</p>
     */
    inline AwsCloudTrailTrailDetails& WithLogFileValidationEnabled(bool value) { SetLogFileValidationEnabled(value); return *this;}


    /**
     * <p>The name of the trail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trail.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the trail.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the trail.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the trail.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the trail.</p>
     */
    inline AwsCloudTrailTrailDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trail.</p>
     */
    inline AwsCloudTrailTrailDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the trail.</p>
     */
    inline AwsCloudTrailTrailDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the S3 bucket where the log files are published.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket where the log files are published.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket where the log files are published.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket where the log files are published.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket where the log files are published.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket where the log files are published.</p>
     */
    inline AwsCloudTrailTrailDetails& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where the log files are published.</p>
     */
    inline AwsCloudTrailTrailDetails& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket where the log files are published.</p>
     */
    inline AwsCloudTrailTrailDetails& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The S3 key prefix. The key prefix is added after the name of the S3 bucket
     * where the log files are published.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>The S3 key prefix. The key prefix is added after the name of the S3 bucket
     * where the log files are published.</p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>The S3 key prefix. The key prefix is added after the name of the S3 bucket
     * where the log files are published.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>The S3 key prefix. The key prefix is added after the name of the S3 bucket
     * where the log files are published.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>The S3 key prefix. The key prefix is added after the name of the S3 bucket
     * where the log files are published.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>The S3 key prefix. The key prefix is added after the name of the S3 bucket
     * where the log files are published.</p>
     */
    inline AwsCloudTrailTrailDetails& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 key prefix. The key prefix is added after the name of the S3 bucket
     * where the log files are published.</p>
     */
    inline AwsCloudTrailTrailDetails& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 key prefix. The key prefix is added after the name of the S3 bucket
     * where the log files are published.</p>
     */
    inline AwsCloudTrailTrailDetails& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


    /**
     * <p>The ARN of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The ARN of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The ARN of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The ARN of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The ARN of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The ARN of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline AwsCloudTrailTrailDetails& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The ARN of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline AwsCloudTrailTrailDetails& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline AwsCloudTrailTrailDetails& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The name of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline const Aws::String& GetSnsTopicName() const{ return m_snsTopicName; }

    /**
     * <p>The name of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline bool SnsTopicNameHasBeenSet() const { return m_snsTopicNameHasBeenSet; }

    /**
     * <p>The name of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline void SetSnsTopicName(const Aws::String& value) { m_snsTopicNameHasBeenSet = true; m_snsTopicName = value; }

    /**
     * <p>The name of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline void SetSnsTopicName(Aws::String&& value) { m_snsTopicNameHasBeenSet = true; m_snsTopicName = std::move(value); }

    /**
     * <p>The name of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline void SetSnsTopicName(const char* value) { m_snsTopicNameHasBeenSet = true; m_snsTopicName.assign(value); }

    /**
     * <p>The name of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline AwsCloudTrailTrailDetails& WithSnsTopicName(const Aws::String& value) { SetSnsTopicName(value); return *this;}

    /**
     * <p>The name of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline AwsCloudTrailTrailDetails& WithSnsTopicName(Aws::String&& value) { SetSnsTopicName(std::move(value)); return *this;}

    /**
     * <p>The name of the SNS topic that is used for notifications of log file
     * delivery.</p>
     */
    inline AwsCloudTrailTrailDetails& WithSnsTopicName(const char* value) { SetSnsTopicName(value); return *this;}


    /**
     * <p>The ARN of the trail.</p>
     */
    inline const Aws::String& GetTrailArn() const{ return m_trailArn; }

    /**
     * <p>The ARN of the trail.</p>
     */
    inline bool TrailArnHasBeenSet() const { return m_trailArnHasBeenSet; }

    /**
     * <p>The ARN of the trail.</p>
     */
    inline void SetTrailArn(const Aws::String& value) { m_trailArnHasBeenSet = true; m_trailArn = value; }

    /**
     * <p>The ARN of the trail.</p>
     */
    inline void SetTrailArn(Aws::String&& value) { m_trailArnHasBeenSet = true; m_trailArn = std::move(value); }

    /**
     * <p>The ARN of the trail.</p>
     */
    inline void SetTrailArn(const char* value) { m_trailArnHasBeenSet = true; m_trailArn.assign(value); }

    /**
     * <p>The ARN of the trail.</p>
     */
    inline AwsCloudTrailTrailDetails& WithTrailArn(const Aws::String& value) { SetTrailArn(value); return *this;}

    /**
     * <p>The ARN of the trail.</p>
     */
    inline AwsCloudTrailTrailDetails& WithTrailArn(Aws::String&& value) { SetTrailArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trail.</p>
     */
    inline AwsCloudTrailTrailDetails& WithTrailArn(const char* value) { SetTrailArn(value); return *this;}

  private:

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;

    bool m_hasCustomEventSelectors;
    bool m_hasCustomEventSelectorsHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    bool m_includeGlobalServiceEvents;
    bool m_includeGlobalServiceEventsHasBeenSet = false;

    bool m_isMultiRegionTrail;
    bool m_isMultiRegionTrailHasBeenSet = false;

    bool m_isOrganizationTrail;
    bool m_isOrganizationTrailHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_logFileValidationEnabled;
    bool m_logFileValidationEnabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_snsTopicName;
    bool m_snsTopicNameHasBeenSet = false;

    Aws::String m_trailArn;
    bool m_trailArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
