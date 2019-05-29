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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same AWS Region as the copy, specify a valid DB snapshot identifier. For
     * example, you might specify <code>rds:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If you are copying from a shared manual DB snapshot, this parameter must
     * be the Amazon Resource Name (ARN) of the shared DB snapshot. </p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source AWS Region, and must match the <code>SourceDBSnapshotIdentifier</code> in
     * the <code>PreSignedUrl</code> parameter. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline const Aws::String& GetSourceDBSnapshotIdentifier() const{ return m_sourceDBSnapshotIdentifier; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same AWS Region as the copy, specify a valid DB snapshot identifier. For
     * example, you might specify <code>rds:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If you are copying from a shared manual DB snapshot, this parameter must
     * be the Amazon Resource Name (ARN) of the shared DB snapshot. </p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source AWS Region, and must match the <code>SourceDBSnapshotIdentifier</code> in
     * the <code>PreSignedUrl</code> parameter. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline bool SourceDBSnapshotIdentifierHasBeenSet() const { return m_sourceDBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same AWS Region as the copy, specify a valid DB snapshot identifier. For
     * example, you might specify <code>rds:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If you are copying from a shared manual DB snapshot, this parameter must
     * be the Amazon Resource Name (ARN) of the shared DB snapshot. </p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source AWS Region, and must match the <code>SourceDBSnapshotIdentifier</code> in
     * the <code>PreSignedUrl</code> parameter. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(const Aws::String& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same AWS Region as the copy, specify a valid DB snapshot identifier. For
     * example, you might specify <code>rds:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If you are copying from a shared manual DB snapshot, this parameter must
     * be the Amazon Resource Name (ARN) of the shared DB snapshot. </p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source AWS Region, and must match the <code>SourceDBSnapshotIdentifier</code> in
     * the <code>PreSignedUrl</code> parameter. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(Aws::String&& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same AWS Region as the copy, specify a valid DB snapshot identifier. For
     * example, you might specify <code>rds:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If you are copying from a shared manual DB snapshot, this parameter must
     * be the Amazon Resource Name (ARN) of the shared DB snapshot. </p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source AWS Region, and must match the <code>SourceDBSnapshotIdentifier</code> in
     * the <code>PreSignedUrl</code> parameter. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline void SetSourceDBSnapshotIdentifier(const char* value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same AWS Region as the copy, specify a valid DB snapshot identifier. For
     * example, you might specify <code>rds:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If you are copying from a shared manual DB snapshot, this parameter must
     * be the Amazon Resource Name (ARN) of the shared DB snapshot. </p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source AWS Region, and must match the <code>SourceDBSnapshotIdentifier</code> in
     * the <code>PreSignedUrl</code> parameter. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(const Aws::String& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same AWS Region as the copy, specify a valid DB snapshot identifier. For
     * example, you might specify <code>rds:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If you are copying from a shared manual DB snapshot, this parameter must
     * be the Amazon Resource Name (ARN) of the shared DB snapshot. </p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source AWS Region, and must match the <code>SourceDBSnapshotIdentifier</code> in
     * the <code>PreSignedUrl</code> parameter. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(Aws::String&& value) { SetSourceDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same AWS Region as the copy, specify a valid DB snapshot identifier. For
     * example, you might specify <code>rds:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.
     * </p> <p>If you are copying from a shared manual DB snapshot, this parameter must
     * be the Amazon Resource Name (ARN) of the shared DB snapshot. </p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source AWS Region, and must match the <code>SourceDBSnapshotIdentifier</code> in
     * the <code>PreSignedUrl</code> parameter. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * </ul> <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(const char* value) { SetSourceDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The identifier for the copy of the snapshot. </p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline const Aws::String& GetTargetDBSnapshotIdentifier() const{ return m_targetDBSnapshotIdentifier; }

    /**
     * <p>The identifier for the copy of the snapshot. </p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline bool TargetDBSnapshotIdentifierHasBeenSet() const { return m_targetDBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the copy of the snapshot. </p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline void SetTargetDBSnapshotIdentifier(const Aws::String& value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the copy of the snapshot. </p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline void SetTargetDBSnapshotIdentifier(Aws::String&& value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the copy of the snapshot. </p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline void SetTargetDBSnapshotIdentifier(const char* value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the copy of the snapshot. </p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(const Aws::String& value) { SetTargetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copy of the snapshot. </p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(Aws::String&& value) { SetTargetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the copy of the snapshot. </p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(const char* value) { SetTargetDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted DB snapshot from your AWS
     * account, you can specify a value for this parameter to encrypt the copy with a
     * new KMS encryption key. If you don't specify a value for this parameter, then
     * the copy of the DB snapshot is encrypted with the same KMS key as the source DB
     * snapshot. </p> <p>If you copy an encrypted DB snapshot that is shared from
     * another AWS account, then you must specify a value for this parameter. </p>
     * <p>If you specify this parameter when you copy an unencrypted snapshot, the copy
     * is encrypted. </p> <p>If you copy an encrypted snapshot to a different AWS
     * Region, then you must specify a KMS key for the destination AWS Region. KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted DB snapshot from your AWS
     * account, you can specify a value for this parameter to encrypt the copy with a
     * new KMS encryption key. If you don't specify a value for this parameter, then
     * the copy of the DB snapshot is encrypted with the same KMS key as the source DB
     * snapshot. </p> <p>If you copy an encrypted DB snapshot that is shared from
     * another AWS account, then you must specify a value for this parameter. </p>
     * <p>If you specify this parameter when you copy an unencrypted snapshot, the copy
     * is encrypted. </p> <p>If you copy an encrypted snapshot to a different AWS
     * Region, then you must specify a KMS key for the destination AWS Region. KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted DB snapshot from your AWS
     * account, you can specify a value for this parameter to encrypt the copy with a
     * new KMS encryption key. If you don't specify a value for this parameter, then
     * the copy of the DB snapshot is encrypted with the same KMS key as the source DB
     * snapshot. </p> <p>If you copy an encrypted DB snapshot that is shared from
     * another AWS account, then you must specify a value for this parameter. </p>
     * <p>If you specify this parameter when you copy an unencrypted snapshot, the copy
     * is encrypted. </p> <p>If you copy an encrypted snapshot to a different AWS
     * Region, then you must specify a KMS key for the destination AWS Region. KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted DB snapshot from your AWS
     * account, you can specify a value for this parameter to encrypt the copy with a
     * new KMS encryption key. If you don't specify a value for this parameter, then
     * the copy of the DB snapshot is encrypted with the same KMS key as the source DB
     * snapshot. </p> <p>If you copy an encrypted DB snapshot that is shared from
     * another AWS account, then you must specify a value for this parameter. </p>
     * <p>If you specify this parameter when you copy an unencrypted snapshot, the copy
     * is encrypted. </p> <p>If you copy an encrypted snapshot to a different AWS
     * Region, then you must specify a KMS key for the destination AWS Region. KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted DB snapshot from your AWS
     * account, you can specify a value for this parameter to encrypt the copy with a
     * new KMS encryption key. If you don't specify a value for this parameter, then
     * the copy of the DB snapshot is encrypted with the same KMS key as the source DB
     * snapshot. </p> <p>If you copy an encrypted DB snapshot that is shared from
     * another AWS account, then you must specify a value for this parameter. </p>
     * <p>If you specify this parameter when you copy an unencrypted snapshot, the copy
     * is encrypted. </p> <p>If you copy an encrypted snapshot to a different AWS
     * Region, then you must specify a KMS key for the destination AWS Region. KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted DB snapshot from your AWS
     * account, you can specify a value for this parameter to encrypt the copy with a
     * new KMS encryption key. If you don't specify a value for this parameter, then
     * the copy of the DB snapshot is encrypted with the same KMS key as the source DB
     * snapshot. </p> <p>If you copy an encrypted DB snapshot that is shared from
     * another AWS account, then you must specify a value for this parameter. </p>
     * <p>If you specify this parameter when you copy an unencrypted snapshot, the copy
     * is encrypted. </p> <p>If you copy an encrypted snapshot to a different AWS
     * Region, then you must specify a KMS key for the destination AWS Region. KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline CopyDBSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted DB snapshot from your AWS
     * account, you can specify a value for this parameter to encrypt the copy with a
     * new KMS encryption key. If you don't specify a value for this parameter, then
     * the copy of the DB snapshot is encrypted with the same KMS key as the source DB
     * snapshot. </p> <p>If you copy an encrypted DB snapshot that is shared from
     * another AWS account, then you must specify a value for this parameter. </p>
     * <p>If you specify this parameter when you copy an unencrypted snapshot, the copy
     * is encrypted. </p> <p>If you copy an encrypted snapshot to a different AWS
     * Region, then you must specify a KMS key for the destination AWS Region. KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline CopyDBSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted DB snapshot. The KMS key ID is the Amazon
     * Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted DB snapshot from your AWS
     * account, you can specify a value for this parameter to encrypt the copy with a
     * new KMS encryption key. If you don't specify a value for this parameter, then
     * the copy of the DB snapshot is encrypted with the same KMS key as the source DB
     * snapshot. </p> <p>If you copy an encrypted DB snapshot that is shared from
     * another AWS account, then you must specify a value for this parameter. </p>
     * <p>If you specify this parameter when you copy an unencrypted snapshot, the copy
     * is encrypted. </p> <p>If you copy an encrypted snapshot to a different AWS
     * Region, then you must specify a KMS key for the destination AWS Region. KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline CopyDBSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CopyDBSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyDBSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CopyDBSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CopyDBSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether to copy all tags from the source DB snapshot
     * to the target DB snapshot. By default, tags are not copied.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>A value that indicates whether to copy all tags from the source DB snapshot
     * to the target DB snapshot. By default, tags are not copied.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the source DB snapshot
     * to the target DB snapshot. By default, tags are not copied.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the source DB snapshot
     * to the target DB snapshot. By default, tags are not copied.</p>
     */
    inline CopyDBSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the source AWS Region that contains
     * the source DB snapshot to copy. </p> <p>You must specify this parameter when you
     * copy an encrypted DB snapshot from another AWS Region by using the Amazon RDS
     * API. You can specify the <code>--source-region</code> option instead of this
     * parameter when you copy an encrypted DB snapshot from another AWS Region by
     * using the AWS CLI. </p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBSnapshot</code> API action that can be executed in the source AWS
     * Region that contains the encrypted DB snapshot to be copied. The presigned URL
     * request must contain the following parameter values: </p> <ul> <li> <p>
     * <code>DestinationRegion</code> - The AWS Region that the encrypted DB snapshot
     * is copied to. This AWS Region is the same one where the
     * <code>CopyDBSnapshot</code> action is called that contains this presigned URL.
     * </p> <p>For example, if you copy an encrypted DB snapshot from the us-west-2 AWS
     * Region to the us-east-1 AWS Region, then you call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 AWS Region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 AWS Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 AWS Region. </p> </li> <li>
     * <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use to
     * encrypt the copy of the DB snapshot in the destination AWS Region. This is the
     * same identifier for both the <code>CopyDBSnapshot</code> action that is called
     * in the destination AWS Region, and the action contained in the presigned URL.
     * </p> </li> <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot
     * identifier for the encrypted snapshot to be copied. This identifier must be in
     * the Amazon Resource Name (ARN) format for the source AWS Region. For example, if
     * you are copying an encrypted DB snapshot from the us-west-2 AWS Region, then
     * your <code>SourceDBSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the source AWS Region that contains
     * the source DB snapshot to copy. </p> <p>You must specify this parameter when you
     * copy an encrypted DB snapshot from another AWS Region by using the Amazon RDS
     * API. You can specify the <code>--source-region</code> option instead of this
     * parameter when you copy an encrypted DB snapshot from another AWS Region by
     * using the AWS CLI. </p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBSnapshot</code> API action that can be executed in the source AWS
     * Region that contains the encrypted DB snapshot to be copied. The presigned URL
     * request must contain the following parameter values: </p> <ul> <li> <p>
     * <code>DestinationRegion</code> - The AWS Region that the encrypted DB snapshot
     * is copied to. This AWS Region is the same one where the
     * <code>CopyDBSnapshot</code> action is called that contains this presigned URL.
     * </p> <p>For example, if you copy an encrypted DB snapshot from the us-west-2 AWS
     * Region to the us-east-1 AWS Region, then you call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 AWS Region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 AWS Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 AWS Region. </p> </li> <li>
     * <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use to
     * encrypt the copy of the DB snapshot in the destination AWS Region. This is the
     * same identifier for both the <code>CopyDBSnapshot</code> action that is called
     * in the destination AWS Region, and the action contained in the presigned URL.
     * </p> </li> <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot
     * identifier for the encrypted snapshot to be copied. This identifier must be in
     * the Amazon Resource Name (ARN) format for the source AWS Region. For example, if
     * you are copying an encrypted DB snapshot from the us-west-2 AWS Region, then
     * your <code>SourceDBSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the source AWS Region that contains
     * the source DB snapshot to copy. </p> <p>You must specify this parameter when you
     * copy an encrypted DB snapshot from another AWS Region by using the Amazon RDS
     * API. You can specify the <code>--source-region</code> option instead of this
     * parameter when you copy an encrypted DB snapshot from another AWS Region by
     * using the AWS CLI. </p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBSnapshot</code> API action that can be executed in the source AWS
     * Region that contains the encrypted DB snapshot to be copied. The presigned URL
     * request must contain the following parameter values: </p> <ul> <li> <p>
     * <code>DestinationRegion</code> - The AWS Region that the encrypted DB snapshot
     * is copied to. This AWS Region is the same one where the
     * <code>CopyDBSnapshot</code> action is called that contains this presigned URL.
     * </p> <p>For example, if you copy an encrypted DB snapshot from the us-west-2 AWS
     * Region to the us-east-1 AWS Region, then you call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 AWS Region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 AWS Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 AWS Region. </p> </li> <li>
     * <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use to
     * encrypt the copy of the DB snapshot in the destination AWS Region. This is the
     * same identifier for both the <code>CopyDBSnapshot</code> action that is called
     * in the destination AWS Region, and the action contained in the presigned URL.
     * </p> </li> <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot
     * identifier for the encrypted snapshot to be copied. This identifier must be in
     * the Amazon Resource Name (ARN) format for the source AWS Region. For example, if
     * you are copying an encrypted DB snapshot from the us-west-2 AWS Region, then
     * your <code>SourceDBSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the source AWS Region that contains
     * the source DB snapshot to copy. </p> <p>You must specify this parameter when you
     * copy an encrypted DB snapshot from another AWS Region by using the Amazon RDS
     * API. You can specify the <code>--source-region</code> option instead of this
     * parameter when you copy an encrypted DB snapshot from another AWS Region by
     * using the AWS CLI. </p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBSnapshot</code> API action that can be executed in the source AWS
     * Region that contains the encrypted DB snapshot to be copied. The presigned URL
     * request must contain the following parameter values: </p> <ul> <li> <p>
     * <code>DestinationRegion</code> - The AWS Region that the encrypted DB snapshot
     * is copied to. This AWS Region is the same one where the
     * <code>CopyDBSnapshot</code> action is called that contains this presigned URL.
     * </p> <p>For example, if you copy an encrypted DB snapshot from the us-west-2 AWS
     * Region to the us-east-1 AWS Region, then you call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 AWS Region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 AWS Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 AWS Region. </p> </li> <li>
     * <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use to
     * encrypt the copy of the DB snapshot in the destination AWS Region. This is the
     * same identifier for both the <code>CopyDBSnapshot</code> action that is called
     * in the destination AWS Region, and the action contained in the presigned URL.
     * </p> </li> <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot
     * identifier for the encrypted snapshot to be copied. This identifier must be in
     * the Amazon Resource Name (ARN) format for the source AWS Region. For example, if
     * you are copying an encrypted DB snapshot from the us-west-2 AWS Region, then
     * your <code>SourceDBSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the source AWS Region that contains
     * the source DB snapshot to copy. </p> <p>You must specify this parameter when you
     * copy an encrypted DB snapshot from another AWS Region by using the Amazon RDS
     * API. You can specify the <code>--source-region</code> option instead of this
     * parameter when you copy an encrypted DB snapshot from another AWS Region by
     * using the AWS CLI. </p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBSnapshot</code> API action that can be executed in the source AWS
     * Region that contains the encrypted DB snapshot to be copied. The presigned URL
     * request must contain the following parameter values: </p> <ul> <li> <p>
     * <code>DestinationRegion</code> - The AWS Region that the encrypted DB snapshot
     * is copied to. This AWS Region is the same one where the
     * <code>CopyDBSnapshot</code> action is called that contains this presigned URL.
     * </p> <p>For example, if you copy an encrypted DB snapshot from the us-west-2 AWS
     * Region to the us-east-1 AWS Region, then you call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 AWS Region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 AWS Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 AWS Region. </p> </li> <li>
     * <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use to
     * encrypt the copy of the DB snapshot in the destination AWS Region. This is the
     * same identifier for both the <code>CopyDBSnapshot</code> action that is called
     * in the destination AWS Region, and the action contained in the presigned URL.
     * </p> </li> <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot
     * identifier for the encrypted snapshot to be copied. This identifier must be in
     * the Amazon Resource Name (ARN) format for the source AWS Region. For example, if
     * you are copying an encrypted DB snapshot from the us-west-2 AWS Region, then
     * your <code>SourceDBSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the source AWS Region that contains
     * the source DB snapshot to copy. </p> <p>You must specify this parameter when you
     * copy an encrypted DB snapshot from another AWS Region by using the Amazon RDS
     * API. You can specify the <code>--source-region</code> option instead of this
     * parameter when you copy an encrypted DB snapshot from another AWS Region by
     * using the AWS CLI. </p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBSnapshot</code> API action that can be executed in the source AWS
     * Region that contains the encrypted DB snapshot to be copied. The presigned URL
     * request must contain the following parameter values: </p> <ul> <li> <p>
     * <code>DestinationRegion</code> - The AWS Region that the encrypted DB snapshot
     * is copied to. This AWS Region is the same one where the
     * <code>CopyDBSnapshot</code> action is called that contains this presigned URL.
     * </p> <p>For example, if you copy an encrypted DB snapshot from the us-west-2 AWS
     * Region to the us-east-1 AWS Region, then you call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 AWS Region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 AWS Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 AWS Region. </p> </li> <li>
     * <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use to
     * encrypt the copy of the DB snapshot in the destination AWS Region. This is the
     * same identifier for both the <code>CopyDBSnapshot</code> action that is called
     * in the destination AWS Region, and the action contained in the presigned URL.
     * </p> </li> <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot
     * identifier for the encrypted snapshot to be copied. This identifier must be in
     * the Amazon Resource Name (ARN) format for the source AWS Region. For example, if
     * you are copying an encrypted DB snapshot from the us-west-2 AWS Region, then
     * your <code>SourceDBSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CopyDBSnapshotRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the source AWS Region that contains
     * the source DB snapshot to copy. </p> <p>You must specify this parameter when you
     * copy an encrypted DB snapshot from another AWS Region by using the Amazon RDS
     * API. You can specify the <code>--source-region</code> option instead of this
     * parameter when you copy an encrypted DB snapshot from another AWS Region by
     * using the AWS CLI. </p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBSnapshot</code> API action that can be executed in the source AWS
     * Region that contains the encrypted DB snapshot to be copied. The presigned URL
     * request must contain the following parameter values: </p> <ul> <li> <p>
     * <code>DestinationRegion</code> - The AWS Region that the encrypted DB snapshot
     * is copied to. This AWS Region is the same one where the
     * <code>CopyDBSnapshot</code> action is called that contains this presigned URL.
     * </p> <p>For example, if you copy an encrypted DB snapshot from the us-west-2 AWS
     * Region to the us-east-1 AWS Region, then you call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 AWS Region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 AWS Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 AWS Region. </p> </li> <li>
     * <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use to
     * encrypt the copy of the DB snapshot in the destination AWS Region. This is the
     * same identifier for both the <code>CopyDBSnapshot</code> action that is called
     * in the destination AWS Region, and the action contained in the presigned URL.
     * </p> </li> <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot
     * identifier for the encrypted snapshot to be copied. This identifier must be in
     * the Amazon Resource Name (ARN) format for the source AWS Region. For example, if
     * you are copying an encrypted DB snapshot from the us-west-2 AWS Region, then
     * your <code>SourceDBSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CopyDBSnapshotRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBSnapshot</code> API action in the source AWS Region that contains
     * the source DB snapshot to copy. </p> <p>You must specify this parameter when you
     * copy an encrypted DB snapshot from another AWS Region by using the Amazon RDS
     * API. You can specify the <code>--source-region</code> option instead of this
     * parameter when you copy an encrypted DB snapshot from another AWS Region by
     * using the AWS CLI. </p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBSnapshot</code> API action that can be executed in the source AWS
     * Region that contains the encrypted DB snapshot to be copied. The presigned URL
     * request must contain the following parameter values: </p> <ul> <li> <p>
     * <code>DestinationRegion</code> - The AWS Region that the encrypted DB snapshot
     * is copied to. This AWS Region is the same one where the
     * <code>CopyDBSnapshot</code> action is called that contains this presigned URL.
     * </p> <p>For example, if you copy an encrypted DB snapshot from the us-west-2 AWS
     * Region to the us-east-1 AWS Region, then you call the
     * <code>CopyDBSnapshot</code> action in the us-east-1 AWS Region and provide a
     * presigned URL that contains a call to the <code>CopyDBSnapshot</code> action in
     * the us-west-2 AWS Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 AWS Region. </p> </li> <li>
     * <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use to
     * encrypt the copy of the DB snapshot in the destination AWS Region. This is the
     * same identifier for both the <code>CopyDBSnapshot</code> action that is called
     * in the destination AWS Region, and the action contained in the presigned URL.
     * </p> </li> <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot
     * identifier for the encrypted snapshot to be copied. This identifier must be in
     * the Amazon Resource Name (ARN) format for the source AWS Region. For example, if
     * you are copying an encrypted DB snapshot from the us-west-2 AWS Region, then
     * your <code>SourceDBSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CopyDBSnapshotRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one AWS Region to
     * another, and your DB instance uses a nondefault option group. If your source DB
     * instance uses Transparent Data Encryption for Oracle or Microsoft SQL Server,
     * you must specify this option when copying across AWS Regions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one AWS Region to
     * another, and your DB instance uses a nondefault option group. If your source DB
     * instance uses Transparent Data Encryption for Oracle or Microsoft SQL Server,
     * you must specify this option when copying across AWS Regions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one AWS Region to
     * another, and your DB instance uses a nondefault option group. If your source DB
     * instance uses Transparent Data Encryption for Oracle or Microsoft SQL Server,
     * you must specify this option when copying across AWS Regions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one AWS Region to
     * another, and your DB instance uses a nondefault option group. If your source DB
     * instance uses Transparent Data Encryption for Oracle or Microsoft SQL Server,
     * you must specify this option when copying across AWS Regions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one AWS Region to
     * another, and your DB instance uses a nondefault option group. If your source DB
     * instance uses Transparent Data Encryption for Oracle or Microsoft SQL Server,
     * you must specify this option when copying across AWS Regions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one AWS Region to
     * another, and your DB instance uses a nondefault option group. If your source DB
     * instance uses Transparent Data Encryption for Oracle or Microsoft SQL Server,
     * you must specify this option when copying across AWS Regions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline CopyDBSnapshotRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one AWS Region to
     * another, and your DB instance uses a nondefault option group. If your source DB
     * instance uses Transparent Data Encryption for Oracle or Microsoft SQL Server,
     * you must specify this option when copying across AWS Regions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline CopyDBSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one AWS Region to
     * another, and your DB instance uses a nondefault option group. If your source DB
     * instance uses Transparent Data Encryption for Oracle or Microsoft SQL Server,
     * you must specify this option when copying across AWS Regions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * Group Considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline CopyDBSnapshotRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

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

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
