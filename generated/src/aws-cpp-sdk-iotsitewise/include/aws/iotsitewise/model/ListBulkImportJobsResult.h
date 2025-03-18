/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/JobSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListBulkImportJobsResult
  {
  public:
    AWS_IOTSITEWISE_API ListBulkImportJobsResult() = default;
    AWS_IOTSITEWISE_API ListBulkImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListBulkImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One or more job summaries to list.</p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaries() const { return m_jobSummaries; }
    template<typename JobSummariesT = Aws::Vector<JobSummary>>
    void SetJobSummaries(JobSummariesT&& value) { m_jobSummariesHasBeenSet = true; m_jobSummaries = std::forward<JobSummariesT>(value); }
    template<typename JobSummariesT = Aws::Vector<JobSummary>>
    ListBulkImportJobsResult& WithJobSummaries(JobSummariesT&& value) { SetJobSummaries(std::forward<JobSummariesT>(value)); return *this;}
    template<typename JobSummariesT = JobSummary>
    ListBulkImportJobsResult& AddJobSummaries(JobSummariesT&& value) { m_jobSummariesHasBeenSet = true; m_jobSummaries.emplace_back(std::forward<JobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBulkImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBulkImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobSummary> m_jobSummaries;
    bool m_jobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
