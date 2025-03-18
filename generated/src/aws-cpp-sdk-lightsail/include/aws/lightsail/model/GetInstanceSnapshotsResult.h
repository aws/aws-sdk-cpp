/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstanceSnapshot.h>
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
  class GetInstanceSnapshotsResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceSnapshotsResult() = default;
    AWS_LIGHTSAIL_API GetInstanceSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstanceSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance snapshots request.</p>
     */
    inline const Aws::Vector<InstanceSnapshot>& GetInstanceSnapshots() const { return m_instanceSnapshots; }
    template<typename InstanceSnapshotsT = Aws::Vector<InstanceSnapshot>>
    void SetInstanceSnapshots(InstanceSnapshotsT&& value) { m_instanceSnapshotsHasBeenSet = true; m_instanceSnapshots = std::forward<InstanceSnapshotsT>(value); }
    template<typename InstanceSnapshotsT = Aws::Vector<InstanceSnapshot>>
    GetInstanceSnapshotsResult& WithInstanceSnapshots(InstanceSnapshotsT&& value) { SetInstanceSnapshots(std::forward<InstanceSnapshotsT>(value)); return *this;}
    template<typename InstanceSnapshotsT = InstanceSnapshot>
    GetInstanceSnapshotsResult& AddInstanceSnapshots(InstanceSnapshotsT&& value) { m_instanceSnapshotsHasBeenSet = true; m_instanceSnapshots.emplace_back(std::forward<InstanceSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetInstanceSnapshots</code> request and specify the next page token using
     * the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetInstanceSnapshotsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInstanceSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceSnapshot> m_instanceSnapshots;
    bool m_instanceSnapshotsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
