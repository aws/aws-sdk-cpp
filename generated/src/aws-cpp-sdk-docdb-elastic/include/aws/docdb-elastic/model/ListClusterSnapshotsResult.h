/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb-elastic/model/ClusterSnapshotInList.h>
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
namespace DocDBElastic
{
namespace Model
{
  class ListClusterSnapshotsResult
  {
  public:
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult();
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline ListClusterSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline ListClusterSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline ListClusterSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of snapshots for a specified elastic cluster.</p>
     */
    inline const Aws::Vector<ClusterSnapshotInList>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>A list of snapshots for a specified elastic cluster.</p>
     */
    inline void SetSnapshots(const Aws::Vector<ClusterSnapshotInList>& value) { m_snapshots = value; }

    /**
     * <p>A list of snapshots for a specified elastic cluster.</p>
     */
    inline void SetSnapshots(Aws::Vector<ClusterSnapshotInList>&& value) { m_snapshots = std::move(value); }

    /**
     * <p>A list of snapshots for a specified elastic cluster.</p>
     */
    inline ListClusterSnapshotsResult& WithSnapshots(const Aws::Vector<ClusterSnapshotInList>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>A list of snapshots for a specified elastic cluster.</p>
     */
    inline ListClusterSnapshotsResult& WithSnapshots(Aws::Vector<ClusterSnapshotInList>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>A list of snapshots for a specified elastic cluster.</p>
     */
    inline ListClusterSnapshotsResult& AddSnapshots(const ClusterSnapshotInList& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p>A list of snapshots for a specified elastic cluster.</p>
     */
    inline ListClusterSnapshotsResult& AddSnapshots(ClusterSnapshotInList&& value) { m_snapshots.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListClusterSnapshotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListClusterSnapshotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListClusterSnapshotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ClusterSnapshotInList> m_snapshots;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
