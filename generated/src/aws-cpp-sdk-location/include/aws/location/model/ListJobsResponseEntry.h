/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/JobAction.h>
#include <aws/location/model/JobActionOptions.h>
#include <aws/location/model/JobError.h>
#include <aws/location/model/JobInputOptions.h>
#include <aws/location/model/JobOutputOptions.h>
#include <aws/location/model/JobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LocationService {
namespace Model {

/**
 * <p>Job summary information returned in list operations.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListJobsResponseEntry">AWS
 * API Reference</a></p>
 */
class ListJobsResponseEntry {
 public:
  AWS_LOCATIONSERVICE_API ListJobsResponseEntry() = default;
  AWS_LOCATIONSERVICE_API ListJobsResponseEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API ListJobsResponseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Action performed by the job.</p>
   */
  inline JobAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(JobAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ListJobsResponseEntry& WithAction(JobAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional options for configuring job action parameters.</p>
   */
  inline const JobActionOptions& GetActionOptions() const { return m_actionOptions; }
  inline bool ActionOptionsHasBeenSet() const { return m_actionOptionsHasBeenSet; }
  template <typename ActionOptionsT = JobActionOptions>
  void SetActionOptions(ActionOptionsT&& value) {
    m_actionOptionsHasBeenSet = true;
    m_actionOptions = std::forward<ActionOptionsT>(value);
  }
  template <typename ActionOptionsT = JobActionOptions>
  ListJobsResponseEntry& WithActionOptions(ActionOptionsT&& value) {
    SetActionOptions(std::forward<ActionOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Job creation time in <a
   * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
   * format: <code>YYYY-MM-DDThh:mm:ss.sss</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ListJobsResponseEntry& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role used for job execution.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  ListJobsResponseEntry& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Job completion time in <a
   * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
   * format: <code>YYYY-MM-DDThh:mm:ss.sss</code>. Only returned for jobs in a
   * terminal status: <code>Completed</code> | <code>Failed</code> |
   * <code>Cancelled</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  ListJobsResponseEntry& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information if the job failed.</p>
   */
  inline const JobError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = JobError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = JobError>
  ListJobsResponseEntry& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input configuration.</p>
   */
  inline const JobInputOptions& GetInputOptions() const { return m_inputOptions; }
  inline bool InputOptionsHasBeenSet() const { return m_inputOptionsHasBeenSet; }
  template <typename InputOptionsT = JobInputOptions>
  void SetInputOptions(InputOptionsT&& value) {
    m_inputOptionsHasBeenSet = true;
    m_inputOptions = std::forward<InputOptionsT>(value);
  }
  template <typename InputOptionsT = JobInputOptions>
  ListJobsResponseEntry& WithInputOptions(InputOptionsT&& value) {
    SetInputOptions(std::forward<InputOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique job identifier.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  ListJobsResponseEntry& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the job.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  ListJobsResponseEntry& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Job name (if provided during creation).</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListJobsResponseEntry& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output configuration.</p>
   */
  inline const JobOutputOptions& GetOutputOptions() const { return m_outputOptions; }
  inline bool OutputOptionsHasBeenSet() const { return m_outputOptionsHasBeenSet; }
  template <typename OutputOptionsT = JobOutputOptions>
  void SetOutputOptions(OutputOptionsT&& value) {
    m_outputOptionsHasBeenSet = true;
    m_outputOptions = std::forward<OutputOptionsT>(value);
  }
  template <typename OutputOptionsT = JobOutputOptions>
  ListJobsResponseEntry& WithOutputOptions(OutputOptionsT&& value) {
    SetOutputOptions(std::forward<OutputOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current job status.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListJobsResponseEntry& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last update time in <a
   * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
   * format: <code>YYYY-MM-DDThh:mm:ss.sss</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ListJobsResponseEntry& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  JobAction m_action{JobAction::NOT_SET};

  JobActionOptions m_actionOptions;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_executionRoleArn;

  Aws::Utils::DateTime m_endedAt{};

  JobError m_error;

  JobInputOptions m_inputOptions;

  Aws::String m_jobId;

  Aws::String m_jobArn;

  Aws::String m_name;

  JobOutputOptions m_outputOptions;

  JobStatus m_status{JobStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_actionHasBeenSet = false;
  bool m_actionOptionsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_inputOptionsHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_jobArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_outputOptionsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
