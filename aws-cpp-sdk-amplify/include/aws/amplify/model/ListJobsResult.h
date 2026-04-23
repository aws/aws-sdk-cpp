/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> Maximum number of records to list in a single response. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListJobsResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API ListJobsResult
  {
  public:
    ListJobsResult();
    ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Result structure for list job result request. </p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaries() const{ return m_jobSummaries; }

    /**
     * <p> Result structure for list job result request. </p>
     */
    inline void SetJobSummaries(const Aws::Vector<JobSummary>& value) { m_jobSummaries = value; }

    /**
     * <p> Result structure for list job result request. </p>
     */
    inline void SetJobSummaries(Aws::Vector<JobSummary>&& value) { m_jobSummaries = std::move(value); }

    /**
     * <p> Result structure for list job result request. </p>
     */
    inline ListJobsResult& WithJobSummaries(const Aws::Vector<JobSummary>& value) { SetJobSummaries(value); return *this;}

    /**
     * <p> Result structure for list job result request. </p>
     */
    inline ListJobsResult& WithJobSummaries(Aws::Vector<JobSummary>&& value) { SetJobSummaries(std::move(value)); return *this;}

    /**
     * <p> Result structure for list job result request. </p>
     */
    inline ListJobsResult& AddJobSummaries(const JobSummary& value) { m_jobSummaries.push_back(value); return *this; }

    /**
     * <p> Result structure for list job result request. </p>
     */
    inline ListJobsResult& AddJobSummaries(JobSummary&& value) { m_jobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobSummary> m_jobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
