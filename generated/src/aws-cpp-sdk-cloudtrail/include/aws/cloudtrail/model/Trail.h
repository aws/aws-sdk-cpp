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
    AWS_CLOUDTRAIL_API Trail() = default;
    AWS_CLOUDTRAIL_API Trail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Trail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the trail set by calling <a>CreateTrail</a>. The maximum length is
     * 128 characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Trail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Amazon S3 bucket into which CloudTrail delivers your trail files.
     * See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Amazon
     * S3 Bucket naming rules</a>.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    Trail& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for log file delivery. For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/get-and-view-cloudtrail-log-files.html#cloudtrail-find-log-files">Finding
     * Your CloudTrail Log Files</a>. The maximum length is 200 characters.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    template<typename S3KeyPrefixT = Aws::String>
    void SetS3KeyPrefix(S3KeyPrefixT&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value); }
    template<typename S3KeyPrefixT = Aws::String>
    Trail& WithS3KeyPrefix(S3KeyPrefixT&& value) { SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the Amazon SNS topic that CloudTrail uses to send
     * notifications when log files are delivered. The following is the format of a
     * topic ARN.</p> <p> <code>arn:aws:sns:us-east-2:123456789012:MyTopic</code> </p>
     */
    inline const Aws::String& GetSnsTopicARN() const { return m_snsTopicARN; }
    inline bool SnsTopicARNHasBeenSet() const { return m_snsTopicARNHasBeenSet; }
    template<typename SnsTopicARNT = Aws::String>
    void SetSnsTopicARN(SnsTopicARNT&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = std::forward<SnsTopicARNT>(value); }
    template<typename SnsTopicARNT = Aws::String>
    Trail& WithSnsTopicARN(SnsTopicARNT&& value) { SetSnsTopicARN(std::forward<SnsTopicARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <b>True</b> to include Amazon Web Services API calls from Amazon Web
     * Services global services such as IAM. Otherwise, <b>False</b>.</p>
     */
    inline bool GetIncludeGlobalServiceEvents() const { return m_includeGlobalServiceEvents; }
    inline bool IncludeGlobalServiceEventsHasBeenSet() const { return m_includeGlobalServiceEventsHasBeenSet; }
    inline void SetIncludeGlobalServiceEvents(bool value) { m_includeGlobalServiceEventsHasBeenSet = true; m_includeGlobalServiceEvents = value; }
    inline Trail& WithIncludeGlobalServiceEvents(bool value) { SetIncludeGlobalServiceEvents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail exists only in one Region or exists in all
     * Regions.</p>
     */
    inline bool GetIsMultiRegionTrail() const { return m_isMultiRegionTrail; }
    inline bool IsMultiRegionTrailHasBeenSet() const { return m_isMultiRegionTrailHasBeenSet; }
    inline void SetIsMultiRegionTrail(bool value) { m_isMultiRegionTrailHasBeenSet = true; m_isMultiRegionTrail = value; }
    inline Trail& WithIsMultiRegionTrail(bool value) { SetIsMultiRegionTrail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region in which the trail was created.</p>
     */
    inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    template<typename HomeRegionT = Aws::String>
    void SetHomeRegion(HomeRegionT&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::forward<HomeRegionT>(value); }
    template<typename HomeRegionT = Aws::String>
    Trail& WithHomeRegion(HomeRegionT&& value) { SetHomeRegion(std::forward<HomeRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the trail. The following is the format of a trail
     * ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailARN() const { return m_trailARN; }
    inline bool TrailARNHasBeenSet() const { return m_trailARNHasBeenSet; }
    template<typename TrailARNT = Aws::String>
    void SetTrailARN(TrailARNT&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::forward<TrailARNT>(value); }
    template<typename TrailARNT = Aws::String>
    Trail& WithTrailARN(TrailARNT&& value) { SetTrailARN(std::forward<TrailARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether log file validation is enabled.</p>
     */
    inline bool GetLogFileValidationEnabled() const { return m_logFileValidationEnabled; }
    inline bool LogFileValidationEnabledHasBeenSet() const { return m_logFileValidationEnabledHasBeenSet; }
    inline void SetLogFileValidationEnabled(bool value) { m_logFileValidationEnabledHasBeenSet = true; m_logFileValidationEnabled = value; }
    inline Trail& WithLogFileValidationEnabled(bool value) { SetLogFileValidationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Amazon Resource Name (ARN), a unique identifier that represents
     * the log group to which CloudTrail logs will be delivered.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const { return m_cloudWatchLogsLogGroupArn; }
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogsLogGroupArnT = Aws::String>
    void SetCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnT&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::forward<CloudWatchLogsLogGroupArnT>(value); }
    template<typename CloudWatchLogsLogGroupArnT = Aws::String>
    Trail& WithCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnT&& value) { SetCloudWatchLogsLogGroupArn(std::forward<CloudWatchLogsLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const { return m_cloudWatchLogsRoleArn; }
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    void SetCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::forward<CloudWatchLogsRoleArnT>(value); }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    Trail& WithCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { SetCloudWatchLogsRoleArn(std::forward<CloudWatchLogsRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID that encrypts the logs delivered by CloudTrail. The
     * value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Trail& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the trail has custom event selectors.</p>
     */
    inline bool GetHasCustomEventSelectors() const { return m_hasCustomEventSelectors; }
    inline bool HasCustomEventSelectorsHasBeenSet() const { return m_hasCustomEventSelectorsHasBeenSet; }
    inline void SetHasCustomEventSelectors(bool value) { m_hasCustomEventSelectorsHasBeenSet = true; m_hasCustomEventSelectors = value; }
    inline Trail& WithHasCustomEventSelectors(bool value) { SetHasCustomEventSelectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a trail has insight types specified in an
     * <code>InsightSelector</code> list.</p>
     */
    inline bool GetHasInsightSelectors() const { return m_hasInsightSelectors; }
    inline bool HasInsightSelectorsHasBeenSet() const { return m_hasInsightSelectorsHasBeenSet; }
    inline void SetHasInsightSelectors(bool value) { m_hasInsightSelectorsHasBeenSet = true; m_hasInsightSelectors = value; }
    inline Trail& WithHasInsightSelectors(bool value) { SetHasInsightSelectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail is an organization trail.</p>
     */
    inline bool GetIsOrganizationTrail() const { return m_isOrganizationTrail; }
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

    bool m_includeGlobalServiceEvents{false};
    bool m_includeGlobalServiceEventsHasBeenSet = false;

    bool m_isMultiRegionTrail{false};
    bool m_isMultiRegionTrailHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Aws::String m_trailARN;
    bool m_trailARNHasBeenSet = false;

    bool m_logFileValidationEnabled{false};
    bool m_logFileValidationEnabledHasBeenSet = false;

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_hasCustomEventSelectors{false};
    bool m_hasCustomEventSelectorsHasBeenSet = false;

    bool m_hasInsightSelectors{false};
    bool m_hasInsightSelectorsHasBeenSet = false;

    bool m_isOrganizationTrail{false};
    bool m_isOrganizationTrailHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
