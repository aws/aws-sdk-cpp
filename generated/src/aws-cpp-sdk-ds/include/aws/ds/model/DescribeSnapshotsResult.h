/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/Snapshot.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>DescribeSnapshots</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSnapshotsResult">AWS
   * API Reference</a></p>
   */
  class DescribeSnapshotsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeSnapshotsResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of <a>Snapshot</a> objects that were retrieved.</p> <p>It is
     * possible that this list contains less than the number of items specified in the
     * <i>Limit</i> member of the request. This occurs if there are less than the
     * requested number of items left to retrieve, or if the limitations of the
     * operation have been exceeded.</p>
     */
    inline const Aws::Vector<Snapshot>& GetSnapshots() const { return m_snapshots; }
    template<typename SnapshotsT = Aws::Vector<Snapshot>>
    void SetSnapshots(SnapshotsT&& value) { m_snapshotsHasBeenSet = true; m_snapshots = std::forward<SnapshotsT>(value); }
    template<typename SnapshotsT = Aws::Vector<Snapshot>>
    DescribeSnapshotsResult& WithSnapshots(SnapshotsT&& value) { SetSnapshots(std::forward<SnapshotsT>(value)); return *this;}
    template<typename SnapshotsT = Snapshot>
    DescribeSnapshotsResult& AddSnapshots(SnapshotsT&& value) { m_snapshotsHasBeenSet = true; m_snapshots.emplace_back(std::forward<SnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value in the
     * <i>NextToken</i> member of a subsequent call to <a>DescribeSnapshots</a>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSnapshotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Snapshot> m_snapshots;
    bool m_snapshotsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
