/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/ExportJobSummary.h>
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
namespace BackupSearch
{
namespace Model
{
  class ListSearchResultExportJobsResult
  {
  public:
    AWS_BACKUPSEARCH_API ListSearchResultExportJobsResult() = default;
    AWS_BACKUPSEARCH_API ListSearchResultExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API ListSearchResultExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The operation returns the included export jobs.</p>
     */
    inline const Aws::Vector<ExportJobSummary>& GetExportJobs() const { return m_exportJobs; }
    template<typename ExportJobsT = Aws::Vector<ExportJobSummary>>
    void SetExportJobs(ExportJobsT&& value) { m_exportJobsHasBeenSet = true; m_exportJobs = std::forward<ExportJobsT>(value); }
    template<typename ExportJobsT = Aws::Vector<ExportJobSummary>>
    ListSearchResultExportJobsResult& WithExportJobs(ExportJobsT&& value) { SetExportJobs(std::forward<ExportJobsT>(value)); return *this;}
    template<typename ExportJobsT = ExportJobSummary>
    ListSearchResultExportJobsResult& AddExportJobs(ExportJobsT&& value) { m_exportJobsHasBeenSet = true; m_exportJobs.emplace_back(std::forward<ExportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned backups included in a
     * search job.</p> <p>For example, if a request is made to return
     * <code>MaxResults</code> number of backups, <code>NextToken</code> allows you to
     * return more items in your list starting at the location pointed to by the next
     * token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSearchResultExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSearchResultExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportJobSummary> m_exportJobs;
    bool m_exportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
