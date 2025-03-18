/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/ProgressUpdateStreamSummary.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListProgressUpdateStreamsResult
  {
  public:
    AWS_MIGRATIONHUB_API ListProgressUpdateStreamsResult() = default;
    AWS_MIGRATIONHUB_API ListProgressUpdateStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListProgressUpdateStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of progress update streams up to the max number of results passed in the
     * input.</p>
     */
    inline const Aws::Vector<ProgressUpdateStreamSummary>& GetProgressUpdateStreamSummaryList() const { return m_progressUpdateStreamSummaryList; }
    template<typename ProgressUpdateStreamSummaryListT = Aws::Vector<ProgressUpdateStreamSummary>>
    void SetProgressUpdateStreamSummaryList(ProgressUpdateStreamSummaryListT&& value) { m_progressUpdateStreamSummaryListHasBeenSet = true; m_progressUpdateStreamSummaryList = std::forward<ProgressUpdateStreamSummaryListT>(value); }
    template<typename ProgressUpdateStreamSummaryListT = Aws::Vector<ProgressUpdateStreamSummary>>
    ListProgressUpdateStreamsResult& WithProgressUpdateStreamSummaryList(ProgressUpdateStreamSummaryListT&& value) { SetProgressUpdateStreamSummaryList(std::forward<ProgressUpdateStreamSummaryListT>(value)); return *this;}
    template<typename ProgressUpdateStreamSummaryListT = ProgressUpdateStreamSummary>
    ListProgressUpdateStreamsResult& AddProgressUpdateStreamSummaryList(ProgressUpdateStreamSummaryListT&& value) { m_progressUpdateStreamSummaryListHasBeenSet = true; m_progressUpdateStreamSummaryList.emplace_back(std::forward<ProgressUpdateStreamSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more streams created than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProgressUpdateStreamsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProgressUpdateStreamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProgressUpdateStreamSummary> m_progressUpdateStreamSummaryList;
    bool m_progressUpdateStreamSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
