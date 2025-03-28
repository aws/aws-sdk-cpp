/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/FrontOfQueueJobSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains a list of the first 100 <code>RUNNABLE</code> jobs associated to a
   * single job queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/FrontOfQueueDetail">AWS
   * API Reference</a></p>
   */
  class FrontOfQueueDetail
  {
  public:
    AWS_BATCH_API FrontOfQueueDetail() = default;
    AWS_BATCH_API FrontOfQueueDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API FrontOfQueueDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the first 100 <code>RUNNABLE</code> jobs
     * in a named job queue. For first-in-first-out (FIFO) job queues, jobs are ordered
     * based on their submission time. For fair-share scheduling (FSS) job queues, jobs
     * are ordered based on their job priority and share usage.</p>
     */
    inline const Aws::Vector<FrontOfQueueJobSummary>& GetJobs() const { return m_jobs; }
    inline bool JobsHasBeenSet() const { return m_jobsHasBeenSet; }
    template<typename JobsT = Aws::Vector<FrontOfQueueJobSummary>>
    void SetJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs = std::forward<JobsT>(value); }
    template<typename JobsT = Aws::Vector<FrontOfQueueJobSummary>>
    FrontOfQueueDetail& WithJobs(JobsT&& value) { SetJobs(std::forward<JobsT>(value)); return *this;}
    template<typename JobsT = FrontOfQueueJobSummary>
    FrontOfQueueDetail& AddJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs.emplace_back(std::forward<JobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when each of the first 100
     * <code>RUNNABLE</code> jobs were last updated. </p>
     */
    inline long long GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(long long value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline FrontOfQueueDetail& WithLastUpdatedAt(long long value) { SetLastUpdatedAt(value); return *this;}
    ///@}
  private:

    Aws::Vector<FrontOfQueueJobSummary> m_jobs;
    bool m_jobsHasBeenSet = false;

    long long m_lastUpdatedAt{0};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
