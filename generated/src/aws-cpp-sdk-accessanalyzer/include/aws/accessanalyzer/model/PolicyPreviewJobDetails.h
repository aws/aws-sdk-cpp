/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ImpactAnalysisJobStatus.h>
#include <aws/accessanalyzer/model/JobError.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccessAnalyzer {
namespace Model {

/**
 * <p>Contains details about the execution of a policy preview job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/PolicyPreviewJobDetails">AWS
 * API Reference</a></p>
 */
class PolicyPreviewJobDetails {
 public:
  AWS_ACCESSANALYZER_API PolicyPreviewJobDetails() = default;
  AWS_ACCESSANALYZER_API PolicyPreviewJobDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCESSANALYZER_API PolicyPreviewJobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the job. Possible values are:</p> <ul> <li> <p>
   * <code>SUBMITTED</code> - The job has been submitted but not yet started.</p>
   * </li> <li> <p> <code>IN_PROGRESS</code> - The job is currently executing.</p>
   * </li> <li> <p> <code>COMPLETED</code> - The job completed successfully.</p>
   * </li> <li> <p> <code>FAILED</code> - The job failed with an error.</p> </li>
   * <li> <p> <code>CANCELED</code> - The job was canceled by the user.</p> </li>
   * </ul>
   */
  inline ImpactAnalysisJobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(ImpactAnalysisJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline PolicyPreviewJobDetails& WithJobStatus(ImpactAnalysisJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the job was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  PolicyPreviewJobDetails& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the job execution started. This field is not populated
   * until the job begins processing.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  PolicyPreviewJobDetails& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the job completed. This field is populated only when the
   * job reaches a terminal state (COMPLETED, FAILED, or CANCELED).</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  PolicyPreviewJobDetails& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information about the error that caused the job to fail. This field
   * is populated only when the job status is FAILED.</p>
   */
  inline const JobError& GetJobError() const { return m_jobError; }
  inline bool JobErrorHasBeenSet() const { return m_jobErrorHasBeenSet; }
  template <typename JobErrorT = JobError>
  void SetJobError(JobErrorT&& value) {
    m_jobErrorHasBeenSet = true;
    m_jobError = std::forward<JobErrorT>(value);
  }
  template <typename JobErrorT = JobError>
  PolicyPreviewJobDetails& WithJobError(JobErrorT&& value) {
    SetJobError(std::forward<JobErrorT>(value));
    return *this;
  }
  ///@}
 private:
  ImpactAnalysisJobStatus m_jobStatus{ImpactAnalysisJobStatus::NOT_SET};

  Aws::Utils::DateTime m_submittedAt{};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_completedAt{};

  JobError m_jobError;
  bool m_jobStatusHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_jobErrorHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
