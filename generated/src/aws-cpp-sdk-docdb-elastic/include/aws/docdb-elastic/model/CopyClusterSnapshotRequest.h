/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class CopyClusterSnapshotRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API CopyClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyClusterSnapshot"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target elastic cluster snapshot. The default is <code>false</code>.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target elastic cluster snapshot. The default is <code>false</code>.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target elastic cluster snapshot. The default is <code>false</code>.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target elastic cluster snapshot. The default is <code>false</code>.</p>
     */
    inline CopyClusterSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline CopyClusterSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline CopyClusterSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline CopyClusterSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}


    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline CopyClusterSnapshotRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline const Aws::String& GetTargetSnapshotName() const{ return m_targetSnapshotName; }

    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline bool TargetSnapshotNameHasBeenSet() const { return m_targetSnapshotNameHasBeenSet; }

    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline void SetTargetSnapshotName(const Aws::String& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = value; }

    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline void SetTargetSnapshotName(Aws::String&& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = std::move(value); }

    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline void SetTargetSnapshotName(const char* value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName.assign(value); }

    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline CopyClusterSnapshotRequest& WithTargetSnapshotName(const Aws::String& value) { SetTargetSnapshotName(value); return *this;}

    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline CopyClusterSnapshotRequest& WithTargetSnapshotName(Aws::String&& value) { SetTargetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline CopyClusterSnapshotRequest& WithTargetSnapshotName(const char* value) { SetTargetSnapshotName(value); return *this;}

  private:

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_targetSnapshotName;
    bool m_targetSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
