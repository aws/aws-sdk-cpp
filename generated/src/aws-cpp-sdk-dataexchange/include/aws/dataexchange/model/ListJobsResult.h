/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/JobEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListJobsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListJobsResult();
    AWS_DATAEXCHANGE_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The jobs listed by the request.</p>
     */
    inline const Aws::Vector<JobEntry>& GetJobs() const{ return m_jobs; }

    /**
     * <p>The jobs listed by the request.</p>
     */
    inline void SetJobs(const Aws::Vector<JobEntry>& value) { m_jobs = value; }

    /**
     * <p>The jobs listed by the request.</p>
     */
    inline void SetJobs(Aws::Vector<JobEntry>&& value) { m_jobs = std::move(value); }

    /**
     * <p>The jobs listed by the request.</p>
     */
    inline ListJobsResult& WithJobs(const Aws::Vector<JobEntry>& value) { SetJobs(value); return *this;}

    /**
     * <p>The jobs listed by the request.</p>
     */
    inline ListJobsResult& WithJobs(Aws::Vector<JobEntry>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>The jobs listed by the request.</p>
     */
    inline ListJobsResult& AddJobs(const JobEntry& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>The jobs listed by the request.</p>
     */
    inline ListJobsResult& AddJobs(JobEntry&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobEntry> m_jobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
