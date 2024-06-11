﻿/**
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
   * <p>Contains the parameters for CopyImage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyImageRequest">AWS
   * API Reference</a></p>
   */
  class CopyImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API CopyImageRequest();

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
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CopyImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CopyImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CopyImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the new AMI in the destination Region.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CopyImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CopyImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CopyImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the destination snapshots of the copied image should be
     * encrypted. You can encrypt a copy of an unencrypted snapshot, but you cannot
     * create an unencrypted copy of an encrypted snapshot. The default KMS key for
     * Amazon EBS is used unless you specify a non-default Key Management Service (KMS)
     * KMS key using <code>KmsKeyId</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-encryption.html">Amazon
     * EBS encryption</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
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
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CopyImageRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CopyImageRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CopyImageRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new AMI in the destination Region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CopyImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CopyImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CopyImageRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline const Aws::String& GetSourceImageId() const{ return m_sourceImageId; }
    inline bool SourceImageIdHasBeenSet() const { return m_sourceImageIdHasBeenSet; }
    inline void SetSourceImageId(const Aws::String& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = value; }
    inline void SetSourceImageId(Aws::String&& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = std::move(value); }
    inline void SetSourceImageId(const char* value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId.assign(value); }
    inline CopyImageRequest& WithSourceImageId(const Aws::String& value) { SetSourceImageId(value); return *this;}
    inline CopyImageRequest& WithSourceImageId(Aws::String&& value) { SetSourceImageId(std::move(value)); return *this;}
    inline CopyImageRequest& WithSourceImageId(const char* value) { SetSourceImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region that contains the AMI to copy.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }
    inline CopyImageRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline CopyImageRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline CopyImageRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost to which to copy the AMI. Only
     * specify this parameter when copying an AMI from an Amazon Web Services Region to
     * an Outpost. The AMI must be in the Region of the destination Outpost. You cannot
     * copy an AMI from an Outpost to a Region, from one Outpost to another, or within
     * the same Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html#copy-amis">Copy
     * AMIs from an Amazon Web Services Region to an Outpost</a> in the <i>Amazon EBS
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetDestinationOutpostArn() const{ return m_destinationOutpostArn; }
    inline bool DestinationOutpostArnHasBeenSet() const { return m_destinationOutpostArnHasBeenSet; }
    inline void SetDestinationOutpostArn(const Aws::String& value) { m_destinationOutpostArnHasBeenSet = true; m_destinationOutpostArn = value; }
    inline void SetDestinationOutpostArn(Aws::String&& value) { m_destinationOutpostArnHasBeenSet = true; m_destinationOutpostArn = std::move(value); }
    inline void SetDestinationOutpostArn(const char* value) { m_destinationOutpostArnHasBeenSet = true; m_destinationOutpostArn.assign(value); }
    inline CopyImageRequest& WithDestinationOutpostArn(const Aws::String& value) { SetDestinationOutpostArn(value); return *this;}
    inline CopyImageRequest& WithDestinationOutpostArn(Aws::String&& value) { SetDestinationOutpostArn(std::move(value)); return *this;}
    inline CopyImageRequest& WithDestinationOutpostArn(const char* value) { SetDestinationOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CopyImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include your user-defined AMI tags when copying the
     * AMI.</p> <p>The following tags will not be copied:</p> <ul> <li> <p>System tags
     * (prefixed with <code>aws:</code>)</p> </li> <li> <p>For public and shared AMIs,
     * user-defined tags that are attached by other Amazon Web Services accounts</p>
     * </li> </ul> <p>Default: Your user-defined AMI tags are not copied.</p>
     */
    inline bool GetCopyImageTags() const{ return m_copyImageTags; }
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
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CopyImageRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CopyImageRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CopyImageRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CopyImageRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_encrypted;
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

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_copyImageTags;
    bool m_copyImageTagsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
