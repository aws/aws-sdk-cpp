/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API CopyDBClusterSnapshotRequest : public NeptuneRequest
  {
  public:
    CopyDBClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBClusterSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>You can't copy from one AWS Region to another.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>Specify a valid DB snapshot identifier.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline const Aws::String& GetSourceDBClusterSnapshotIdentifier() const{ return m_sourceDBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>You can't copy from one AWS Region to another.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>Specify a valid DB snapshot identifier.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline bool SourceDBClusterSnapshotIdentifierHasBeenSet() const { return m_sourceDBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>You can't copy from one AWS Region to another.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>Specify a valid DB snapshot identifier.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(const Aws::String& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>You can't copy from one AWS Region to another.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>Specify a valid DB snapshot identifier.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(Aws::String&& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>You can't copy from one AWS Region to another.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>Specify a valid DB snapshot identifier.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(const char* value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>You can't copy from one AWS Region to another.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>Specify a valid DB snapshot identifier.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(const Aws::String& value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>You can't copy from one AWS Region to another.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>Specify a valid DB snapshot identifier.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(Aws::String&& value) { SetSourceDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>You can't copy from one AWS Region to another.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>Specify a valid DB snapshot identifier.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(const char* value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline const Aws::String& GetTargetDBClusterSnapshotIdentifier() const{ return m_targetDBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline bool TargetDBClusterSnapshotIdentifierHasBeenSet() const { return m_targetDBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(const Aws::String& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(Aws::String&& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(const char* value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(const Aws::String& value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(Aws::String&& value) { SetTargetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(const char* value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The AWS AWS KMS key ID for an encrypted DB cluster snapshot. The KMS key ID
     * is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for
     * the KMS encryption key.</p> <p>If you copy an unencrypted DB cluster snapshot
     * and specify a value for the <code>KmsKeyId</code> parameter, Amazon Neptune
     * encrypts the target DB cluster snapshot using the specified KMS encryption
     * key.</p> <p>If you copy an encrypted DB cluster snapshot from your AWS account,
     * you can specify a value for <code>KmsKeyId</code> to encrypt the copy with a new
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the DB cluster snapshot is encrypted with the same KMS key as the
     * source DB cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot
     * that is shared from another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the AWS
     * Region that they are created in, and you can't use encryption keys from one AWS
     * Region in another AWS Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS AWS KMS key ID for an encrypted DB cluster snapshot. The KMS key ID
     * is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for
     * the KMS encryption key.</p> <p>If you copy an unencrypted DB cluster snapshot
     * and specify a value for the <code>KmsKeyId</code> parameter, Amazon Neptune
     * encrypts the target DB cluster snapshot using the specified KMS encryption
     * key.</p> <p>If you copy an encrypted DB cluster snapshot from your AWS account,
     * you can specify a value for <code>KmsKeyId</code> to encrypt the copy with a new
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the DB cluster snapshot is encrypted with the same KMS key as the
     * source DB cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot
     * that is shared from another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the AWS
     * Region that they are created in, and you can't use encryption keys from one AWS
     * Region in another AWS Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS AWS KMS key ID for an encrypted DB cluster snapshot. The KMS key ID
     * is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for
     * the KMS encryption key.</p> <p>If you copy an unencrypted DB cluster snapshot
     * and specify a value for the <code>KmsKeyId</code> parameter, Amazon Neptune
     * encrypts the target DB cluster snapshot using the specified KMS encryption
     * key.</p> <p>If you copy an encrypted DB cluster snapshot from your AWS account,
     * you can specify a value for <code>KmsKeyId</code> to encrypt the copy with a new
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the DB cluster snapshot is encrypted with the same KMS key as the
     * source DB cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot
     * that is shared from another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the AWS
     * Region that they are created in, and you can't use encryption keys from one AWS
     * Region in another AWS Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS AWS KMS key ID for an encrypted DB cluster snapshot. The KMS key ID
     * is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for
     * the KMS encryption key.</p> <p>If you copy an unencrypted DB cluster snapshot
     * and specify a value for the <code>KmsKeyId</code> parameter, Amazon Neptune
     * encrypts the target DB cluster snapshot using the specified KMS encryption
     * key.</p> <p>If you copy an encrypted DB cluster snapshot from your AWS account,
     * you can specify a value for <code>KmsKeyId</code> to encrypt the copy with a new
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the DB cluster snapshot is encrypted with the same KMS key as the
     * source DB cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot
     * that is shared from another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the AWS
     * Region that they are created in, and you can't use encryption keys from one AWS
     * Region in another AWS Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS AWS KMS key ID for an encrypted DB cluster snapshot. The KMS key ID
     * is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for
     * the KMS encryption key.</p> <p>If you copy an unencrypted DB cluster snapshot
     * and specify a value for the <code>KmsKeyId</code> parameter, Amazon Neptune
     * encrypts the target DB cluster snapshot using the specified KMS encryption
     * key.</p> <p>If you copy an encrypted DB cluster snapshot from your AWS account,
     * you can specify a value for <code>KmsKeyId</code> to encrypt the copy with a new
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the DB cluster snapshot is encrypted with the same KMS key as the
     * source DB cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot
     * that is shared from another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the AWS
     * Region that they are created in, and you can't use encryption keys from one AWS
     * Region in another AWS Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS AWS KMS key ID for an encrypted DB cluster snapshot. The KMS key ID
     * is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for
     * the KMS encryption key.</p> <p>If you copy an unencrypted DB cluster snapshot
     * and specify a value for the <code>KmsKeyId</code> parameter, Amazon Neptune
     * encrypts the target DB cluster snapshot using the specified KMS encryption
     * key.</p> <p>If you copy an encrypted DB cluster snapshot from your AWS account,
     * you can specify a value for <code>KmsKeyId</code> to encrypt the copy with a new
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the DB cluster snapshot is encrypted with the same KMS key as the
     * source DB cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot
     * that is shared from another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the AWS
     * Region that they are created in, and you can't use encryption keys from one AWS
     * Region in another AWS Region.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS AWS KMS key ID for an encrypted DB cluster snapshot. The KMS key ID
     * is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for
     * the KMS encryption key.</p> <p>If you copy an unencrypted DB cluster snapshot
     * and specify a value for the <code>KmsKeyId</code> parameter, Amazon Neptune
     * encrypts the target DB cluster snapshot using the specified KMS encryption
     * key.</p> <p>If you copy an encrypted DB cluster snapshot from your AWS account,
     * you can specify a value for <code>KmsKeyId</code> to encrypt the copy with a new
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the DB cluster snapshot is encrypted with the same KMS key as the
     * source DB cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot
     * that is shared from another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the AWS
     * Region that they are created in, and you can't use encryption keys from one AWS
     * Region in another AWS Region.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS AWS KMS key ID for an encrypted DB cluster snapshot. The KMS key ID
     * is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for
     * the KMS encryption key.</p> <p>If you copy an unencrypted DB cluster snapshot
     * and specify a value for the <code>KmsKeyId</code> parameter, Amazon Neptune
     * encrypts the target DB cluster snapshot using the specified KMS encryption
     * key.</p> <p>If you copy an encrypted DB cluster snapshot from your AWS account,
     * you can specify a value for <code>KmsKeyId</code> to encrypt the copy with a new
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the DB cluster snapshot is encrypted with the same KMS key as the
     * source DB cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot
     * that is shared from another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the AWS
     * Region that they are created in, and you can't use encryption keys from one AWS
     * Region in another AWS Region.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Not currently supported.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>Not currently supported.</p>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>Not currently supported.</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>Not currently supported.</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>Not currently supported.</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>Not currently supported.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>Not currently supported.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>Not currently supported.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * <p>True to copy all tags from the source DB cluster snapshot to the target DB
     * cluster snapshot, and otherwise false. The default is false.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>True to copy all tags from the source DB cluster snapshot to the target DB
     * cluster snapshot, and otherwise false. The default is false.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>True to copy all tags from the source DB cluster snapshot to the target DB
     * cluster snapshot, and otherwise false. The default is false.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>True to copy all tags from the source DB cluster snapshot to the target DB
     * cluster snapshot, and otherwise false. The default is false.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline CopyDBClusterSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline CopyDBClusterSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceDBClusterSnapshotIdentifier;
    bool m_sourceDBClusterSnapshotIdentifierHasBeenSet;

    Aws::String m_targetDBClusterSnapshotIdentifier;
    bool m_targetDBClusterSnapshotIdentifierHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
