/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class StartRestoreJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API StartRestoreJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRestoreJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline StartRestoreJobRequest& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline StartRestoreJobRequest& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline StartRestoreJobRequest& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Contains information, such as a resource
     * name, required to restore a recovery point.</p> <p> You can get configuration
     * metadata about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>You need to specify specific
     * metadata to restore an Amazon Elastic File System (Amazon EFS) instance:</p>
     * <ul> <li> <p> <code>file-system-id</code>: The ID of the Amazon EFS file system
     * that is backed up by Backup. Returned in
     * <code>GetRecoveryPointRestoreMetadata</code>.</p> </li> <li> <p>
     * <code>Encrypted</code>: A Boolean value that, if true, specifies that the file
     * system is encrypted. If <code>KmsKeyId</code> is specified,
     * <code>Encrypted</code> must be set to <code>true</code>.</p> </li> <li> <p>
     * <code>KmsKeyId</code>: Specifies the Amazon Web Services KMS key that is used to
     * encrypt the restored file system. You can specify a key from another Amazon Web
     * Services account provided that key it is properly shared with your account via
     * Amazon Web Services KMS.</p> </li> <li> <p> <code>PerformanceMode</code>:
     * Specifies the throughput mode of the file system.</p> </li> <li> <p>
     * <code>CreationToken</code>: A user-supplied value that ensures the uniqueness
     * (idempotency) of the request.</p> </li> <li> <p> <code>newFileSystem</code>: A
     * Boolean value that, if true, specifies that the recovery point is restored to a
     * new Amazon EFS file system.</p> </li> <li> <p> <code>ItemsToRestore</code>: An
     * array of one to five strings where each string is a file path. Use
     * <code>ItemsToRestore</code> to restore specific files or directories rather than
     * the entire file system. This parameter is optional. For example,
     * <code>"itemsToRestore":"[\"/my.test\"]"</code>.</p> </li> </ul>
     */
    inline StartRestoreJobRequest& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartRestoreJobRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartRestoreJobRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartRestoreJobRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartRestoreJobRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartRestoreJobRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartRestoreJobRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB
     * compatibility)</p> </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p>
     * </li> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li>
     * <p> <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Storage Gateway</code> for Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> for Amazon S3</p> </li> <li> <p>
     * <code>VirtualMachine</code> for virtual machines</p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB
     * compatibility)</p> </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p>
     * </li> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li>
     * <p> <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Storage Gateway</code> for Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> for Amazon S3</p> </li> <li> <p>
     * <code>VirtualMachine</code> for virtual machines</p> </li> </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB
     * compatibility)</p> </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p>
     * </li> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li>
     * <p> <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Storage Gateway</code> for Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> for Amazon S3</p> </li> <li> <p>
     * <code>VirtualMachine</code> for virtual machines</p> </li> </ul>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB
     * compatibility)</p> </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p>
     * </li> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li>
     * <p> <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Storage Gateway</code> for Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> for Amazon S3</p> </li> <li> <p>
     * <code>VirtualMachine</code> for virtual machines</p> </li> </ul>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB
     * compatibility)</p> </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p>
     * </li> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li>
     * <p> <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Storage Gateway</code> for Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> for Amazon S3</p> </li> <li> <p>
     * <code>VirtualMachine</code> for virtual machines</p> </li> </ul>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB
     * compatibility)</p> </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p>
     * </li> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li>
     * <p> <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Storage Gateway</code> for Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> for Amazon S3</p> </li> <li> <p>
     * <code>VirtualMachine</code> for virtual machines</p> </li> </ul>
     */
    inline StartRestoreJobRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB
     * compatibility)</p> </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p>
     * </li> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li>
     * <p> <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Storage Gateway</code> for Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> for Amazon S3</p> </li> <li> <p>
     * <code>VirtualMachine</code> for virtual machines</p> </li> </ul>
     */
    inline StartRestoreJobRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB
     * compatibility)</p> </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p>
     * </li> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li>
     * <p> <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Storage Gateway</code> for Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> for Amazon S3</p> </li> <li> <p>
     * <code>VirtualMachine</code> for virtual machines</p> </li> </ul>
     */
    inline StartRestoreJobRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
