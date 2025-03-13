/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/SyncJobSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListSyncJobsResult
  {
  public:
    AWS_IOTTWINMAKER_API ListSyncJobsResult() = default;
    AWS_IOTTWINMAKER_API ListSyncJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListSyncJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The listed SyncJob summaries.</p>
     */
    inline const Aws::Vector<SyncJobSummary>& GetSyncJobSummaries() const { return m_syncJobSummaries; }
    template<typename SyncJobSummariesT = Aws::Vector<SyncJobSummary>>
    void SetSyncJobSummaries(SyncJobSummariesT&& value) { m_syncJobSummariesHasBeenSet = true; m_syncJobSummaries = std::forward<SyncJobSummariesT>(value); }
    template<typename SyncJobSummariesT = Aws::Vector<SyncJobSummary>>
    ListSyncJobsResult& WithSyncJobSummaries(SyncJobSummariesT&& value) { SetSyncJobSummaries(std::forward<SyncJobSummariesT>(value)); return *this;}
    template<typename SyncJobSummariesT = SyncJobSummary>
    ListSyncJobsResult& AddSyncJobSummaries(SyncJobSummariesT&& value) { m_syncJobSummariesHasBeenSet = true; m_syncJobSummaries.emplace_back(std::forward<SyncJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSyncJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSyncJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SyncJobSummary> m_syncJobSummaries;
    bool m_syncJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
