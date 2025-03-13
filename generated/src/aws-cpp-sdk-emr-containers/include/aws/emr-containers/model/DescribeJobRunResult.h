/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/JobRun.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeJobRunResult
  {
  public:
    AWS_EMRCONTAINERS_API DescribeJobRunResult() = default;
    AWS_EMRCONTAINERS_API DescribeJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DescribeJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The output displays information about a job run.</p>
     */
    inline const JobRun& GetJobRun() const { return m_jobRun; }
    template<typename JobRunT = JobRun>
    void SetJobRun(JobRunT&& value) { m_jobRunHasBeenSet = true; m_jobRun = std::forward<JobRunT>(value); }
    template<typename JobRunT = JobRun>
    DescribeJobRunResult& WithJobRun(JobRunT&& value) { SetJobRun(std::forward<JobRunT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JobRun m_jobRun;
    bool m_jobRunHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
