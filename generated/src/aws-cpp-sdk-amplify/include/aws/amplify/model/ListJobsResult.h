﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/JobSummary.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p>The maximum number of records to list in a single response. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListJobsResult">AWS
   * API Reference</a></p>
   */
  class ListJobsResult
  {
  public:
    AWS_AMPLIFY_API ListJobsResult();
    AWS_AMPLIFY_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result structure for the list job result request. </p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaries() const{ return m_jobSummaries; }
    inline void SetJobSummaries(const Aws::Vector<JobSummary>& value) { m_jobSummaries = value; }
    inline void SetJobSummaries(Aws::Vector<JobSummary>&& value) { m_jobSummaries = std::move(value); }
    inline ListJobsResult& WithJobSummaries(const Aws::Vector<JobSummary>& value) { SetJobSummaries(value); return *this;}
    inline ListJobsResult& WithJobSummaries(Aws::Vector<JobSummary>&& value) { SetJobSummaries(std::move(value)); return *this;}
    inline ListJobsResult& AddJobSummaries(const JobSummary& value) { m_jobSummaries.push_back(value); return *this; }
    inline ListJobsResult& AddJobSummaries(JobSummary&& value) { m_jobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. If non-null the pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobSummary> m_jobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
