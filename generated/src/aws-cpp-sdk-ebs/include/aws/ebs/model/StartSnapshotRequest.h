/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/EBSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ebs/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EBS
{
namespace Model
{

  /**
   */
  class StartSnapshotRequest : public EBSRequest
  {
  public:
    AWS_EBS_API StartSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSnapshot"; }

    AWS_EBS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The size of the volume, in GiB. The maximum size is <code>65536</code> GiB
     * (64 TiB).</p>
     */
    inline long long GetVolumeSize() const { return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(long long value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline StartSnapshotRequest& WithVolumeSize(long long value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>You can't specify <b>ParentSnapshotId</b> and <b>Encrypted</b> in the same
     * request. If you specify both parameters, the request fails with
     * <code>ValidationException</code>.</p> <p>The encryption status of the snapshot
     * depends on the values that you specify for <b>Encrypted</b>, <b>KmsKeyArn</b>,
     * and <b>ParentSnapshotId</b>, and whether your Amazon Web Services account is
     * enabled for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">
     * encryption by default</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     *  <p>If you specify an encrypted parent snapshot, you must have
     * permission to use the KMS key that was used to encrypt the parent snapshot. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapi-permissions.html#ebsapi-kms-permissions">
     * Permissions to use Key Management Service keys</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> 
     */
    inline const Aws::String& GetParentSnapshotId() const { return m_parentSnapshotId; }
    inline bool ParentSnapshotIdHasBeenSet() const { return m_parentSnapshotIdHasBeenSet; }
    template<typename ParentSnapshotIdT = Aws::String>
    void SetParentSnapshotId(ParentSnapshotIdT&& value) { m_parentSnapshotIdHasBeenSet = true; m_parentSnapshotId = std::forward<ParentSnapshotIdT>(value); }
    template<typename ParentSnapshotIdT = Aws::String>
    StartSnapshotRequest& WithParentSnapshotId(ParentSnapshotIdT&& value) { SetParentSnapshotId(std::forward<ParentSnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartSnapshotRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartSnapshotRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to encrypt the snapshot.</p> <p>You can't specify
     * <b>Encrypted</b> and <b> ParentSnapshotId</b> in the same request. If you
     * specify both parameters, the request fails with
     * <code>ValidationException</code>.</p> <p>The encryption status of the snapshot
     * depends on the values that you specify for <b>Encrypted</b>, <b>KmsKeyArn</b>,
     * and <b>ParentSnapshotId</b>, and whether your Amazon Web Services account is
     * enabled for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">
     * encryption by default</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     *  <p>To create an encrypted snapshot, you must have permission to use
     * the KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapi-permissions.html#ebsapi-kms-permissions">
     * Permissions to use Key Management Service keys</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> 
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline StartSnapshotRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to be
     * used to encrypt the snapshot.</p> <p>The encryption status of the snapshot
     * depends on the values that you specify for <b>Encrypted</b>, <b>KmsKeyArn</b>,
     * and <b>ParentSnapshotId</b>, and whether your Amazon Web Services account is
     * enabled for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">
     * encryption by default</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     *  <p>To create an encrypted snapshot, you must have permission to use
     * the KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapi-permissions.html#ebsapi-kms-permissions">
     * Permissions to use Key Management Service keys</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> 
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    StartSnapshotRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in minutes) after which the snapshot is automatically
     * cancelled if:</p> <ul> <li> <p>No blocks are written to the snapshot.</p> </li>
     * <li> <p>The snapshot is not completed after writing the last block of data.</p>
     * </li> </ul> <p>If no value is specified, the timeout defaults to <code>60</code>
     * minutes.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline StartSnapshotRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}
  private:

    long long m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    Aws::String m_parentSnapshotId;
    bool m_parentSnapshotIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
