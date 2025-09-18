/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CopySnapshotRequest : public EC2Request
  {
  public:
    AWS_EC2_API CopySnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopySnapshot"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A description for the EBS snapshot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CopySnapshotRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost to which to copy the
     * snapshot.</p>  <p>Only supported when copying a snapshot to an
     * Outpost.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html#copy-snapshots">
     * Copy snapshots from an Amazon Web Services Region to an Outpost</a> in the
     * <i>Amazon EBS User Guide</i>.</p>
     */
    inline const Aws::String& GetDestinationOutpostArn() const { return m_destinationOutpostArn; }
    inline bool DestinationOutpostArnHasBeenSet() const { return m_destinationOutpostArnHasBeenSet; }
    template<typename DestinationOutpostArnT = Aws::String>
    void SetDestinationOutpostArn(DestinationOutpostArnT&& value) { m_destinationOutpostArnHasBeenSet = true; m_destinationOutpostArn = std::forward<DestinationOutpostArnT>(value); }
    template<typename DestinationOutpostArnT = Aws::String>
    CopySnapshotRequest& WithDestinationOutpostArn(DestinationOutpostArnT&& value) { SetDestinationOutpostArn(std::forward<DestinationOutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination Region to use in the <code>PresignedUrl</code> parameter of a
     * snapshot copy operation. This parameter is only valid for specifying the
     * destination Region in a <code>PresignedUrl</code> parameter, where it is
     * required.</p> <p>The snapshot copy is sent to the regional endpoint that you
     * sent the HTTP request to (for example,
     * <code>ec2.us-east-1.amazonaws.com</code>). With the CLI, this is specified using
     * the <code>--region</code> parameter or the default Region in your Amazon Web
     * Services configuration file.</p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    CopySnapshotRequest& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Otherwise, omit this parameter.
     * Copies of encrypted snapshots are encrypted, even if you omit this parameter and
     * encryption by default is not enabled. You cannot set this parameter to false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-encryption.html">Amazon
     * EBS encryption</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CopySnapshotRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key to use for Amazon EBS encryption. If this
     * parameter is not specified, your KMS key for Amazon EBS is used. If
     * <code>KmsKeyId</code> is specified, the encrypted state must be
     * <code>true</code>.</p> <p>You can specify the KMS key using any of the
     * following:</p> <ul> <li> <p>Key ID. For example,
     * 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For example,
     * alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>Amazon
     * Web Services authenticates the KMS key asynchronously. Therefore, if you specify
     * an ID, alias, or ARN that is not valid, the action can appear to complete, but
     * eventually fails.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CopySnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API,
     * you must supply a pre-signed URL. This parameter is optional for unencrypted
     * snapshots. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query
     * requests</a>.</p> <p>The <code>PresignedUrl</code> should use the snapshot
     * source endpoint, the <code>CopySnapshot</code> action, and include the
     * <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and
     * <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be
     * signed using Amazon Web Services Signature Version 4. Because EBS snapshots are
     * stored in Amazon S3, the signing algorithm for this parameter uses the same
     * logic that is described in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> in the <i>Amazon S3 API Reference</i>. An invalid or improperly
     * signed <code>PresignedUrl</code> will cause the copy operation to fail
     * asynchronously, and the snapshot will move to an <code>error</code> state.</p>
     */
    inline const Aws::String& GetPresignedUrl() const { return m_presignedUrl; }
    inline bool PresignedUrlHasBeenSet() const { return m_presignedUrlHasBeenSet; }
    template<typename PresignedUrlT = Aws::String>
    void SetPresignedUrl(PresignedUrlT&& value) { m_presignedUrlHasBeenSet = true; m_presignedUrl = std::forward<PresignedUrlT>(value); }
    template<typename PresignedUrlT = Aws::String>
    CopySnapshotRequest& WithPresignedUrl(PresignedUrlT&& value) { SetPresignedUrl(std::forward<PresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Region that contains the snapshot to be copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    CopySnapshotRequest& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EBS snapshot to copy.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const { return m_sourceSnapshotId; }
    inline bool SourceSnapshotIdHasBeenSet() const { return m_sourceSnapshotIdHasBeenSet; }
    template<typename SourceSnapshotIdT = Aws::String>
    void SetSourceSnapshotId(SourceSnapshotIdT&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = std::forward<SourceSnapshotIdT>(value); }
    template<typename SourceSnapshotIdT = Aws::String>
    CopySnapshotRequest& WithSourceSnapshotId(SourceSnapshotIdT&& value) { SetSourceSnapshotId(std::forward<SourceSnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the new snapshot.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CopySnapshotRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CopySnapshotRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>Not supported when copying snapshots to or from Local Zones or
     * Outposts.</p>  <p>Specify a completion duration, in 15 minute increments,
     * to initiate a time-based snapshot copy. Time-based snapshot copy operations
     * complete within the specified duration. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/time-based-copies.html">
     * Time-based copies</a>.</p> <p>If you do not specify a value, the snapshot copy
     * operation is completed on a best-effort basis.</p>
     */
    inline int GetCompletionDurationMinutes() const { return m_completionDurationMinutes; }
    inline bool CompletionDurationMinutesHasBeenSet() const { return m_completionDurationMinutesHasBeenSet; }
    inline void SetCompletionDurationMinutes(int value) { m_completionDurationMinutesHasBeenSet = true; m_completionDurationMinutes = value; }
    inline CopySnapshotRequest& WithCompletionDurationMinutes(int value) { SetCompletionDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Local Zone, for example, <code>cn-north-1-pkx-1a</code> to which to copy
     * the snapshot.</p>  <p>Only supported when copying a snapshot to a Local
     * Zone.</p> 
     */
    inline const Aws::String& GetDestinationAvailabilityZone() const { return m_destinationAvailabilityZone; }
    inline bool DestinationAvailabilityZoneHasBeenSet() const { return m_destinationAvailabilityZoneHasBeenSet; }
    template<typename DestinationAvailabilityZoneT = Aws::String>
    void SetDestinationAvailabilityZone(DestinationAvailabilityZoneT&& value) { m_destinationAvailabilityZoneHasBeenSet = true; m_destinationAvailabilityZone = std::forward<DestinationAvailabilityZoneT>(value); }
    template<typename DestinationAvailabilityZoneT = Aws::String>
    CopySnapshotRequest& WithDestinationAvailabilityZone(DestinationAvailabilityZoneT&& value) { SetDestinationAvailabilityZone(std::forward<DestinationAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CopySnapshotRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destinationOutpostArn;
    bool m_destinationOutpostArnHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_presignedUrl;
    bool m_presignedUrlHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    int m_completionDurationMinutes{0};
    bool m_completionDurationMinutesHasBeenSet = false;

    Aws::String m_destinationAvailabilityZone;
    bool m_destinationAvailabilityZoneHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
