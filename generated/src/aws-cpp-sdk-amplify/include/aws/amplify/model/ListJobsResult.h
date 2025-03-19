/**
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
    AWS_AMPLIFY_API ListJobsResult() = default;
    AWS_AMPLIFY_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result structure for the list job result request. </p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaries() const { return m_jobSummaries; }
    template<typename JobSummariesT = Aws::Vector<JobSummary>>
    void SetJobSummaries(JobSummariesT&& value) { m_jobSummariesHasBeenSet = true; m_jobSummaries = std::forward<JobSummariesT>(value); }
    template<typename JobSummariesT = Aws::Vector<JobSummary>>
    ListJobsResult& WithJobSummaries(JobSummariesT&& value) { SetJobSummaries(std::forward<JobSummariesT>(value)); return *this;}
    template<typename JobSummariesT = JobSummary>
    ListJobsResult& AddJobSummaries(JobSummariesT&& value) { m_jobSummariesHasBeenSet = true; m_jobSummaries.emplace_back(std::forward<JobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. If non-null the pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobSummary> m_jobSummaries;
    bool m_jobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
