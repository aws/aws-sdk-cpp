/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Specifies the settings for each trail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrailRequest">AWS
   * API Reference</a></p>
   */
  class CreateTrailRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API CreateTrailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrail"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name of the trail. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), periods (.), underscores (_), or dashes (-)</p> </li> <li> <p>Start with
     * a letter or number, and end with a letter or number</p> </li> <li> <p>Be between
     * 3 and 128 characters</p> </li> <li> <p>Have no adjacent periods, underscores or
     * dashes. Names like <code>my-_namespace</code> and <code>my--namespace</code> are
     * not valid.</p> </li> <li> <p>Not be in IP address format (for example,
     * 192.168.5.4)</p> </li> </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTrailRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Amazon S3 bucket designated for publishing log
     * files. For information about bucket naming rules, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Bucket
     * naming rules</a> in the <i>Amazon Simple Storage Service User Guide</i>. </p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    CreateTrailRequest& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
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
    CreateTrailRequest& WithS3KeyPrefix(S3KeyPrefixT&& value) { SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name or ARN of the Amazon SNS topic defined for notification of
     * log file delivery. The maximum length is 256 characters.</p>
     */
    inline const Aws::String& GetSnsTopicName() const { return m_snsTopicName; }
    inline bool SnsTopicNameHasBeenSet() const { return m_snsTopicNameHasBeenSet; }
    template<typename SnsTopicNameT = Aws::String>
    void SetSnsTopicName(SnsTopicNameT&& value) { m_snsTopicNameHasBeenSet = true; m_snsTopicName = std::forward<SnsTopicNameT>(value); }
    template<typename SnsTopicNameT = Aws::String>
    CreateTrailRequest& WithSnsTopicName(SnsTopicNameT&& value) { SetSnsTopicName(std::forward<SnsTopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail is publishing events from global services such as
     * IAM to the log files.</p>
     */
    inline bool GetIncludeGlobalServiceEvents() const { return m_includeGlobalServiceEvents; }
    inline bool IncludeGlobalServiceEventsHasBeenSet() const { return m_includeGlobalServiceEventsHasBeenSet; }
    inline void SetIncludeGlobalServiceEvents(bool value) { m_includeGlobalServiceEventsHasBeenSet = true; m_includeGlobalServiceEvents = value; }
    inline CreateTrailRequest& WithIncludeGlobalServiceEvents(bool value) { SetIncludeGlobalServiceEvents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail is created in the current Region or in all
     * Regions. The default is false, which creates a trail only in the Region where
     * you are signed in. As a best practice, consider creating trails that log events
     * in all Regions.</p>
     */
    inline bool GetIsMultiRegionTrail() const { return m_isMultiRegionTrail; }
    inline bool IsMultiRegionTrailHasBeenSet() const { return m_isMultiRegionTrailHasBeenSet; }
    inline void SetIsMultiRegionTrail(bool value) { m_isMultiRegionTrailHasBeenSet = true; m_isMultiRegionTrail = value; }
    inline CreateTrailRequest& WithIsMultiRegionTrail(bool value) { SetIsMultiRegionTrail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether log file integrity validation is enabled. The default is
     * false.</p>  <p>When you disable log file integrity validation, the chain
     * of digest files is broken after one hour. CloudTrail does not create digest
     * files for log files that were delivered during a period in which log file
     * integrity validation was disabled. For example, if you enable log file integrity
     * validation at noon on January 1, disable it at noon on January 2, and re-enable
     * it at noon on January 10, digest files will not be created for the log files
     * delivered from noon on January 2 to noon on January 10. The same applies
     * whenever you stop CloudTrail logging or delete a trail.</p> 
     */
    inline bool GetEnableLogFileValidation() const { return m_enableLogFileValidation; }
    inline bool EnableLogFileValidationHasBeenSet() const { return m_enableLogFileValidationHasBeenSet; }
    inline void SetEnableLogFileValidation(bool value) { m_enableLogFileValidationHasBeenSet = true; m_enableLogFileValidation = value; }
    inline CreateTrailRequest& WithEnableLogFileValidation(bool value) { SetEnableLogFileValidation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a log group name using an Amazon Resource Name (ARN), a unique
     * identifier that represents the log group to which CloudTrail logs will be
     * delivered. You must use a log group that exists in your account.</p> <p>Not
     * required unless you specify <code>CloudWatchLogsRoleArn</code>.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const { return m_cloudWatchLogsLogGroupArn; }
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogsLogGroupArnT = Aws::String>
    void SetCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnT&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::forward<CloudWatchLogsLogGroupArnT>(value); }
    template<typename CloudWatchLogsLogGroupArnT = Aws::String>
    CreateTrailRequest& WithCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnT&& value) { SetCloudWatchLogsLogGroupArn(std::forward<CloudWatchLogsLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the role for the CloudWatch Logs endpoint to assume to write to a
     * user's log group. You must use a role that exists in your account.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const { return m_cloudWatchLogsRoleArn; }
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    void SetCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::forward<CloudWatchLogsRoleArnT>(value); }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    CreateTrailRequest& WithCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { SetCloudWatchLogsRoleArn(std::forward<CloudWatchLogsRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID to use to encrypt the logs delivered by CloudTrail.
     * The value can be an alias name prefixed by <code>alias/</code>, a fully
     * specified ARN to an alias, a fully specified ARN to a key, or a globally unique
     * identifier.</p> <p>CloudTrail also supports KMS multi-Region keys. For more
     * information about multi-Region keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Using
     * multi-Region keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     * <p>Examples:</p> <ul> <li> <p> <code>alias/MyAliasName</code> </p> </li> <li>
     * <p> <code>arn:aws:kms:us-east-2:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p> <code>12345678-1234-1234-1234-123456789012</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateTrailRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the trail is created for all accounts in an organization in
     * Organizations, or only for the current Amazon Web Services account. The default
     * is false, and cannot be true unless the call is made on behalf of an Amazon Web
     * Services account that is the management account or delegated administrator
     * account for an organization in Organizations.</p>
     */
    inline bool GetIsOrganizationTrail() const { return m_isOrganizationTrail; }
    inline bool IsOrganizationTrailHasBeenSet() const { return m_isOrganizationTrailHasBeenSet; }
    inline void SetIsOrganizationTrail(bool value) { m_isOrganizationTrailHasBeenSet = true; m_isOrganizationTrail = value; }
    inline CreateTrailRequest& WithIsOrganizationTrail(bool value) { SetIsOrganizationTrail(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagsList() const { return m_tagsList; }
    inline bool TagsListHasBeenSet() const { return m_tagsListHasBeenSet; }
    template<typename TagsListT = Aws::Vector<Tag>>
    void SetTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::forward<TagsListT>(value); }
    template<typename TagsListT = Aws::Vector<Tag>>
    CreateTrailRequest& WithTagsList(TagsListT&& value) { SetTagsList(std::forward<TagsListT>(value)); return *this;}
    template<typename TagsListT = Tag>
    CreateTrailRequest& AddTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList.emplace_back(std::forward<TagsListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    Aws::String m_snsTopicName;
    bool m_snsTopicNameHasBeenSet = false;

    bool m_includeGlobalServiceEvents{false};
    bool m_includeGlobalServiceEventsHasBeenSet = false;

    bool m_isMultiRegionTrail{false};
    bool m_isMultiRegionTrailHasBeenSet = false;

    bool m_enableLogFileValidation{false};
    bool m_enableLogFileValidationHasBeenSet = false;

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_isOrganizationTrail{false};
    bool m_isOrganizationTrailHasBeenSet = false;

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
