﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class StartBackupJobResult
  {
  public:
    AWS_BACKUP_API StartBackupJobResult();
    AWS_BACKUP_API StartBackupJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API StartBackupJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Uniquely identifies a request to Backup to back up a resource.</p>
     */
    inline const Aws::String& GetBackupJobId() const{ return m_backupJobId; }
    inline void SetBackupJobId(const Aws::String& value) { m_backupJobId = value; }
    inline void SetBackupJobId(Aws::String&& value) { m_backupJobId = std::move(value); }
    inline void SetBackupJobId(const char* value) { m_backupJobId.assign(value); }
    inline StartBackupJobResult& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}
    inline StartBackupJobResult& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}
    inline StartBackupJobResult& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Note: This field is only returned for Amazon EFS and Advanced DynamoDB
     * resources.</i> </p> <p>An ARN that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArn.assign(value); }
    inline StartBackupJobResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline StartBackupJobResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline StartBackupJobResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline StartBackupJobResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline StartBackupJobResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a returned boolean value indicating this is a parent (composite)
     * backup job.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }
    inline void SetIsParent(bool value) { m_isParent = value; }
    inline StartBackupJobResult& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartBackupJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartBackupJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartBackupJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupJobId;

    Aws::String m_recoveryPointArn;

    Aws::Utils::DateTime m_creationDate;

    bool m_isParent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
