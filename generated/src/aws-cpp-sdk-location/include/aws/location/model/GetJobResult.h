/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LocationService {
namespace Model {
class GetJobResult {
 public:
  AWS_LOCATIONSERVICE_API GetJobResult() = default;
  AWS_LOCATIONSERVICE_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LOCATIONSERVICE_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Action performed by the job.</p>
   */
  inline JobAction GetAction() const { return m_action; }
  inline void SetAction(JobAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline GetJobResult& WithAction(JobAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional options for configuring job action parameters.</p>
   */
  inline const JobActionOptions& GetActionOptions() const { return m_actionOptions; }
  template <typename ActionOptionsT = JobActionOptions>
  void SetActionOptions(ActionOptionsT&& value) {
    m_actionOptionsHasBeenSet = true;
    m_actionOptions = std::forward<ActionOptionsT>(value);
  }
  template <typename ActionOptionsT = JobActionOptions>
  GetJobResult& WithActionOptions(ActionOptionsT&& value) {
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
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetJobResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetJobResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information if the job failed.</p>
   */
  inline const JobError& GetError() const { return m_error; }
  template <typename ErrorT = JobError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = JobError>
  GetJobResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role used for permissions when running the job.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  GetJobResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input configuration.</p>
   */
  inline const JobInputOptions& GetInputOptions() const { return m_inputOptions; }
  template <typename InputOptionsT = JobInputOptions>
  void SetInputOptions(InputOptionsT&& value) {
    m_inputOptionsHasBeenSet = true;
    m_inputOptions = std::forward<InputOptionsT>(value);
  }
  template <typename InputOptionsT = JobInputOptions>
  GetJobResult& WithInputOptions(InputOptionsT&& value) {
    SetInputOptions(std::forward<InputOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the specified job.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  GetJobResult& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique job identifier.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Job name (if provided during creation).</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetJobResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output configuration.</p>
   */
  inline const JobOutputOptions& GetOutputOptions() const { return m_outputOptions; }
  template <typename OutputOptionsT = JobOutputOptions>
  void SetOutputOptions(OutputOptionsT&& value) {
    m_outputOptionsHasBeenSet = true;
    m_outputOptions = std::forward<OutputOptionsT>(value);
  }
  template <typename OutputOptionsT = JobOutputOptions>
  GetJobResult& WithOutputOptions(OutputOptionsT&& value) {
    SetOutputOptions(std::forward<OutputOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current job status.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetJobResult& WithStatus(JobStatus value) {
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
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetJobResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags and corresponding values associated with the specified job.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetJobResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  JobAction m_action{JobAction::NOT_SET};

  JobActionOptions m_actionOptions;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_endedAt{};

  JobError m_error;

  Aws::String m_executionRoleArn;

  JobInputOptions m_inputOptions;

  Aws::String m_jobArn;

  Aws::String m_jobId;

  Aws::String m_name;

  JobOutputOptions m_outputOptions;

  JobStatus m_status{JobStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_actionHasBeenSet = false;
  bool m_actionOptionsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_inputOptionsHasBeenSet = false;
  bool m_jobArnHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_outputOptionsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
