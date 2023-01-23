/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/JobRun.h>
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
namespace EMRContainers
{
namespace Model
{
  class ListJobRunsResult
  {
  public:
    AWS_EMRCONTAINERS_API ListJobRunsResult();
    AWS_EMRCONTAINERS_API ListJobRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API ListJobRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This output lists information about the specified job runs.</p>
     */
    inline const Aws::Vector<JobRun>& GetJobRuns() const{ return m_jobRuns; }

    /**
     * <p>This output lists information about the specified job runs.</p>
     */
    inline void SetJobRuns(const Aws::Vector<JobRun>& value) { m_jobRuns = value; }

    /**
     * <p>This output lists information about the specified job runs.</p>
     */
    inline void SetJobRuns(Aws::Vector<JobRun>&& value) { m_jobRuns = std::move(value); }

    /**
     * <p>This output lists information about the specified job runs.</p>
     */
    inline ListJobRunsResult& WithJobRuns(const Aws::Vector<JobRun>& value) { SetJobRuns(value); return *this;}

    /**
     * <p>This output lists information about the specified job runs.</p>
     */
    inline ListJobRunsResult& WithJobRuns(Aws::Vector<JobRun>&& value) { SetJobRuns(std::move(value)); return *this;}

    /**
     * <p>This output lists information about the specified job runs.</p>
     */
    inline ListJobRunsResult& AddJobRuns(const JobRun& value) { m_jobRuns.push_back(value); return *this; }

    /**
     * <p>This output lists information about the specified job runs.</p>
     */
    inline ListJobRunsResult& AddJobRuns(JobRun&& value) { m_jobRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>This output displays the token for the next set of job runs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>This output displays the token for the next set of job runs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>This output displays the token for the next set of job runs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>This output displays the token for the next set of job runs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>This output displays the token for the next set of job runs.</p>
     */
    inline ListJobRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>This output displays the token for the next set of job runs.</p>
     */
    inline ListJobRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>This output displays the token for the next set of job runs.</p>
     */
    inline ListJobRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobRun> m_jobRuns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
