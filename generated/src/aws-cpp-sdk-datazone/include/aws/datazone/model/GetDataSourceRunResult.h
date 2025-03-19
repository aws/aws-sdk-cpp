/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>
#include <aws/datazone/model/DataSourceRunLineageSummary.h>
#include <aws/datazone/model/RunStatisticsForAssets.h>
#include <aws/datazone/model/DataSourceRunStatus.h>
#include <aws/datazone/model/DataSourceRunType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class GetDataSourceRunResult
  {
  public:
    AWS_DATAZONE_API GetDataSourceRunResult() = default;
    AWS_DATAZONE_API GetDataSourceRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetDataSourceRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the data source run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetDataSourceRunResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration snapshot of the data source run.</p>
     */
    inline const Aws::String& GetDataSourceConfigurationSnapshot() const { return m_dataSourceConfigurationSnapshot; }
    template<typename DataSourceConfigurationSnapshotT = Aws::String>
    void SetDataSourceConfigurationSnapshot(DataSourceConfigurationSnapshotT&& value) { m_dataSourceConfigurationSnapshotHasBeenSet = true; m_dataSourceConfigurationSnapshot = std::forward<DataSourceConfigurationSnapshotT>(value); }
    template<typename DataSourceConfigurationSnapshotT = Aws::String>
    GetDataSourceRunResult& WithDataSourceConfigurationSnapshot(DataSourceConfigurationSnapshotT&& value) { SetDataSourceConfigurationSnapshot(std::forward<DataSourceConfigurationSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source for this data source run.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    GetDataSourceRunResult& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain in which this data source run was performed.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GetDataSourceRunResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const DataSourceErrorMessage& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = DataSourceErrorMessage>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = DataSourceErrorMessage>
    GetDataSourceRunResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source run.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetDataSourceRunResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the data lineage.</p>
     */
    inline const DataSourceRunLineageSummary& GetLineageSummary() const { return m_lineageSummary; }
    template<typename LineageSummaryT = DataSourceRunLineageSummary>
    void SetLineageSummary(LineageSummaryT&& value) { m_lineageSummaryHasBeenSet = true; m_lineageSummary = std::forward<LineageSummaryT>(value); }
    template<typename LineageSummaryT = DataSourceRunLineageSummary>
    GetDataSourceRunResult& WithLineageSummary(LineageSummaryT&& value) { SetLineageSummary(std::forward<LineageSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project in which this data source run occured.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    GetDataSourceRunResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset statistics from this data source run.</p>
     */
    inline const RunStatisticsForAssets& GetRunStatisticsForAssets() const { return m_runStatisticsForAssets; }
    template<typename RunStatisticsForAssetsT = RunStatisticsForAssets>
    void SetRunStatisticsForAssets(RunStatisticsForAssetsT&& value) { m_runStatisticsForAssetsHasBeenSet = true; m_runStatisticsForAssets = std::forward<RunStatisticsForAssetsT>(value); }
    template<typename RunStatisticsForAssetsT = RunStatisticsForAssets>
    GetDataSourceRunResult& WithRunStatisticsForAssets(RunStatisticsForAssetsT&& value) { SetRunStatisticsForAssets(std::forward<RunStatisticsForAssetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this data source run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetDataSourceRunResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this data source run.</p>
     */
    inline DataSourceRunStatus GetStatus() const { return m_status; }
    inline void SetStatus(DataSourceRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDataSourceRunResult& WithStatus(DataSourceRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this data source run stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    void SetStoppedAt(StoppedAtT&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::forward<StoppedAtT>(value); }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    GetDataSourceRunResult& WithStoppedAt(StoppedAtT&& value) { SetStoppedAt(std::forward<StoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this data source run.</p>
     */
    inline DataSourceRunType GetType() const { return m_type; }
    inline void SetType(DataSourceRunType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetDataSourceRunResult& WithType(DataSourceRunType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this data source run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetDataSourceRunResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataSourceRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSourceConfigurationSnapshot;
    bool m_dataSourceConfigurationSnapshotHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    DataSourceErrorMessage m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DataSourceRunLineageSummary m_lineageSummary;
    bool m_lineageSummaryHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    RunStatisticsForAssets m_runStatisticsForAssets;
    bool m_runStatisticsForAssetsHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    DataSourceRunStatus m_status{DataSourceRunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedAt{};
    bool m_stoppedAtHasBeenSet = false;

    DataSourceRunType m_type{DataSourceRunType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
