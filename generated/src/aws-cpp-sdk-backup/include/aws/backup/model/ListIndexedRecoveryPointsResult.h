/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/IndexedRecoveryPoint.h>
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
  class ListIndexedRecoveryPointsResult
  {
  public:
    AWS_BACKUP_API ListIndexedRecoveryPointsResult() = default;
    AWS_BACKUP_API ListIndexedRecoveryPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListIndexedRecoveryPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This is a list of recovery points that have an associated index, belonging to
     * the specified account.</p>
     */
    inline const Aws::Vector<IndexedRecoveryPoint>& GetIndexedRecoveryPoints() const { return m_indexedRecoveryPoints; }
    template<typename IndexedRecoveryPointsT = Aws::Vector<IndexedRecoveryPoint>>
    void SetIndexedRecoveryPoints(IndexedRecoveryPointsT&& value) { m_indexedRecoveryPointsHasBeenSet = true; m_indexedRecoveryPoints = std::forward<IndexedRecoveryPointsT>(value); }
    template<typename IndexedRecoveryPointsT = Aws::Vector<IndexedRecoveryPoint>>
    ListIndexedRecoveryPointsResult& WithIndexedRecoveryPoints(IndexedRecoveryPointsT&& value) { SetIndexedRecoveryPoints(std::forward<IndexedRecoveryPointsT>(value)); return *this;}
    template<typename IndexedRecoveryPointsT = IndexedRecoveryPoint>
    ListIndexedRecoveryPointsResult& AddIndexedRecoveryPoints(IndexedRecoveryPointsT&& value) { m_indexedRecoveryPointsHasBeenSet = true; m_indexedRecoveryPoints.emplace_back(std::forward<IndexedRecoveryPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned recovery points.</p>
     * <p>For example, if a request is made to return <code>MaxResults</code> number of
     * indexed recovery points, <code>NextToken</code> allows you to return more items
     * in your list starting at the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIndexedRecoveryPointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIndexedRecoveryPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IndexedRecoveryPoint> m_indexedRecoveryPoints;
    bool m_indexedRecoveryPointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
