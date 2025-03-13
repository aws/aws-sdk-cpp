/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/BackupJobSummary.h>
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
namespace Backup
{
namespace Model
{
  class ListBackupJobSummariesResult
  {
  public:
    AWS_BACKUP_API ListBackupJobSummariesResult() = default;
    AWS_BACKUP_API ListBackupJobSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupJobSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary information.</p>
     */
    inline const Aws::Vector<BackupJobSummary>& GetBackupJobSummaries() const { return m_backupJobSummaries; }
    template<typename BackupJobSummariesT = Aws::Vector<BackupJobSummary>>
    void SetBackupJobSummaries(BackupJobSummariesT&& value) { m_backupJobSummariesHasBeenSet = true; m_backupJobSummaries = std::forward<BackupJobSummariesT>(value); }
    template<typename BackupJobSummariesT = Aws::Vector<BackupJobSummary>>
    ListBackupJobSummariesResult& WithBackupJobSummaries(BackupJobSummariesT&& value) { SetBackupJobSummaries(std::forward<BackupJobSummariesT>(value)); return *this;}
    template<typename BackupJobSummariesT = BackupJobSummary>
    ListBackupJobSummariesResult& AddBackupJobSummaries(BackupJobSummariesT&& value) { m_backupJobSummariesHasBeenSet = true; m_backupJobSummaries.emplace_back(std::forward<BackupJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period for the returned results.</p> <ul> <li> <p> <code>ONE_DAY</code> -
     * The daily job count for the prior 14 days.</p> </li> <li> <p>
     * <code>SEVEN_DAYS</code> - The aggregated job count for the prior 7 days.</p>
     * </li> <li> <p> <code>FOURTEEN_DAYS</code> - The aggregated job count for prior
     * 14 days.</p> </li> </ul>
     */
    inline const Aws::String& GetAggregationPeriod() const { return m_aggregationPeriod; }
    template<typename AggregationPeriodT = Aws::String>
    void SetAggregationPeriod(AggregationPeriodT&& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = std::forward<AggregationPeriodT>(value); }
    template<typename AggregationPeriodT = Aws::String>
    ListBackupJobSummariesResult& WithAggregationPeriod(AggregationPeriodT&& value) { SetAggregationPeriod(std::forward<AggregationPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBackupJobSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBackupJobSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BackupJobSummary> m_backupJobSummaries;
    bool m_backupJobSummariesHasBeenSet = false;

    Aws::String m_aggregationPeriod;
    bool m_aggregationPeriodHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
