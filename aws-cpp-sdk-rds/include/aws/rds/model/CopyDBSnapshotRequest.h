/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API CopyDBSnapshotRequest : public RDSRequest
  {
  public:
    CopyDBSnapshotRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>If the source snapshot is in the same
     * region as the copy, specify a valid DB snapshot identifier.</p> </li> <li> <p>If
     * the source snapshot is in a different region than the copy, specify a valid DB
     * snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline const Aws::String& GetSourceDBSnapshotIdentifier() const{ return m_sourceDBSnapshotIdentifier; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>If the source snapshot is in the same
     * region as the copy, specify a valid DB snapshot identifier.</p> </li> <li> <p>If
     * the source snapshot is in a different region than the copy, specify a valid DB
     * snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(const Aws::String& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>If the source snapshot is in the same
     * region as the copy, specify a valid DB snapshot identifier.</p> </li> <li> <p>If
     * the source snapshot is in a different region than the copy, specify a valid DB
     * snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(Aws::String&& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>If the source snapshot is in the same
     * region as the copy, specify a valid DB snapshot identifier.</p> </li> <li> <p>If
     * the source snapshot is in a different region than the copy, specify a valid DB
     * snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(const char* value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>If the source snapshot is in the same
     * region as the copy, specify a valid DB snapshot identifier.</p> </li> <li> <p>If
     * the source snapshot is in a different region than the copy, specify a valid DB
     * snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(const Aws::String& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>If the source snapshot is in the same
     * region as the copy, specify a valid DB snapshot identifier.</p> </li> <li> <p>If
     * the source snapshot is in a different region than the copy, specify a valid DB
     * snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(Aws::String&& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid system snapshot in the
     * "available" state.</p> </li> <li> <p>If the source snapshot is in the same
     * region as the copy, specify a valid DB snapshot identifier.</p> </li> <li> <p>If
     * the source snapshot is in a different region than the copy, specify a valid DB
     * snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:rr-regn-1:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(const char* value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline const Aws::String& GetTargetDBSnapshotIdentifier() const{ return m_targetDBSnapshotIdentifier; }

    /**
     * <p>The identifier for the copied snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline void SetTargetDBSnapshotIdentifier(const Aws::String& value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the copied snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline void SetTargetDBSnapshotIdentifier(Aws::String&& value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the copied snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline void SetTargetDBSnapshotIdentifier(const char* value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the copied snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(const Aws::String& value) { SetTargetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(Aws::String&& value) { SetTargetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(const char* value) { SetTargetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key identifier for an encrypted DB
     * snapshot. The KMS key identifier is the Amazon Resource Name (ARN) or the KMS
     * key alias for the KMS encryption key.</p> <p>If you copy an unencrypted DB
     * snapshot and specify a value for the <code>KmsKeyId</code> parameter, Amazon RDS
     * encrypts the target DB snapshot using the specified KMS encryption key.</p>
     * <p>If you copy an encrypted DB snapshot from your AWS account, you can specify a
     * value for <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption
     * key. If you don't specify a value for <code>KmsKeyId</code> then the copy of the
     * DB snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted DB snapshot that is shared from another AWS account,
     * then you must specify a value for <code>KmsKeyId</code>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key identifier for an encrypted DB
     * snapshot. The KMS key identifier is the Amazon Resource Name (ARN) or the KMS
     * key alias for the KMS encryption key.</p> <p>If you copy an unencrypted DB
     * snapshot and specify a value for the <code>KmsKeyId</code> parameter, Amazon RDS
     * encrypts the target DB snapshot using the specified KMS encryption key.</p>
     * <p>If you copy an encrypted DB snapshot from your AWS account, you can specify a
     * value for <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption
     * key. If you don't specify a value for <code>KmsKeyId</code> then the copy of the
     * DB snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted DB snapshot that is shared from another AWS account,
     * then you must specify a value for <code>KmsKeyId</code>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key identifier for an encrypted DB
     * snapshot. The KMS key identifier is the Amazon Resource Name (ARN) or the KMS
     * key alias for the KMS encryption key.</p> <p>If you copy an unencrypted DB
     * snapshot and specify a value for the <code>KmsKeyId</code> parameter, Amazon RDS
     * encrypts the target DB snapshot using the specified KMS encryption key.</p>
     * <p>If you copy an encrypted DB snapshot from your AWS account, you can specify a
     * value for <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption
     * key. If you don't specify a value for <code>KmsKeyId</code> then the copy of the
     * DB snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted DB snapshot that is shared from another AWS account,
     * then you must specify a value for <code>KmsKeyId</code>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key identifier for an encrypted DB
     * snapshot. The KMS key identifier is the Amazon Resource Name (ARN) or the KMS
     * key alias for the KMS encryption key.</p> <p>If you copy an unencrypted DB
     * snapshot and specify a value for the <code>KmsKeyId</code> parameter, Amazon RDS
     * encrypts the target DB snapshot using the specified KMS encryption key.</p>
     * <p>If you copy an encrypted DB snapshot from your AWS account, you can specify a
     * value for <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption
     * key. If you don't specify a value for <code>KmsKeyId</code> then the copy of the
     * DB snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted DB snapshot that is shared from another AWS account,
     * then you must specify a value for <code>KmsKeyId</code>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key identifier for an encrypted DB
     * snapshot. The KMS key identifier is the Amazon Resource Name (ARN) or the KMS
     * key alias for the KMS encryption key.</p> <p>If you copy an unencrypted DB
     * snapshot and specify a value for the <code>KmsKeyId</code> parameter, Amazon RDS
     * encrypts the target DB snapshot using the specified KMS encryption key.</p>
     * <p>If you copy an encrypted DB snapshot from your AWS account, you can specify a
     * value for <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption
     * key. If you don't specify a value for <code>KmsKeyId</code> then the copy of the
     * DB snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted DB snapshot that is shared from another AWS account,
     * then you must specify a value for <code>KmsKeyId</code>.</p>
     */
    inline CopyDBSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key identifier for an encrypted DB
     * snapshot. The KMS key identifier is the Amazon Resource Name (ARN) or the KMS
     * key alias for the KMS encryption key.</p> <p>If you copy an unencrypted DB
     * snapshot and specify a value for the <code>KmsKeyId</code> parameter, Amazon RDS
     * encrypts the target DB snapshot using the specified KMS encryption key.</p>
     * <p>If you copy an encrypted DB snapshot from your AWS account, you can specify a
     * value for <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption
     * key. If you don't specify a value for <code>KmsKeyId</code> then the copy of the
     * DB snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted DB snapshot that is shared from another AWS account,
     * then you must specify a value for <code>KmsKeyId</code>.</p>
     */
    inline CopyDBSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key identifier for an encrypted DB
     * snapshot. The KMS key identifier is the Amazon Resource Name (ARN) or the KMS
     * key alias for the KMS encryption key.</p> <p>If you copy an unencrypted DB
     * snapshot and specify a value for the <code>KmsKeyId</code> parameter, Amazon RDS
     * encrypts the target DB snapshot using the specified KMS encryption key.</p>
     * <p>If you copy an encrypted DB snapshot from your AWS account, you can specify a
     * value for <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption
     * key. If you don't specify a value for <code>KmsKeyId</code> then the copy of the
     * DB snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted DB snapshot that is shared from another AWS account,
     * then you must specify a value for <code>KmsKeyId</code>.</p>
     */
    inline CopyDBSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CopyDBSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyDBSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline CopyDBSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CopyDBSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>True to copy all tags from the source DB snapshot to the target DB snapshot;
     * otherwise false. The default is false.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>True to copy all tags from the source DB snapshot to the target DB snapshot;
     * otherwise false. The default is false.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>True to copy all tags from the source DB snapshot to the target DB snapshot;
     * otherwise false. The default is false.</p>
     */
    inline CopyDBSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}

  private:
    Aws::String m_sourceDBSnapshotIdentifier;
    bool m_sourceDBSnapshotIdentifierHasBeenSet;
    Aws::String m_targetDBSnapshotIdentifier;
    bool m_targetDBSnapshotIdentifierHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    bool m_copyTags;
    bool m_copyTagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
