﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetBackupVaultAccessPolicyResult
  {
  public:
    AWS_BACKUP_API GetBackupVaultAccessPolicyResult();
    AWS_BACKUP_API GetBackupVaultAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupVaultAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }
    inline GetBackupVaultAccessPolicyResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline GetBackupVaultAccessPolicyResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline GetBackupVaultAccessPolicyResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }
    inline GetBackupVaultAccessPolicyResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline GetBackupVaultAccessPolicyResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline GetBackupVaultAccessPolicyResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backup vault access policy document in JSON format.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline GetBackupVaultAccessPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline GetBackupVaultAccessPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline GetBackupVaultAccessPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBackupVaultAccessPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBackupVaultAccessPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBackupVaultAccessPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;

    Aws::String m_backupVaultArn;

    Aws::String m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
