/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobExecutionSummaryForJob.h>
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
namespace IoT
{
namespace Model
{
  class ListJobExecutionsForJobResult
  {
  public:
    AWS_IOT_API ListJobExecutionsForJobResult();
    AWS_IOT_API ListJobExecutionsForJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListJobExecutionsForJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of job execution summaries.</p>
     */
    inline const Aws::Vector<JobExecutionSummaryForJob>& GetExecutionSummaries() const{ return m_executionSummaries; }

    /**
     * <p>A list of job execution summaries.</p>
     */
    inline void SetExecutionSummaries(const Aws::Vector<JobExecutionSummaryForJob>& value) { m_executionSummaries = value; }

    /**
     * <p>A list of job execution summaries.</p>
     */
    inline void SetExecutionSummaries(Aws::Vector<JobExecutionSummaryForJob>&& value) { m_executionSummaries = std::move(value); }

    /**
     * <p>A list of job execution summaries.</p>
     */
    inline ListJobExecutionsForJobResult& WithExecutionSummaries(const Aws::Vector<JobExecutionSummaryForJob>& value) { SetExecutionSummaries(value); return *this;}

    /**
     * <p>A list of job execution summaries.</p>
     */
    inline ListJobExecutionsForJobResult& WithExecutionSummaries(Aws::Vector<JobExecutionSummaryForJob>&& value) { SetExecutionSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of job execution summaries.</p>
     */
    inline ListJobExecutionsForJobResult& AddExecutionSummaries(const JobExecutionSummaryForJob& value) { m_executionSummaries.push_back(value); return *this; }

    /**
     * <p>A list of job execution summaries.</p>
     */
    inline ListJobExecutionsForJobResult& AddExecutionSummaries(JobExecutionSummaryForJob&& value) { m_executionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListJobExecutionsForJobResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListJobExecutionsForJobResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListJobExecutionsForJobResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobExecutionSummaryForJob> m_executionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
