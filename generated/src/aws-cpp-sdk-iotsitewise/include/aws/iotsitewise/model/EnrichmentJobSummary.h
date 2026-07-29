/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EnrichmentJobStatus.h>
#include <aws/iotsitewise/model/JobType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Summary information for an enrichment job returned by ListEnrichmentJobs.
 * This lightweight representation includes identifiers, status, and key metadata
 * without the full job configuration.</p> <p>Use DescribeEnrichmentJob to
 * retrieve:</p> <ul> <li>Complete job configuration (trim settings, full
 * parameters)</li> <li>Detailed timestamps (completedAt, cancelledAt)</li>
 * <li>Failure messages for failed jobs</li> </ul> <p>The summary is optimized for
 * display in lists and dashboards, providing enough information to identify and
 * filter jobs without the overhead of full configuration details.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/EnrichmentJobSummary">AWS
 * API Reference</a></p>
 */
class EnrichmentJobSummary {
 public:
  AWS_IOTSITEWISE_API EnrichmentJobSummary() = default;
  AWS_IOTSITEWISE_API EnrichmentJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API EnrichmentJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier for the enrichment job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  EnrichmentJobSummary& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the job: PENDING, RUNNING, COMPLETED, FAILED, TIMED_OUT, or
   * CANCELLED. Use this to quickly identify active jobs or jobs requiring
   * attention.</p>
   */
  inline EnrichmentJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EnrichmentJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EnrichmentJobSummary& WithStatus(EnrichmentJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the IoT SiteWise workspace containing this job.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  EnrichmentJobSummary& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of enrichment job. Currently EVENT_DETECTION is the only supported
   * type.</p>
   */
  inline JobType GetJobType() const { return m_jobType; }
  inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
  inline void SetJobType(JobType value) {
    m_jobTypeHasBeenSet = true;
    m_jobType = value;
  }
  inline EnrichmentJobSummary& WithJobType(JobType value) {
    SetJobType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dataset being enriched. Useful for filtering and identifying jobs without
   * fetching the full configuration. This allows you to quickly find all jobs
   * related to a specific dataset.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  EnrichmentJobSummary& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The property alias (human-readable sensor name) of the time series being
   * enriched. Present when the job was created using a propertyAlias. Use this to
   * identify which sensor the job analyzes.</p>
   */
  inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
  inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
  template <typename PropertyAliasT = Aws::String>
  void SetPropertyAlias(PropertyAliasT&& value) {
    m_propertyAliasHasBeenSet = true;
    m_propertyAlias = std::forward<PropertyAliasT>(value);
  }
  template <typename PropertyAliasT = Aws::String>
  EnrichmentJobSummary& WithPropertyAlias(PropertyAliasT&& value) {
    SetPropertyAlias(std::forward<PropertyAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system identifier of the time series being enriched. Present when the job
   * was created using a timeSeriesId. Use this to identify which time series the job
   * analyzes.</p>
   */
  inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
  inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
  template <typename TimeSeriesIdT = Aws::String>
  void SetTimeSeriesId(TimeSeriesIdT&& value) {
    m_timeSeriesIdHasBeenSet = true;
    m_timeSeriesId = std::forward<TimeSeriesIdT>(value);
  }
  template <typename TimeSeriesIdT = Aws::String>
  EnrichmentJobSummary& WithTimeSeriesId(TimeSeriesIdT&& value) {
    SetTimeSeriesId(std::forward<TimeSeriesIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the job was created in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  EnrichmentJobSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp of the last job status change in ISO 8601 format. Use this to track
   * recent activity and identify stale jobs. For active jobs, this shows the last
   * time the job transitioned to a new status.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  EnrichmentJobSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  EnrichmentJobStatus m_status{EnrichmentJobStatus::NOT_SET};

  Aws::String m_workspaceName;

  JobType m_jobType{JobType::NOT_SET};

  Aws::String m_datasetId;

  Aws::String m_propertyAlias;

  Aws::String m_timeSeriesId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_jobIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_jobTypeHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_propertyAliasHasBeenSet = false;
  bool m_timeSeriesIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
