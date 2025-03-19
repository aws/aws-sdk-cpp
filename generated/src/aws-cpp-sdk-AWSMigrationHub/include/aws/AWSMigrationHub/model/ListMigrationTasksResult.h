/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/MigrationTaskSummary.h>
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
  class ListMigrationTasksResult
  {
  public:
    AWS_MIGRATIONHUB_API ListMigrationTasksResult() = default;
    AWS_MIGRATIONHUB_API ListMigrationTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListMigrationTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more migration tasks than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMigrationTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the migration task's summary which includes:
     * <code>MigrationTaskName</code>, <code>ProgressPercent</code>,
     * <code>ProgressUpdateStream</code>, <code>Status</code>, and the
     * <code>UpdateDateTime</code> for each task.</p>
     */
    inline const Aws::Vector<MigrationTaskSummary>& GetMigrationTaskSummaryList() const { return m_migrationTaskSummaryList; }
    template<typename MigrationTaskSummaryListT = Aws::Vector<MigrationTaskSummary>>
    void SetMigrationTaskSummaryList(MigrationTaskSummaryListT&& value) { m_migrationTaskSummaryListHasBeenSet = true; m_migrationTaskSummaryList = std::forward<MigrationTaskSummaryListT>(value); }
    template<typename MigrationTaskSummaryListT = Aws::Vector<MigrationTaskSummary>>
    ListMigrationTasksResult& WithMigrationTaskSummaryList(MigrationTaskSummaryListT&& value) { SetMigrationTaskSummaryList(std::forward<MigrationTaskSummaryListT>(value)); return *this;}
    template<typename MigrationTaskSummaryListT = MigrationTaskSummary>
    ListMigrationTasksResult& AddMigrationTaskSummaryList(MigrationTaskSummaryListT&& value) { m_migrationTaskSummaryListHasBeenSet = true; m_migrationTaskSummaryList.emplace_back(std::forward<MigrationTaskSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMigrationTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MigrationTaskSummary> m_migrationTaskSummaryList;
    bool m_migrationTaskSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
