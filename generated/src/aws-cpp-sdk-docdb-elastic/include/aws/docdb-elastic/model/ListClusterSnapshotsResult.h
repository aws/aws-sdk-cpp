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
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult() = default;
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClusterSnapshotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of snapshots for a specified elastic cluster.</p>
     */
    inline const Aws::Vector<ClusterSnapshotInList>& GetSnapshots() const { return m_snapshots; }
    template<typename SnapshotsT = Aws::Vector<ClusterSnapshotInList>>
    void SetSnapshots(SnapshotsT&& value) { m_snapshotsHasBeenSet = true; m_snapshots = std::forward<SnapshotsT>(value); }
    template<typename SnapshotsT = Aws::Vector<ClusterSnapshotInList>>
    ListClusterSnapshotsResult& WithSnapshots(SnapshotsT&& value) { SetSnapshots(std::forward<SnapshotsT>(value)); return *this;}
    template<typename SnapshotsT = ClusterSnapshotInList>
    ListClusterSnapshotsResult& AddSnapshots(SnapshotsT&& value) { m_snapshotsHasBeenSet = true; m_snapshots.emplace_back(std::forward<SnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClusterSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ClusterSnapshotInList> m_snapshots;
    bool m_snapshotsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
