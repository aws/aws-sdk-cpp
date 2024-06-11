﻿/**
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


    ///@{
    /**
     * <p>A list of job execution summaries.</p>
     */
    inline const Aws::Vector<JobExecutionSummaryForJob>& GetExecutionSummaries() const{ return m_executionSummaries; }
    inline void SetExecutionSummaries(const Aws::Vector<JobExecutionSummaryForJob>& value) { m_executionSummaries = value; }
    inline void SetExecutionSummaries(Aws::Vector<JobExecutionSummaryForJob>&& value) { m_executionSummaries = std::move(value); }
    inline ListJobExecutionsForJobResult& WithExecutionSummaries(const Aws::Vector<JobExecutionSummaryForJob>& value) { SetExecutionSummaries(value); return *this;}
    inline ListJobExecutionsForJobResult& WithExecutionSummaries(Aws::Vector<JobExecutionSummaryForJob>&& value) { SetExecutionSummaries(std::move(value)); return *this;}
    inline ListJobExecutionsForJobResult& AddExecutionSummaries(const JobExecutionSummaryForJob& value) { m_executionSummaries.push_back(value); return *this; }
    inline ListJobExecutionsForJobResult& AddExecutionSummaries(JobExecutionSummaryForJob&& value) { m_executionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJobExecutionsForJobResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobExecutionsForJobResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobExecutionsForJobResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobExecutionsForJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobExecutionsForJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobExecutionsForJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobExecutionSummaryForJob> m_executionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
