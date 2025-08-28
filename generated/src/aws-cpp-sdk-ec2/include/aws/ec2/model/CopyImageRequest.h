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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CopyImage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyImageRequest">AWS
   * API Reference</a></p>
   */
  class CopyImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API CopyImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency in Amazon EC2 API requests</a> in the <i>Amazon EC2 API
     * Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CopyImageRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the new AMI.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CopyImageRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to encrypt the snapshots of the copied image.</p> <p>You
     * can encrypt a copy of an unencrypted snapshot, but you cannot create an
     * unencrypted copy of an encrypted snapshot. The default KMS key for Amazon EBS is
     * used unless you specify a non-default Key Management Service (KMS) KMS key using
     * <code>KmsKeyId</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AMIEncryption.html">Use
     * encryption with EBS-backed AMIs</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CopyImageRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the symmetric Key Management Service (KMS) KMS key to use
     * when creating encrypted volumes. If this parameter is not specified, your Amazon
     * Web Services managed KMS key for Amazon EBS is used. If you specify a KMS key,
     * you must also set the encrypted state to <code>true</code>.</p> <p>You can
     * specify a KMS key using any of the following:</p> <ul> <li> <p>Key ID. For
     * example, 1234abcd-12ab-34cd-56ef-1234567890ab.</p> </li> <li> <p>Key alias. For
     * example, alias/ExampleAlias.</p> </li> <li> <p>Key ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:key/1234abcd-12ab-34cd-56ef-1234567890ab.</p>
     * </li> <li> <p>Alias ARN. For example,
     * arn:aws:kms:us-east-1:012345678910:alias/ExampleAlias.</p> </li> </ul> <p>Amazon
     * Web Services authenticates the KMS key asynchronously. Therefore, if you specify
     * an identifier that is not valid, the action can appear to complete, but
     * eventually fails.</p> <p>The specified KMS key must exist in the destination
     * Region.</p> <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CopyImageRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new AMI.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CopyImageRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline const Aws::String& GetSourceImageId() const { return m_sourceImageId; }
    inline bool SourceImageIdHasBeenSet() const { return m_sourceImageIdHasBeenSet; }
    template<typename SourceImageIdT = Aws::String>
    void SetSourceImageId(SourceImageIdT&& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = std::forward<SourceImageIdT>(value); }
    template<typename SourceImageIdT = Aws::String>
    CopyImageRequest& WithSourceImageId(SourceImageIdT&& value) { SetSourceImageId(std::forward<SourceImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region that contains the AMI to copy.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    CopyImageRequest& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost for the new AMI.</p> <p>Only
     * specify this parameter when copying an AMI from an Amazon Web Services Region to
     * an Outpost. The AMI must be in the Region of the destination Outpost. You can't
     * copy an AMI from an Outpost to a Region, from one Outpost to another, or within
     * the same Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html#copy-amis">Copy
     * AMIs from an Amazon Web Services Region to an Outpost</a> in the <i>Amazon EBS
     * User Guide</i>.</p> <p>Only one of <code>DestinationAvailabilityZone</code>,
     * <code>DestinationAvailabilityZoneId</code>, or
     * <code>DestinationOutpostArn</code> can be specified.</p>
     */
    inline const Aws::String& GetDestinationOutpostArn() const { return m_destinationOutpostArn; }
    inline bool DestinationOutpostArnHasBeenSet() const { return m_destinationOutpostArnHasBeenSet; }
    template<typename DestinationOutpostArnT = Aws::String>
    void SetDestinationOutpostArn(DestinationOutpostArnT&& value) { m_destinationOutpostArnHasBeenSet = true; m_destinationOutpostArn = std::forward<DestinationOutpostArnT>(value); }
    template<typename DestinationOutpostArnT = Aws::String>
    CopyImageRequest& WithDestinationOutpostArn(DestinationOutpostArnT&& value) { SetDestinationOutpostArn(std::forward<DestinationOutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy your user-defined AMI tags to the new AMI.</p>
     * <p>The following tags are not be copied:</p> <ul> <li> <p>System tags (prefixed
     * with <code>aws:</code>)</p> </li> <li> <p>For public and shared AMIs,
     * user-defined tags that are attached by other Amazon Web Services accounts</p>
     * </li> </ul> <p>Default: Your user-defined AMI tags are not copied.</p>
     */
    inline bool GetCopyImageTags() const { return m_copyImageTags; }
    inline bool CopyImageTagsHasBeenSet() const { return m_copyImageTagsHasBeenSet; }
    inline void SetCopyImageTags(bool value) { m_copyImageTagsHasBeenSet = true; m_copyImageTags = value; }
    inline CopyImageRequest& WithCopyImageTags(bool value) { SetCopyImageTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the new AMI and new snapshots. You can tag the AMI, the
     * snapshots, or both.</p> <ul> <li> <p>To tag the new AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the new snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all the new snapshots.</p>
     * </li> </ul> <p>If you specify other values for <code>ResourceType</code>, the
     * request fails.</p> <p>To tag an AMI or snapshot after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CopyImageRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CopyImageRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify a completion duration, in 15 minute increments, to initiate a
     * time-based AMI copy. The specified completion duration applies to each of the
     * snapshots associated with the AMI. Each snapshot associated with the AMI will be
     * completed within the specified completion duration, with copy throughput
     * automatically adjusted for each snapshot based on its size to meet the timing
     * target.</p> <p>If you do not specify a value, the AMI copy operation is
     * completed on a best-effort basis.</p>  <p>This parameter is not supported
     * when copying an AMI to or from a Local Zone, or to an Outpost.</p> 
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/time-based-copies.html">Time-based
     * copies for Amazon EBS snapshots and EBS-backed AMIs</a>.</p>
     */
    inline long long GetSnapshotCopyCompletionDurationMinutes() const { return m_snapshotCopyCompletionDurationMinutes; }
    inline bool SnapshotCopyCompletionDurationMinutesHasBeenSet() const { return m_snapshotCopyCompletionDurationMinutesHasBeenSet; }
    inline void SetSnapshotCopyCompletionDurationMinutes(long long value) { m_snapshotCopyCompletionDurationMinutesHasBeenSet = true; m_snapshotCopyCompletionDurationMinutes = value; }
    inline CopyImageRequest& WithSnapshotCopyCompletionDurationMinutes(long long value) { SetSnapshotCopyCompletionDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Local Zone for the new AMI (for example,
     * <code>cn-north-1-pkx-1a</code>).</p> <p>Only one of
     * <code>DestinationAvailabilityZone</code>,
     * <code>DestinationAvailabilityZoneId</code>, or
     * <code>DestinationOutpostArn</code> can be specified.</p>
     */
    inline const Aws::String& GetDestinationAvailabilityZone() const { return m_destinationAvailabilityZone; }
    inline bool DestinationAvailabilityZoneHasBeenSet() const { return m_destinationAvailabilityZoneHasBeenSet; }
    template<typename DestinationAvailabilityZoneT = Aws::String>
    void SetDestinationAvailabilityZone(DestinationAvailabilityZoneT&& value) { m_destinationAvailabilityZoneHasBeenSet = true; m_destinationAvailabilityZone = std::forward<DestinationAvailabilityZoneT>(value); }
    template<typename DestinationAvailabilityZoneT = Aws::String>
    CopyImageRequest& WithDestinationAvailabilityZone(DestinationAvailabilityZoneT&& value) { SetDestinationAvailabilityZone(std::forward<DestinationAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Local Zone for the new AMI (for example,
     * <code>cnn1-pkx1-az1</code>).</p> <p>Only one of
     * <code>DestinationAvailabilityZone</code>,
     * <code>DestinationAvailabilityZoneId</code>, or
     * <code>DestinationOutpostArn</code> can be specified.</p>
     */
    inline const Aws::String& GetDestinationAvailabilityZoneId() const { return m_destinationAvailabilityZoneId; }
    inline bool DestinationAvailabilityZoneIdHasBeenSet() const { return m_destinationAvailabilityZoneIdHasBeenSet; }
    template<typename DestinationAvailabilityZoneIdT = Aws::String>
    void SetDestinationAvailabilityZoneId(DestinationAvailabilityZoneIdT&& value) { m_destinationAvailabilityZoneIdHasBeenSet = true; m_destinationAvailabilityZoneId = std::forward<DestinationAvailabilityZoneIdT>(value); }
    template<typename DestinationAvailabilityZoneIdT = Aws::String>
    CopyImageRequest& WithDestinationAvailabilityZoneId(DestinationAvailabilityZoneIdT&& value) { SetDestinationAvailabilityZoneId(std::forward<DestinationAvailabilityZoneIdT>(value)); return *this;}
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
    inline CopyImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourceImageId;
    bool m_sourceImageIdHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_destinationOutpostArn;
    bool m_destinationOutpostArnHasBeenSet = false;

    bool m_copyImageTags{false};
    bool m_copyImageTagsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    long long m_snapshotCopyCompletionDurationMinutes{0};
    bool m_snapshotCopyCompletionDurationMinutesHasBeenSet = false;

    Aws::String m_destinationAvailabilityZone;
    bool m_destinationAvailabilityZoneHasBeenSet = false;

    Aws::String m_destinationAvailabilityZoneId;
    bool m_destinationAvailabilityZoneIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
