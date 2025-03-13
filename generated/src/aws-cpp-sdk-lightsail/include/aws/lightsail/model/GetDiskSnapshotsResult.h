/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/DiskSnapshot.h>
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
namespace Lightsail
{
namespace Model
{
  class GetDiskSnapshotsResult
  {
  public:
    AWS_LIGHTSAIL_API GetDiskSnapshotsResult() = default;
    AWS_LIGHTSAIL_API GetDiskSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDiskSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects containing information about all block storage disk
     * snapshots.</p>
     */
    inline const Aws::Vector<DiskSnapshot>& GetDiskSnapshots() const { return m_diskSnapshots; }
    template<typename DiskSnapshotsT = Aws::Vector<DiskSnapshot>>
    void SetDiskSnapshots(DiskSnapshotsT&& value) { m_diskSnapshotsHasBeenSet = true; m_diskSnapshots = std::forward<DiskSnapshotsT>(value); }
    template<typename DiskSnapshotsT = Aws::Vector<DiskSnapshot>>
    GetDiskSnapshotsResult& WithDiskSnapshots(DiskSnapshotsT&& value) { SetDiskSnapshots(std::forward<DiskSnapshotsT>(value)); return *this;}
    template<typename DiskSnapshotsT = DiskSnapshot>
    GetDiskSnapshotsResult& AddDiskSnapshots(DiskSnapshotsT&& value) { m_diskSnapshotsHasBeenSet = true; m_diskSnapshots.emplace_back(std::forward<DiskSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDiskSnapshots</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetDiskSnapshotsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDiskSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DiskSnapshot> m_diskSnapshots;
    bool m_diskSnapshotsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
