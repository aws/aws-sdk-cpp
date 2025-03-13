/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-jobs-data/model/JobExecutionSummary.h>
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
namespace IoTJobsDataPlane
{
namespace Model
{
  class GetPendingJobExecutionsResult
  {
  public:
    AWS_IOTJOBSDATAPLANE_API GetPendingJobExecutionsResult() = default;
    AWS_IOTJOBSDATAPLANE_API GetPendingJobExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTJOBSDATAPLANE_API GetPendingJobExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of JobExecutionSummary objects with status IN_PROGRESS.</p>
     */
    inline const Aws::Vector<JobExecutionSummary>& GetInProgressJobs() const { return m_inProgressJobs; }
    template<typename InProgressJobsT = Aws::Vector<JobExecutionSummary>>
    void SetInProgressJobs(InProgressJobsT&& value) { m_inProgressJobsHasBeenSet = true; m_inProgressJobs = std::forward<InProgressJobsT>(value); }
    template<typename InProgressJobsT = Aws::Vector<JobExecutionSummary>>
    GetPendingJobExecutionsResult& WithInProgressJobs(InProgressJobsT&& value) { SetInProgressJobs(std::forward<InProgressJobsT>(value)); return *this;}
    template<typename InProgressJobsT = JobExecutionSummary>
    GetPendingJobExecutionsResult& AddInProgressJobs(InProgressJobsT&& value) { m_inProgressJobsHasBeenSet = true; m_inProgressJobs.emplace_back(std::forward<InProgressJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of JobExecutionSummary objects with status QUEUED.</p>
     */
    inline const Aws::Vector<JobExecutionSummary>& GetQueuedJobs() const { return m_queuedJobs; }
    template<typename QueuedJobsT = Aws::Vector<JobExecutionSummary>>
    void SetQueuedJobs(QueuedJobsT&& value) { m_queuedJobsHasBeenSet = true; m_queuedJobs = std::forward<QueuedJobsT>(value); }
    template<typename QueuedJobsT = Aws::Vector<JobExecutionSummary>>
    GetPendingJobExecutionsResult& WithQueuedJobs(QueuedJobsT&& value) { SetQueuedJobs(std::forward<QueuedJobsT>(value)); return *this;}
    template<typename QueuedJobsT = JobExecutionSummary>
    GetPendingJobExecutionsResult& AddQueuedJobs(QueuedJobsT&& value) { m_queuedJobsHasBeenSet = true; m_queuedJobs.emplace_back(std::forward<QueuedJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPendingJobExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobExecutionSummary> m_inProgressJobs;
    bool m_inProgressJobsHasBeenSet = false;

    Aws::Vector<JobExecutionSummary> m_queuedJobs;
    bool m_queuedJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
