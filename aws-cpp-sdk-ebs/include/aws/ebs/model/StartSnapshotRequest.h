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
  class AWS_EBS_API StartSnapshotRequest : public EBSRequest
  {
  public:
    StartSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSnapshot"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The size of the volume, in GiB. The maximum size is <code>16384</code> GiB
     * (16 TiB).</p>
     */
    inline long long GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiB. The maximum size is <code>16384</code> GiB
     * (16 TiB).</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The size of the volume, in GiB. The maximum size is <code>16384</code> GiB
     * (16 TiB).</p>
     */
    inline void SetVolumeSize(long long value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB. The maximum size is <code>16384</code> GiB
     * (16 TiB).</p>
     */
    inline StartSnapshotRequest& WithVolumeSize(long long value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>If your account is enabled for encryption by default, you cannot use an
     * unencrypted snapshot as a parent snapshot. You must first create an encrypted
     * copy of the parent snapshot using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CopySnapshot.html">CopySnapshot</a>.</p>
     */
    inline const Aws::String& GetParentSnapshotId() const{ return m_parentSnapshotId; }

    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>If your account is enabled for encryption by default, you cannot use an
     * unencrypted snapshot as a parent snapshot. You must first create an encrypted
     * copy of the parent snapshot using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CopySnapshot.html">CopySnapshot</a>.</p>
     */
    inline bool ParentSnapshotIdHasBeenSet() const { return m_parentSnapshotIdHasBeenSet; }

    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>If your account is enabled for encryption by default, you cannot use an
     * unencrypted snapshot as a parent snapshot. You must first create an encrypted
     * copy of the parent snapshot using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CopySnapshot.html">CopySnapshot</a>.</p>
     */
    inline void SetParentSnapshotId(const Aws::String& value) { m_parentSnapshotIdHasBeenSet = true; m_parentSnapshotId = value; }

    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>If your account is enabled for encryption by default, you cannot use an
     * unencrypted snapshot as a parent snapshot. You must first create an encrypted
     * copy of the parent snapshot using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CopySnapshot.html">CopySnapshot</a>.</p>
     */
    inline void SetParentSnapshotId(Aws::String&& value) { m_parentSnapshotIdHasBeenSet = true; m_parentSnapshotId = std::move(value); }

    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>If your account is enabled for encryption by default, you cannot use an
     * unencrypted snapshot as a parent snapshot. You must first create an encrypted
     * copy of the parent snapshot using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CopySnapshot.html">CopySnapshot</a>.</p>
     */
    inline void SetParentSnapshotId(const char* value) { m_parentSnapshotIdHasBeenSet = true; m_parentSnapshotId.assign(value); }

    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>If your account is enabled for encryption by default, you cannot use an
     * unencrypted snapshot as a parent snapshot. You must first create an encrypted
     * copy of the parent snapshot using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CopySnapshot.html">CopySnapshot</a>.</p>
     */
    inline StartSnapshotRequest& WithParentSnapshotId(const Aws::String& value) { SetParentSnapshotId(value); return *this;}

    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>If your account is enabled for encryption by default, you cannot use an
     * unencrypted snapshot as a parent snapshot. You must first create an encrypted
     * copy of the parent snapshot using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CopySnapshot.html">CopySnapshot</a>.</p>
     */
    inline StartSnapshotRequest& WithParentSnapshotId(Aws::String&& value) { SetParentSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent snapshot. If there is no parent snapshot, or if you are
     * creating the first snapshot for an on-premises volume, omit this parameter.</p>
     * <p>If your account is enabled for encryption by default, you cannot use an
     * unencrypted snapshot as a parent snapshot. You must first create an encrypted
     * copy of the parent snapshot using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CopySnapshot.html">CopySnapshot</a>.</p>
     */
    inline StartSnapshotRequest& WithParentSnapshotId(const char* value) { SetParentSnapshotId(value); return *this;}


    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline StartSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline StartSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline StartSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the snapshot.</p>
     */
    inline StartSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline StartSnapshotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the snapshot.</p>
     */
    inline StartSnapshotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the snapshot.</p>
     */
    inline StartSnapshotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the AWS SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the AWS SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the AWS SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the AWS SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the AWS SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the AWS SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline StartSnapshotRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the AWS SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline StartSnapshotRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the AWS SDK.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-direct-api-idempotency.html">
     * Idempotency for StartSnapshot API</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline StartSnapshotRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Indicates whether to encrypt the snapshot. To create an encrypted snapshot,
     * specify <code>true</code>. To create an unencrypted snapshot, omit this
     * parameter.</p> <p>If you specify a value for <b>ParentSnapshotId</b>, omit this
     * parameter.</p> <p>If you specify <code>true</code>, the snapshot is encrypted
     * using the CMK specified using the <b>KmsKeyArn</b> parameter. If no value is
     * specified for <b>KmsKeyArn</b>, the default CMK for your account is used. If no
     * default CMK has been specified for your account, the AWS managed CMK is used. To
     * set a default CMK for your account, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyEbsDefaultKmsKeyId.html">
     * ModifyEbsDefaultKmsKeyId</a>.</p> <p>If your account is enabled for encryption
     * by default, you cannot set this parameter to <code>false</code>. In this case,
     * you can omit this parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html#ebsapis-using-encryption">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether to encrypt the snapshot. To create an encrypted snapshot,
     * specify <code>true</code>. To create an unencrypted snapshot, omit this
     * parameter.</p> <p>If you specify a value for <b>ParentSnapshotId</b>, omit this
     * parameter.</p> <p>If you specify <code>true</code>, the snapshot is encrypted
     * using the CMK specified using the <b>KmsKeyArn</b> parameter. If no value is
     * specified for <b>KmsKeyArn</b>, the default CMK for your account is used. If no
     * default CMK has been specified for your account, the AWS managed CMK is used. To
     * set a default CMK for your account, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyEbsDefaultKmsKeyId.html">
     * ModifyEbsDefaultKmsKeyId</a>.</p> <p>If your account is enabled for encryption
     * by default, you cannot set this parameter to <code>false</code>. In this case,
     * you can omit this parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html#ebsapis-using-encryption">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether to encrypt the snapshot. To create an encrypted snapshot,
     * specify <code>true</code>. To create an unencrypted snapshot, omit this
     * parameter.</p> <p>If you specify a value for <b>ParentSnapshotId</b>, omit this
     * parameter.</p> <p>If you specify <code>true</code>, the snapshot is encrypted
     * using the CMK specified using the <b>KmsKeyArn</b> parameter. If no value is
     * specified for <b>KmsKeyArn</b>, the default CMK for your account is used. If no
     * default CMK has been specified for your account, the AWS managed CMK is used. To
     * set a default CMK for your account, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyEbsDefaultKmsKeyId.html">
     * ModifyEbsDefaultKmsKeyId</a>.</p> <p>If your account is enabled for encryption
     * by default, you cannot set this parameter to <code>false</code>. In this case,
     * you can omit this parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html#ebsapis-using-encryption">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether to encrypt the snapshot. To create an encrypted snapshot,
     * specify <code>true</code>. To create an unencrypted snapshot, omit this
     * parameter.</p> <p>If you specify a value for <b>ParentSnapshotId</b>, omit this
     * parameter.</p> <p>If you specify <code>true</code>, the snapshot is encrypted
     * using the CMK specified using the <b>KmsKeyArn</b> parameter. If no value is
     * specified for <b>KmsKeyArn</b>, the default CMK for your account is used. If no
     * default CMK has been specified for your account, the AWS managed CMK is used. To
     * set a default CMK for your account, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyEbsDefaultKmsKeyId.html">
     * ModifyEbsDefaultKmsKeyId</a>.</p> <p>If your account is enabled for encryption
     * by default, you cannot set this parameter to <code>false</code>. In this case,
     * you can omit this parameter.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html#ebsapis-using-encryption">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline StartSnapshotRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to be used to encrypt the snapshot. If you do not
     * specify a CMK, the default AWS managed CMK is used.</p> <p>If you specify a
     * <b>ParentSnapshotId</b>, omit this parameter; the snapshot will be encrypted
     * using the same CMK that was used to encrypt the parent snapshot.</p> <p>If
     * <b>Encrypted</b> is set to <code>true</code>, you must specify a CMK ARN. </p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to be used to encrypt the snapshot. If you do not
     * specify a CMK, the default AWS managed CMK is used.</p> <p>If you specify a
     * <b>ParentSnapshotId</b>, omit this parameter; the snapshot will be encrypted
     * using the same CMK that was used to encrypt the parent snapshot.</p> <p>If
     * <b>Encrypted</b> is set to <code>true</code>, you must specify a CMK ARN. </p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to be used to encrypt the snapshot. If you do not
     * specify a CMK, the default AWS managed CMK is used.</p> <p>If you specify a
     * <b>ParentSnapshotId</b>, omit this parameter; the snapshot will be encrypted
     * using the same CMK that was used to encrypt the parent snapshot.</p> <p>If
     * <b>Encrypted</b> is set to <code>true</code>, you must specify a CMK ARN. </p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to be used to encrypt the snapshot. If you do not
     * specify a CMK, the default AWS managed CMK is used.</p> <p>If you specify a
     * <b>ParentSnapshotId</b>, omit this parameter; the snapshot will be encrypted
     * using the same CMK that was used to encrypt the parent snapshot.</p> <p>If
     * <b>Encrypted</b> is set to <code>true</code>, you must specify a CMK ARN. </p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to be used to encrypt the snapshot. If you do not
     * specify a CMK, the default AWS managed CMK is used.</p> <p>If you specify a
     * <b>ParentSnapshotId</b>, omit this parameter; the snapshot will be encrypted
     * using the same CMK that was used to encrypt the parent snapshot.</p> <p>If
     * <b>Encrypted</b> is set to <code>true</code>, you must specify a CMK ARN. </p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to be used to encrypt the snapshot. If you do not
     * specify a CMK, the default AWS managed CMK is used.</p> <p>If you specify a
     * <b>ParentSnapshotId</b>, omit this parameter; the snapshot will be encrypted
     * using the same CMK that was used to encrypt the parent snapshot.</p> <p>If
     * <b>Encrypted</b> is set to <code>true</code>, you must specify a CMK ARN. </p>
     */
    inline StartSnapshotRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to be used to encrypt the snapshot. If you do not
     * specify a CMK, the default AWS managed CMK is used.</p> <p>If you specify a
     * <b>ParentSnapshotId</b>, omit this parameter; the snapshot will be encrypted
     * using the same CMK that was used to encrypt the parent snapshot.</p> <p>If
     * <b>Encrypted</b> is set to <code>true</code>, you must specify a CMK ARN. </p>
     */
    inline StartSnapshotRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to be used to encrypt the snapshot. If you do not
     * specify a CMK, the default AWS managed CMK is used.</p> <p>If you specify a
     * <b>ParentSnapshotId</b>, omit this parameter; the snapshot will be encrypted
     * using the same CMK that was used to encrypt the parent snapshot.</p> <p>If
     * <b>Encrypted</b> is set to <code>true</code>, you must specify a CMK ARN. </p>
     */
    inline StartSnapshotRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The amount of time (in minutes) after which the snapshot is automatically
     * cancelled if:</p> <ul> <li> <p>No blocks are written to the snapshot.</p> </li>
     * <li> <p>The snapshot is not completed after writing the last block of data.</p>
     * </li> </ul> <p>If no value is specified, the timeout defaults to <code>60</code>
     * minutes.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time (in minutes) after which the snapshot is automatically
     * cancelled if:</p> <ul> <li> <p>No blocks are written to the snapshot.</p> </li>
     * <li> <p>The snapshot is not completed after writing the last block of data.</p>
     * </li> </ul> <p>If no value is specified, the timeout defaults to <code>60</code>
     * minutes.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The amount of time (in minutes) after which the snapshot is automatically
     * cancelled if:</p> <ul> <li> <p>No blocks are written to the snapshot.</p> </li>
     * <li> <p>The snapshot is not completed after writing the last block of data.</p>
     * </li> </ul> <p>If no value is specified, the timeout defaults to <code>60</code>
     * minutes.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The amount of time (in minutes) after which the snapshot is automatically
     * cancelled if:</p> <ul> <li> <p>No blocks are written to the snapshot.</p> </li>
     * <li> <p>The snapshot is not completed after writing the last block of data.</p>
     * </li> </ul> <p>If no value is specified, the timeout defaults to <code>60</code>
     * minutes.</p>
     */
    inline StartSnapshotRequest& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

    long long m_volumeSize;
    bool m_volumeSizeHasBeenSet;

    Aws::String m_parentSnapshotId;
    bool m_parentSnapshotIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
