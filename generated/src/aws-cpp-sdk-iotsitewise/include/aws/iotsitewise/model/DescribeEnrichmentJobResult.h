/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EnrichmentJobConfiguration.h>
#include <aws/iotsitewise/model/EnrichmentJobStatus.h>
#include <aws/iotsitewise/model/JobType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
class DescribeEnrichmentJobResult {
 public:
  AWS_IOTSITEWISE_API DescribeEnrichmentJobResult() = default;
  AWS_IOTSITEWISE_API DescribeEnrichmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API DescribeEnrichmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the enrichment job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  DescribeEnrichmentJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the enrichment job. Possible values:</p> <ul> <li>PENDING:
   * Job is waiting to start processing</li> <li>RUNNING: Job is actively processing
   * video data</li> <li>COMPLETED: Job finished successfully; embeddings available
   * in IoT SiteWise</li> <li>FAILED: Job encountered an error; see failureMessage
   * for details</li> <li>TIMED_OUT: Job exceeded maximum processing time limit</li>
   * <li>CANCELLED: Job was cancelled by user request</li> </ul>
   */
  inline EnrichmentJobStatus GetStatus() const { return m_status; }
  inline void SetStatus(EnrichmentJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeEnrichmentJobResult& WithStatus(EnrichmentJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the IoT SiteWise workspace containing the job.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  DescribeEnrichmentJobResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of enrichment job, derived from the job configuration. Currently
   * EVENT_DETECTION is the only supported type.</p>
   */
  inline JobType GetJobType() const { return m_jobType; }
  inline void SetJobType(JobType value) {
    m_jobTypeHasBeenSet = true;
    m_jobType = value;
  }
  inline DescribeEnrichmentJobResult& WithJobType(JobType value) {
    SetJobType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The complete job configuration as originally submitted, including the
   * analysis type and parameters. For event detection jobs, this includes the
   * dataset ID, time series identifier, and trim settings defining the analysis time
   * range.</p>
   */
  inline const EnrichmentJobConfiguration& GetJobConfiguration() const { return m_jobConfiguration; }
  template <typename JobConfigurationT = EnrichmentJobConfiguration>
  void SetJobConfiguration(JobConfigurationT&& value) {
    m_jobConfigurationHasBeenSet = true;
    m_jobConfiguration = std::forward<JobConfigurationT>(value);
  }
  template <typename JobConfigurationT = EnrichmentJobConfiguration>
  DescribeEnrichmentJobResult& WithJobConfiguration(JobConfigurationT&& value) {
    SetJobConfiguration(std::forward<JobConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the enrichment job was created in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DescribeEnrichmentJobResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the job status was last updated in ISO 8601 format. Useful for
   * tracking recent activity.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DescribeEnrichmentJobResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the job completed successfully in ISO 8601 format. Only
   * present if status is COMPLETED.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  DescribeEnrichmentJobResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the job was cancelled in ISO 8601 format. Only present if
   * status is CANCELLED.</p>
   */
  inline const Aws::Utils::DateTime& GetCancelledAt() const { return m_cancelledAt; }
  template <typename CancelledAtT = Aws::Utils::DateTime>
  void SetCancelledAt(CancelledAtT&& value) {
    m_cancelledAtHasBeenSet = true;
    m_cancelledAt = std::forward<CancelledAtT>(value);
  }
  template <typename CancelledAtT = Aws::Utils::DateTime>
  DescribeEnrichmentJobResult& WithCancelledAt(CancelledAtT&& value) {
    SetCancelledAt(std::forward<CancelledAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable error message explaining why the job failed. Only present if
   * status is FAILED. Use this information to diagnose configuration issues,
   * permission problems, or data processing errors.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  DescribeEnrichmentJobResult& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
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
  DescribeEnrichmentJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_jobId;

  EnrichmentJobStatus m_status{EnrichmentJobStatus::NOT_SET};

  Aws::String m_workspaceName;

  JobType m_jobType{JobType::NOT_SET};

  EnrichmentJobConfiguration m_jobConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::Utils::DateTime m_cancelledAt{};

  Aws::String m_failureMessage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_jobTypeHasBeenSet = false;
  bool m_jobConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_cancelledAtHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
