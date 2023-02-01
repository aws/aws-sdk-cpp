/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_IOTJOBSDATAPLANE_API GetPendingJobExecutionsResult();
    AWS_IOTJOBSDATAPLANE_API GetPendingJobExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTJOBSDATAPLANE_API GetPendingJobExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of JobExecutionSummary objects with status IN_PROGRESS.</p>
     */
    inline const Aws::Vector<JobExecutionSummary>& GetInProgressJobs() const{ return m_inProgressJobs; }

    /**
     * <p>A list of JobExecutionSummary objects with status IN_PROGRESS.</p>
     */
    inline void SetInProgressJobs(const Aws::Vector<JobExecutionSummary>& value) { m_inProgressJobs = value; }

    /**
     * <p>A list of JobExecutionSummary objects with status IN_PROGRESS.</p>
     */
    inline void SetInProgressJobs(Aws::Vector<JobExecutionSummary>&& value) { m_inProgressJobs = std::move(value); }

    /**
     * <p>A list of JobExecutionSummary objects with status IN_PROGRESS.</p>
     */
    inline GetPendingJobExecutionsResult& WithInProgressJobs(const Aws::Vector<JobExecutionSummary>& value) { SetInProgressJobs(value); return *this;}

    /**
     * <p>A list of JobExecutionSummary objects with status IN_PROGRESS.</p>
     */
    inline GetPendingJobExecutionsResult& WithInProgressJobs(Aws::Vector<JobExecutionSummary>&& value) { SetInProgressJobs(std::move(value)); return *this;}

    /**
     * <p>A list of JobExecutionSummary objects with status IN_PROGRESS.</p>
     */
    inline GetPendingJobExecutionsResult& AddInProgressJobs(const JobExecutionSummary& value) { m_inProgressJobs.push_back(value); return *this; }

    /**
     * <p>A list of JobExecutionSummary objects with status IN_PROGRESS.</p>
     */
    inline GetPendingJobExecutionsResult& AddInProgressJobs(JobExecutionSummary&& value) { m_inProgressJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of JobExecutionSummary objects with status QUEUED.</p>
     */
    inline const Aws::Vector<JobExecutionSummary>& GetQueuedJobs() const{ return m_queuedJobs; }

    /**
     * <p>A list of JobExecutionSummary objects with status QUEUED.</p>
     */
    inline void SetQueuedJobs(const Aws::Vector<JobExecutionSummary>& value) { m_queuedJobs = value; }

    /**
     * <p>A list of JobExecutionSummary objects with status QUEUED.</p>
     */
    inline void SetQueuedJobs(Aws::Vector<JobExecutionSummary>&& value) { m_queuedJobs = std::move(value); }

    /**
     * <p>A list of JobExecutionSummary objects with status QUEUED.</p>
     */
    inline GetPendingJobExecutionsResult& WithQueuedJobs(const Aws::Vector<JobExecutionSummary>& value) { SetQueuedJobs(value); return *this;}

    /**
     * <p>A list of JobExecutionSummary objects with status QUEUED.</p>
     */
    inline GetPendingJobExecutionsResult& WithQueuedJobs(Aws::Vector<JobExecutionSummary>&& value) { SetQueuedJobs(std::move(value)); return *this;}

    /**
     * <p>A list of JobExecutionSummary objects with status QUEUED.</p>
     */
    inline GetPendingJobExecutionsResult& AddQueuedJobs(const JobExecutionSummary& value) { m_queuedJobs.push_back(value); return *this; }

    /**
     * <p>A list of JobExecutionSummary objects with status QUEUED.</p>
     */
    inline GetPendingJobExecutionsResult& AddQueuedJobs(JobExecutionSummary&& value) { m_queuedJobs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<JobExecutionSummary> m_inProgressJobs;

    Aws::Vector<JobExecutionSummary> m_queuedJobs;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
