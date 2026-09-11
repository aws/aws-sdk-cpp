/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchRequest.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Batch {
namespace Model {

/**
 * <p>Specifies the jobs to terminate and the reason for the
 * termination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TerminateJobsRequest">AWS
 * API Reference</a></p>
 */
class TerminateJobsRequest : public BatchRequest {
 public:
  AWS_BATCH_API TerminateJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "TerminateJobs"; }

  AWS_BATCH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>An array of up to 50 Batch job IDs of the jobs to terminate.</p>
   */
  inline const Aws::Vector<Aws::String>& GetJobs() const { return m_jobs; }
  inline bool JobsHasBeenSet() const { return m_jobsHasBeenSet; }
  template <typename JobsT = Aws::Vector<Aws::String>>
  void SetJobs(JobsT&& value) {
    m_jobsHasBeenSet = true;
    m_jobs = std::forward<JobsT>(value);
  }
  template <typename JobsT = Aws::Vector<Aws::String>>
  TerminateJobsRequest& WithJobs(JobsT&& value) {
    SetJobs(std::forward<JobsT>(value));
    return *this;
  }
  template <typename JobsT = Aws::String>
  TerminateJobsRequest& AddJobs(JobsT&& value) {
    m_jobsHasBeenSet = true;
    m_jobs.emplace_back(std::forward<JobsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message to attach to the job that explains the reason for terminating it.
   * This message is returned by future <a>DescribeJobs</a> operations on the job. It
   * is also recorded in the Batch activity logs.</p> <p>This parameter has a limit
   * of 1024 characters.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  TerminateJobsRequest& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_jobs;

  Aws::String m_reason;
  bool m_jobsHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
