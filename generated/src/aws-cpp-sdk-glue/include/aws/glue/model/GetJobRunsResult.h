/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JobRun.h>
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
namespace Glue
{
namespace Model
{
  class GetJobRunsResult
  {
  public:
    AWS_GLUE_API GetJobRunsResult();
    AWS_GLUE_API GetJobRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetJobRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of job-run metadata objects.</p>
     */
    inline const Aws::Vector<JobRun>& GetJobRuns() const{ return m_jobRuns; }

    /**
     * <p>A list of job-run metadata objects.</p>
     */
    inline void SetJobRuns(const Aws::Vector<JobRun>& value) { m_jobRuns = value; }

    /**
     * <p>A list of job-run metadata objects.</p>
     */
    inline void SetJobRuns(Aws::Vector<JobRun>&& value) { m_jobRuns = std::move(value); }

    /**
     * <p>A list of job-run metadata objects.</p>
     */
    inline GetJobRunsResult& WithJobRuns(const Aws::Vector<JobRun>& value) { SetJobRuns(value); return *this;}

    /**
     * <p>A list of job-run metadata objects.</p>
     */
    inline GetJobRunsResult& WithJobRuns(Aws::Vector<JobRun>&& value) { SetJobRuns(std::move(value)); return *this;}

    /**
     * <p>A list of job-run metadata objects.</p>
     */
    inline GetJobRunsResult& AddJobRuns(const JobRun& value) { m_jobRuns.push_back(value); return *this; }

    /**
     * <p>A list of job-run metadata objects.</p>
     */
    inline GetJobRunsResult& AddJobRuns(JobRun&& value) { m_jobRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if not all requested job runs have been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if not all requested job runs have been returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if not all requested job runs have been returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if not all requested job runs have been returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if not all requested job runs have been returned.</p>
     */
    inline GetJobRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if not all requested job runs have been returned.</p>
     */
    inline GetJobRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if not all requested job runs have been returned.</p>
     */
    inline GetJobRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetJobRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetJobRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetJobRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<JobRun> m_jobRuns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
