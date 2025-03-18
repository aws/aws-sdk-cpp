/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/RecoveryPointByResource.h>
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
  class ListRecoveryPointsByResourceResult
  {
  public:
    AWS_BACKUP_API ListRecoveryPointsByResourceResult() = default;
    AWS_BACKUP_API ListRecoveryPointsByResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRecoveryPointsByResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecoveryPointsByResourceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that contain detailed information about recovery points
     * of the specified resource type.</p>  <p>Only Amazon EFS and Amazon EC2
     * recovery points return BackupVaultName.</p> 
     */
    inline const Aws::Vector<RecoveryPointByResource>& GetRecoveryPoints() const { return m_recoveryPoints; }
    template<typename RecoveryPointsT = Aws::Vector<RecoveryPointByResource>>
    void SetRecoveryPoints(RecoveryPointsT&& value) { m_recoveryPointsHasBeenSet = true; m_recoveryPoints = std::forward<RecoveryPointsT>(value); }
    template<typename RecoveryPointsT = Aws::Vector<RecoveryPointByResource>>
    ListRecoveryPointsByResourceResult& WithRecoveryPoints(RecoveryPointsT&& value) { SetRecoveryPoints(std::forward<RecoveryPointsT>(value)); return *this;}
    template<typename RecoveryPointsT = RecoveryPointByResource>
    ListRecoveryPointsByResourceResult& AddRecoveryPoints(RecoveryPointsT&& value) { m_recoveryPointsHasBeenSet = true; m_recoveryPoints.emplace_back(std::forward<RecoveryPointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecoveryPointsByResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RecoveryPointByResource> m_recoveryPoints;
    bool m_recoveryPointsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
