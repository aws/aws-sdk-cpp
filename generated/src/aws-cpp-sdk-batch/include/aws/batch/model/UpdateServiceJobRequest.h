/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchRequest.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Batch {
namespace Model {

/**
 */
class UpdateServiceJobRequest : public BatchRequest {
 public:
  AWS_BATCH_API UpdateServiceJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceJob"; }

  AWS_BATCH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Batch job ID of the job to update.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  UpdateServiceJobRequest& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scheduling priority for the job. This only affects jobs in job queues
   * with a quota-share or fair-share scheduling policy. Jobs with a higher
   * scheduling priority are scheduled before jobs with a lower scheduling priority
   * within a share.</p> <p>The minimum supported value is 0 and the maximum
   * supported value is 9999.</p>
   */
  inline int GetSchedulingPriority() const { return m_schedulingPriority; }
  inline bool SchedulingPriorityHasBeenSet() const { return m_schedulingPriorityHasBeenSet; }
  inline void SetSchedulingPriority(int value) {
    m_schedulingPriorityHasBeenSet = true;
    m_schedulingPriority = value;
  }
  inline UpdateServiceJobRequest& WithSchedulingPriority(int value) {
    SetSchedulingPriority(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  int m_schedulingPriority{0};
  bool m_jobIdHasBeenSet = false;
  bool m_schedulingPriorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
