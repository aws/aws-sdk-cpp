/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/JobRun.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class ListJobRunsResult
  {
  public:
    AWS_GLUEDATABREW_API ListJobRunsResult();
    AWS_GLUEDATABREW_API ListJobRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API ListJobRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of job runs that have occurred for the specified job.</p>
     */
    inline const Aws::Vector<JobRun>& GetJobRuns() const{ return m_jobRuns; }

    /**
     * <p>A list of job runs that have occurred for the specified job.</p>
     */
    inline void SetJobRuns(const Aws::Vector<JobRun>& value) { m_jobRuns = value; }

    /**
     * <p>A list of job runs that have occurred for the specified job.</p>
     */
    inline void SetJobRuns(Aws::Vector<JobRun>&& value) { m_jobRuns = std::move(value); }

    /**
     * <p>A list of job runs that have occurred for the specified job.</p>
     */
    inline ListJobRunsResult& WithJobRuns(const Aws::Vector<JobRun>& value) { SetJobRuns(value); return *this;}

    /**
     * <p>A list of job runs that have occurred for the specified job.</p>
     */
    inline ListJobRunsResult& WithJobRuns(Aws::Vector<JobRun>&& value) { SetJobRuns(std::move(value)); return *this;}

    /**
     * <p>A list of job runs that have occurred for the specified job.</p>
     */
    inline ListJobRunsResult& AddJobRuns(const JobRun& value) { m_jobRuns.push_back(value); return *this; }

    /**
     * <p>A list of job runs that have occurred for the specified job.</p>
     */
    inline ListJobRunsResult& AddJobRuns(JobRun&& value) { m_jobRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListJobRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListJobRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListJobRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobRun> m_jobRuns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
