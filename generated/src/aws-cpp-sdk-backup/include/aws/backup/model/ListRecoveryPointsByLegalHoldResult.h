/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RecoveryPointMember.h>
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
  class ListRecoveryPointsByLegalHoldResult
  {
  public:
    AWS_BACKUP_API ListRecoveryPointsByLegalHoldResult();
    AWS_BACKUP_API ListRecoveryPointsByLegalHoldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRecoveryPointsByLegalHoldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The recovery points.</p>
     */
    inline const Aws::Vector<RecoveryPointMember>& GetRecoveryPoints() const{ return m_recoveryPoints; }
    inline void SetRecoveryPoints(const Aws::Vector<RecoveryPointMember>& value) { m_recoveryPoints = value; }
    inline void SetRecoveryPoints(Aws::Vector<RecoveryPointMember>&& value) { m_recoveryPoints = std::move(value); }
    inline ListRecoveryPointsByLegalHoldResult& WithRecoveryPoints(const Aws::Vector<RecoveryPointMember>& value) { SetRecoveryPoints(value); return *this;}
    inline ListRecoveryPointsByLegalHoldResult& WithRecoveryPoints(Aws::Vector<RecoveryPointMember>&& value) { SetRecoveryPoints(std::move(value)); return *this;}
    inline ListRecoveryPointsByLegalHoldResult& AddRecoveryPoints(const RecoveryPointMember& value) { m_recoveryPoints.push_back(value); return *this; }
    inline ListRecoveryPointsByLegalHoldResult& AddRecoveryPoints(RecoveryPointMember&& value) { m_recoveryPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRecoveryPointsByLegalHoldResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecoveryPointsByLegalHoldResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecoveryPointsByLegalHoldResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRecoveryPointsByLegalHoldResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRecoveryPointsByLegalHoldResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRecoveryPointsByLegalHoldResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RecoveryPointMember> m_recoveryPoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
