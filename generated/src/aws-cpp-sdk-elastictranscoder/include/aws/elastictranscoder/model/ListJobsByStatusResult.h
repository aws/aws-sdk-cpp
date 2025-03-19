/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Job.h>
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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p> The <code>ListJobsByStatusResponse</code> structure. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByStatusResponse">AWS
   * API Reference</a></p>
   */
  class ListJobsByStatusResult
  {
  public:
    AWS_ELASTICTRANSCODER_API ListJobsByStatusResult() = default;
    AWS_ELASTICTRANSCODER_API ListJobsByStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API ListJobsByStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Job</code> objects that have the specified status.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const { return m_jobs; }
    template<typename JobsT = Aws::Vector<Job>>
    void SetJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs = std::forward<JobsT>(value); }
    template<typename JobsT = Aws::Vector<Job>>
    ListJobsByStatusResult& WithJobs(JobsT&& value) { SetJobs(std::forward<JobsT>(value)); return *this;}
    template<typename JobsT = Job>
    ListJobsByStatusResult& AddJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs.emplace_back(std::forward<JobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A value that you use to access the second and subsequent pages of results,
     * if any. When the jobs in the specified pipeline fit on one page or when you've
     * reached the last page of results, the value of <code>NextPageToken</code> is
     * <code>null</code>. </p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListJobsByStatusResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobsByStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Job> m_jobs;
    bool m_jobsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
