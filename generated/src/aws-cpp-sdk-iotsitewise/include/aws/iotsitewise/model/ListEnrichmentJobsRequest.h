/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EnrichmentJobStatus.h>
#include <aws/iotsitewise/model/JobType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoTSiteWise {
namespace Model {

/**
 */
class ListEnrichmentJobsRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API ListEnrichmentJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEnrichmentJobs"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name of the IoT SiteWise workspace to list enrichment jobs from.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  ListEnrichmentJobsRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter jobs by dataset ID. Returns only jobs analyzing data from the
   * specified dataset.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  ListEnrichmentJobsRequest& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by property alias (human-readable sensor name). Specify either
   * propertyAlias or timeSeriesId, but not both. Returns only jobs analyzing the
   * specified property alias.</p>
   */
  inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
  inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
  template <typename PropertyAliasT = Aws::String>
  void SetPropertyAlias(PropertyAliasT&& value) {
    m_propertyAliasHasBeenSet = true;
    m_propertyAlias = std::forward<PropertyAliasT>(value);
  }
  template <typename PropertyAliasT = Aws::String>
  ListEnrichmentJobsRequest& WithPropertyAlias(PropertyAliasT&& value) {
    SetPropertyAlias(std::forward<PropertyAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by time series ID (system identifier). Specify either timeSeriesId or
   * propertyAlias, but not both. Returns only jobs analyzing the specified time
   * series.</p>
   */
  inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
  inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
  template <typename TimeSeriesIdT = Aws::String>
  void SetTimeSeriesId(TimeSeriesIdT&& value) {
    m_timeSeriesIdHasBeenSet = true;
    m_timeSeriesId = std::forward<TimeSeriesIdT>(value);
  }
  template <typename TimeSeriesIdT = Aws::String>
  ListEnrichmentJobsRequest& WithTimeSeriesId(TimeSeriesIdT&& value) {
    SetTimeSeriesId(std::forward<TimeSeriesIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by job status. Returns only jobs in the specified status. Use RUNNING
   * to find active jobs, or FAILED to identify jobs requiring attention.</p>
   */
  inline EnrichmentJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EnrichmentJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListEnrichmentJobsRequest& WithStatus(EnrichmentJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by enrichment job type. Currently only EVENT_DETECTION is supported.
   * Use this filter to future-proof queries when additional job types are added.</p>
   */
  inline JobType GetJobType() const { return m_jobType; }
  inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
  inline void SetJobType(JobType value) {
    m_jobTypeHasBeenSet = true;
    m_jobType = value;
  }
  inline ListEnrichmentJobsRequest& WithJobType(JobType value) {
    SetJobType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusive start of the date range for filtering jobs by creation time.
   * Jobs created after this timestamp are included. Use ISO 8601 format (e.g.,
   * 2024-01-01T00:00:00Z).</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  ListEnrichmentJobsRequest& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inclusive end of the date range for filtering jobs by creation time. Jobs
   * created on or before this timestamp are included. Use ISO 8601 format (e.g.,
   * 2024-01-31T23:59:59Z).</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  ListEnrichmentJobsRequest& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of jobs to return per page. Defaults to 50 if not specified.
   * Use smaller values for faster responses, larger values to reduce API calls.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListEnrichmentJobsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from a previous ListEnrichmentJobs response. Include this
   * token to retrieve the next page of results. Omit for the first request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEnrichmentJobsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_datasetId;

  Aws::String m_propertyAlias;

  Aws::String m_timeSeriesId;

  EnrichmentJobStatus m_status{EnrichmentJobStatus::NOT_SET};

  JobType m_jobType{JobType::NOT_SET};

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_workspaceNameHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_propertyAliasHasBeenSet = false;
  bool m_timeSeriesIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_jobTypeHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
