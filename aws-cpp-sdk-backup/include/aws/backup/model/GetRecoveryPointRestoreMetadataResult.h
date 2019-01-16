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
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class AWS_BACKUP_API GetRecoveryPointRestoreMetadataResult
  {
  public:
    GetRecoveryPointRestoreMetadataResult();
    GetRecoveryPointRestoreMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRecoveryPointRestoreMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRestoreMetadata() const{ return m_restoreMetadata; }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline void SetRestoreMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_restoreMetadata = value; }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline void SetRestoreMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_restoreMetadata = std::move(value); }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& WithRestoreMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetRestoreMetadata(value); return *this;}

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& WithRestoreMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetRestoreMetadata(std::move(value)); return *this;}

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(const Aws::String& key, const Aws::String& value) { m_restoreMetadata.emplace(key, value); return *this; }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(Aws::String&& key, const Aws::String& value) { m_restoreMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(const Aws::String& key, Aws::String&& value) { m_restoreMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(Aws::String&& key, Aws::String&& value) { m_restoreMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(const char* key, Aws::String&& value) { m_restoreMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(Aws::String&& key, const char* value) { m_restoreMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of metadata key-value pairs that lists the metadata key-value pairs
     * that are required to restore the recovery point.</p>
     */
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(const char* key, const char* value) { m_restoreMetadata.emplace(key, value); return *this; }

  private:

    Aws::String m_backupVaultArn;

    Aws::String m_recoveryPointArn;

    Aws::Map<Aws::String, Aws::String> m_restoreMetadata;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
