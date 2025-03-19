/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/TimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace kendra
{
namespace Model
{
  class GetSnapshotsResult
  {
  public:
    AWS_KENDRA_API GetSnapshotsResult() = default;
    AWS_KENDRA_API GetSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API GetSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Unix timestamp for the beginning and end of the time window for the
     * search metrics data.</p>
     */
    inline const TimeRange& GetSnapShotTimeFilter() const { return m_snapShotTimeFilter; }
    template<typename SnapShotTimeFilterT = TimeRange>
    void SetSnapShotTimeFilter(SnapShotTimeFilterT&& value) { m_snapShotTimeFilterHasBeenSet = true; m_snapShotTimeFilter = std::forward<SnapShotTimeFilterT>(value); }
    template<typename SnapShotTimeFilterT = TimeRange>
    GetSnapshotsResult& WithSnapShotTimeFilter(SnapShotTimeFilterT&& value) { SetSnapShotTimeFilter(std::forward<SnapShotTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotsDataHeader() const { return m_snapshotsDataHeader; }
    template<typename SnapshotsDataHeaderT = Aws::Vector<Aws::String>>
    void SetSnapshotsDataHeader(SnapshotsDataHeaderT&& value) { m_snapshotsDataHeaderHasBeenSet = true; m_snapshotsDataHeader = std::forward<SnapshotsDataHeaderT>(value); }
    template<typename SnapshotsDataHeaderT = Aws::Vector<Aws::String>>
    GetSnapshotsResult& WithSnapshotsDataHeader(SnapshotsDataHeaderT&& value) { SetSnapshotsDataHeader(std::forward<SnapshotsDataHeaderT>(value)); return *this;}
    template<typename SnapshotsDataHeaderT = Aws::String>
    GetSnapshotsResult& AddSnapshotsDataHeader(SnapshotsDataHeaderT&& value) { m_snapshotsDataHeaderHasBeenSet = true; m_snapshotsDataHeader.emplace_back(std::forward<SnapshotsDataHeaderT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The search metrics data. The data returned depends on the metric type you
     * requested.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetSnapshotsData() const { return m_snapshotsData; }
    template<typename SnapshotsDataT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetSnapshotsData(SnapshotsDataT&& value) { m_snapshotsDataHasBeenSet = true; m_snapshotsData = std::forward<SnapshotsDataT>(value); }
    template<typename SnapshotsDataT = Aws::Vector<Aws::Vector<Aws::String>>>
    GetSnapshotsResult& WithSnapshotsData(SnapshotsDataT&& value) { SetSnapshotsData(std::forward<SnapshotsDataT>(value)); return *this;}
    template<typename SnapshotsDataT = Aws::Vector<Aws::String>>
    GetSnapshotsResult& AddSnapshotsData(SnapshotsDataT&& value) { m_snapshotsDataHasBeenSet = true; m_snapshotsData.emplace_back(std::forward<SnapshotsDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of search metrics data.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSnapshotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TimeRange m_snapShotTimeFilter;
    bool m_snapShotTimeFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotsDataHeader;
    bool m_snapshotsDataHeaderHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_snapshotsData;
    bool m_snapshotsDataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
