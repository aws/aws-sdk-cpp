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
    AWS_GLUE_API GetJobRunsResult() = default;
    AWS_GLUE_API GetJobRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetJobRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job-run metadata objects.</p>
     */
    inline const Aws::Vector<JobRun>& GetJobRuns() const { return m_jobRuns; }
    template<typename JobRunsT = Aws::Vector<JobRun>>
    void SetJobRuns(JobRunsT&& value) { m_jobRunsHasBeenSet = true; m_jobRuns = std::forward<JobRunsT>(value); }
    template<typename JobRunsT = Aws::Vector<JobRun>>
    GetJobRunsResult& WithJobRuns(JobRunsT&& value) { SetJobRuns(std::forward<JobRunsT>(value)); return *this;}
    template<typename JobRunsT = JobRun>
    GetJobRunsResult& AddJobRuns(JobRunsT&& value) { m_jobRunsHasBeenSet = true; m_jobRuns.emplace_back(std::forward<JobRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all requested job runs have been returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetJobRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobRun> m_jobRuns;
    bool m_jobRunsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
