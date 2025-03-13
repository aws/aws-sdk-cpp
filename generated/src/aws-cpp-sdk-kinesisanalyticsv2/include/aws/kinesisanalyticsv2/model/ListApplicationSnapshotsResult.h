/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/SnapshotDetails.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class ListApplicationSnapshotsResult
  {
  public:
    AWS_KINESISANALYTICSV2_API ListApplicationSnapshotsResult() = default;
    AWS_KINESISANALYTICSV2_API ListApplicationSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API ListApplicationSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline const Aws::Vector<SnapshotDetails>& GetSnapshotSummaries() const { return m_snapshotSummaries; }
    template<typename SnapshotSummariesT = Aws::Vector<SnapshotDetails>>
    void SetSnapshotSummaries(SnapshotSummariesT&& value) { m_snapshotSummariesHasBeenSet = true; m_snapshotSummaries = std::forward<SnapshotSummariesT>(value); }
    template<typename SnapshotSummariesT = Aws::Vector<SnapshotDetails>>
    ListApplicationSnapshotsResult& WithSnapshotSummaries(SnapshotSummariesT&& value) { SetSnapshotSummaries(std::forward<SnapshotSummariesT>(value)); return *this;}
    template<typename SnapshotSummariesT = SnapshotDetails>
    ListApplicationSnapshotsResult& AddSnapshotSummaries(SnapshotSummariesT&& value) { m_snapshotSummariesHasBeenSet = true; m_snapshotSummaries.emplace_back(std::forward<SnapshotSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationSnapshotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SnapshotDetails> m_snapshotSummaries;
    bool m_snapshotSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
