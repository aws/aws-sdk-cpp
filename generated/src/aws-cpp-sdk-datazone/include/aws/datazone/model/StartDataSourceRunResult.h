/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>
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
  class StartDataSourceRunResult
  {
  public:
    AWS_DATAZONE_API StartDataSourceRunResult() = default;
    AWS_DATAZONE_API StartDataSourceRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API StartDataSourceRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when data source run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    StartDataSourceRunResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration snapshot of the data source that is being run.</p>
     */
    inline const Aws::String& GetDataSourceConfigurationSnapshot() const { return m_dataSourceConfigurationSnapshot; }
    template<typename DataSourceConfigurationSnapshotT = Aws::String>
    void SetDataSourceConfigurationSnapshot(DataSourceConfigurationSnapshotT&& value) { m_dataSourceConfigurationSnapshotHasBeenSet = true; m_dataSourceConfigurationSnapshot = std::forward<DataSourceConfigurationSnapshotT>(value); }
    template<typename DataSourceConfigurationSnapshotT = Aws::String>
    StartDataSourceRunResult& WithDataSourceConfigurationSnapshot(DataSourceConfigurationSnapshotT&& value) { SetDataSourceConfigurationSnapshot(std::forward<DataSourceConfigurationSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    StartDataSourceRunResult& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    StartDataSourceRunResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
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
    StartDataSourceRunResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source run.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StartDataSourceRunResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    StartDataSourceRunResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies run statistics for assets.</p>
     */
    inline const RunStatisticsForAssets& GetRunStatisticsForAssets() const { return m_runStatisticsForAssets; }
    template<typename RunStatisticsForAssetsT = RunStatisticsForAssets>
    void SetRunStatisticsForAssets(RunStatisticsForAssetsT&& value) { m_runStatisticsForAssetsHasBeenSet = true; m_runStatisticsForAssets = std::forward<RunStatisticsForAssetsT>(value); }
    template<typename RunStatisticsForAssetsT = RunStatisticsForAssets>
    StartDataSourceRunResult& WithRunStatisticsForAssets(RunStatisticsForAssetsT&& value) { SetRunStatisticsForAssets(std::forward<RunStatisticsForAssetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    StartDataSourceRunResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data source run.</p>
     */
    inline DataSourceRunStatus GetStatus() const { return m_status; }
    inline void SetStatus(DataSourceRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartDataSourceRunResult& WithStatus(DataSourceRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source run was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    void SetStoppedAt(StoppedAtT&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::forward<StoppedAtT>(value); }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    StartDataSourceRunResult& WithStoppedAt(StoppedAtT&& value) { SetStoppedAt(std::forward<StoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source run.</p>
     */
    inline DataSourceRunType GetType() const { return m_type; }
    inline void SetType(DataSourceRunType value) { m_typeHasBeenSet = true; m_type = value; }
    inline StartDataSourceRunResult& WithType(DataSourceRunType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    StartDataSourceRunResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDataSourceRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
