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
    AWS_IOTSITEWISE_API ListBulkImportJobsResult();
    AWS_IOTSITEWISE_API ListBulkImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListBulkImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One or more job summaries to list.</p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaries() const{ return m_jobSummaries; }
    inline void SetJobSummaries(const Aws::Vector<JobSummary>& value) { m_jobSummaries = value; }
    inline void SetJobSummaries(Aws::Vector<JobSummary>&& value) { m_jobSummaries = std::move(value); }
    inline ListBulkImportJobsResult& WithJobSummaries(const Aws::Vector<JobSummary>& value) { SetJobSummaries(value); return *this;}
    inline ListBulkImportJobsResult& WithJobSummaries(Aws::Vector<JobSummary>&& value) { SetJobSummaries(std::move(value)); return *this;}
    inline ListBulkImportJobsResult& AddJobSummaries(const JobSummary& value) { m_jobSummaries.push_back(value); return *this; }
    inline ListBulkImportJobsResult& AddJobSummaries(JobSummary&& value) { m_jobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBulkImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBulkImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBulkImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBulkImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBulkImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBulkImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobSummary> m_jobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
