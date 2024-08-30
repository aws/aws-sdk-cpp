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


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the vault.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline CreateLogicallyAirGappedBackupVaultResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the vault was created.</p> <p>This value is in Unix
     * format, Coordinated Universal Time (UTC), and accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline CreateLogicallyAirGappedBackupVaultResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline CreateLogicallyAirGappedBackupVaultResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the vault.</p>
     */
    inline const VaultState& GetVaultState() const{ return m_vaultState; }
    inline void SetVaultState(const VaultState& value) { m_vaultState = value; }
    inline void SetVaultState(VaultState&& value) { m_vaultState = std::move(value); }
    inline CreateLogicallyAirGappedBackupVaultResult& WithVaultState(const VaultState& value) { SetVaultState(value); return *this;}
    inline CreateLogicallyAirGappedBackupVaultResult& WithVaultState(VaultState&& value) { SetVaultState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLogicallyAirGappedBackupVaultResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLogicallyAirGappedBackupVaultResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLogicallyAirGappedBackupVaultResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
