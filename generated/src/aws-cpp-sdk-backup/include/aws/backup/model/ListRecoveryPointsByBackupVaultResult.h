﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/RecoveryPointByBackupVault.h>
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
  class ListRecoveryPointsByBackupVaultResult
  {
  public:
    AWS_BACKUP_API ListRecoveryPointsByBackupVaultResult();
    AWS_BACKUP_API ListRecoveryPointsByBackupVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRecoveryPointsByBackupVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRecoveryPointsByBackupVaultResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecoveryPointsByBackupVaultResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecoveryPointsByBackupVaultResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that contain detailed information about recovery points
     * saved in a backup vault.</p>
     */
    inline const Aws::Vector<RecoveryPointByBackupVault>& GetRecoveryPoints() const{ return m_recoveryPoints; }
    inline void SetRecoveryPoints(const Aws::Vector<RecoveryPointByBackupVault>& value) { m_recoveryPoints = value; }
    inline void SetRecoveryPoints(Aws::Vector<RecoveryPointByBackupVault>&& value) { m_recoveryPoints = std::move(value); }
    inline ListRecoveryPointsByBackupVaultResult& WithRecoveryPoints(const Aws::Vector<RecoveryPointByBackupVault>& value) { SetRecoveryPoints(value); return *this;}
    inline ListRecoveryPointsByBackupVaultResult& WithRecoveryPoints(Aws::Vector<RecoveryPointByBackupVault>&& value) { SetRecoveryPoints(std::move(value)); return *this;}
    inline ListRecoveryPointsByBackupVaultResult& AddRecoveryPoints(const RecoveryPointByBackupVault& value) { m_recoveryPoints.push_back(value); return *this; }
    inline ListRecoveryPointsByBackupVaultResult& AddRecoveryPoints(RecoveryPointByBackupVault&& value) { m_recoveryPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRecoveryPointsByBackupVaultResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRecoveryPointsByBackupVaultResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRecoveryPointsByBackupVaultResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RecoveryPointByBackupVault> m_recoveryPoints;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
