/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchUpdateJobItem.h>

#include <utility>

namespace Aws {
namespace deadline {
namespace Model {

/**
 */
class BatchUpdateJobRequest : public DeadlineRequest {
 public:
  AWS_DEADLINE_API BatchUpdateJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateJob"; }

  AWS_DEADLINE_API Aws::String SerializePayload() const override;

  AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique token which the server uses to recognize retries of the same
   * request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchUpdateJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of jobs to update. You can specify up to 100 jobs per request.</p>
   */
  inline const Aws::Vector<BatchUpdateJobItem>& GetJobs() const { return m_jobs; }
  inline bool JobsHasBeenSet() const { return m_jobsHasBeenSet; }
  template <typename JobsT = Aws::Vector<BatchUpdateJobItem>>
  void SetJobs(JobsT&& value) {
    m_jobsHasBeenSet = true;
    m_jobs = std::forward<JobsT>(value);
  }
  template <typename JobsT = Aws::Vector<BatchUpdateJobItem>>
  BatchUpdateJobRequest& WithJobs(JobsT&& value) {
    SetJobs(std::forward<JobsT>(value));
    return *this;
  }
  template <typename JobsT = BatchUpdateJobItem>
  BatchUpdateJobRequest& AddJobs(JobsT&& value) {
    m_jobsHasBeenSet = true;
    m_jobs.emplace_back(std::forward<JobsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<BatchUpdateJobItem> m_jobs;
  bool m_clientTokenHasBeenSet = true;
  bool m_jobsHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
