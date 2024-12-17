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
    AWS_BACKUP_API ListIndexedRecoveryPointsResult();
    AWS_BACKUP_API ListIndexedRecoveryPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListIndexedRecoveryPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This is a list of recovery points that have an associated index, belonging to
     * the specified account.</p>
     */
    inline const Aws::Vector<IndexedRecoveryPoint>& GetIndexedRecoveryPoints() const{ return m_indexedRecoveryPoints; }
    inline void SetIndexedRecoveryPoints(const Aws::Vector<IndexedRecoveryPoint>& value) { m_indexedRecoveryPoints = value; }
    inline void SetIndexedRecoveryPoints(Aws::Vector<IndexedRecoveryPoint>&& value) { m_indexedRecoveryPoints = std::move(value); }
    inline ListIndexedRecoveryPointsResult& WithIndexedRecoveryPoints(const Aws::Vector<IndexedRecoveryPoint>& value) { SetIndexedRecoveryPoints(value); return *this;}
    inline ListIndexedRecoveryPointsResult& WithIndexedRecoveryPoints(Aws::Vector<IndexedRecoveryPoint>&& value) { SetIndexedRecoveryPoints(std::move(value)); return *this;}
    inline ListIndexedRecoveryPointsResult& AddIndexedRecoveryPoints(const IndexedRecoveryPoint& value) { m_indexedRecoveryPoints.push_back(value); return *this; }
    inline ListIndexedRecoveryPointsResult& AddIndexedRecoveryPoints(IndexedRecoveryPoint&& value) { m_indexedRecoveryPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned recovery points.</p>
     * <p>For example, if a request is made to return <code>MaxResults</code> number of
     * indexed recovery points, <code>NextToken</code> allows you to return more items
     * in your list starting at the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIndexedRecoveryPointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIndexedRecoveryPointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIndexedRecoveryPointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIndexedRecoveryPointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIndexedRecoveryPointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIndexedRecoveryPointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IndexedRecoveryPoint> m_indexedRecoveryPoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
