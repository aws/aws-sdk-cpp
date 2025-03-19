/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceSyncJob.h>
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
  class ListDataSourceSyncJobsResult
  {
  public:
    AWS_KENDRA_API ListDataSourceSyncJobsResult() = default;
    AWS_KENDRA_API ListDataSourceSyncJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListDataSourceSyncJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A history of synchronization jobs for the data source connector.</p>
     */
    inline const Aws::Vector<DataSourceSyncJob>& GetHistory() const { return m_history; }
    template<typename HistoryT = Aws::Vector<DataSourceSyncJob>>
    void SetHistory(HistoryT&& value) { m_historyHasBeenSet = true; m_history = std::forward<HistoryT>(value); }
    template<typename HistoryT = Aws::Vector<DataSourceSyncJob>>
    ListDataSourceSyncJobsResult& WithHistory(HistoryT&& value) { SetHistory(std::forward<HistoryT>(value)); return *this;}
    template<typename HistoryT = DataSourceSyncJob>
    ListDataSourceSyncJobsResult& AddHistory(HistoryT&& value) { m_historyHasBeenSet = true; m_history.emplace_back(std::forward<HistoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataSourceSyncJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataSourceSyncJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSourceSyncJob> m_history;
    bool m_historyHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
