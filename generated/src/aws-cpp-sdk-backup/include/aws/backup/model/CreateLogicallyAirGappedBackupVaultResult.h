/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/VaultState.h>
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
  class CreateLogicallyAirGappedBackupVaultResult
  {
  public:
    AWS_BACKUP_API CreateLogicallyAirGappedBackupVaultResult();
    AWS_BACKUP_API CreateLogicallyAirGappedBackupVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateLogicallyAirGappedBackupVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>This is the ARN (Amazon Resource Name) of the vault being created.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the vault being created.</p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the vault being created.</p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the vault being created.</p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the vault being created.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>This is the ARN (Amazon Resource Name) of the vault being created.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>This is the ARN (Amazon Resource Name) of the vault being created.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>The date and time when the vault was created.</p> <p>This value is in Unix
     * format, Coordinated Universal Time (UTC), and accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the vault was created.</p> <p>This value is in Unix
     * format, Coordinated Universal Time (UTC), and accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time when the vault was created.</p> <p>This value is in Unix
     * format, Coordinated Universal Time (UTC), and accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the vault was created.</p> <p>This value is in Unix
     * format, Coordinated Universal Time (UTC), and accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the vault was created.</p> <p>This value is in Unix
     * format, Coordinated Universal Time (UTC), and accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>This is the current state of the vault.</p>
     */
    inline const VaultState& GetVaultState() const{ return m_vaultState; }

    /**
     * <p>This is the current state of the vault.</p>
     */
    inline void SetVaultState(const VaultState& value) { m_vaultState = value; }

    /**
     * <p>This is the current state of the vault.</p>
     */
    inline void SetVaultState(VaultState&& value) { m_vaultState = std::move(value); }

    /**
     * <p>This is the current state of the vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithVaultState(const VaultState& value) { SetVaultState(value); return *this;}

    /**
     * <p>This is the current state of the vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultResult& WithVaultState(VaultState&& value) { SetVaultState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLogicallyAirGappedBackupVaultResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLogicallyAirGappedBackupVaultResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLogicallyAirGappedBackupVaultResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_backupVaultName;

    Aws::String m_backupVaultArn;

    Aws::Utils::DateTime m_creationDate;

    VaultState m_vaultState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
