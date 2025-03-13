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
    AWS_BACKUP_API ListRecoveryPointsByLegalHoldResult() = default;
    AWS_BACKUP_API ListRecoveryPointsByLegalHoldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRecoveryPointsByLegalHoldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The recovery points.</p>
     */
    inline const Aws::Vector<RecoveryPointMember>& GetRecoveryPoints() const { return m_recoveryPoints; }
    template<typename RecoveryPointsT = Aws::Vector<RecoveryPointMember>>
    void SetRecoveryPoints(RecoveryPointsT&& value) { m_recoveryPointsHasBeenSet = true; m_recoveryPoints = std::forward<RecoveryPointsT>(value); }
    template<typename RecoveryPointsT = Aws::Vector<RecoveryPointMember>>
    ListRecoveryPointsByLegalHoldResult& WithRecoveryPoints(RecoveryPointsT&& value) { SetRecoveryPoints(std::forward<RecoveryPointsT>(value)); return *this;}
    template<typename RecoveryPointsT = RecoveryPointMember>
    ListRecoveryPointsByLegalHoldResult& AddRecoveryPoints(RecoveryPointsT&& value) { m_recoveryPointsHasBeenSet = true; m_recoveryPoints.emplace_back(std::forward<RecoveryPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned resources.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecoveryPointsByLegalHoldResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecoveryPointsByLegalHoldResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecoveryPointMember> m_recoveryPoints;
    bool m_recoveryPointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
