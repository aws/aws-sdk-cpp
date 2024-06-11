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
  class Trail
  {
  public:
    AWS_CLOUDTRAIL_API Trail();
    AWS_CLOUDTRAIL_API Trail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Trail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Trail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Trail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Trail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Amazon
     * S3 Bucket naming rules</a>.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline Trail& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline Trail& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline Trail& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/get-and-view-cloudtrail-log-files.html#cloudtrail-find-log-files">Finding
     * Your CloudTrail Log Files</a>. The maximum length is 200 characters.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }
    inline Trail& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}
    inline Trail& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}
    inline Trail& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The following is the format of a
     * topic ARN.</p> <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline const Aws::String& GetSnsTopicARN() const{ return m_snsTopicARN; }
    inline bool SnsTopicARNHasBeenSet() const { return m_snsTopicARNHasBeenSet; }
    inline void SetSnsTopicARN(const Aws::String& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = value; }
    inline void SetSnsTopicARN(Aws::String&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = std::move(value); }
    inline void SetSnsTopicARN(const char* value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN.assign(value); }
    inline Trail& WithSnsTopicARN(const Aws::String& value) { SetSnsTopicARN(value); return *this;}
    inline Trail& WithSnsTopicARN(Aws::String&& value) { SetSnsTopicARN(std::move(value)); return *this;}
    inline Trail& WithSnsTopicARN(const char* value) { SetSnsTopicARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <b>True</b> to include Amazon Web Services API calls from Amazon Web
     * Services global services such as IAM. Otherwise, <b>False</b>.</p>
     */
    inline bool GetIncludeGlobalServiceEvents() const{ return m_includeGlobalServiceEvents; }
    inline bool IncludeGlobalServiceEventsHasBeenSet() const { return m_includeGlobalServiceEventsHasBeenSet; }
    inline void SetIncludeGlobalServiceEvents(bool value) { m_includeGlobalServiceEventsHasBeenSet = true; m_includeGlobalServiceEvents = value; }
    inline Trail& WithIncludeGlobalServiceEvents(bool value) { SetIncludeGlobalServiceEvents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail exists only in one Region or exists in all
     * Regions.</p>
     */
    inline bool GetIsMultiRegionTrail() const{ return m_isMultiRegionTrail; }
    inline bool IsMultiRegionTrailHasBeenSet() const { return m_isMultiRegionTrailHasBeenSet; }
    inline void SetIsMultiRegionTrail(bool value) { m_isMultiRegionTrailHasBeenSet = true; m_isMultiRegionTrail = value; }
    inline Trail& WithIsMultiRegionTrail(bool value) { SetIsMultiRegionTrail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region in which the trail was created.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }
    inline Trail& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}
    inline Trail& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}
    inline Trail& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the trail. The following is the format of a trail
     * ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }
    inline bool TrailARNHasBeenSet() const { return m_trailARNHasBeenSet; }
    inline void SetTrailARN(const Aws::String& value) { m_trailARNHasBeenSet = true; m_trailARN = value; }
    inline void SetTrailARN(Aws::String&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::move(value); }
    inline void SetTrailARN(const char* value) { m_trailARNHasBeenSet = true; m_trailARN.assign(value); }
    inline Trail& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}
    inline Trail& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}
    inline Trail& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether log file validation is enabled.</p>
     */
    inline bool GetLogFileValidationEnabled() const{ return m_logFileValidationEnabled; }
    inline bool LogFileValidationEnabledHasBeenSet() const { return m_logFileValidationEnabledHasBeenSet; }
    inline void SetLogFileValidationEnabled(bool value) { m_logFileValidationEnabledHasBeenSet = true; m_logFileValidationEnabled = value; }
    inline Trail& WithLogFileValidationEnabled(bool value) { SetLogFileValidationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = value; }
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn.assign(value); }
    inline Trail& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}
    inline Trail& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}
    inline Trail& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const{ return m_cloudWatchLogsRoleArn; }
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }
    inline void SetCloudWatchLogsRoleArn(const Aws::String& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = value; }
    inline void SetCloudWatchLogsRoleArn(Aws::String&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::move(value); }
    inline void SetCloudWatchLogsRoleArn(const char* value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn.assign(value); }
    inline Trail& WithCloudWatchLogsRoleArn(const Aws::String& value) { SetCloudWatchLogsRoleArn(value); return *this;}
    inline Trail& WithCloudWatchLogsRoleArn(Aws::String&& value) { SetCloudWatchLogsRoleArn(std::move(value)); return *this;}
    inline Trail& WithCloudWatchLogsRoleArn(const char* value) { SetCloudWatchLogsRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Trail& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Trail& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Trail& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the trail has custom event selectors.</p>
     */
    inline bool GetHasCustomEventSelectors() const{ return m_hasCustomEventSelectors; }
    inline bool HasCustomEventSelectorsHasBeenSet() const { return m_hasCustomEventSelectorsHasBeenSet; }
    inline void SetHasCustomEventSelectors(bool value) { m_hasCustomEventSelectorsHasBeenSet = true; m_hasCustomEventSelectors = value; }
    inline Trail& WithHasCustomEventSelectors(bool value) { SetHasCustomEventSelectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a trail has insight types specified in an
     * <code>InsightSelector</code> list.</p>
     */
    inline bool GetHasInsightSelectors() const{ return m_hasInsightSelectors; }
    inline bool HasInsightSelectorsHasBeenSet() const { return m_hasInsightSelectorsHasBeenSet; }
    inline void SetHasInsightSelectors(bool value) { m_hasInsightSelectorsHasBeenSet = true; m_hasInsightSelectors = value; }
    inline Trail& WithHasInsightSelectors(bool value) { SetHasInsightSelectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline bool GetIsOrganizationTrail() const{ return m_isOrganizationTrail; }
    inline bool IsOrganizationTrailHasBeenSet() const { return m_isOrganizationTrailHasBeenSet; }
    inline void SetIsOrganizationTrail(bool value) { m_isOrganizationTrailHasBeenSet = true; m_isOrganizationTrail = value; }
    inline Trail& WithIsOrganizationTrail(bool value) { SetIsOrganizationTrail(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    Aws::String m_snsTopicARN;
    bool m_snsTopicARNHasBeenSet = false;

    bool m_includeGlobalServiceEvents;
    bool m_includeGlobalServiceEventsHasBeenSet = false;

    bool m_isMultiRegionTrail;
    bool m_isMultiRegionTrailHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Aws::String m_trailARN;
    bool m_trailARNHasBeenSet = false;

    bool m_logFileValidationEnabled;
    bool m_logFileValidationEnabledHasBeenSet = false;

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_hasCustomEventSelectors;
    bool m_hasCustomEventSelectorsHasBeenSet = false;

    bool m_hasInsightSelectors;
    bool m_hasInsightSelectorsHasBeenSet = false;

    bool m_isOrganizationTrail;
    bool m_isOrganizationTrailHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
