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


    /**
     * <p>One or more job summaries to list.</p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaries() const{ return m_jobSummaries; }

    /**
     * <p>One or more job summaries to list.</p>
     */
    inline void SetJobSummaries(const Aws::Vector<JobSummary>& value) { m_jobSummaries = value; }

    /**
     * <p>One or more job summaries to list.</p>
     */
    inline void SetJobSummaries(Aws::Vector<JobSummary>&& value) { m_jobSummaries = std::move(value); }

    /**
     * <p>One or more job summaries to list.</p>
     */
    inline ListBulkImportJobsResult& WithJobSummaries(const Aws::Vector<JobSummary>& value) { SetJobSummaries(value); return *this;}

    /**
     * <p>One or more job summaries to list.</p>
     */
    inline ListBulkImportJobsResult& WithJobSummaries(Aws::Vector<JobSummary>&& value) { SetJobSummaries(std::move(value)); return *this;}

    /**
     * <p>One or more job summaries to list.</p>
     */
    inline ListBulkImportJobsResult& AddJobSummaries(const JobSummary& value) { m_jobSummaries.push_back(value); return *this; }

    /**
     * <p>One or more job summaries to list.</p>
     */
    inline ListBulkImportJobsResult& AddJobSummaries(JobSummary&& value) { m_jobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListBulkImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListBulkImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListBulkImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobSummary> m_jobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
