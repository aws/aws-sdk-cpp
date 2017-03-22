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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CopyDBSnapshotRequest : public RDSRequest
  {
  public:
    CopyDBSnapshotRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>You cannot copy an encrypted, shared DB snapshot from one AWS region to
     * another.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the "available" state.</p> </li> <li> <p>If the source snapshot is
     * in the same region as the copy, specify a valid DB snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different region than the copy,
     * specify a valid DB snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline const Aws::String& GetSourceDBSnapshotIdentifier() const{ return m_sourceDBSnapshotIdentifier; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>You cannot copy an encrypted, shared DB snapshot from one AWS region to
     * another.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the "available" state.</p> </li> <li> <p>If the source snapshot is
     * in the same region as the copy, specify a valid DB snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different region than the copy,
     * specify a valid DB snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(const Aws::String& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>You cannot copy an encrypted, shared DB snapshot from one AWS region to
     * another.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the "available" state.</p> </li> <li> <p>If the source snapshot is
     * in the same region as the copy, specify a valid DB snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different region than the copy,
     * specify a valid DB snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(Aws::String&& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>You cannot copy an encrypted, shared DB snapshot from one AWS region to
     * another.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the "available" state.</p> </li> <li> <p>If the source snapshot is
     * in the same region as the copy, specify a valid DB snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different region than the copy,
     * specify a valid DB snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(const char* value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>You cannot copy an encrypted, shared DB snapshot from one AWS region to
     * another.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the "available" state.</p> </li> <li> <p>If the source snapshot is
     * in the same region as the copy, specify a valid DB snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different region than the copy,
     * specify a valid DB snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(const Aws::String& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>You cannot copy an encrypted, shared DB snapshot from one AWS region to
     * another.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the "available" state.</p> </li> <li> <p>If the source snapshot is
     * in the same region as the copy, specify a valid DB snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different region than the copy,
     * specify a valid DB snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(Aws::String&& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If you are copying from a
     * shared manual DB snapshot, this must be the ARN of the shared DB snapshot.</p>
     * <p>You cannot copy an encrypted, shared DB snapshot from one AWS region to
     * another.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the "available" state.</p> </li> <li> <p>If the source snapshot is
     * in the same region as the copy, specify a valid DB snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different region than the copy,
     * specify a valid DB snapshot ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html">
     * Copying a DB Snapshot</a>.</p> </li> </ul> <p>Example:
     * <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
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
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an unencrypted DB snapshot and specify a
     * value for the <code>KmsKeyId</code> parameter, Amazon RDS encrypts the target DB
     * snapshot using the specified KMS encryption key. </p> <p>If you copy an
     * encrypted DB snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption key. If you
     * don't specify a value for <code>KmsKeyId</code>, then the copy of the DB
     * snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted snapshot to a different AWS region, then you must
     * specify a KMS key for the destination AWS region.</p> <p>If you copy an
     * encrypted DB snapshot that is shared from another AWS account, then you must
     * specify a value for <code>KmsKeyId</code>. </p> <p>To copy an encrypted DB
     * snapshot to another region, you must set <code>KmsKeyId</code> to the KMS key ID
     * used to encrypt the copy of the DB snapshot in the destination region. KMS
     * encryption keys are specific to the region that they are created in, and you
     * cannot use encryption keys from one region in another region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an unencrypted DB snapshot and specify a
     * value for the <code>KmsKeyId</code> parameter, Amazon RDS encrypts the target DB
     * snapshot using the specified KMS encryption key. </p> <p>If you copy an
     * encrypted DB snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption key. If you
     * don't specify a value for <code>KmsKeyId</code>, then the copy of the DB
     * snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted snapshot to a different AWS region, then you must
     * specify a KMS key for the destination AWS region.</p> <p>If you copy an
     * encrypted DB snapshot that is shared from another AWS account, then you must
     * specify a value for <code>KmsKeyId</code>. </p> <p>To copy an encrypted DB
     * snapshot to another region, you must set <code>KmsKeyId</code> to the KMS key ID
     * used to encrypt the copy of the DB snapshot in the destination region. KMS
     * encryption keys are specific to the region that they are created in, and you
     * cannot use encryption keys from one region in another region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an unencrypted DB snapshot and specify a
     * value for the <code>KmsKeyId</code> parameter, Amazon RDS encrypts the target DB
     * snapshot using the specified KMS encryption key. </p> <p>If you copy an
     * encrypted DB snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption key. If you
     * don't specify a value for <code>KmsKeyId</code>, then the copy of the DB
     * snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted snapshot to a different AWS region, then you must
     * specify a KMS key for the destination AWS region.</p> <p>If you copy an
     * encrypted DB snapshot that is shared from another AWS account, then you must
     * specify a value for <code>KmsKeyId</code>. </p> <p>To copy an encrypted DB
     * snapshot to another region, you must set <code>KmsKeyId</code> to the KMS key ID
     * used to encrypt the copy of the DB snapshot in the destination region. KMS
     * encryption keys are specific to the region that they are created in, and you
     * cannot use encryption keys from one region in another region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an unencrypted DB snapshot and specify a
     * value for the <code>KmsKeyId</code> parameter, Amazon RDS encrypts the target DB
     * snapshot using the specified KMS encryption key. </p> <p>If you copy an
     * encrypted DB snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption key. If you
     * don't specify a value for <code>KmsKeyId</code>, then the copy of the DB
     * snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted snapshot to a different AWS region, then you must
     * specify a KMS key for the destination AWS region.</p> <p>If you copy an
     * encrypted DB snapshot that is shared from another AWS account, then you must
     * specify a value for <code>KmsKeyId</code>. </p> <p>To copy an encrypted DB
     * snapshot to another region, you must set <code>KmsKeyId</code> to the KMS key ID
     * used to encrypt the copy of the DB snapshot in the destination region. KMS
     * encryption keys are specific to the region that they are created in, and you
     * cannot use encryption keys from one region in another region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an unencrypted DB snapshot and specify a
     * value for the <code>KmsKeyId</code> parameter, Amazon RDS encrypts the target DB
     * snapshot using the specified KMS encryption key. </p> <p>If you copy an
     * encrypted DB snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption key. If you
     * don't specify a value for <code>KmsKeyId</code>, then the copy of the DB
     * snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted snapshot to a different AWS region, then you must
     * specify a KMS key for the destination AWS region.</p> <p>If you copy an
     * encrypted DB snapshot that is shared from another AWS account, then you must
     * specify a value for <code>KmsKeyId</code>. </p> <p>To copy an encrypted DB
     * snapshot to another region, you must set <code>KmsKeyId</code> to the KMS key ID
     * used to encrypt the copy of the DB snapshot in the destination region. KMS
     * encryption keys are specific to the region that they are created in, and you
     * cannot use encryption keys from one region in another region.</p>
     */
    inline CopyDBSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an unencrypted DB snapshot and specify a
     * value for the <code>KmsKeyId</code> parameter, Amazon RDS encrypts the target DB
     * snapshot using the specified KMS encryption key. </p> <p>If you copy an
     * encrypted DB snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption key. If you
     * don't specify a value for <code>KmsKeyId</code>, then the copy of the DB
     * snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted snapshot to a different AWS region, then you must
     * specify a KMS key for the destination AWS region.</p> <p>If you copy an
     * encrypted DB snapshot that is shared from another AWS account, then you must
     * specify a value for <code>KmsKeyId</code>. </p> <p>To copy an encrypted DB
     * snapshot to another region, you must set <code>KmsKeyId</code> to the KMS key ID
     * used to encrypt the copy of the DB snapshot in the destination region. KMS
     * encryption keys are specific to the region that they are created in, and you
     * cannot use encryption keys from one region in another region.</p>
     */
    inline CopyDBSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an unencrypted DB snapshot and specify a
     * value for the <code>KmsKeyId</code> parameter, Amazon RDS encrypts the target DB
     * snapshot using the specified KMS encryption key. </p> <p>If you copy an
     * encrypted DB snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption key. If you
     * don't specify a value for <code>KmsKeyId</code>, then the copy of the DB
     * snapshot is encrypted with the same KMS key as the source DB snapshot. </p>
     * <p>If you copy an encrypted snapshot to a different AWS region, then you must
     * specify a KMS key for the destination AWS region.</p> <p>If you copy an
     * encrypted DB snapshot that is shared from another AWS account, then you must
     * specify a value for <code>KmsKeyId</code>. </p> <p>To copy an encrypted DB
     * snapshot to another region, you must set <code>KmsKeyId</code> to the KMS key ID
     * used to encrypt the copy of the DB snapshot in the destination region. KMS
     * encryption keys are specific to the region that they are created in, and you
     * cannot use encryption keys from one region in another region.</p>
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

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the AWS region that contains the
     * source DB snapshot to copy. The <code>PreSignedUrl</code> parameter must be used
     * when copying an encrypted DB snapshot from another AWS region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBSnapshot</code> API
     * action that can be executed in the source region that contains the encrypted DB
     * snapshot to be copied. The presigned URL request must contain the following
     * parameter values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The AWS
     * Region that the encrypted DB snapshot will be copied to. This region is the same
     * one where the <code>CopyDBSnapshot</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you copy an encrypted DB snapshot from
     * the us-west-2 region to the us-east-1 region, then you will call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 region. For this example, the <code>DestinationRegion</code> in
     * the presigned URL must be set to the us-east-1 region.</p> </li> <li> <p>
     * <code>KmsKeyId</code> - The KMS key identifier for the key to use to encrypt the
     * copy of the DB snapshot in the destination region. This is the same identifier
     * for both the <code>CopyDBSnapshot</code> action that is called in the
     * destination region, and the action contained in the presigned URL.</p> </li>
     * <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot identifier
     * for the encrypted snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source region. For example, if you are
     * copying an encrypted DB snapshot from the us-west-2 region, then your
     * <code>SourceDBSnapshotIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the AWS region that contains the
     * source DB snapshot to copy. The <code>PreSignedUrl</code> parameter must be used
     * when copying an encrypted DB snapshot from another AWS region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBSnapshot</code> API
     * action that can be executed in the source region that contains the encrypted DB
     * snapshot to be copied. The presigned URL request must contain the following
     * parameter values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The AWS
     * Region that the encrypted DB snapshot will be copied to. This region is the same
     * one where the <code>CopyDBSnapshot</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you copy an encrypted DB snapshot from
     * the us-west-2 region to the us-east-1 region, then you will call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 region. For this example, the <code>DestinationRegion</code> in
     * the presigned URL must be set to the us-east-1 region.</p> </li> <li> <p>
     * <code>KmsKeyId</code> - The KMS key identifier for the key to use to encrypt the
     * copy of the DB snapshot in the destination region. This is the same identifier
     * for both the <code>CopyDBSnapshot</code> action that is called in the
     * destination region, and the action contained in the presigned URL.</p> </li>
     * <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot identifier
     * for the encrypted snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source region. For example, if you are
     * copying an encrypted DB snapshot from the us-west-2 region, then your
     * <code>SourceDBSnapshotIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the AWS region that contains the
     * source DB snapshot to copy. The <code>PreSignedUrl</code> parameter must be used
     * when copying an encrypted DB snapshot from another AWS region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBSnapshot</code> API
     * action that can be executed in the source region that contains the encrypted DB
     * snapshot to be copied. The presigned URL request must contain the following
     * parameter values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The AWS
     * Region that the encrypted DB snapshot will be copied to. This region is the same
     * one where the <code>CopyDBSnapshot</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you copy an encrypted DB snapshot from
     * the us-west-2 region to the us-east-1 region, then you will call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 region. For this example, the <code>DestinationRegion</code> in
     * the presigned URL must be set to the us-east-1 region.</p> </li> <li> <p>
     * <code>KmsKeyId</code> - The KMS key identifier for the key to use to encrypt the
     * copy of the DB snapshot in the destination region. This is the same identifier
     * for both the <code>CopyDBSnapshot</code> action that is called in the
     * destination region, and the action contained in the presigned URL.</p> </li>
     * <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot identifier
     * for the encrypted snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source region. For example, if you are
     * copying an encrypted DB snapshot from the us-west-2 region, then your
     * <code>SourceDBSnapshotIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the AWS region that contains the
     * source DB snapshot to copy. The <code>PreSignedUrl</code> parameter must be used
     * when copying an encrypted DB snapshot from another AWS region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBSnapshot</code> API
     * action that can be executed in the source region that contains the encrypted DB
     * snapshot to be copied. The presigned URL request must contain the following
     * parameter values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The AWS
     * Region that the encrypted DB snapshot will be copied to. This region is the same
     * one where the <code>CopyDBSnapshot</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you copy an encrypted DB snapshot from
     * the us-west-2 region to the us-east-1 region, then you will call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 region. For this example, the <code>DestinationRegion</code> in
     * the presigned URL must be set to the us-east-1 region.</p> </li> <li> <p>
     * <code>KmsKeyId</code> - The KMS key identifier for the key to use to encrypt the
     * copy of the DB snapshot in the destination region. This is the same identifier
     * for both the <code>CopyDBSnapshot</code> action that is called in the
     * destination region, and the action contained in the presigned URL.</p> </li>
     * <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot identifier
     * for the encrypted snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source region. For example, if you are
     * copying an encrypted DB snapshot from the us-west-2 region, then your
     * <code>SourceDBSnapshotIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the AWS region that contains the
     * source DB snapshot to copy. The <code>PreSignedUrl</code> parameter must be used
     * when copying an encrypted DB snapshot from another AWS region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBSnapshot</code> API
     * action that can be executed in the source region that contains the encrypted DB
     * snapshot to be copied. The presigned URL request must contain the following
     * parameter values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The AWS
     * Region that the encrypted DB snapshot will be copied to. This region is the same
     * one where the <code>CopyDBSnapshot</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you copy an encrypted DB snapshot from
     * the us-west-2 region to the us-east-1 region, then you will call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 region. For this example, the <code>DestinationRegion</code> in
     * the presigned URL must be set to the us-east-1 region.</p> </li> <li> <p>
     * <code>KmsKeyId</code> - The KMS key identifier for the key to use to encrypt the
     * copy of the DB snapshot in the destination region. This is the same identifier
     * for both the <code>CopyDBSnapshot</code> action that is called in the
     * destination region, and the action contained in the presigned URL.</p> </li>
     * <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot identifier
     * for the encrypted snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source region. For example, if you are
     * copying an encrypted DB snapshot from the us-west-2 region, then your
     * <code>SourceDBSnapshotIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline CopyDBSnapshotRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the AWS region that contains the
     * source DB snapshot to copy. The <code>PreSignedUrl</code> parameter must be used
     * when copying an encrypted DB snapshot from another AWS region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBSnapshot</code> API
     * action that can be executed in the source region that contains the encrypted DB
     * snapshot to be copied. The presigned URL request must contain the following
     * parameter values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The AWS
     * Region that the encrypted DB snapshot will be copied to. This region is the same
     * one where the <code>CopyDBSnapshot</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you copy an encrypted DB snapshot from
     * the us-west-2 region to the us-east-1 region, then you will call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 region. For this example, the <code>DestinationRegion</code> in
     * the presigned URL must be set to the us-east-1 region.</p> </li> <li> <p>
     * <code>KmsKeyId</code> - The KMS key identifier for the key to use to encrypt the
     * copy of the DB snapshot in the destination region. This is the same identifier
     * for both the <code>CopyDBSnapshot</code> action that is called in the
     * destination region, and the action contained in the presigned URL.</p> </li>
     * <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot identifier
     * for the encrypted snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source region. For example, if you are
     * copying an encrypted DB snapshot from the us-west-2 region, then your
     * <code>SourceDBSnapshotIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline CopyDBSnapshotRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the AWS region that contains the
     * source DB snapshot to copy. The <code>PreSignedUrl</code> parameter must be used
     * when copying an encrypted DB snapshot from another AWS region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBSnapshot</code> API
     * action that can be executed in the source region that contains the encrypted DB
     * snapshot to be copied. The presigned URL request must contain the following
     * parameter values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The AWS
     * Region that the encrypted DB snapshot will be copied to. This region is the same
     * one where the <code>CopyDBSnapshot</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you copy an encrypted DB snapshot from
     * the us-west-2 region to the us-east-1 region, then you will call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 region. For this example, the <code>DestinationRegion</code> in
     * the presigned URL must be set to the us-east-1 region.</p> </li> <li> <p>
     * <code>KmsKeyId</code> - The KMS key identifier for the key to use to encrypt the
     * copy of the DB snapshot in the destination region. This is the same identifier
     * for both the <code>CopyDBSnapshot</code> action that is called in the
     * destination region, and the action contained in the presigned URL.</p> </li>
     * <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot identifier
     * for the encrypted snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source region. For example, if you are
     * copying an encrypted DB snapshot from the us-west-2 region, then your
     * <code>SourceDBSnapshotIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline CopyDBSnapshotRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}

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
    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
