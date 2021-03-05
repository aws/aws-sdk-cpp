/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>CopyDBClusterSnapshot</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CopyDBClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API CopyDBClusterSnapshotRequest : public DocDBRequest
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
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same AWS Region as the copy, specify a valid snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid cluster snapshot ARN.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot1</code> </p>
     */
    inline const Aws::String& GetSourceDBClusterSnapshotIdentifier() const{ return m_sourceDBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same AWS Region as the copy, specify a valid snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid cluster snapshot ARN.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot1</code> </p>
     */
    inline bool SourceDBClusterSnapshotIdentifierHasBeenSet() const { return m_sourceDBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same AWS Region as the copy, specify a valid snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid cluster snapshot ARN.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(const Aws::String& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same AWS Region as the copy, specify a valid snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid cluster snapshot ARN.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(Aws::String&& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same AWS Region as the copy, specify a valid snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid cluster snapshot ARN.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(const char* value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same AWS Region as the copy, specify a valid snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid cluster snapshot ARN.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(const Aws::String& value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same AWS Region as the copy, specify a valid snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid cluster snapshot ARN.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(Aws::String&& value) { SetSourceDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same AWS Region as the copy, specify a valid snapshot identifier.</p>
     * </li> <li> <p>If the source snapshot is in a different AWS Region than the copy,
     * specify a valid cluster snapshot ARN.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(const char* value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline const Aws::String& GetTargetDBClusterSnapshotIdentifier() const{ return m_targetDBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline bool TargetDBClusterSnapshotIdentifierHasBeenSet() const { return m_targetDBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(const Aws::String& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(Aws::String&& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(const char* value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(const Aws::String& value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(Aws::String&& value) { SetTargetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(const char* value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The AWS KMS key ID for an encrypted cluster snapshot. The AWS KMS key ID is
     * the Amazon Resource Name (ARN), AWS KMS key identifier, or the AWS KMS key alias
     * for the AWS KMS encryption key. </p> <p>If you copy an encrypted cluster
     * snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new AWS KMS encryption key. If
     * you don't specify a value for <code>KmsKeyId</code>, then the copy of the
     * cluster snapshot is encrypted with the same AWS KMS key as the source cluster
     * snapshot. </p> <p>If you copy an encrypted cluster snapshot that is shared from
     * another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p>To copy an encrypted cluster snapshot to another
     * AWS Region, set <code>KmsKeyId</code> to the AWS KMS key ID that you want to use
     * to encrypt the copy of the cluster snapshot in the destination Region. AWS KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region.</p> <p>If
     * you copy an unencrypted cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key ID for an encrypted cluster snapshot. The AWS KMS key ID is
     * the Amazon Resource Name (ARN), AWS KMS key identifier, or the AWS KMS key alias
     * for the AWS KMS encryption key. </p> <p>If you copy an encrypted cluster
     * snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new AWS KMS encryption key. If
     * you don't specify a value for <code>KmsKeyId</code>, then the copy of the
     * cluster snapshot is encrypted with the same AWS KMS key as the source cluster
     * snapshot. </p> <p>If you copy an encrypted cluster snapshot that is shared from
     * another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p>To copy an encrypted cluster snapshot to another
     * AWS Region, set <code>KmsKeyId</code> to the AWS KMS key ID that you want to use
     * to encrypt the copy of the cluster snapshot in the destination Region. AWS KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region.</p> <p>If
     * you copy an unencrypted cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key ID for an encrypted cluster snapshot. The AWS KMS key ID is
     * the Amazon Resource Name (ARN), AWS KMS key identifier, or the AWS KMS key alias
     * for the AWS KMS encryption key. </p> <p>If you copy an encrypted cluster
     * snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new AWS KMS encryption key. If
     * you don't specify a value for <code>KmsKeyId</code>, then the copy of the
     * cluster snapshot is encrypted with the same AWS KMS key as the source cluster
     * snapshot. </p> <p>If you copy an encrypted cluster snapshot that is shared from
     * another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p>To copy an encrypted cluster snapshot to another
     * AWS Region, set <code>KmsKeyId</code> to the AWS KMS key ID that you want to use
     * to encrypt the copy of the cluster snapshot in the destination Region. AWS KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region.</p> <p>If
     * you copy an unencrypted cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID for an encrypted cluster snapshot. The AWS KMS key ID is
     * the Amazon Resource Name (ARN), AWS KMS key identifier, or the AWS KMS key alias
     * for the AWS KMS encryption key. </p> <p>If you copy an encrypted cluster
     * snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new AWS KMS encryption key. If
     * you don't specify a value for <code>KmsKeyId</code>, then the copy of the
     * cluster snapshot is encrypted with the same AWS KMS key as the source cluster
     * snapshot. </p> <p>If you copy an encrypted cluster snapshot that is shared from
     * another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p>To copy an encrypted cluster snapshot to another
     * AWS Region, set <code>KmsKeyId</code> to the AWS KMS key ID that you want to use
     * to encrypt the copy of the cluster snapshot in the destination Region. AWS KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region.</p> <p>If
     * you copy an unencrypted cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted cluster snapshot. The AWS KMS key ID is
     * the Amazon Resource Name (ARN), AWS KMS key identifier, or the AWS KMS key alias
     * for the AWS KMS encryption key. </p> <p>If you copy an encrypted cluster
     * snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new AWS KMS encryption key. If
     * you don't specify a value for <code>KmsKeyId</code>, then the copy of the
     * cluster snapshot is encrypted with the same AWS KMS key as the source cluster
     * snapshot. </p> <p>If you copy an encrypted cluster snapshot that is shared from
     * another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p>To copy an encrypted cluster snapshot to another
     * AWS Region, set <code>KmsKeyId</code> to the AWS KMS key ID that you want to use
     * to encrypt the copy of the cluster snapshot in the destination Region. AWS KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region.</p> <p>If
     * you copy an unencrypted cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted cluster snapshot. The AWS KMS key ID is
     * the Amazon Resource Name (ARN), AWS KMS key identifier, or the AWS KMS key alias
     * for the AWS KMS encryption key. </p> <p>If you copy an encrypted cluster
     * snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new AWS KMS encryption key. If
     * you don't specify a value for <code>KmsKeyId</code>, then the copy of the
     * cluster snapshot is encrypted with the same AWS KMS key as the source cluster
     * snapshot. </p> <p>If you copy an encrypted cluster snapshot that is shared from
     * another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p>To copy an encrypted cluster snapshot to another
     * AWS Region, set <code>KmsKeyId</code> to the AWS KMS key ID that you want to use
     * to encrypt the copy of the cluster snapshot in the destination Region. AWS KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region.</p> <p>If
     * you copy an unencrypted cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted cluster snapshot. The AWS KMS key ID is
     * the Amazon Resource Name (ARN), AWS KMS key identifier, or the AWS KMS key alias
     * for the AWS KMS encryption key. </p> <p>If you copy an encrypted cluster
     * snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new AWS KMS encryption key. If
     * you don't specify a value for <code>KmsKeyId</code>, then the copy of the
     * cluster snapshot is encrypted with the same AWS KMS key as the source cluster
     * snapshot. </p> <p>If you copy an encrypted cluster snapshot that is shared from
     * another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p>To copy an encrypted cluster snapshot to another
     * AWS Region, set <code>KmsKeyId</code> to the AWS KMS key ID that you want to use
     * to encrypt the copy of the cluster snapshot in the destination Region. AWS KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region.</p> <p>If
     * you copy an unencrypted cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted cluster snapshot. The AWS KMS key ID is
     * the Amazon Resource Name (ARN), AWS KMS key identifier, or the AWS KMS key alias
     * for the AWS KMS encryption key. </p> <p>If you copy an encrypted cluster
     * snapshot from your AWS account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new AWS KMS encryption key. If
     * you don't specify a value for <code>KmsKeyId</code>, then the copy of the
     * cluster snapshot is encrypted with the same AWS KMS key as the source cluster
     * snapshot. </p> <p>If you copy an encrypted cluster snapshot that is shared from
     * another AWS account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p>To copy an encrypted cluster snapshot to another
     * AWS Region, set <code>KmsKeyId</code> to the AWS KMS key ID that you want to use
     * to encrypt the copy of the cluster snapshot in the destination Region. AWS KMS
     * encryption keys are specific to the AWS Region that they are created in, and you
     * can't use encryption keys from one AWS Region in another AWS Region.</p> <p>If
     * you copy an unencrypted cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBClusterSnapshot</code> API action in the AWS Region that contains
     * the source cluster snapshot to copy. You must use the <code>PreSignedUrl</code>
     * parameter when copying a cluster snapshot from another AWS Region.</p> <p>If you
     * are using an AWS SDK tool or the AWS CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the AWS CLI)
     * instead of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a pre-signed URL that is a valid request
     * for the operation that can be executed in the source AWS Region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBClusterSnapshot</code>
     * API action that can be executed in the source AWS Region that contains the
     * cluster snapshot to be copied. The presigned URL request must contain the
     * following parameter values:</p> <ul> <li> <p> <code>SourceRegion</code> - The ID
     * of the region that contains the snapshot to be copied.</p> </li> <li> <p>
     * <code>SourceDBClusterSnapshotIdentifier</code> - The identifier for the the
     * encrypted cluster snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted cluster snapshot from the us-east-1 AWS Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBClusterSnapshot</code> API action in the AWS Region that contains
     * the source cluster snapshot to copy. You must use the <code>PreSignedUrl</code>
     * parameter when copying a cluster snapshot from another AWS Region.</p> <p>If you
     * are using an AWS SDK tool or the AWS CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the AWS CLI)
     * instead of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a pre-signed URL that is a valid request
     * for the operation that can be executed in the source AWS Region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBClusterSnapshot</code>
     * API action that can be executed in the source AWS Region that contains the
     * cluster snapshot to be copied. The presigned URL request must contain the
     * following parameter values:</p> <ul> <li> <p> <code>SourceRegion</code> - The ID
     * of the region that contains the snapshot to be copied.</p> </li> <li> <p>
     * <code>SourceDBClusterSnapshotIdentifier</code> - The identifier for the the
     * encrypted cluster snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted cluster snapshot from the us-east-1 AWS Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBClusterSnapshot</code> API action in the AWS Region that contains
     * the source cluster snapshot to copy. You must use the <code>PreSignedUrl</code>
     * parameter when copying a cluster snapshot from another AWS Region.</p> <p>If you
     * are using an AWS SDK tool or the AWS CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the AWS CLI)
     * instead of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a pre-signed URL that is a valid request
     * for the operation that can be executed in the source AWS Region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBClusterSnapshot</code>
     * API action that can be executed in the source AWS Region that contains the
     * cluster snapshot to be copied. The presigned URL request must contain the
     * following parameter values:</p> <ul> <li> <p> <code>SourceRegion</code> - The ID
     * of the region that contains the snapshot to be copied.</p> </li> <li> <p>
     * <code>SourceDBClusterSnapshotIdentifier</code> - The identifier for the the
     * encrypted cluster snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted cluster snapshot from the us-east-1 AWS Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBClusterSnapshot</code> API action in the AWS Region that contains
     * the source cluster snapshot to copy. You must use the <code>PreSignedUrl</code>
     * parameter when copying a cluster snapshot from another AWS Region.</p> <p>If you
     * are using an AWS SDK tool or the AWS CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the AWS CLI)
     * instead of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a pre-signed URL that is a valid request
     * for the operation that can be executed in the source AWS Region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBClusterSnapshot</code>
     * API action that can be executed in the source AWS Region that contains the
     * cluster snapshot to be copied. The presigned URL request must contain the
     * following parameter values:</p> <ul> <li> <p> <code>SourceRegion</code> - The ID
     * of the region that contains the snapshot to be copied.</p> </li> <li> <p>
     * <code>SourceDBClusterSnapshotIdentifier</code> - The identifier for the the
     * encrypted cluster snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted cluster snapshot from the us-east-1 AWS Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBClusterSnapshot</code> API action in the AWS Region that contains
     * the source cluster snapshot to copy. You must use the <code>PreSignedUrl</code>
     * parameter when copying a cluster snapshot from another AWS Region.</p> <p>If you
     * are using an AWS SDK tool or the AWS CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the AWS CLI)
     * instead of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a pre-signed URL that is a valid request
     * for the operation that can be executed in the source AWS Region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBClusterSnapshot</code>
     * API action that can be executed in the source AWS Region that contains the
     * cluster snapshot to be copied. The presigned URL request must contain the
     * following parameter values:</p> <ul> <li> <p> <code>SourceRegion</code> - The ID
     * of the region that contains the snapshot to be copied.</p> </li> <li> <p>
     * <code>SourceDBClusterSnapshotIdentifier</code> - The identifier for the the
     * encrypted cluster snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted cluster snapshot from the us-east-1 AWS Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBClusterSnapshot</code> API action in the AWS Region that contains
     * the source cluster snapshot to copy. You must use the <code>PreSignedUrl</code>
     * parameter when copying a cluster snapshot from another AWS Region.</p> <p>If you
     * are using an AWS SDK tool or the AWS CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the AWS CLI)
     * instead of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a pre-signed URL that is a valid request
     * for the operation that can be executed in the source AWS Region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBClusterSnapshot</code>
     * API action that can be executed in the source AWS Region that contains the
     * cluster snapshot to be copied. The presigned URL request must contain the
     * following parameter values:</p> <ul> <li> <p> <code>SourceRegion</code> - The ID
     * of the region that contains the snapshot to be copied.</p> </li> <li> <p>
     * <code>SourceDBClusterSnapshotIdentifier</code> - The identifier for the the
     * encrypted cluster snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted cluster snapshot from the us-east-1 AWS Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBClusterSnapshot</code> API action in the AWS Region that contains
     * the source cluster snapshot to copy. You must use the <code>PreSignedUrl</code>
     * parameter when copying a cluster snapshot from another AWS Region.</p> <p>If you
     * are using an AWS SDK tool or the AWS CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the AWS CLI)
     * instead of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a pre-signed URL that is a valid request
     * for the operation that can be executed in the source AWS Region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBClusterSnapshot</code>
     * API action that can be executed in the source AWS Region that contains the
     * cluster snapshot to be copied. The presigned URL request must contain the
     * following parameter values:</p> <ul> <li> <p> <code>SourceRegion</code> - The ID
     * of the region that contains the snapshot to be copied.</p> </li> <li> <p>
     * <code>SourceDBClusterSnapshotIdentifier</code> - The identifier for the the
     * encrypted cluster snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted cluster snapshot from the us-east-1 AWS Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CopyDBClusterSnapshot</code> API action in the AWS Region that contains
     * the source cluster snapshot to copy. You must use the <code>PreSignedUrl</code>
     * parameter when copying a cluster snapshot from another AWS Region.</p> <p>If you
     * are using an AWS SDK tool or the AWS CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the AWS CLI)
     * instead of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a pre-signed URL that is a valid request
     * for the operation that can be executed in the source AWS Region.</p> <p>The
     * presigned URL must be a valid request for the <code>CopyDBClusterSnapshot</code>
     * API action that can be executed in the source AWS Region that contains the
     * cluster snapshot to be copied. The presigned URL request must contain the
     * following parameter values:</p> <ul> <li> <p> <code>SourceRegion</code> - The ID
     * of the region that contains the snapshot to be copied.</p> </li> <li> <p>
     * <code>SourceDBClusterSnapshotIdentifier</code> - The identifier for the the
     * encrypted cluster snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted cluster snapshot from the us-east-1 AWS Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target cluster snapshot, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target cluster snapshot, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target cluster snapshot, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target cluster snapshot, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline CopyDBClusterSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline CopyDBClusterSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline CopyDBClusterSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CopyDBClusterSnapshotRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CopyDBClusterSnapshotRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CopyDBClusterSnapshotRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}

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

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
