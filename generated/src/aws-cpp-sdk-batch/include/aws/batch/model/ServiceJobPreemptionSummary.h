/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/ServiceJobPreemptedAttempt.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>Summarizes the preemptions of the service job. This field appears on a
 * service job when it has been preempted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceJobPreemptionSummary">AWS
 * API Reference</a></p>
 */
class ServiceJobPreemptionSummary {
 public:
  AWS_BATCH_API ServiceJobPreemptionSummary() = default;
  AWS_BATCH_API ServiceJobPreemptionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API ServiceJobPreemptionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of times the service job has been preempted.</p>
   */
  inline int GetPreemptedAttemptCount() const { return m_preemptedAttemptCount; }
  inline bool PreemptedAttemptCountHasBeenSet() const { return m_preemptedAttemptCountHasBeenSet; }
  inline void SetPreemptedAttemptCount(int value) {
    m_preemptedAttemptCountHasBeenSet = true;
    m_preemptedAttemptCount = value;
  }
  inline ServiceJobPreemptionSummary& WithPreemptedAttemptCount(int value) {
    SetPreemptedAttemptCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the most recent preemption attempts for the service job.</p>
   */
  inline const Aws::Vector<ServiceJobPreemptedAttempt>& GetRecentPreemptedAttempts() const { return m_recentPreemptedAttempts; }
  inline bool RecentPreemptedAttemptsHasBeenSet() const { return m_recentPreemptedAttemptsHasBeenSet; }
  template <typename RecentPreemptedAttemptsT = Aws::Vector<ServiceJobPreemptedAttempt>>
  void SetRecentPreemptedAttempts(RecentPreemptedAttemptsT&& value) {
    m_recentPreemptedAttemptsHasBeenSet = true;
    m_recentPreemptedAttempts = std::forward<RecentPreemptedAttemptsT>(value);
  }
  template <typename RecentPreemptedAttemptsT = Aws::Vector<ServiceJobPreemptedAttempt>>
  ServiceJobPreemptionSummary& WithRecentPreemptedAttempts(RecentPreemptedAttemptsT&& value) {
    SetRecentPreemptedAttempts(std::forward<RecentPreemptedAttemptsT>(value));
    return *this;
  }
  template <typename RecentPreemptedAttemptsT = ServiceJobPreemptedAttempt>
  ServiceJobPreemptionSummary& AddRecentPreemptedAttempts(RecentPreemptedAttemptsT&& value) {
    m_recentPreemptedAttemptsHasBeenSet = true;
    m_recentPreemptedAttempts.emplace_back(std::forward<RecentPreemptedAttemptsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_preemptedAttemptCount{0};

  Aws::Vector<ServiceJobPreemptedAttempt> m_recentPreemptedAttempts;
  bool m_preemptedAttemptCountHasBeenSet = false;
  bool m_recentPreemptedAttemptsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
